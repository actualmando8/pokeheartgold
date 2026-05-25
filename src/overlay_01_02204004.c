/* Decompiled from asm/overlay_01_02204004.s */
#include "global.h"

void ov01_02204004(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // mov r1, #0x1c
    // add r7, r0, #0
    // add r5, r2, #0
    // str r3, [sp]
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [r4, #0x10]
    // str r6, [r4, #0x14]
    // ldr r0, [sp]
    // str r5, [r4, #0x18]
    // str r0, [r4, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // bl Heap_Alloc
    // mov r2, #0
    // str r0, [r4]
    // cmp r6, #0
    // ble _0220403E
    // mov r1, #0xff
    // ldr r0, [r4]
    // strb r1, [r0, r2]
    // add r2, r2, #1
    // cmp r2, r6
    // blt _02204034
    // mov r0, #0x5c
    // add r6, r5, #0
    // mul r6, r0
    // add r0, r7, #0
    // add r1, r6, #0
    // bl Heap_Alloc
    // str r0, [r4, #8]
    // ldr r1, [r4, #8]
    // mov r0, #0
    // add r2, r6, #0
    // bl MIi_CpuClearFast
    // add r0, r7, #0
    // lsl r1, r5, #2
    // bl Heap_Alloc
    // mov r6, #0
    // str r0, [r4, #0xc]
    // cmp r5, #0
    // ble _0220407E
    // add r2, r6, #0
    // add r3, r6, #0
    // ldr r0, [r4, #8]
    // add r6, r6, #1
    // add r1, r0, r2
    // ldr r0, [r4, #0xc]
    // add r2, #0x5c
    // str r1, [r0, r3]
    // add r3, r3, #4
    // cmp r6, r5
    // blt _0220406C
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_02204084(void) {
    Heap_Free();
    Heap_Free(*((u32*)(r4 + 8)));
    Heap_Free(*((u32*)(r4 + 0xc)));
    Heap_Free(r4);
}


void ov01_022040A4(void) {
    ov01_02204168();
}


void ov01_022040C0(void) {
    // ldr r2, [r0, #0x10]
    // sub r3, r2, #1
    // str r3, [r0, #0x10]
    // ldr r2, [r0, #0xc]
    // lsl r0, r3, #2
    // str r1, [r2, r0]
    // bx lr
    // TODO: decompile
}


void Field3dObjectList_GetRenderObjectByID(void) {
    // ldr r2, [r0]
    // ldrb r2, [r2, r1]
    // cmp r2, #0xff
    // beq _022040E0
    // ldr r1, [r0, #0xc]
    // lsl r0, r2, #2
    // ldr r0, [r1, r0]
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_022040E4(void) {
    ov01_02204168();
}


void ov01_022040F8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_02204144
    // cmp r0, #0
    // beq _02204110
    // add r0, r5, #0
    // add r1, r4, #0
    // bl Field3dObjectList_GetRenderObjectByID
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_022040E4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_0220411C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bne _02204128
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // ldr r1, [r4, #0x58]
    // bl ov01_02204144
    // cmp r0, #0
    // bne _0220413E
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_022040C0
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_02204144(void) {
    // ldr r0, [r0]
    // ldrb r0, [r0, r1]
    // cmp r0, #0xff
    // beq _02204150
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_02204154(void) {
    // ldr r2, [r0, #4]
    // lsl r0, r1, #2
    // ldr r0, [r2, r0]
    // cmp r0, #0
    // beq _02204162
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_02204168(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r1]
    // add r4, r2, #0
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _02204198
    // add r2, r0, #0
    // add r2, #8
    // beq _0220418C
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _0220418C
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _0220418E
    // mov r1, #0
    // cmp r1, #0
    // beq _02204198
    // ldr r1, [r1]
    // add r2, r0, r1
    // b _0220419A
    // mov r2, #0
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // str r2, [r0, #0x54]
    // ldr r0, [r5, #0x10]
    // ldr r1, [r5, #0xc]
    // lsl r0, r0, #2
    // ldr r0, [r1, r0]
    // ldr r1, [r0, #0x54]
    // bl NNS_G3dRenderObjInit
    // ldr r1, [r5, #0x10]
    // ldr r2, [r5, #0xc]
    // lsl r0, r1, #2
    // ldr r0, [r2, r0]
    // add r1, r1, #1
    // str r1, [r5, #0x10]
    // str r4, [r0, #0x58]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_022041C4(void) {
    Heap_Alloc(0, 0x10);
}


void ov01_022041D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x24
    // add r7, r2, #0
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // strh r1, [r4, #0x22]
    // strh r7, [r4, #0x20]
    // str r1, [r4, #0x1c]
    // add r1, r5, #0
    // mov r2, #4
    // bl HeapExp_FndInitAllocator
    // lsl r6, r7, #5
    // add r0, r5, #0
    // add r1, r6, #0
    // bl Heap_Alloc
    // str r0, [r4, #0x10]
    // ldr r1, [r4, #0x10]
    // mov r0, #0
    // add r2, r6, #0
    // bl MIi_CpuClearFast
    // add r0, r5, #0
    // lsl r1, r7, #2
    // bl Heap_Alloc
    // mov r3, #0
    // str r0, [r4, #0x14]
    // cmp r7, #0
    // ble _02204248
    // add r5, r3, #0
    // add r6, r3, #0
    // add r2, r3, #0
    // ldr r0, [r4, #0x10]
    // add r3, r3, #1
    // add r0, r0, r5
    // str r2, [r0, #0x14]
    // ldr r0, [r4, #0x10]
    // add r0, r0, r5
    // str r2, [r0, #4]
    // ldr r0, [r4, #0x10]
    // str r2, [r0, r5]
    // ldr r0, [r4, #0x10]
    // add r1, r0, r5
    // ldr r0, [r4, #0x14]
    // add r5, #0x20
    // str r1, [r0, r6]
    // add r6, r6, #4
    // cmp r3, r7
    // blt _02204226
    // mov r0, #0
    // str r0, [r4, #0x18]
    // ldr r0, [sp]
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // bne _0220425E
    // ldr r0, [sp]
    // str r4, [r0, #4]
    // str r4, [r0, #8]
    // str r4, [r0]
    // b _02204268
    // ldr r0, [sp]
    // ldr r0, [r0, #8]
    // str r4, [r0, #0x18]
    // ldr r0, [sp]
    // str r4, [r0, #8]
    // ldr r0, [sp]
    // ldr r0, [r0, #0xc]
    // add r1, r0, #1
    // ldr r0, [sp]
    // str r1, [r0, #0xc]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_02204278(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // cmp r0, #0
    // beq _022042F6
    // add r1, r0, #0
    // ldr r4, [r1, #4]
    // cmp r4, #0
    // bne _02204292
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // ble _022042F0
    // ldrh r0, [r4, #0x20]
    // mov r7, #0
    // cmp r0, #0
    // ble _022042CC
    // add r5, r7, #0
    // ldr r0, [r4, #0x10]
    // add r6, r0, r5
    // ldr r0, [r6, #0x14]
    // cmp r0, #1
    // bne _022042C2
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov01_02204500
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov01_0220431C
    // ldrh r0, [r4, #0x20]
    // add r7, r7, #1
    // add r5, #0x20
    // cmp r7, r0
    // blt _022042A8
    // ldr r0, [r4, #0x10]
    // bl Heap_Free
    // ldr r0, [r4, #0x14]
    // bl Heap_Free
    // add r0, r4, #0
    // ldr r4, [r4, #0x18]
    // bl Heap_Free
    // ldr r0, [sp, #4]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [r0, #0xc]
    // ldr r0, [sp, #4]
    // cmp r0, r1
    // blt _0220429E
    // ldr r0, [sp]
    // bl Heap_Free
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_022042FC(void) {
    GF_AssertFail(0);
}


void ov01_0220431C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldrh r0, [r5, #0x22]
    // add r4, r1, #0
    // cmp r0, #0
    // bne _0220432E
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // sub r0, r0, #1
    // strh r0, [r5, #0x22]
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _0220433C
    // bl Heap_Free
    // mov r0, #0
    // str r0, [r4]
    // str r0, [r4, #0x14]
    // ldrh r0, [r5, #0x22]
    // ldr r1, [r5, #0x14]
    // lsl r0, r0, #2
    // str r4, [r1, r0]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_0220434C(void) {
    // ldrh r0, [r0, #0x22]
    // bx lr
    // TODO: decompile
}


void ov01_02204350(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // str r0, [sp]
    // cmp r0, #0
    // beq _022043D4
    // ldr r6, [r0, #4]
    // cmp r6, #0
    // beq _022043D4
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [r0, #0xc]
    // cmp r0, #0
    // ble _022043D4
    // ldrh r0, [r6, #0x20]
    // mov r7, #0
    // cmp r0, #0
    // ble _022043C2
    // add r5, r7, #0
    // ldr r0, [r6, #0x10]
    // add r4, r0, r5
    // ldr r0, [r4, #0x14]
    // cmp r0, #1
    // bne _022043B8
    // ldr r0, [r4, #0xc]
    // cmp r0, #1
    // beq _022043B8
    // ldr r0, [r4, #0x1c]
    // cmp r0, #0
    // beq _022043B8
    // add r0, r4, #0
    // bl ov01_02204594
    // mov r0, #0
    // ldr r1, [r4, #8]
    // mvn r0, r0
    // cmp r1, r0
    // beq _022043B8
    // add r0, r4, #0
    // bl ov01_022045DC
    // cmp r0, #0
    // beq _022043B8
    // ldr r0, [r4, #0x18]
    // add r1, r0, #1
    // ldr r0, [r4, #8]
    // cmp r1, r0
    // blt _022043B6
    // mov r0, #0
    // str r0, [r4, #0x1c]
    // b _022043B8
    // str r1, [r4, #0x18]
    // ldrh r0, [r6, #0x20]
    // add r7, r7, #1
    // add r5, #0x20
    // cmp r7, r0
    // blt _02204376
    // ldr r0, [sp, #4]
    // ldr r6, [r6, #0x18]
    // add r0, r0, #1
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r1, [r0, #0xc]
    // ldr r0, [sp, #4]
    // cmp r0, r1
    // blt _0220436C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_022043D8(void) {
    // push {r4, r5, r6, r7}
    // cmp r0, #0
    // beq _0220441E
    // ldr r5, [r0, #4]
    // cmp r5, #0
    // beq _0220441E
    // ldr r1, [r0, #0xc]
    // mov r3, #0
    // cmp r1, #0
    // ble _0220441E
    // mov r1, #1
    // ldrh r2, [r5, #0x20]
    // mov r4, #0
    // cmp r2, #0
    // ble _02204414
    // add r6, r4, #0
    // ldr r2, [r5, #0x10]
    // add r2, r2, r6
    // ldr r7, [r2, #0x14]
    // cmp r7, #1
    // bne _0220440A
    // ldr r7, [r2, #0x1c]
    // cmp r7, #0
    // beq _0220440A
    // str r1, [r2, #0xc]
    // ldrh r2, [r5, #0x20]
    // add r4, r4, #1
    // add r6, #0x20
    // cmp r4, r2
    // blt _022043F8
    // ldr r2, [r0, #0xc]
    // add r3, r3, #1
    // ldr r5, [r5, #0x18]
    // cmp r3, r2
    // blt _022043EE
    // pop {r4, r5, r6, r7}
    // bx lr
    // TODO: decompile
}


void ov01_02204424(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r0, [sp]
    // cmp r0, #0
    // beq _0220446E
    // ldr r4, [r0, #4]
    // cmp r4, #0
    // beq _0220446E
    // ldr r0, [r0, #0xc]
    // mov r7, #0
    // cmp r0, #0
    // ble _0220446E
    // ldrh r0, [r4, #0x20]
    // mov r6, #0
    // cmp r0, #0
    // ble _02204462
    // add r5, r6, #0
    // ldr r0, [r4, #0x10]
    // add r0, r0, r5
    // ldr r1, [r0, #0x14]
    // cmp r1, #1
    // bne _02204458
    // ldr r1, [r0, #0x1c]
    // cmp r1, #0
    // beq _02204458
    // bl ov01_022044E0
    // ldrh r0, [r4, #0x20]
    // add r6, r6, #1
    // add r5, #0x20
    // cmp r6, r0
    // blt _02204444
    // ldr r0, [sp]
    // add r7, r7, #1
    // ldr r0, [r0, #0xc]
    // ldr r4, [r4, #0x18]
    // cmp r7, r0
    // blt _0220443A
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_02204470(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r2, #0
    // str r0, [sp]
    // add r5, r1, #0
    // add r0, r4, #0
    // mov r1, #0
    // add r6, r3, #0
    // bl NNS_G3dGetAnmByIdx
    // add r7, r0, #0
    // bne _0220448A
    // bl GF_AssertFail
    // ldr r0, [sp]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl NNS_G3dAllocAnmObj
    // str r0, [r5]
    // cmp r0, #0
    // bne _0220449E
    // bl GF_AssertFail
    // ldr r0, [r5]
    // ldr r3, [sp, #0x18]
    // add r1, r7, #0
    // add r2, r6, #0
    // bl NNS_G3dAnmObjInit
    // str r4, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_022044B0(void) {
    // push {r4, r5, r6, lr}
    // ldr r6, [r0, #0x1c]
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r6, #0
    // beq _022044C0
    // blx r6
    // str r4, [r5, #4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_022044C4(void) {
    ((u32*)r0)[0x1c] = r1;
}


void ov01_022044C8(void) {
    ((u32*)r0)[0x18] = 0;
    ((u32*)r0)[0x1c] = 1;
    ((u32*)r0)[0x14] = 1;
    ((u32*)r0)[8] = r1;
    ((u32*)r0)[0xc] = r2;
    ((u32*)r0)[0x10] = r3;
}


void ov01_022044E0(void) {
    // ldr r1, [r0, #0x10]
    // cmp r1, #0
    // bne _022044EE
    // ldr r0, [r0]
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // ldr r2, [r0]
    // ldr r0, [r2, #8]
    // ldrh r0, [r0, #4]
    // lsl r1, r0, #0xc
    // mov r0, #1
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r2]
    // bx lr
    // TODO: decompile
}


void ov01_02204500(void) {
    NNS_G3dFreeAnmObj();
}


void ov01_0220450C(void) {
    NNS_G3dRenderObjAddAnmObj();
}


void ov01_02204518(void) {
    // push {r3, lr}
    // cmp r1, #0
    // bne _02204522
    // mov r0, #0
    // pop {r3, pc}
    // ldr r1, [r1]
    // cmp r1, #0
    // bne _0220452C
    // mov r0, #0
    // pop {r3, pc}
    // cmp r0, #0
    // bne _02204534
    // mov r0, #0
    // pop {r3, pc}
    // ldr r2, [r0, #8]
    // cmp r2, #0
    // bne _0220454A
    // ldr r2, [r0, #0x10]
    // cmp r2, #0
    // bne _0220454A
    // ldr r2, [r0, #0x18]
    // cmp r2, #0
    // bne _0220454A
    // mov r0, #0
    // pop {r3, pc}
    // bl NNS_G3dRenderObjRemoveAnmObj
    // mov r0, #1
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_02204554(void) {
    // ldr r0, [r0, #8]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}


void ov01_0220455C(void) {
    ((u32*)r0)[0xc] = r1;
}


void ov01_02204560(void) {
    // ldr r0, [r0, #0x1c]
    // cmp r0, #0
    // bne _0220456A
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_02204570(void) {
    // ldr r1, [r0, #0x10]
    // cmp r1, #0
    // bne _02204588
    // ldr r2, [r0]
    // ldr r0, [r2, #8]
    // ldrh r0, [r0, #4]
    // lsl r1, r0, #0xc
    // mov r0, #1
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // str r0, [r2]
    // bx lr
    // ldr r0, [r0]
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_02204590(void) {
    ((u32*)r0)[8] = r1;
}


void ov01_02204594(void) {
    // ldr r1, [r0, #0x10]
    // cmp r1, #0
    // bne _022045BA
    // ldr r3, [r0]
    // mov r1, #1
    // ldr r2, [r3]
    // lsl r1, r1, #0xc
    // add r1, r2, r1
    // str r1, [r3]
    // ldr r2, [r0]
    // ldr r0, [r2, #8]
    // ldr r1, [r2]
    // ldrh r0, [r0, #4]
    // lsl r0, r0, #0xc
    // cmp r1, r0
    // bne _022045DA
    // mov r0, #0
    // str r0, [r2]
    // bx lr
    // ldr r0, [r0]
    // ldr r2, [r0]
    // cmp r2, #0
    // bgt _022045D2
    // ldr r1, [r0, #8]
    // ldrh r1, [r1, #4]
    // lsl r2, r1, #0xc
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r1, r2, r1
    // str r1, [r0]
    // bx lr
    // mov r1, #1
    // lsl r1, r1, #0xc
    // sub r1, r2, r1
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_022045DC(void) {
    // ldr r1, [r0, #0x10]
    // ldr r0, [r0]
    // cmp r1, #0
    // bne _022045FE
    // ldr r2, [r0]
    // ldr r0, [r0, #8]
    // ldrh r0, [r0, #4]
    // lsl r1, r0, #0xc
    // mov r0, #1
    // lsl r0, r0, #0xc
    // sub r0, r1, r0
    // cmp r2, r0
    // blt _022045FA
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02204608
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_0220460C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #4
    // mov r1, #8
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov01_022041D8
    // ldr r1, _02204630 ; =ov01_022046A4
    // str r0, [r4]
    // bl ov01_022044C4
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02204630: .word ov01_022046A4
    // TODO: decompile
}


void ov01_02204634(void) {
    Heap_Free();
}


void ov01_0220463C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r6, r1, #0
    // bl ov01_022042FC
    // add r4, r0, #0
    // bne _02204650
    // bl GF_AssertFail
    // mov r1, #0
    // mov r2, #0
    // add r0, r4, #0
    // mvn r1, r1
    // add r3, r2, #0
    // bl ov01_022044C8
    // mov r0, #0x8c
    // add r1, r6, #0
    // mov r2, #4
    // bl AllocAndReadWholeNarcMemberByIdPair
    // add r2, r0, #0
    // ldr r0, [r5]
    // add r1, r4, #0
    // mov r3, #0
    // bl ov01_022044B0
    // str r4, [r5, #4]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_02204678(void) {
    // ldr r3, _02204684 ; =ov01_0220450C
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #4]
    // bx r3
    // nop
    // _02204684: .word ov01_0220450C
    // TODO: decompile
}


void ov01_02204688(void) {
    // ldr r3, _02204694 ; =ov01_02204518
    // add r2, r0, #0
    // add r0, r1, #0
    // ldr r1, [r2, #4]
    // bx r3
    // nop
    // _02204694: .word ov01_02204518
    // TODO: decompile
}


void ov01_02204698(void) {
    ov01_0220434C();
}


void ov01_022046A4(void) {
    NNS_G3dGetAnmByIdx(r2, 0);
    ov01_022046D4(r6, r0);
    ov01_02204728(r4);
}


void ov01_022046C8(void) {
    // ldrb r0, [r0, #9]
    // mov r1, #3
    // lsl r0, r0, #1
    // add r0, #0x1c
    // bic r0, r1
    // bx lr
    // TODO: decompile
}


void ov01_022046D4(void) {
    ov01_022046C8(r1);
    NNS_FndAllocFromAllocator(r4, r0);
}


void ov01_022046E8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02204724 ; =_02110A0C
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r1, r5, #0
    // str r0, [r5, #0xc]
    // ldrb r2, [r4, #9]
    // mov r0, #0
    // add r1, #0x1a
    // strb r2, [r5, #0x19]
    // lsl r2, r2, #1
    // bl MIi_CpuClear16
    // ldrb r0, [r4, #9]
    // mov r2, #0
    // cmp r0, #0
    // bls _02204720
    // mov r0, #1
    // lsl r0, r0, #8
    // add r1, r2, #0
    // orr r1, r0
    // strh r1, [r5, #0x1a]
    // ldrb r1, [r4, #9]
    // add r2, r2, #1
    // add r5, r5, #2
    // cmp r2, r1
    // blo _02204710
    // pop {r3, r4, r5, pc}
    // nop
    // _02204724: .word _02110A0C
    // TODO: decompile
}


void ov01_02204728(void) {
    // mov r3, #0
    // str r3, [r0]
    // str r1, [r0, #8]
    // str r3, [r0, #0x10]
    // mov r2, #0x7f
    // strb r2, [r0, #0x18]
    // mov r2, #1
    // lsl r2, r2, #0xc
    // str r2, [r0, #4]
    // str r3, [r0, #0x14]
    // ldr r3, _02204740 ; =ov01_022046E8
    // bx r3
    // _02204740: .word ov01_022046E8
    // TODO: decompile
}


void ov01_02204744(void) {
    Heap_Alloc(0x78);
    MIi_CpuClearFast(0, r0, 0x78);
    GF_RTC_GetTimeOfDay();
}


void ov01_02204764(void) {
    Heap_Free();
}


void ov01_0220476C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // ldr r1, [r5, #4]
    // add r4, r2, #0
    // add r6, r3, #0
    // cmp r1, #4
    // bge _022047D4
    // mov r0, #0x1c
    // mul r0, r1
    // add r0, r5, r0
    // ldr r0, [r0, #8]
    // cmp r0, #0
    // beq _0220478C
    // bl GF_AssertFail
    // cmp r6, #4
    // ble _02204794
    // bl GF_AssertFail
    // ldr r2, [r5, #4]
    // add r1, r5, #0
    // mov r0, #0x1c
    // add r1, #8
    // mul r0, r2
    // mov r3, #1
    // add r2, r1, r0
    // str r3, [r1, r0]
    // str r6, [r2, #4]
    // cmp r6, #4
    // ble _022047AE
    // mov r0, #4
    // str r0, [r2, #4]
    // ldr r1, [r2, #4]
    // mov r0, #0
    // cmp r1, #0
    // ble _022047CA
    // lsl r1, r0, #2
    // ldr r3, [r4, r1]
    // add r1, r2, r1
    // add r0, r0, #1
    // str r3, [r1, #8]
    // lsl r0, r0, #0x18
    // ldr r1, [r2, #4]
    // lsr r0, r0, #0x18
    // cmp r0, r1
    // blt _022047B6
    // str r7, [r2, #0x18]
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_022047DC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl GF_RTC_GetTimeOfDay
    // lsl r0, r0, #0x18
    // lsr r7, r0, #0x18
    // ldr r0, [r5]
    // cmp r0, r7
    // beq _0220482E
    // lsl r0, r0, #0x18
    // add r4, r5, #0
    // lsr r0, r0, #0x18
    // str r7, [r5]
    // mov r6, #0
    // add r4, #8
    // str r0, [sp]
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _02204824
    // ldr r2, _02204830 ; =ov01_022095EC
    // ldr r1, [sp]
    // ldr r0, [r4, #0x18]
    // ldrb r1, [r2, r1]
    // lsl r1, r1, #2
    // add r1, r1, r4
    // ldr r1, [r1, #8]
    // bl ov01_02204518
    // ldr r1, _02204830 ; =ov01_022095EC
    // ldr r0, [r4, #0x18]
    // ldrb r1, [r1, r7]
    // lsl r1, r1, #2
    // add r1, r1, r4
    // ldr r1, [r1, #8]
    // bl ov01_0220450C
    // add r6, r6, #1
    // add r5, #0x1c
    // add r4, #0x1c
    // cmp r6, #4
    // blt _022047FC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02204830: .word ov01_022095EC
    // TODO: decompile
}


void ov01_02204834(void) {
    // ldr r1, [r0]
    // ldr r0, _0220483C ; =ov01_022095EC
    // ldrb r0, [r0, r1]
    // bx lr
    // _0220483C: .word ov01_022095EC
    // TODO: decompile
}

