/* Decompiled from asm/overlay_102.s */
#include "global.h"

BOOL EasyChat_Init(void) {
    // str r0, [r4]
    // add r4, #0x6a
    // strb r0, [r4]
}




BOOL EasyChat_Main(void) {
    OverlayManager_GetData();
    *((u16*)(r0 + 0x30)) = *((u32*)(gSystem + 0x48));
    *((u16*)(r0 + 0x32)) = *((u32*)(gSystem + 0x44));
    *((u16*)(r0 + 0x34)) = *((u32*)(gSystem + 0x4c));
    TouchHitboxController_IsTriggered(*((u32*)(r0 + 0x40)), *((u32*)(gSystem + 0x44)));
    // add r4, #0x28
    // blx r2
    // add r1, #0x1c
    // blx r2
}




void ov102_021E77F8(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E780C: ; jump table
}




u32 EasyChat_Exit(void) {
}




void ov102_021E7888(void) {
    OverlayManager_CreateAndGetData(0x7c, 0x22);
    MI_CpuFill8(0, 0x7c);
    OverlayManager_GetArgs(r5);
    // str r0, [r4]
    sub_02090D70();
    *((u32*)(r4 + 4)) = r0;
    sub_02090E44(*((u32*)r4));
    *((u32*)(r4 + 0x74)) = r0;
    // add r1, #0x10
    // add r2, #8
    sub_02090D8C(*((u32*)r4), r4, r4);
    // add r0, #0x64
    // add r1, #8
    ov102_021E7934(r4, r4);
    sub_02091880(0x22, *((u32*)r4));
    *((u32*)(r4 + 0x18)) = r0;
    ov102_021E909C(r4, *((u32*)(r4 + 0x18)));
    *((u32*)(r4 + 0x14)) = r0;
    // str r0, [sp]
    TouchHitboxController_Create(ov102_021EC648, 5, ov102_021E77F8, r4);
    *((u32*)(r4 + 0x40)) = r0;
    *((u32*)(r4 + 0x44)) = 0;
    *((u32*)(r4 + 0x48)) = 0;
    // add r0, #0x6b
    // strb r1, [r0]
    *((u32*)(r4 + 0x2c)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
    // add r0, #0x4e
    // strh r1, [r0]
    ov102_021E7A4C(r4, ov102_021E7AA4);
    ov102_021E8D50(r4, ov102_021E8D60);
}




void ov102_021E7934(void) {
    // strh r0, [r5]
    // ldrsb r3, [r4, r0]
    // ldrsb r2, [r5, r1]
    // add r2, r3, r2
    // strb r2, [r4]
}




void ov102_021E7968(void) {
    // ldrsb r3, [r2, r0]
    *((u8*)(r0 + 2)) = (r3 + 1);
    // ldrsb r3, [r2, r0]
    // ldrsb r0, [r2, r0]
    *((u8*)(r0 + 2)) = 0;
    // ldrsh r0, [r2, r3]
    // strh r0, [r2]
    // ldrsh r0, [r2, r3]
    // strh r3, [r2]
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r2, r3]
}




void ov102_021E79A0(void) {
    // ldrsb r3, [r2, r0]
    *((u8*)(r0 + 2)) = (r3 - 1);
    // ldrsb r0, [r2, r0]
    // ldrsh r3, [r2, r0]
    // strh r3, [r2]
    // ldrsh r0, [r2, r0]
    // strh r0, [r2]
    // ldrsb r0, [r2, r0]
    *((u8*)(r0 + 2)) = (3 - 1);
    // ldrsh r1, [r2, r1]
    // ldrsb r2, [r2, r3]
}




void ov102_021E79DC(void) {
    // ldrsb r1, [r5, r1]
    // ldrsb r1, [r5, r1]
    // strh r0, [r5]
    // ldrsh r1, [r5, r1]
    // ldrsb r2, [r5, r2]
}




void ov102_021E7A0C(void) {
    // ldrsb r3, [r0, r1]
    // ldrsh r2, [r0, r1]
    // ldrsb r0, [r0, r1]
    // add r0, r3, r0
}




void ov102_021E7A24(void) {
}




void ov102_021E7A4C(void) {
}




void ov102_021E7A58(void) {
    System_GetTouchHeld(*((u32*)(r0 + 0x74)));
    *((u32*)(r4 + 0x38)) = 4;
    *((u32*)(r4 + 0x74)) = 0;
    System_GetTouchHeld(0);
    *((u32*)(r4 + 0x74)) = 1;
}




void ov102_021E7AA4(void) {
    // blx r2
}




void ov102_021E7AB8(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7ACC: ; jump table
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    // add r0, #0x50
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 9);
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
}




void ov102_021E7B18(void) {
    // tst r3, r1
    // add r0, #0x4c
    // strh r1, [r0]
    // tst r3, r1
    // add r4, #0x4c
    // tst r3, r2
    // add r4, #0x4c
    // strh r1, [r4]
    // tst r3, r2
    // add r1, #0x4c
    // add r1, #0x4c
    // add r4, #0x4c
    // strh r1, [r4]
    // tst r3, r2
    // add r1, #0x4c
    // add r1, #0x4c
    // add r4, #0x4c
    // strh r1, [r4]
    // tst r2, r3
    // add r2, #0x4e
    // add r4, #0x4e
    // eor r1, r2
    // strh r1, [r4]
}




void ov102_021E7BD8(void) {
    // ldr r3, _021E7BE0 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021E7BE4 ; =ov102_021EC610
    // bx r3
    // nop
    // _021E7BE0: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021E7BE4: .word ov102_021EC610
    // TODO: decompile
}




void ov102_021E7BE8(void) {
    // ldr r3, _021E7BF0 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _021E7BF4 ; =ov102_021EC620
    // bx r3
    // nop
    // _021E7BF0: .word TouchscreenHitbox_FindRectAtTouchNew
    // _021E7BF4: .word ov102_021EC620
    // TODO: decompile
}




void ov102_021E7BF8(void) {
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E7C1C: ; jump table
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, #0x4c
    // strh r1, [r0]
    // add r1, #0x50
    // strh r2, [r1]
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, #0x4c
    // strh r2, [r0]
}




void ov102_021E7C84(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E7C9C: ; jump table
    ov102_021E9464(*((u32*)(r0 + 0x14)), (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    ov102_021E7B18(r5);
    // str r0, [r4]
    ov102_021E7BF8(r5);
    // str r0, [r4]
    // str r1, [r4]
    ov102_021E8D50(ov102_021E8D94);
    // str r1, [r4]
    ov102_021E8D50(ov102_021E8E84);
    // str r0, [r4]
    ov102_021E9464(*((u32*)(r5 + 0x14)));
    ov102_021E7A4C(r5, ov102_021E8240);
}




void ov102_021E7D0C(void) {
}




void ov102_021E7D30(void) {
    // add r0, r1, r1
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E7D44: ; jump table
    PlaySE(0x000005DC);
    PlaySE(0x000005DC);
    ov102_021EA238(*((u32*)(r4 + 0x14)));
    PlaySE(0x000005DC);
    // add r0, #0x50
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 9);
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
    PlaySE(0x000005DC);
    // add r0, #0x4e
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 3);
}




void ov102_021E7DBC(void) {
    // tst r3, r1
    // add r0, #0x4c
    // strh r1, [r0]
    // tst r3, r1
    // add r4, #0x4c
    // tst r3, r2
    // add r1, #0x4c
    // add r1, #0x4c
    // add r4, #0x4c
    // strh r1, [r4]
    // add r1, #0x6a
    // add r1, #0x4e
    // add r1, #0x4e
    // add r4, #0x4e
    // strh r1, [r4]
    // tst r2, r3
    // add r2, #0x4c
    // add r1, #0x6a
    // add r1, #0x4e
    // add r1, #0x4e
    // add r4, #0x4e
    // strh r1, [r4]
    // add r0, #0x4c
    // add r0, #0x4c
    // strh r1, [r0]
    // add r1, #0x4c
    // add r4, #0x4c
    // strh r1, [r4]
    // tst r0, r2
    // add r0, #0x64
    // add r1, #8
    // tst r0, r2
    // add r0, #0x64
    // add r1, #8
}




void ov102_021E7EEC(void) {
    System_GetTouchHeld();
    // sub r1, #0xa
    // add r2, #0xa
    // sub r0, #0xc
    // add r1, #0xc
}




void ov102_021E7F30(void) {
    System_GetTouchHeld();
    // sub r0, #0x18
    // add r1, #0x18
}




void ov102_021E7F6C(void) {
    ov102_021EA228(*((u32*)(r0 + 0x14)));
    // add r1, sp, #0
    // add r1, #2
    // add r2, sp, #0
    Sprite_GetPositionXY();
    // add r0, #0x6c
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ov102_021E7F30(r5, 2, 0);
    // add r5, #0x6c
    // strb r0, [r5]
    // ldrsh r4, [r1, r0]
    // ldrsh r0, [r5, r0]
    // sub r0, r4, r0
    // bpl _021E7FCC
    // neg r0, r0
    // mvn r0, r0
    // add r3, sp, #0
    // ldrsh r2, [r3, r2]
    Sprite_SetPositionXY(r6, 0xe2, 0);
    // add r0, #0x6e
    // strh r4, [r0]
    // sub r4, #0x1c
    // add r2, r4, r2
    // add r0, #0x4e
    // strh r1, [r0]
    // add r0, #0x64
    // add r1, #8
    ov102_021E79DC(r5, r5, (((r4 >> 0x1f) << 0x17) >> 0x18));
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 3);
    // mvn r0, r0
    System_GetTouchNew(0);
    // mvn r0, r0
    // add r3, sp, #0
    // ldrsh r1, [r3, r1]
    // ldrsh r2, [r3, r2]
    ov102_021E7EEC(r5, 2, 0);
    // add r0, #0x6e
    // strh r1, [r0]
    // add r5, #0x6c
    // strb r0, [r5]
    PlaySE(0x000005DC, *((u16*)(gSystem + 0x20)));
    TouchscreenHitbox_FindRectAtTouchNew(ov102_021EC634);
    // mvn r1, r1
    ov102_021EA238(*((u32*)(r5 + 0x14)), 0);
    // add r7, sp, #4
    ov102_021EA248(*((u32*)(r5 + 0x14)), r7, ((0 << 0x18) >> 0x18));
    TouchscreenHitbox_PointIsIn(r7, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // mvn r0, r0
}




