/* Decompiled from asm/overlay_01_02204004.s */
#include "global.h"

void ov01_02204004(void) {
    // str r3, [sp]
    Heap_Alloc(0x1c);
    *((u32*)(r0 + 0x10)) = 0;
    *((u32*)(r0 + 0x14)) = r6;
    // ldr r0, [sp]
    *((u32*)(r0 + 0x18)) = r5;
    *((u32*)(r0 + 4)) = 0;
    Heap_Alloc(r7, r6);
    // str r0, [r4]
    // strb r1, [r0, r2]
    // mul r6, r0
    Heap_Alloc(r7, r5, (0 + 1));
    *((u32*)(r4 + 8)) = r0;
    MIi_CpuClearFast(0, *((u32*)(r4 + 8)), r6);
    Heap_Alloc(r7, (r5 << 2));
    *((u32*)(r4 + 0xc)) = r0;
    // add r1, r0, r2
    // add r2, #0x5c
    // str r1, [r0, r3]
}



void ov01_02204084(void) {
}



void ov01_022040A4(void) {
}



void ov01_022040C0(void) {
    *((u32*)(r0 + 0x10)) = (*((u32*)(r0 + 0x10)) - 1);
    // str r1, [r2, r0]
}



void Field3dObjectList_GetRenderObjectByID(void) {
    // ldrb r2, [r2, r1]
    // ldr r0, [r1, r0]
}



void ov01_022040E4(void) {
}



void ov01_022040F8(void) {
    ov01_02204144();
    Field3dObjectList_GetRenderObjectByID(r5, r4);
    ov01_022040E4(r5, r4);
}



void ov01_0220411C(void) {
    ov01_02204144(0, *((u32*)(r1 + 0x58)));
    ov01_022040C0(r5, r4);
}



void ov01_02204144(void) {
    // ldrb r0, [r0, r1]
}



void ov01_02204154(void) {
    // ldr r0, [r2, r0]
}



void ov01_02204168(void) {
    NNS_G3dGetMdlSet(*((u32*)r1));
    // add r2, #8
    // add r1, r2, r1
    // add r2, r0, r1
    // ldr r0, [r1, r0]
    *((u32*)((*((u32*)(r5 + 0x10)) << 2) + 0x54)) = 0;
    // ldr r0, [r1, r0]
    NNS_G3dRenderObjInit((*((u32*)(r5 + 0x10)) << 2), *((u32*)((*((u32*)(r5 + 0x10)) << 2) + 0x54)), 0);
    // ldr r0, [r2, r0]
    *((u32*)(r5 + 0x10)) = (*((u32*)(r5 + 0x10)) + 1);
    *((u32*)((*((u32*)(r5 + 0x10)) << 2) + 0x58)) = r4;
}



void ov01_022041C4(void) {
}



void ov01_022041D8(void) {
    // str r0, [sp]
    Heap_Alloc(r1, 0x24);
    *((u16*)(r0 + 0x22)) = 0;
    *((u16*)(r0 + 0x20)) = r7;
    *((u32*)(r0 + 0x1c)) = 0;
    HeapExp_FndInitAllocator(r5, 4);
    Heap_Alloc(r5, (r7 << 5));
    *((u32*)(r4 + 0x10)) = r0;
    MIi_CpuClearFast(0, *((u32*)(r4 + 0x10)), r6);
    Heap_Alloc(r5, (r7 << 2));
    *((u32*)(r4 + 0x14)) = r0;
    // add r0, r0, r5
    *((u32*)(*((u32*)(r4 + 0x10)) + 0x14)) = 0;
    // add r0, r0, r5
    *((u32*)(*((u32*)(r4 + 0x10)) + 4)) = 0;
    // str r2, [r0, r5]
    // add r1, r0, r5
    // add r5, #0x20
    // str r1, [r0, r6]
    *((u32*)(r4 + 0x18)) = 0;
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(0 + 4)) + 4)) = r4;
    *((u32*)(*((u32*)(0 + 4)) + 8)) = r4;
    // str r4, [r0]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)(0 + 4)) + 8)) + 0x18)) = r4;
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)(0 + 4)) + 8)) + 8)) = r4;
    // ldr r0, [sp]
    // ldr r0, [sp]
    *((u32*)(*((u32*)(*((u32*)(*((u32*)(0 + 4)) + 8)) + 0xc)) + 0xc)) = (*((u32*)(*((u32*)(*((u32*)(0 + 4)) + 8)) + 0xc)) + 1);
}