void ov102_021E80BC(void) {
    ov102_021E7F6C();
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E80D6: ; jump table
    PlaySE(0x000005DC);
    // add r0, #0x4c
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
    // add r4, #0x4c
    ov102_021E7D30(r4, *((u16*)r4));
    // add r0, #0x4c
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
    // add r0, #0x64
    // add r1, #8
    ov102_021E79A0(r4, r4);
    // add r0, #0x64
    // add r1, #8
    ov102_021E7968(r4, r4);
    ov102_021E7D30(r4, 4);
    // add r0, #0x4c
    // strh r1, [r0]
    // add r0, #0x4e
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
    ov102_021E7D30(r4, 0);
    // add r0, #0x4c
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xf);
}




void ov102_021E8178(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8190: ; jump table
    ov102_021EA238(*((u32*)(r0 + 0x14)), (*((u16*)(*((u32*)r1) + 6)) << 0x10));
    // add r1, #0x6a
    // strb r0, [r1]
    // str r0, [r4]
    ov102_021E7DBC(r5, r5);
    // str r0, [r4]
    ov102_021E80BC(r5);
    // str r0, [r4]
    ov102_021E947C(*((u32*)(r5 + 0x14)), 3);
    // str r0, [r4]
    // str r1, [r4]
    ov102_021E8D50(0, ov102_021E8D94);
    // str r1, [r4]
    ov102_021E8D50(ov102_021E8E84);
    // str r0, [r4]
    ov102_021E9464(*((u32*)(r5 + 0x14)));
    ov102_021E7A4C(r5, ov102_021E8240);
}




void ov102_021E821C(void) {
}




void ov102_021E8240(void) {
    // str r0, [r4]
}




void ov102_021E8294(void) {
    // add r0, #0x6b
    // add r0, #0x6b
    // tst r1, r0
    PlaySE(0x000005E4, 4);
    *((u32*)(r5 + 0x38)) = 4;
    // add r0, #0x6b
    // eor r1, r0
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, #0x50
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x1b);
    // str r0, [r4]
    // tst r1, r0
    PlaySE(0x000005DC, 2);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xa);
    *((u32*)(r5 + 0x24)) = ov102_021E7AA4;
    // str r0, [r4]
    // tst r0, r1
    // add r0, #0x50
    PlaySE(0x000005DC, 1, *((u16*)r5));
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xa);
    *((u32*)(r5 + 0x24)) = ov102_021E7AA4;
    // str r0, [r4]
    // add r1, #0x6b
    ov102_021E85A8(*((u32*)(r5 + 0x18)), *((u8*)r5));
    PlaySE(0x000005DC);
    // add r0, #0x54
    ov102_021E874C(r5, r5);
    *((u32*)(r5 + 0x24)) = ov102_021E87B4;
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xb);
    // str r0, [r4]
    PlaySE(0x000005F2);
    ov102_021E85E8(r5);
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x11);
}




void ov102_021E839C(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov102_021EC600);
    // mvn r1, r1
    // add r4, #0x6b
    // add r4, #0x6b
}




void ov102_021E83E4(void) {
    System_GetTouchNew();
    // mvn r0, r0
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r6, sp, #8
    // ldr r0, [sp]
    // strb r0, [r6]
    // add r0, #0x10
    *((u8*)(r6 + 1)) = *((u8*)r6);
    *((u8*)(r6 + 2)) = 0xc;
    // add r0, #0x48
    *((u8*)(r6 + 3)) = *((u8*)(r6 + 2));
    // add r0, sp, #8
    TouchscreenHitbox_PointIsIn(*((u8*)(r6 + 2)), *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // ldr r0, [sp, #4]
    // add r0, r0, r1
    // add r0, r4, r0
    // add r5, #0x50
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #4]
    // str r0, [sp, #4]
    // mvn r0, r0
}




void ov102_021E8458(void) {
    TouchscreenHitbox_FindRectAtTouchNew(ov102_021EC5E0);
    // mvn r1, r1
    // sub r0, #0x14
    // sub r1, #0x40
    // asr r0, r0, #0x10
    // asr r1, r1, #0x10
    ov102_021EC5A0((*((u16*)(gSystem + 0x20)) << 0x10), (*((u16*)(gSystem + 0x22)) << 0x10));
}




void ov102_021E848C(void) {
    ov102_021E839C();
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xa);
    *((u32*)(r5 + 0x24)) = ov102_021E7AA4;
    // str r0, [r4]
    PlaySE(0x000005E4);
    // add r0, #0x6b
    // eor r1, r0
    // add r0, #0x6b
    // strb r1, [r0]
    // add r0, #0x50
    // strh r1, [r0]
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x1b);
    // str r0, [r4]
    // add r0, #0x6b
    ov102_021E83E4(r5);
    // bmi _021E8568
    // add r1, #0x6b
    ov102_021E85A8(*((u32*)(r5 + 0x18)), *((u8*)r5), ((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F2);
    // add r0, #0x50
    // strh r6, [r0]
    ov102_021E8458(r5);
    // bmi _021E8568
    // add r1, #0x6b
    ov102_021E85A8(*((u32*)(r5 + 0x18)), *((u8*)r5), ((r0 << 0x10) >> 0x10));
    PlaySE(0x000005F2);
    // add r0, #0x50
    // strh r6, [r0]
    PlaySE(0x000005DC);
    // add r0, #0x54
    ov102_021E874C(r5, r5);
    *((u32*)(r5 + 0x24)) = ov102_021E87B4;
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xb);
    // str r0, [r4]
}




void ov102_021E8580(void) {
}




void ov102_021E85A8(void) {
    // add r3, r2, r3
    sub_02091C38(0, r2, ((0x0000FF02 << 0x10) >> 0x10));
    sub_02091C74(0, r2);
}




void ov102_021E85E8(void) {
    // add r1, #0x6b
    // blx r1
}




void ov102_021E8600(void) {
    // add r0, #0x50
    // add r0, #0x52
    // strh r2, [r0]
    // tst r2, r0
    // add r4, #0x50
    // strh r0, [r4]
    // tst r2, r0
    // add r4, #0x50
    // strh r0, [r4]
    // tst r2, r0
    // add r4, #0x50
    // strh r0, [r4]
    // tst r0, r2
    // add r4, #0x50
    // strh r0, [r4]
    // tst r0, r1
    // add r0, #0x52
    _s32_div_f(*((u16*)r0), 3, 0x10);
    // add r1, #9
    // add r4, #0x50
    // strh r1, [r4]
    // tst r0, r1
    // add r0, #0x52
    _s32_div_f(*((u16*)r4), 3);
    // add r4, #0x50
    // strh r1, [r4]
}




void ov102_021E86B8(void) {
    // add r0, #0x50
    // tst r3, r1
    // tst r3, r1
    // tst r3, r1
    // tst r1, r3
    // add r0, #0x50
    // add r0, #0x52
    // strh r1, [r0]
    // add r4, #0x50
    // strh r2, [r4]
    // tst r0, r1
    // add r0, #0x52
    // add r4, #0x50
    // strh r0, [r4]
    // tst r0, r1
    // add r0, #0x52
    // add r4, #0x50
    // strh r0, [r4]
}




void ov102_021E874C(void) {
    // strh r0, [r4]
    *((u8*)(r0 + 6)) = 0;
    *((u8*)(r0 + 7)) = 0;
    ov102_021E8FD8(r1);
    *((u16*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = 0;
    *((u16*)(r4 + 0xc)) = 0;
    *((u16*)(r4 + 0xe)) = 0x0000FFFF;
    // sub r1, #0xa
    // add r0, r1, r0
    // asr r1, r0, #1
    // and r0, r2
    // add r0, r1, r0
    *((u16*)(r4 + 2)) = 1;
    *((u16*)(r4 + 2)) = *((u16*)(r4 + 4));
}




void ov102_021E878C(void) {
    // add r0, r1, r0
}




void ov102_021E8798(void) {
}




void ov102_021E87A8(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}




void ov102_021E87AC(void) {
    // ldrh r0, [r0]
}




void ov102_021E87B0(void) {
    // ldrh r0, [r0, #2]
    // bx lr
    // TODO: decompile
}




void ov102_021E87B4(void) {
    // add r2, r2, r2
    // add r2, pc
    // asr r2, r2, #0x10
    // add pc, r2
    // _021E87CC: ; jump table
    // str r0, [r5]
    // str r0, [r5]
    // str r0, [r5]
}




void ov102_021E8820(void) {
    // add r1, #0x6b
    // add r1, #0x6b
    // tst r1, r2
    PlaySE(0x000005E4, 4, *((u16*)(r0 + 0x30)));
    *((u32*)(r5 + 0x38)) = 4;
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, #0x6b
    // eor r1, r0
    // add r0, #0x6b
    // strb r1, [r0]
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xc);
    *((u32*)(r5 + 0x24)) = ov102_021E8240;
    // str r0, [r4]
    // add r0, #0x54
    ov102_021E8C3C(r5);
    // add r0, #0x54
    ov102_021E8C64(r5);
    // add r0, #0x54
    ov102_021E8B40(r5, *((u16*)(r5 + 0x34)));
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x12);
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x13);
    // str r0, [r4]
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x13);
    // str r0, [r4]
    // tst r0, r1
    PlaySE(0x000005DC, *((u16*)(r5 + 0x30)));
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xc);
    *((u32*)(r5 + 0x24)) = ov102_021E8240;
    // str r0, [r4]
    // tst r0, r1
    // add r0, #0x60
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xc);
    *((u32*)(r5 + 0x24)) = ov102_021E8240;
    // str r0, [r4]
    PlaySE(3);
    // add r0, #0x62
    // strh r1, [r0]
    ov102_021E8CA4(r5, 0x0000FFFF);
    *((u32*)(r5 + 0x24)) = ov102_021E7AA4;
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0xd);
    // str r0, [r4]
}




void ov102_021E896C(void) {
    System_GetTouchNew();
    TouchscreenHitbox_FindRectAtTouchNew(ov102_021EC5F4);
    // add r7, #0x54
    ov102_021E8C3C(r7);
    // add r7, #0x54
    ov102_021E8C64(r7);
    // add r0, #0x54
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, sp, #0xc
    // strb r1, [r0]
    // add r1, #0x10
    *((u8*)(0x30 + 1)) = *((u8*)0x30);
    // add r0, sp, #0xc
    *((u8*)(0x30 + 2)) = 0x20;
    // add r1, #0x48
    *((u8*)(0x30 + 3)) = *((u8*)(0x30 + 2));
    // add r0, sp, #0xc
    TouchscreenHitbox_PointIsIn(0x30, *((u16*)(gSystem + 0x20)), *((u16*)(gSystem + 0x22)));
    // add r7, #0x62
    // strh r4, [r7]
    // add r0, #0x58
    // str r0, [sp, #4]
    // add r5, #0x68
    // ldr r0, [sp, #4]
    // ldr r0, [sp]
    // add r0, #0x18
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #8]
}




void ov102_021E8A34(void) {
    ov102_021E839C();
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xc);
    *((u32*)(r4 + 0x24)) = ov102_021E8240;
    // str r0, [r5]
    PlaySE(0x000005E4);
    // add r0, #0x50
    // strh r1, [r0]
    // add r0, #0x6b
    // eor r1, r0
    // add r0, #0x6b
    // strb r1, [r0]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xc);
    *((u32*)(r4 + 0x24)) = ov102_021E8240;
    // str r0, [r5]
    ov102_021E896C(r4);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E8AA6: ; jump table
    PlaySE(0x000005DC);
    ov102_021E8CA4(r4);
    *((u32*)(r4 + 0x24)) = ov102_021E7AA4;
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0xd);
    // str r0, [r5]
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x12);
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x13);
    // str r0, [r5]
    PlaySE(0x000005DC);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x13);
    // str r0, [r5]
}




void ov102_021E8B18(void) {
}




void ov102_021E8B40(void) {
    // tst r2, r1
    // tst r0, r1
    // strh r1, [r4]
    // tst r2, r5
    // sub r5, #0x41
    // strh r0, [r4]
    // tst r2, r3
    // eor r1, r2
    // eor r0, r1
    // tst r2, r1
    // add r3, #0xd0
    // tst r1, r3
}




void ov102_021E8C3C(void) {
    // strh r1, [r0]
    // mvn r1, r1
    // neg r1, r1
    // strh r1, [r0]
}




void ov102_021E8C64(void) {
    // sub r0, r2, r1
    // strh r0, [r4]
}




void ov102_021E8CA4(void) {
    // add r0, #0x62
    // add r0, #0x54
    ov102_021E8798(r0, *((u16*)r0));
    // add r0, #0x6b
    // add r1, #0x50
    sub_02091C60(*((u32*)(r4 + 0x18)), *((u16*)r4), r0);
    // add r1, #0x50
    sub_02091CAC(*((u16*)r4));
    *((u16*)(r4 + 0x10)) = r0;
    // add r0, #0x4e
    // add r0, r4, r0
    *((u16*)((*((u16*)r4) << 1) + 0x10)) = r0;
    // add r1, #0x4e
    // add r0, #8
    MailMsg_SetFieldI(r4, *((u16*)r4), r0);
    ov102_021E8F14(r4);
}




void ov102_021E8D1C(void) {
    // str r0, [r4]
}




void ov102_021E8D50(void) {
}




void ov102_021E8D58(void) {
}




void ov102_021E8D60(void) {
    // str r0, [r4]
}




void ov102_021E8D94(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021E8DAC: ; jump table
    ov102_021E8EF8((*((u16*)(*((u32*)r1) + 6)) << 0x10));
    sub_02090D88(*((u32*)r4));
    ov102_021E8F14(r4);
    // add r0, #0x70
    ov102_021E8F5C(r4, 1, 0);
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x15);
    // str r0, [r5]
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x17);
    // str r0, [r5]
    ov102_021E8D50(r4, ov102_021E8E84);
    ov102_021EA258(*((u32*)(r4 + 0x14)));
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x19);
    // str r0, [r5]
    // add r0, #8
    MailMsg_SetTrailingFieldsEmpty(r4);
    // add r1, #0x10
    // add r2, #8
    sub_02090E04(*((u32*)r4), r4, r4);
    ov102_021E7A4C(r4, ov102_021E8D1C);
    // str r0, [r5]
    // tst r0, r1
    System_GetTouchNew(0xf3, *((u16*)(r4 + 0x30)));
    ov102_021E940C(*((u32*)(r4 + 0x14)), 0x14);
    // str r0, [r5]
    ov102_021E9464(*((u32*)(r4 + 0x14)));
    ov102_021E8D58(r4);
}




void ov102_021E8E84(void) {
    // add r0, #0x70
    ov102_021E8F5C(r0, 1, 1);
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x16);
    // str r0, [r4]
    ov102_021EA258(*((u32*)(r5 + 0x14)));
    ov102_021E940C(*((u32*)(r5 + 0x14)), 0x19);
    // str r0, [r4]
    ov102_021E7A4C(r5, ov102_021E8D1C);
    // str r0, [r4]
    ov102_021E9464(*((u32*)(r5 + 0x14)));
    ov102_021E8D58(r5);
}




void ov102_021E8EF8(void) {
}




void ov102_021E8F14(void) {
    // add r0, #8
    MailMsg_AllFieldsAreInit(0, 0x0000FFFF, *((u16*)(0 + 0x10)));
}




void ov102_021E8F5C(void) {
}




void ov102_021E8F64(void) {
    // ldrb r0, [r0]
}




void ov102_021E8F68(void) {
    // add r0, #0x74
}




void ov102_021E8F6C(void) {
    // ldr r0, [r0, #4]
    // bx lr
    // TODO: decompile
}




void ov102_021E8F70(void) {
}




void ov102_021E8F7C(void) {
    // add r0, #0x6b
}




void ov102_021E8F84(void) {
}




void ov102_021E8F90(void) {
}




void ov102_021E8FA8(void) {
}




void ov102_021E8FB4(void) {
}




void ov102_021E8FC0(void) {
    // add r0, #0x4e
}




void ov102_021E8FC8(void) {
    // add r0, #0x4c
}




void ov102_021E8FD0(void) {
    // add r0, #0x50
}




void ov102_021E8FD8(void) {
    // add r0, #0x6b
    // add r1, #0x50
    // add r1, #0x50
}




void ov102_021E8FFC(void) {
    // add r0, #0x6b
    // add r5, #0x50
    // add r5, #0x50
}




void ov102_021E9028(void) {
}




void ov102_021E9044(void) {
}




void ov102_021E9050(void) {
}




void ov102_021E9064(void) {
    // add r0, #0x54
    // add r5, #0x54
}




void ov102_021E9084(void) {
}




void ov102_021E9090(void) {
}




void ov102_021E909C(void) {
    Heap_Alloc(0x23, (0x8d << 2));
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    *((u32*)(r4 + 0x18)) = r5;
    *((u32*)(r4 + 0x1c)) = r6;
    ov102_021E8F68(r5);
    // str r0, [r4, r1]
    ov102_021E9198(r4, (0x7e << 2));
    NNS_G2dInitOamManagerModule();
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // str r0, [sp, #0x10]
    OamManager_Create(1, 0x7f, 0, 0x20);
    // add r1, #0x28
    G2dRenderer_Init(0x80, r4, 0x23);
    *((u32*)(r4 + 0x24)) = r0;
    BgConfig_Alloc(0x23);
    *((u32*)(r4 + 0x20)) = r0;
    SysTask_CreateOnMainQueue(ov102_021E93DC, r4, 2);
    // str r0, [r4]
    ov102_021E93D4(ov102_021E93E0, r4, 1);
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = 0;
    FontID_Alloc(4, 0x23, (r4 + 4));
}




void ov102_021E9144(void) {
}




void ov102_021E9198(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjCharTransfer_ClearBuffers();
}




void ov102_021E91BC(void) {
}