void ov01_02204278(void) {
    // str r0, [sp]
    Heap_Free(r0);
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r6, r0, r5
    ov01_02204500(r4, r6);
    ov01_0220431C(r4, r6);
    // add r5, #0x20
    Heap_Free(*((u32*)(r4 + 0x10)));
    Heap_Free(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    Heap_Free((r0 + 1), *((u32*)((r0 + 1) + 0xc)));
}



void ov01_022042FC(void) {
}



void ov01_0220431C(void) {
    GF_AssertFail(*((u16*)(r0 + 0x22)));
    *((u16*)(r5 + 0x22)) = (r0 - 1);
    Heap_Free(*((u32*)(r4 + 4)));
    // str r0, [r4]
    *((u32*)(r4 + 0x14)) = 0;
    // str r4, [r1, r0]
}



void ov01_0220434C(void) {
    // ldrh r0, [r0, #0x22]
    // bx lr
    // TODO: decompile
}



void ov01_02204350(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r4, r0, r5
    ov01_02204594(r4);
    // mvn r0, r0
    ov01_022045DC(r4, *((u32*)(r4 + 8)));
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x18)) = (*((u32*)(r4 + 0x18)) + 1);
    // add r5, #0x20
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #4]
}



void ov01_022043D8(void) {
    // add r2, r2, r6
    *((u32*)(*((u32*)(*((u32*)(r0 + 4)) + 0x10)) + 0xc)) = 1;
    // add r6, #0x20
}



void ov01_02204424(void) {
    // str r0, [sp]
    // add r0, r0, r5
    ov01_022044E0(*((u32*)(*((u32*)(r0 + 4)) + 0x10)), *((u32*)(*((u32*)(*((u32*)(r0 + 4)) + 0x10)) + 0x1c)));
    // add r5, #0x20
    // ldr r0, [sp]
}



void ov01_02204470(void) {
    // str r0, [sp]
    NNS_G3dGetAnmByIdx(r2, 0);
    GF_AssertFail();
    // ldr r0, [sp]
    NNS_G3dAllocAnmObj(r7, r6);
    // str r0, [r5]
    GF_AssertFail();
    // ldr r3, [sp, #0x18]
    NNS_G3dAnmObjInit(*((u32*)r5), r7, r6);
    *((u32*)(r5 + 4)) = r4;
}



void ov01_022044B0(void) {
    // blx r6
    *((u32*)(r1 + 4)) = r2;
}



void ov01_022044C4(void) {
}



void ov01_022044C8(void) {
}



void ov01_022044E0(void) {
    // str r1, [r0]
    // sub r0, r1, r0
    // str r0, [r2]
}



void ov01_02204500(void) {
}



void ov01_0220450C(void) {
}



void ov01_02204518(void) {
    NNS_G3dRenderObjRemoveAnmObj(0, *((u32*)r1), *((u32*)(0 + 0x18)));
}



void ov01_02204554(void) {
    // ldr r0, [r0, #8]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // bx lr
    // TODO: decompile
}



void ov01_0220455C(void) {
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
    // sub r0, r1, r0
    // str r0, [r2]
    // str r1, [r0]
}



void ov01_02204590(void) {
}



void ov01_02204594(void) {
    // add r1, r2, r1
    // str r1, [r3]
    // str r0, [r2]
    // sub r1, r2, r1
    // str r1, [r0]
    // sub r1, r2, r1
    // str r1, [r0]
}



void ov01_022045DC(void) {
    // sub r0, r1, r0
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
}



void ov01_0220463C(void) {
    ov01_022042FC(*((u32*)r0));
    GF_AssertFail();
    // mvn r1, r1
    ov01_022044C8(r4, 0, 0, 0);
    AllocAndReadWholeNarcMemberByIdPair(0x8c, r6, 4);
    ov01_022044B0(*((u32*)r5), r4, r0, 0);
    *((u32*)(r5 + 4)) = r4;
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
}



void ov01_022046A4(void) {
}



void ov01_022046C8(void) {
    // add r0, #0x1c
    // bic r0, r1
}



void ov01_022046D4(void) {
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
}



void ov01_02204764(void) {
}



void ov01_0220476C(void) {
    // mul r0, r1
    // add r0, r5, r0
    GF_AssertFail(*((u32*)(0x1c + 8)), *((u32*)(r0 + 4)));
    GF_AssertFail();
    // add r1, #8
    // mul r0, r2
    // add r2, r1, r0
    // str r3, [r1, r0]
    *((u32*)(*((u32*)(r5 + 4)) + 4)) = r6;
    *((u32*)(*((u32*)(r5 + 4)) + 4)) = 4;
    // ldr r3, [r4, r1]
    // add r1, r2, r1
    *((u32*)((0 << 2) + 8)) = 1;
    *((u32*)(*((u32*)(r5 + 4)) + 0x18)) = r7;
    *((u32*)(r5 + 4)) = (*((u32*)(r5 + 4)) + 1);
    GF_AssertFail((*((u32*)(r5 + 4)) + 1), *((u32*)(*((u32*)(r5 + 4)) + 4)), *((u32*)(r5 + 4)), 1);
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