void ov102_021E91C4(void) {
    FontSystem_NewInit(2, 0x23);
    // str r0, [r7, r1]
    // add r1, #8
    // add r0, r7, r1
    InitWindow((0x7f << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, r7, r1
    AddTextWindowTopLeftCorner(*((u32*)(r7 + 0x20)), (0x81 << 2), 9, 4);
    // add r0, r7, r0
    FillWindowPixelBufferText_AssumeTileSize32((0x81 << 2), 0);
    // add r0, r7, r0
    sub_02013910((0x81 << 2), 0x23);
    // str r0, [r7, r1]
    sub_02013948(*((u32*)(r7 + (2 << 8))), 1);
    // str r0, [sp, #0x28]
    // add r2, #0xf8
    // str r0, [sp, #0x30]
    // add r0, #8
    // add r0, r7, r0
    // str r0, [sp, #0x34]
    // sub r1, #0x64
    // str r0, [sp, #0x38]
    // add r0, r7, r1
    // str r0, [sp, #0x3c]
    // str r0, [sp, #0x50]
    // str r1, [sp, #0x58]
    // str r0, [sp, #0x54]
    // str r0, [sp, #0x48]
    // str r0, [sp, #0x4c]
    // str r3, [sp, #0x5c]
    NewMsgDataFromNarc(0, 0x1b, 0x23, 0x23);
    // str r0, [sp, #0x20]
    String_New(0x15, 0x23);
    // str r0, [sp, #0x24]
    String_New(0x15, 0x23);
    // str r0, [sp, #0x2c]
    // add r0, r7, r0
    // str r0, [sp, #0x18]
    // str r7, [sp, #0x14]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x28]
    // ldr r3, [sp, #0x18]
    sub_02021AC8(0x18, 1, 1);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x2c]
    // str r0, [sp, #0x44]
    // str r0, [sp, #0x40]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x24]
    // add r1, #0xb
    ReadMsgDataIntoString(0, (0x87 << 2));
    // ldr r0, [sp, #0x24]
    String_CountLines();
    // str r0, [sp, #0x1c]
    // add r0, r7, r0
    FillWindowPixelBufferText_AssumeTileSize32((0x81 << 2), 0);
    // ldr r0, [sp, #0x1c]
    // sub r0, r0, r1
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x24]
    String_GetLineN(r4, (r0 << 4), 0);
    FontID_String_GetCenterAlignmentX(4, r4, 0, 0x48);
    // str r5, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, r7, r0
    AddTextPrinterParameterizedWithColor((0x81 << 2), 4, r4, r0);
    // ldr r0, [sp, #0x1c]
    // add r5, #0x10
    // add r0, sp, #0x30
    TextOBJ_Create(*((u32*)(r7 + (2 << 8))));
    // ldr r1, [sp, #0x14]
    // str r0, [r1, r2]
    TextOBJ_SetSpritesDrawFlag(*((u32*)(r1 + (0x85 << 2))), 1, (0x85 << 2));
    // ldr r0, [sp, #0x14]
    TextOBJ_SetPaletteNum(*((u32*)(r0 + (0x85 << 2))), 0);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x10]
    sub_020136B4(*((u32*)(r0 + (0x85 << 2))), (0x85 << 2), 6);
    // ldr r0, [sp, #0x18]
    // add r0, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // add r0, #0x10
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x10]
    // add r0, #0x88
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x2c]
    String_Delete(r4);
    // ldr r0, [sp, #0x24]
    String_Delete();
    // ldr r0, [sp, #0x20]
    DestroyMsgData();
}




void ov102_021E937C(void) {
    // str r0, [sp]
    // add r5, r0, r1
    // str r7, [r4, r0]
    // add r4, #0x10
    // add r5, #0x10
    // ldr r0, [sp]
    // sub r1, #0x14
    // ldr r0, [sp]
    // add r0, r0, r1
    // ldr r0, [sp]
}




void ov102_021E93D4(void) {
}




void ov102_021E93DC(void) {
    // bx lr
    // TODO: decompile
}




void ov102_021E93E0(void) {
    DoScheduledBgGpuUpdates(*((u32*)(r1 + 0x20)));
    SpriteList_RenderAndAnimateSprites(*((u32*)(r4 + 0x24)));
    OamManager_ApplyAndResetBuffers();
    // str r0, [r3, r1]
}




void ov102_021E940C(void) {
    Heap_Alloc(0x23, 0x18);
    *((u32*)(r0 + 0x14)) = 0;
    *((u32*)(r0 + 0xc)) = r6;
    // str r5, [r1]
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 0x18));
    *((u32*)(r0 + 8)) = *((u32*)(r5 + 0x1c));
    *((u32*)(r0 + 0x10)) = 0;
    SysTask_CreateOnMainQueue(*((u32*)(ov102_021EC788 + (r6 << 2))), r0, 1);
    // add r1, r5, r1
    *((u32*)((r4 << 2) + 8)) = r0;
    GF_AssertFail((r4 << 2), (r2 + 4));
}




void ov102_021E9464(void) {
    // mov r2, #0
    // ldr r1, [r0, #8]
    // cmp r1, #0
    // beq _021E9470
    // mov r0, #0
    // bx lr
    // add r2, r2, #1
    // add r0, r0, #4
    // cmp r2, #4
    // blt _021E9466
    // mov r0, #1
    // bx lr
    // TODO: decompile
}




void ov102_021E947C(void) {
}




void ov102_021E94A4(void) {
    // add r0, r1, r0
    // add r0, r1, r0
}




void ov102_021E94CC(void) {
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r0, r2
    // str r0, [r1]
    // and r2, r3
    // str r2, [r0]
    // and r5, r3
    // str r2, [r1]
    // and r2, r3
    // str r1, [r0]
    NARC_New(0x4c, 0x23, *((u32*)0x04001000), 0xFFCFFFEF);
    ov102_021E978C(r4);
    ov102_021E95E0(r4, r5);
    ov102_021E91C4(*((u32*)r4));
    ov102_021EA314(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // str r0, [r2, r1]
    ov102_021EA41C(*((u32*)(*((u32*)r4) + (0x1e << 4))), r5, *((u32*)r4));
    ov102_021EB1A4(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // str r0, [r2, r1]
    ov102_021EB1F8(*((u32*)(*((u32*)r4) + (0x79 << 2))), r5, *((u32*)r4));
    ov102_021EB694(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // str r0, [r2, r1]
    ov102_021EB6E0(*((u32*)(*((u32*)r4) + (0x7a << 2))), r5, *((u32*)r4));
    ov102_021EBC34(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // str r0, [r2, r1]
    ov102_021EBD00(*((u32*)(*((u32*)r4) + (0x7b << 2))), (0x7b << 2), *((u32*)r4));
    ov102_021EC20C(*((u32*)r4), *((u32*)(r4 + 4)), *((u32*)(r4 + 8)));
    // str r0, [r2, r1]
    ov102_021EC248(*((u32*)(*((u32*)r4) + (0x1f << 4))), r5, *((u32*)r4));
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
    GX_DispOn();
    NARC_Delete(r5);
    ov102_021E94A4(r4);
}




void ov102_021E95E0(void) {
    // add r1, r4, r0
    // str r1, [sp, #0x1c]
    // sub r1, #0x48
    // add r7, r4, r1
    // add r1, #0x28
    // add r0, #0x30
    // add r1, r4, r1
    // add r0, r4, r0
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r7, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r3, [sp, #0x18]
    // str r0, [r4, r1]
    // str r0, [sp]
    // ldr r3, [sp, #0x14]
    // str r0, [r4, r1]
    // ldr r0, [sp, #0x1c]
    // add r0, #0x14
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x18]
    // add r7, #0x24
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x14]
    // str r0, [sp, #0x14]
}




void ov102_021E9694(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    *((u32*)(r6 + 0x14)) = (*((u32*)(r6 + 0x14)) + 1);
    IsPaletteFadeFinished((*((u32*)(r6 + 0x14)) + 1));
    ov102_021EA380(*((u32*)(*((u32*)r6) + (0x1e << 4))), *((u32*)r6));
    ov102_021EB1E0(*((u32*)(*((u32*)r6) + (0x79 << 2))), *((u32*)r6));
    ov102_021EB6C8(*((u32*)(*((u32*)r6) + (0x7a << 2))), *((u32*)r6));
    ov102_021EBCBC(*((u32*)(*((u32*)r6) + (0x7b << 2))), *((u32*)r6));
    ov102_021EC240(*((u32*)(*((u32*)r6) + (0x1f << 4))), *((u32*)r6));
    ov102_021E937C(*((u32*)r6));
    Heap_Free(*((u32*)(r7 + (0x1d << 4))));
    Heap_Free(*((u32*)(r5 + (0x76 << 2))));
    FontID_Release(2);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 0);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 1);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 2);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 3);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 4);
    FreeBgTilemapBuffer(*((u32*)(r7 + 0x20)), 5);
    // strh r0, [r2]
    ov102_021E94A4(r6, *((u16*)0x04000304), 0x04000304);
}




void ov102_021E978C(void) {
    // and r0, r1
    // strh r0, [r2]
    GX_SetGraphicsMode(1, 0, 1);
    GfGfx_SetBanks(ov102_021EC760);
    SetBothScreensModesAndDisable(ov102_021EC6A8);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 0, ov102_021EC728, 0);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 1, ov102_021EC6D4, 0);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 2, ov102_021EC6B8, 0);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 3, ov102_021EC70C, 0);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 4, ov102_021EC744, 0);
    InitBgFromTemplate(*((u32*)(r5 + 0x20)), 5, ov102_021EC6F0, 0);
    BgClearTilemapBufferAndCommit(*((u32*)(r5 + 0x20)), ((0 << 0x18) >> 0x18));
    FontID_Alloc(2, 0x23);
}




void ov102_021E983C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
}




void ov102_021E988C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov102_021E98B8(void) {
}




void ov102_021E98C4(void) {
    // ldr r0, [r1, r0]
}




void ov102_021E98E0(void) {
    // ldr r0, [r1, r0]
}




void ov102_021E98FC(void) {
    // strb r1, [r4, r0]
    // sub r0, #0x14
}




void ov102_021E9944(void) {
    // strb r1, [r4, r0]
    // sub r0, #0x10
}




void ov102_021E9978(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov102_021E9A24(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov102_021E9A8C(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9AA4: ; jump table
}




void ov102_021E9B30(void) {
    // strb r1, [r4, r0]
}




void ov102_021E9BD0(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov102_021E9C70(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9C88: ; jump table
}




void ov102_021E9D44(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9D5E: ; jump table
    // strb r1, [r4, r0]
}




void ov102_021E9E60(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021E9E78: ; jump table
}




void ov102_021E9F38(void) {
    // strb r1, [r4, r0]
    // sub r0, #0x10
    // strb r1, [r4, r0]
    // sub r0, #0x14
}




void ov102_021E9FAC(void) {
    // ldr r0, [r4, r0]
}




void ov102_021E9FCC(void) {
    // ldr r0, [r4, r0]
}




void ov102_021E9FEC(void) {
    // ldr r0, [r4, r0]
}




void ov102_021EA00C(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




void ov102_021EA05C(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA078(void) {
    // sub r0, #0x10
    // sub r0, #0x14
}




void ov102_021EA0D0(void) {
    // sub r0, #0x10
    // sub r0, #0x14
}




void ov102_021EA128(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA144(void) {
    // ldr r0, [r4, r0]
}




void ov102_021EA164(void) {
    // sub r0, #0x10
    // sub r0, #0x10
}




void ov102_021EA1B8(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA1D4(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA1F0(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA20C(void) {
    // ldr r0, [r1, r0]
}




void ov102_021EA228(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA234 ; =ov102_021EAFEC
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA234: .word ov102_021EAFEC
    // TODO: decompile
}




void ov102_021EA238(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA244 ; =ov102_021EADF0
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA244: .word ov102_021EADF0
    // TODO: decompile
}




void ov102_021EA248(void) {
    // mov r3, #0x1e
    // lsl r3, r3, #4
    // ldr r0, [r0, r3]
    // ldr r3, _021EA254 ; =ov102_021EAB10
    // bx r3
    // nop
    // _021EA254: .word ov102_021EAB10
    // TODO: decompile
}




void ov102_021EA258(void) {
    // mov r1, #0x1e
    // lsl r1, r1, #4
    // ldr r3, _021EA264 ; =ov102_021EB130
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _021EA264: .word ov102_021EB130
    // TODO: decompile
}




void ov102_021EA268(void) {
    // ldr r0, [r0, #0x20]
    // bx lr
    // TODO: decompile
}




void ov102_021EA26C(void) {
    // ldr r0, [r0, #0x24]
    // bx lr
    // TODO: decompile
}




void ov102_021EA270(void) {
    // add r6, r0, r4
    // add r5, r6, r5
    // str r5, [r1]
    // add r5, #0x48
    // add r6, r0, r5
    // add r5, r6, r5
    // add r2, r0, r2
    // add r0, #0x70
    // add r4, #0x78
    // add r0, #0x20
    // strb r3, [r0]
}




void ov102_021EA2B4(void) {
    // str r0, [sp]
    // str r0, [sp, #8]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x30]
    // str r1, [sp, #4]
    // ldr r1, [sp, #0x34]
    // str r0, [sp, #0x14]
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r0, r2, r0
    // str r0, [sp, #0xc]
    // add r0, sp, #0
}




void ov102_021EA314(void) {
    Heap_Alloc(0x23, (0x7d << 2));
    // str r5, [r4]
    *((u32*)(r0 + 4)) = r6;
    *((u32*)(r0 + 8)) = r7;
    ov102_021E8F68(*((u32*)(r0 + 4)));
    // str r0, [r4, r1]
    *((u32*)(r4 + 0x60)) = 0;
    *((u32*)(r4 + 0x64)) = 0;
    *((u32*)(r4 + 0x68)) = 0;
    *((u32*)(r4 + 0x6c)) = 0;
    *((u32*)(r4 + 0x70)) = 0;
    *((u32*)(r4 + 0x74)) = 0;
    String_New(0x80, 0x23);
    *((u32*)(r4 + 0x7c)) = r0;
    NewMsgDataFromNarc(0, 0x1b, 0x0000011B, 0x23);
    *((u32*)(r4 + 0x78)) = r0;
    ListMenuCursorNew(0x23);
    // add r1, #0x80
    // str r0, [r1]
    // strh r1, [r4, r0]
    // strh r1, [r4, r0]
}




void ov102_021EA380(void) {
    // add r0, #0x80
    // add r0, #0xc
    // add r0, #0x1c
    // add r0, #0x2c
    // add r0, #0x3c
    // add r0, #0x4c
}




void ov102_021EA41C(void) {
    ov102_021EA268(*((u32*)r0));
    ov102_021EA80C(r5, r4);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0, r6, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0, r6, 4);
    // mvn r0, r0
    // strh r0, [r5, r3]
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(r6, 4, 3, 0x000001E2);
    // str r3, [sp]
    // str r3, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 1, r6, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 1, r6, 4);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0xc
    AddWindowParameterized(r6, r5, 0, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x1c
    AddWindowParameterized(r6, r5, 4, 3);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x6c
    // str r0, [sp, #0x10]
    // add r1, #0x2c
    AddWindowParameterized(r6, r5, 0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x6c
    // str r0, [sp, #0x10]
    // add r1, #0x3c
    AddWindowParameterized(r6, r5, 0, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0xa2
    // str r0, [sp, #0x10]
    // add r1, #0x4c
    AddWindowParameterized(r6, r5, 0, 0x19);
    // add r1, #0xa2
    // strh r1, [r5, r0]
    YesNoPrompt_Create(0x23, r4);
    // str r0, [r5, r1]
    // add r0, #0xde
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x26, 0, r6, 0);
    // add r1, #0xde
    // add r0, #0x90
    // str r1, [r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x26, 0x19, 0, (7 << 6));
    // add r1, #0xe7
    // strh r1, [r5, r0]
    ov102_021E9084(*((u32*)(r5 + 4)), r4);
    // add r2, #0xe7
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r6, 0, ((r4 << 0x10) >> 0x10), 0xf);
    // add r4, #0xe7
    // add r0, #0x2c
    *((u32*)(r5 + 0x5c)) = r5;
    sub_0200E948(r5, r4, 0xf);
    // add r0, #0xc
    PutWindowTilemap(r5);
    // add r0, #0x1c
    PutWindowTilemap(r5);
    // add r0, #0x2c
    PutWindowTilemap(r5);
    // add r0, #0x3c
    PutWindowTilemap(r5);
    ov102_021EA8C0(r5);
    ov102_021EAA3C(r5);
    ov102_021EAE40(r5, 0);
    ov102_021EA920(r5);
    ov102_021E8F6C(*((u32*)(r5 + 4)));
    ov102_021EAC20(r5);
}




void ov102_021EA644(void) {
    ov102_021EA268(*((u32*)r0));
    // ldrsh r3, [r4, r3]
    BgSetPosTextAndCommit(0, 3, (0x1e << 4));
    BgSetPosTextAndCommit(0, 3, 0);
}




void ov102_021EA678(void) {
    // strh r0, [r2]
    // strh r1, [r0]
    // and r3, r1
    // strh r1, [r0]
    // sub r0, #0xa
    // strh r3, [r0]
    // strh r0, [r1]
    // sub r1, #8
    // strh r3, [r1]
    // sub r2, #0x4a
    // strh r3, [r1]
    // and r1, r3
    // str r0, [r2]
    // strh r1, [r0]
    // and r3, r1
    // strh r1, [r0]
    // sub r0, #0xa
    // strh r1, [r0]
    // strh r1, [r0]
    // sub r0, #8
    // strh r1, [r0]
    // strh r1, [r0]
    // sub r2, #0x4a
    // and r0, r1
    // str r0, [r2]
}




void ov102_021EA71C(void) {
    // strb r3, [r2, r0]
    // strb r1, [r2, r3]
    // strh r0, [r1]
}




void ov102_021EA754(void) {
    ov102_021EA678(1, *((u8*)(r0 + (0x79 << 2))));
    ov102_021EA678(0);
    ov102_021EA268(*((u32*)r5));
    // mvn r4, r4
    // ldrsh r0, [r5, r3]
    // add r0, r0, r4
    // strh r0, [r5, r3]
    // ldrsh r0, [r5, r0]
    // add r1, r0, r4
    // strh r1, [r5, r0]
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(r0, 0, 3, (0x000001E2 - 2));
    // ldrsh r3, [r5, r3]
    BgSetPosTextAndCommit(r6, 4, 3, 0x000001E2);
    // neg r4, r4
    // asr r2, r2, #0x10
    Sprite_OffsetPositionXY(*((u32*)(r5 + 0x60)), 0, (r4 << 0x10));
    // asr r2, r2, #0x10
    Sprite_OffsetPositionXY(*((u32*)(r5 + 0x64)), 0, (r4 << 0x10));
    // strb r1, [r5, r0]
    Main_SetHBlankIntrCB(0, 0);
    HBlankInterruptDisable();
}




void ov102_021EA80C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r2, sp, #8
    // ldr r0, [sp, #8]
    // add r1, #0xa0
    // add r4, #0xa0
}




void ov102_021EA874(void) {
    // add r4, #0xa0
    // add r0, r4, r5
    // add r0, r4, r5
    // add r0, #0xa0
    // add r4, #0xa0
}




void ov102_021EA8C0(void) {
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, #0x86
    // strh r1, [r0]
    // add r4, #0x8c
    // str r0, [r4]
    // add r0, #0x84
    // strh r1, [r0]
    // add r0, #0x86
    // strh r2, [r0]
    // add r0, #0x88
    // strh r1, [r0]
    // add r0, #0x8a
    // strh r2, [r0]
    // add r4, #0x8c
    // str r0, [r4]
    // add r4, #0x8c
    // str r0, [r4]
}




void ov102_021EA920(void) {
    // add r0, #0x8c
    // add r0, #0x84
    // add r1, sp, #8
    ov102_021EAD5C(r0);
    // add r0, sp, #8
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0x18;
    // add r1, sp, #0x30
    ov102_021EA270(*((u32*)r4), 0x18, 0, 0);
    // add r1, sp, #0xc
    ov102_021EA270(*((u32*)r4), 1, 0);
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r5, sp, #8
    // ldrsh r2, [r5, r2]
    // ldrsh r3, [r5, r3]
    // add r1, sp, #0x30
    ov102_021EA2B4(*((u32*)r4), 0, 2);
    *((u32*)(r4 + 0x60)) = r0;
    // str r2, [sp]
    // str r5, [sp, #4]
    // add r3, sp, #8
    // ldrsh r2, [r3, r2]
    // ldrsh r5, [r3, r5]
    // ldrsh r3, [r4, r3]
    // add r1, sp, #0xc
    // sub r3, r5, r3
    ov102_021EA2B4(*((u32*)r4), 0, 0x000001E2);
    *((u32*)(r4 + 0x64)) = r0;
    Sprite_SetAnimCtrlSeq(1);
    ov102_021EB088(r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x30
    ov102_021EA2B4(*((u32*)r4), 8, 0x40);
    *((u32*)(r4 + 0x68)) = r0;
    Sprite_SetAnimCtrlSeq(0x13);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x30
    ov102_021EA2B4(*((u32*)r4), 0xf8, 0x40);
    *((u32*)(r4 + 0x6c)) = r0;
    Sprite_SetAnimCtrlSeq(0x15);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x30
    ov102_021EA2B4(*((u32*)r4), 0x1c, 0x40);
    *((u32*)(r4 + 0x74)) = r0;
    Sprite_SetAnimCtrlSeq(0x12);
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x30
    ov102_021EA2B4(*((u32*)r4), 0x80, 0x40);
    *((u32*)(r4 + 0x70)) = r0;
    Sprite_SetAnimCtrlSeq(0x17);
    ov102_021E8F6C(*((u32*)(r4 + 4)));
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x6c)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x68)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x70)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x74)), 0);
}




void ov102_021EAA3C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r4, #0xc
    // add r6, #0x84
    // add r7, #0x88
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, [sp, #4]
    // add r4, #0x10
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp]
}




void ov102_021EAB10(void) {
    // add r2, r0, r2
    // ldrsh r0, [r2, r0]
    // sub r0, #0x18
    // add r0, #0x60
    // ldrsh r0, [r2, r0]
    // strb r0, [r1]
    // add r0, #0x10
}




void ov102_021EAB30(void) {
    // str r0, [sp, #0x10]
    // str r1, [sp, #0x14]
    ov102_021E8FA8(*((u32*)(r0 + 4)), 0x23);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x10]
    // add r0, #0x94
    // str r4, [sp, #0x1c]
    ov102_021EAC44(1);
    // ldr r7, [sp, #0x10]
    // str r0, [sp, #0x24]
    // add r0, #0x94
    // add r6, #0x84
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x24]
    // ldr r1, [sp, #0x20]
    ov102_021EAC7C(r7);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAB7C: ; jump table
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x20]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    AddTextPrinterParameterizedWithColor(0, 1, r5);
    // ldr r1, [sp, #0x20]
    FontID_String_GetWidth(1, 0);
    // add r5, r5, r0
    // add r1, #0x32
    // add r0, #0x84
    // strh r1, [r0]
    // add r1, #8
    // add r0, #0x86
    // strh r1, [r0]
    // ldr r0, [sp, #0x14]
    ov102_021EAD70(r7, r6);
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x1c]
    ov102_021E8F90(*((u32*)(r0 + 4)));
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0x14]
    ov102_021EAD98(0x0000FFFF, r6, r0);
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    // add r5, #0x64
    // add r4, #0x10
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // add r0, #0x94
    // str r0, [sp, #0x10]
    ov102_021EAC70(0);
    // ldr r0, [sp, #0x20]
    String_Delete();
    // ldr r0, [sp, #0x1c]
}




void ov102_021EAC20(void) {
    // add r1, #0x1c
    // asr r1, r1, #0x10
}




void ov102_021EAC44(void) {
    ov102_021E8FA8(*((u32*)(r1 + 4)), 0x23);
    // str r0, [r4]
    String_cstr();
    *((u32*)(r4 + 4)) = r0;
    *((u32*)(r4 + 8)) = 1;
    *((u32*)(r4 + 8)) = 0;
}




void ov102_021EAC70(void) {
}




void ov102_021EAC7C(void) {
    // str r1, [sp]
    // mov ip, r0
    // add r1, r0, r0
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021EAC98: ; jump table
    *((u32*)(r0 + 8)) = 2;
    *((u32*)(r0 + 8)) = 3;
    *((u32*)(r0 + 8)) = 1;
    *((u32*)(r0 + 4)) = (*((u32*)(r0 + 4)) + 2);
    // mov r2, ip
    // sub r3, r3, r2
    // add r2, r3, r2
    // asr r2, r2, #1
    // ldr r0, [sp]
    // mov r1, ip
    CopyU16ArrayToStringN(1, 3, ((*((u32*)(r0 + 4)) >> 0x1f) + 1), *((u32*)(r0 + 4)));
    // mov r0, ip
    MsgArray_SkipControlCode(0);
    *((u32*)(r4 + 4)) = r0;
    // mov r0, ip
    *((u32*)(r4 + 4)) = (1 + 2);
    *((u32*)(r4 + 8)) = 2;
    *((u32*)(r4 + 8)) = 3;
    *((u32*)(r4 + 8)) = 1;
    *((u32*)(r4 + 8)) = 0;
}




void ov102_021EAD48(void) {
    // ldrsh r2, [r0, r2]
    // sub r2, #0x30
    // strh r2, [r1]
    // ldrsh r0, [r0, r2]
    // sub r0, #8
}




void ov102_021EAD5C(void) {
    // ldrsh r2, [r0, r2]
    // add r2, #0x18
    // strh r2, [r1]
    // ldrsh r0, [r0, r2]
    // add r0, #8
}




void ov102_021EAD70(void) {
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r3, sp, #8
}




void ov102_021EAD98(void) {
    // add r1, sp, #0x10
    ov102_021EAD48(r2);
    GetECWordIntoStringByIndex(r6, *((u32*)(r5 + 0x7c)));
    FontID_String_GetWidth(1, *((u32*)(r5 + 0x7c)), 0);
    // add r3, sp, #0x10
    // ldrsh r0, [r3, r0]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // ldrsh r3, [r3, r6]
    AddTextPrinterParameterizedWithColor(r4, 1, *((u32*)(r5 + 0x7c)));
}




void ov102_021EADF0(void) {
    // add r0, #0x8c
}




void ov102_021EADF8(void) {
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // add r1, #0x2c
    // add r0, r1, r0
}




void ov102_021EAE40(void) {
    FillWindowPixelBuffer(*((u32*)(r0 + 0x5c)), 9);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _021EAE60: ; jump table
    MessageFormat_New_Custom(2, 0x3c, 0);
    String_New((0x4b << 2), 0);
    BufferPocketName(r5, 0, 0);
    ov102_021E8F70(*((u32*)(r4 + 4)));
    ReadMsgDataIntoString(*((u32*)(r4 + 0x78)), r0, *((u32*)(r4 + 0x7c)));
    StringExpandPlaceholders(r5, r6, *((u32*)(r4 + 0x7c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x5c)), 1, r6, 0);
    String_Delete(r6);
    MessageFormat_Delete(r5);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x78)), 6, *((u32*)(r4 + 0x7c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x5c)), 1, *((u32*)(r4 + 0x7c)), 0);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x78)), 7, *((u32*)(r4 + 0x7c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x5c)), 1, *((u32*)(r4 + 0x7c)), 0);
    ReadMsgDataIntoString(*((u32*)(r4 + 0x78)), 8, *((u32*)(r4 + 0x7c)));
    // str r3, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r3, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(*((u32*)(r4 + 0x5c)), 1, *((u32*)(r4 + 0x7c)), 0);
    CopyWindowToVram(*((u32*)(r4 + 0x5c)));
}




void ov102_021EAF44(void) {
}




void ov102_021EAF50(void) {
}




void ov102_021EAF5C(void) {
}




void ov102_021EAF7C(void) {
}




void ov102_021EAFAC(void) {
}




void ov102_021EAFEC(void) {
    // ldr r0, [r0, #0x74]
    // bx lr
    // TODO: decompile
}




void ov102_021EAFF0(void) {
    // add r0, #0x8c
    // add r2, #0x84
    // add r0, r2, r0
    // add r1, sp, #0
    ov102_021EAD5C((r1 << 2), r0);
    // add r1, sp, #0
    // ldrsh r0, [r1, r2]
    // str r0, [sp, #4]
    // ldrsh r0, [r1, r0]
    // str r0, [sp, #8]
    // str r2, [sp, #0xc]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)(r4 + 0x60)), 0);
    // ldrsh r1, [r4, r0]
    // sub r0, r0, r1
    _fflt((0xc0 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r0 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #4
    Sprite_SetMatrix(*((u32*)(r4 + 0x64)));
    ov102_021EB088(r4, 1);
}




void ov102_021EB088(void) {
    // add r2, #0x8c
}




void ov102_021EB0C0(void) {
    ov102_021EA268(*((u32*)r0));
    // add r0, sp, #0
    MI_CpuFill8(0, 0x14);
    // str r6, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    *((u8*)(3 + 0x10)) = 0x19;
    *((u8*)(3 + 0x11)) = 0xc;
    // and r3, r6
    *((u8*)(3 + 0x12)) = ((*((u8*)(3 + 0x12)) & ~(0xf)) | 0xf);
    *((u8*)(3 + 0x12)) = ((*((u8*)(3 + 0x12)) & ~(0xf0)) | ((((r4 << 0x18) >> 0x18) << 0x1c) >> 0x18));
    // add r1, sp, #0
    YesNoPrompt_InitFromTemplate(*((u32*)(r5 + (0x000001EE - 6))), ((*((u8*)(3 + 0x12)) & ~(0xf0)) | ((((r4 << 0x18) >> 0x18) << 0x1c) >> 0x18)), 0x000001EE, ((((r4 << 0x18) >> 0x18) << 0x1c) >> 0x18));
}




void ov102_021EB130(void) {
    // mvn r0, r0
}




void ov102_021EB170(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x4c
    // add r0, #0x80
    // add r5, #0x4c
}




void ov102_021EB1A4(void) {
    // str r5, [r4]
}




void ov102_021EB1E0(void) {
}




void ov102_021EB1F8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // add r3, #0x5c
    // str r0, [sp]
    // add r3, #0x60
}




void ov102_021EB29C(void) {
    // str r0, [sp]
    // add r4, #0x24
    // add r4, #0x10
    // ldr r0, [sp]
}




void ov102_021EB2EC(void) {
    ov102_021EA268(*((u32*)r0));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x1c]
    FillBgTilemapRect(0, 0, 0x17);
    ov102_021EB524(r5, r6);
    // ldr r0, [sp, #0x1c]
    BgCommitTilemapBufferToVram(0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r2, [sp, #0x14]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    CopyToBgTilemapRect(((*((u16*)(*((u32*)(r5 + 0x5c)) + 2)) << 0x15) >> 0x18), 0, 0x17, 0xd);
    // add r4, #0x24
    FillWindowPixelBuffer(r5, 0xe);
    FontID_String_GetWidth(4, *((u32*)(r5 + 0x18)), 0);
    // sub r3, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r7, r3, r7
    // asr r3, r7, #1
    AddTextPrinterParameterizedWithColor(r4, 4, *((u32*)(r5 + 0x18)));
    // add r4, #0x10
    // ldr r0, [sp, #0x1c]
    BgCommitTilemapBufferToVram(0);
}




void ov102_021EB3B4(void) {
    ov102_021EA268(*((u32*)r0));
    // str r1, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    FillBgTilemapRect(0, 0, 0x18);
    // add r5, #0x44
    ClearWindowTilemapAndCopyToVram(r5);
    ScheduleBgTilemapBufferTransfer(r6, 0);
    // str r1, [sp]
    // str r1, [sp, #4]
    // add r1, #0xc
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r3, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r2, [sp, #0x18]
    CopyToBgTilemapRect(0, 0x18, 0x14);
    // add r0, #0x44
    FillWindowPixelBuffer(r5, 0xe);
    FontID_String_GetWidth(4, *((u32*)(r5 + 0x20)), 0);
    // sub r3, r1, r0
    // str r1, [sp]
    // add r4, r3, r4
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x44
    // asr r3, r4, #1
    AddTextPrinterParameterizedWithColor(r5, 4, *((u32*)(r5 + 0x20)));
    ScheduleBgTilemapBufferTransfer(r6, 0);
}




void ov102_021EB46C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // add r4, #0x24
    // ldr r0, [sp, #4]
    AddWindow(r0, ov102_021EC808);
    // ldr r0, [sp]
    NewString_ReadMsgData(*((u32*)(r0 + 0x14)), r7);
    *((u32*)(r5 + 0x18)) = r0;
    // add r6, #8
    // add r4, #0x10
    // ldr r0, [sp]
    // add r0, #0x24
    PutWindowTilemap();
    // ldr r0, [sp]
    // add r0, #0x24
    FillWindowPixelBuffer(0xe);
    // ldr r0, [sp]
    // add r0, #0x34
    PutWindowTilemap();
    // ldr r0, [sp]
    // add r0, #0x34
    // str r0, [sp]
    FillWindowPixelBuffer(0xe);
}




void ov102_021EB4D0(void) {
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
}




void ov102_021EB50C(void) {
}




void ov102_021EB518(void) {
}




void ov102_021EB524(void) {
}




void ov102_021EB530(void) {
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0
}




void ov102_021EB570(void) {
    // str r3, [sp]
    // str r5, [sp, #4]
    // add r3, #0xc
    // str r3, [sp, #8]
    // str r3, [sp, #0xc]
    // str r2, [sp, #0x10]
    // str r2, [sp, #0x14]
    // add r2, r4, r2
    // str r1, [sp, #0x18]
}




void ov102_021EB5B8(void) {
    // eor r1, r2
}




void ov102_021EB624(void) {
    ov102_021E8F7C(*((u32*)(r0 + 4)));
    Heap_Alloc(0x23, 0x1c);
    // str r5, [r1]
    *((u32*)(r0 + 4)) = 0;
    *((u16*)(r0 + 8)) = 0;
    *((u16*)(r0 + 0xa)) = r4;
    SysTask_CreateOnMainQueue(ov102_021EB5B8, r0, 1);
    *((u32*)(r5 + 0x64)) = r0;
}




void ov102_021EB654(void) {
    // ldr r0, [r0, #0x64]
    // cmp r0, #0
    // bne _021EB65E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov102_021EB664(void) {
}




void ov102_021EB67C(void) {
}




void ov102_021EB694(void) {
}




void ov102_021EB6C8(void) {
}




void ov102_021EB6E0(void) {
    ov102_021EA268(*((u32*)r0));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 2, r0, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 3, r4, 1);
    ov102_021EB77C(r5, r4, (r0 >> 5));
    ov102_021EB880(r5, r4, r0);
    ov102_021EB94C(r5, r4, r0);
    BgSetPosTextAndCommit(r4, 1, 0, (0 - 4));
    BgSetPosTextAndCommit(r4, 1, 3, 0x10);
    ov102_021EB950(r5);
    // sub r2, #0xc
    G2x_SetBlendBrightness_(0x04000050, 2, 2);
    BgCommitTilemapBufferToVram(r4, 1);
}




void ov102_021EB77C(void) {
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x14]
    // add r2, #0xff
    NewMsgDataFromNarc(1, 0x1b, 0x1b, 0x23);
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x24]
    _s32_div_f(0, 3);
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    sub_02091C38(*((u32*)((r0 + 3) + 8)), r4);
    // ldr r0, [sp, #0x20]
    NewString_ReadMsgData(r4);
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x20]
    NewString_ReadMsgData(0x0001020F, 0xc);
    // str r0, [sp, #0x1c]
    GF_AssertFail(0x000003EE);
    // ldr r0, [sp, #0x24]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x28
    AddWindowParameterized(((r6 << 0x10) >> 0x10), 1, ((r7 << 0x18) >> 0x18));
    // add r0, sp, #0x28
    FillWindowPixelBuffer(0xf);
    FontID_String_GetWidth(0, r5, 0);
    // sub r0, r1, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x28
    AddTextPrinterParameterizedWithColor(0, 0, r5, (r0 >> 1));
    // add r0, sp, #0x28
    PutWindowTilemap();
    // add r0, sp, #0x28
    CopyWindowPixelsToVram_TextMode();
    String_Delete(r5);
    // add r0, sp, #0x28
    RemoveWindow();
    // add r6, #0x12
    // add r7, #0xa
    // ldr r0, [sp, #0x20]
    DestroyMsgData();
}




void ov102_021EB880(void) {
    // str r2, [sp, #0x14]
    GF_AssertFail(r2, (0xce << 2));
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // add r1, sp, #0x20
    // str r0, [sp, #0x10]
    AddWindowParameterized(r4, 1, 0x22);
    String_New(4, 0x23);
    // add r0, sp, #0x20
    FillWindowPixelBuffer(0xf);
    ov102_021EC4A4();
    ov102_021EC4A8(0x00000000, r4);
    // add r1, sp, #0x1c
    // add r2, sp, #0x18
    ov102_021EC4CC(r5);
    sub_02091C74(*((u32*)(r6 + 8)), r5);
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r3, [sp, #0x1c]
    // add r0, sp, #0x20
    AddTextPrinterParameterizedWithColor(0, 0, r4, (r3 + 3));
    // add r0, sp, #0x20
    CopyWindowPixelsToVram_TextMode();
    // add r0, sp, #0x20
    PutWindowTilemap();
    String_Delete(r4);
    // add r0, sp, #0x20
    RemoveWindow();
    // ldr r0, [sp, #0x14]
    // add r0, #0xc8
    // str r0, [sp, #0x14]
}




void ov102_021EB94C(void) {
    // add r0, r2, #0
    // bx lr
    // TODO: decompile
}




void ov102_021EB950(void) {
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
}




void ov102_021EB98C(void) {
}




void ov102_021EB9C0(void) {
    // str r1, [sp, #0x10]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x30
    // str r0, [sp, #8]
    // add r1, #0x40
    // str r1, [sp, #0xc]
    // add r1, sp, #4
    // add r2, sp, #0
    // ldr r0, [sp, #4]
    // add r0, #0x1a
    // str r0, [sp, #8]
    // ldr r0, [sp]
    // add r0, #0x48
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #8]
    // add r1, sp, #8
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
}




void ov102_021EBA44(void) {
}




void ov102_021EBA5C(void) {
    // add r0, #0x1c
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
    // add r4, #0x3c
}




void ov102_021EBAAC(void) {
}




void ov102_021EBAD0(void) {
    // add r0, #0x3c
    // str r0, [sp]
    // add r0, #0x1c
    // sub r3, #0xa
    // add r4, #0x1c
}




void ov102_021EBB1C(void) {
}




void ov102_021EBB2C(void) {
}




void ov102_021EBB44(void) {
}




void ov102_021EBB50(void) {
}




void ov102_021EBB6C(void) {
    // add r0, #0x1c
}




void ov102_021EBB88(void) {
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 2, 0x3f, 0);
    ToggleBgLayer(1, 1);
    // str r0, [sp]
    // add r4, #0x1c
    // str r0, [sp, #4]
    ov102_021EC37C(r4, 2, 0x3f, 0);
}




void ov102_021EBBC4(void) {
}




void ov102_021EBBD0(void) {
    // mvn r3, r3
}




void ov102_021EBBF4(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r0, #0x3c
}




void ov102_021EBC28(void) {
}




void ov102_021EBC34(void) {
    // str r5, [r4]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x10
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // add r1, #0x20
    // add r1, #0x94
    // str r0, [r1]
}




void ov102_021EBCBC(void) {
    // add r0, #0x20
    // add r0, #0x10
}




void ov102_021EBD00(void) {
    // str r2, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, #0x10
    // add r0, #0x10
    // add r0, #0x10
}




void ov102_021EBD68(void) {
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #8
}




void ov102_021EBDEC(void) {
    // add r0, #0x10
    // add r0, #0x8c
    // tst r0, r5
    // add r4, #0x18
    // add r6, #0x10
}




void ov102_021EBE3C(void) {
    // str r0, [sp]
    G2x_SetBlendAlpha_(0x04000050, 4, 0x3f, 0);
    ToggleBgLayer(2, 1);
    // add r0, #0x80
    // str r3, [r0]
    // str r0, [sp]
    // add r4, #0x40
    // str r0, [sp, #4]
    ov102_021EC37C(r4, 4, 0x3f, 0);
}




void ov102_021EBE80(void) {
}




void ov102_021EBEA4(void) {
}




void ov102_021EBEC8(void) {
    // add r1, #0x80
    // add r0, #0x40
}




void ov102_021EBEF4(void) {
}




void ov102_021EBF38(void) {
    // mvn r0, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    // and r2, r0
    // add r0, #0x48
    // str r0, [sp]
    // add r0, #0x38
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov102_021EBFA0(void) {
    // str r0, [sp, #8]
    // add r0, #0x90
    // ldr r0, [sp, #8]
    // add r0, r7, r0
    // str r0, [sp, #0x14]
    // str r0, [sp, #0xc]
    // add r0, #0x8c
    // ldr r1, [sp, #0xc]
    // add r1, r0, r1
    // str r1, [sp, #0x18]
    // ldr r0, [sp, #8]
    // neg r0, r0
    // ldr r7, [sp, #0x14]
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // add r0, #0x78
    // ldr r0, [sp, #8]
    // add r7, #0xa
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    // add r1, r1, r7
    // ldr r0, [sp, #0x10]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // add r1, r7, r4
    // tst r0, r4
    // add r5, #0x18
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // add r1, #0x8c
    // str r0, [r1]
    // ldr r0, [sp, #0x14]
    // add r1, #0x90
    // str r0, [r1]
    // add r0, #0x10
    // ldr r0, [sp, #0xc]
    // str r0, [sp]
    // ldr r0, [sp, #8]
    // str r0, [sp, #4]
    // add r0, #0x60
}




void ov102_021EC05C(void) {
    // add r0, #0x60
}




void ov102_021EC090(void) {
    // add r0, #0x8c
    // add r0, #0x78
    // add r0, r3, r0
    // add r0, #0x8c
    // add r0, r4, r0
    // str r0, [sp]
    // sub r0, r4, r3
    // add r5, #0x10
    // str r0, [sp, #4]
    // str r0, [sp]
    // add r0, #0x30
    // sub r0, r0, r3
    // str r0, [sp, #4]
    // add r0, #0x10
    // str r0, [sp]
    // add r5, #0x10
    // str r0, [sp, #4]
}




void ov102_021EC11C(void) {
}




void ov102_021EC13C(void) {
    ov102_021E8FFC(*((u32*)(r0 + 4)), *((u32*)(r0 + 0x3c)));
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // and r4, r3
    // add r0, #0x10
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x3c)), (0x70 * r7));
    // sub r6, r0, r4
    // add r0, #0x20
    FillWindowPixelBuffer(r5, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // add r0, #0x20
    AddTextPrinterParameterizedWithColor(r5, 0, *((u32*)(r5 + 0x3c)), 0);
    // and r1, r0
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r1, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x10
    BlitBitmapRectToWindow(r5, *((u32*)(r5 + 0x2c)), 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r2, [sp, #8]
    // sub r0, r0, r6
    // str r2, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    // add r0, #0x10
    BlitBitmapRectToWindow(r5, *((u32*)(r5 + 0x2c)), 0, ((r6 << 0x10) >> 0x10));
}




void ov102_021EC20C(void) {
}




void ov102_021EC240(void) {
}




void ov102_021EC248(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
}




void ov102_021EC290(void) {
    // bx lr
    // TODO: decompile
}




void ov102_021EC294(void) {
    // bx lr
    // TODO: decompile
}




void ov102_021EC298(void) {
    // str r1, [r4]
    *((u32*)(r0 + 4)) = r2;
    Bg_GetXpos(r1, r2);
    *((u32*)(r4 + 0xc)) = r0;
    Bg_GetYpos(r1, r2);
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 8)) = 3;
    // ldr r0, [sp, #8]
    // add r2, r1, r0
    // and r1, r2
    *((u32*)(r4 + 0x10)) = 0x000001FF;
    *((u32*)(r4 + 0xc)) = (*((u32*)(r4 + 0xc)) << 0xc);
    // ldr r1, [sp, #0xc]
    _s32_div_f((3 << 0xc), (*((u32*)(r4 + 0xc)) << 0xc));
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #0xc]
    *((u16*)(r4 + 0x18)) = r0;
    *((u16*)(r4 + 0x1a)) = 0;
}




void ov102_021EC2EC(void) {
    ov102_021E93D4(ov102_021EC338, r0, 0);
    *((u32*)(r4 + 0x1c)) = r0;
    *((u16*)(r4 + 0x1a)) = (*((u16*)(r4 + 0x1a)) + 1);
    SysTask_Destroy(*((u32*)(r4 + 0x1c)));
    *((u16*)(r4 + 0x1a)) = (*((u16*)(r4 + 0x1a)) + 1);
}




void ov102_021EC338(void) {
    // add r3, r1, r0
    // asr r3, r3, #0xc
}




void ov102_021EC37C(void) {
    // str r1, [r4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    *((u32*)(r0 + 4)) = r2;
    *((u32*)(r0 + 0x14)) = r1;
    *((u32*)(r0 + 8)) = r3;
    // sub r0, r0, r3
    _s32_div_f();
    *((u32*)(r4 + 0x10)) = r0;
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r4 + 0x18)) = 0;
    ov102_021E93D4(ov102_021EC3D4, r4, 0);
    *((u32*)(r4 + 0x1c)) = r0;
}




void ov102_021EC3AC(void) {
}




void ov102_021EC3D4(void) {
    // add r0, r1, r0
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 0x10));
    // asr r3, r0, #3
    *((u32*)(r1 + 0x14)) = (*((u32*)(r1 + 0x14)) - 1);
    // asr r3, r0, #3
    // sub r0, r0, r3
    // str r0, [sp]
    // ldmia r2!, {r1, r2}
    G2x_SetBlendAlpha_(0x04000050, *((u32*)(r1 + 8)), r1, 0x10);
}




void ov102_021EC410(void) {
    G2x_SetBlendBrightness_(0x04000050);
    // ldr r1, [sp, #0x18]
    // str r4, [r5]
    *((u32*)(r5 + 0x14)) = r1;
    *((u32*)(r5 + 8)) = (r6 << 0xc);
    *((u32*)(r5 + 0xc)) = (r7 << 0xc);
    // sub r0, r2, r0
    _s32_div_f(*((u32*)(r5 + 8)), (r7 << 0xc));
    *((u32*)(r5 + 0x10)) = r0;
    *((u32*)(r5 + 0x18)) = 0;
    ov102_021E93D4(ov102_021EC478, r5, 0);
    *((u32*)(r5 + 0x1c)) = r0;
}




void ov102_021EC450(void) {
}




void ov102_021EC478(void) {
    // add r0, r2, r0
    *((u32*)(r1 + 8)) = *((u32*)(r1 + 0x10));
    // asr r2, r0, #0xc
    *((u32*)(r1 + 0x14)) = (*((u32*)(r1 + 0x14)) - 1);
    // asr r2, r0, #0xc
}




u8 ov102_021EC4A4(void) {
}




void ov102_021EC4A8(void) {
    GF_AssertFail();
    // add r1, r2, r1
    CopyU16ArrayToStringN(r5, (0xa * r4), 2);
}




void ov102_021EC4CC(void) {
    GF_AssertFail();
    // str r0, [r4]
    // str r0, [r6]
}




void ov102_021EC4F8(void) {
}




void ov102_021EC514(void) {
}




void ov102_021EC530(void) {
}




void ov102_021EC54C(void) {
}




void ov102_021EC568(void) {
}




void ov102_021EC584(void) {
}




void ov102_021EC5A0(void) {
    // add r2, #0x10
    // add r2, #0x10
    // add r4, #0xa
    // mvn r0, r0
}



