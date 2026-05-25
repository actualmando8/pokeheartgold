/* Decompiled from asm/overlay_01_021F944C.s */
#include "global.h"

void ov01_021F944C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // mov r2, #0x41
    // add r5, r0, #0
    // lsl r2, r2, #2
    // str r1, [r5, r2]
    // add r1, r4, #0
    // bl ov01_021FA2EC
    // ldr r2, [sp, #0x24]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA854
    // mov r2, #4
    // mov r1, #8
    // ldr r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // add r3, r1, #0
    // str r0, [sp, #8]
    // add r0, r5, #0
    // bl ov01_021F9808
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9698
    // ldr r1, [sp, #0x20]
    // ldr r2, _021F9498 ; =ov01_02207260
    // ldr r3, _021F949C ; =ov01_02206CF0
    // add r0, r5, #0
    // bl ov01_021F9A8C
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _021F9498: .word ov01_02207260
    // _021F949C: .word ov01_02206CF0
    // TODO: decompile
}


void ov01_021F94A0(void) {
    ov01_021FA8F8();
    ov01_021F96E4(r4);
    ov01_021FA1D0(r4);
    ov01_021FA314();
    ov01_021F9890(r4);
}


void ov01_021F94C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r1, #0
    // add r6, r2, #0
    // add r7, r0, #0
    // str r1, [r5]
    // bl ov01_021FA3DC
    // add r1, r6, #0
    // str r0, [sp]
    // bl ov01_021F9DA4
    // add r4, r0, #0
    // bne _021F94EA
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r6, #0
    // bl ov01_021F9654
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // sub r0, r4, #3
    // cmp r0, #1
    // bhi _021F9500
    // ldr r0, [sp]
    // add r1, r7, #0
    // add r2, r5, #0
    // add r3, r6, #0
    // bl ov01_021FA75C
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, r6, #0
    // bl ov01_021F9528
    // str r0, [r5]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9510(void) {
    MapObject_GetSpriteID();
    ov01_021F94C0(r5, r4, r0);
}


void ov01_021F9528(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r0, #0
    // add r5, r1, #0
    // bl ov01_021FA3DC
    // add r4, r0, #0
    // bl ov01_021FA1D0
    // add r7, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F9F84
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F9704
    // add r4, r0, #0
    // bne _021F9554
    // bl GF_AssertFail
    // add r0, r6, #0
    // add r1, sp, #0
    // bl ov01_021F93AC
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, sp, #0
    // bl ov01_021FA31C
    // add r4, r0, #0
    // bne _021F956E
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9574(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // add r4, r2, #0
    // bl sub_02023DA4
    // mov r0, #0
    // str r0, [r5]
    // add r0, r6, #0
    // bl MapObject_GetManager
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov01_021F97BC
    // cmp r0, #0
    // bne _021F95A4
    // add r0, r6, #0
    // bl ov01_021FA3DC
    // add r1, r4, #0
    // bl ov01_021F9778
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F95A8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // bl ov01_021F9688
    // ldr r0, [r4]
    // cmp r0, #0
    // beq _021F95C8
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9574
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F95CC(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r4, r2, #0
    // bl ov01_021F9688
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _021F95E6
    // bl sub_02023DA4
    // mov r0, #0
    // str r0, [r5]
    // ldr r0, _021F960C ; =0x0000FFFF
    // cmp r4, r0
    // beq _021F960A
    // add r0, r6, #0
    // bl MapObject_GetManager
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov01_021F97BC
    // cmp r0, #0
    // bne _021F960A
    // add r0, r6, #0
    // bl ov01_021FA3DC
    // add r1, r4, #0
    // bl ov01_021F9778
    // pop {r4, r5, r6, pc}
    // _021F960C: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9610(void) {
    sub_02023EB8();
    sub_02023EF4(r5);
    *((u16*)(r4 + 6)) = r0;
    sub_02023F30(r5);
    *((u32*)(r4 + 8)) = r0;
}


void ov01_021F9630(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // add r5, r0, #0
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // bl sub_02023EA4
    // ldrh r1, [r4, #6]
    // add r0, r5, #0
    // bl sub_02023EE0
    // ldr r1, [r4, #8]
    // add r0, r5, #0
    // bl sub_02023F1C
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9654(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA3DC
    // add r1, r6, #0
    // add r7, r0, #0
    // bl ov01_021F9974
    // cmp r0, #0
    // bne _021F9678
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021F9528
    // str r0, [r4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl ov01_021FA75C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9688(void) {
    ov01_021FA3DC();
    ov01_021FA798(r4);
}


void ov01_021F9698(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // mov r1, #0x28
    // add r7, r0, #0
    // mov r0, #4
    // mul r1, r5
    // bl Heap_Alloc
    // add r6, r0, #0
    // add r0, r7, #0
    // add r0, #0xe4
    // str r6, [r0]
    // cmp r6, #0
    // bne _021F96B8
    // bl GF_AssertFail
    // mov r0, #4
    // lsl r1, r5, #3
    // bl Heap_Alloc
    // add r4, r0, #0
    // add r7, #0xf4
    // str r4, [r7]
    // cmp r4, #0
    // bne _021F96CE
    // bl GF_AssertFail
    // ldr r0, _021F96E0 ; =0x0000FFFF
    // str r0, [r4]
    // str r6, [r4, #4]
    // add r4, #8
    // add r6, #0x28
    // sub r5, r5, #1
    // bne _021F96D0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F96E0: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F96E4(void) {
    ov01_021F9798();
    Heap_FreeExplicit(4, r4);
    Heap_FreeExplicit(4);
}


void ov01_021F9704(void) {
    // push {r4, r5, r6, lr}
    // add r2, r0, #0
    // add r2, #0xf4
    // ldr r4, [r2]
    // ldr r2, [r0, #4]
    // add r6, r4, #0
    // add r5, r2, #0
    // ldr r3, [r6]
    // cmp r3, r1
    // bne _021F971C
    // ldr r0, [r6, #4]
    // pop {r4, r5, r6, pc}
    // add r6, #8
    // sub r5, r5, #1
    // bne _021F9712
    // ldr r3, _021F9740 ; =0x0000FFFF
    // ldr r5, [r4]
    // cmp r5, r3
    // bne _021F9736
    // str r1, [r4]
    // ldr r2, [r4, #4]
    // bl ov01_021FA370
    // ldr r0, [r4, #4]
    // pop {r4, r5, r6, pc}
    // add r4, #8
    // sub r2, r2, #1
    // bne _021F9724
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _021F9740: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9744(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl sub_0205F1A0
    // add r1, r0, #0
    // add r1, #0xf4
    // ldr r2, [r1]
    // ldr r1, [r0, #4]
    // ldr r0, [r2]
    // cmp r0, r5
    // bne _021F976C
    // ldr r3, [r2, #4]
    // mov r2, #5
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // sub r2, r2, #1
    // bne _021F9760
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r2, #8
    // sub r1, r1, #1
    // bne _021F9756
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9778(void) {
    // add r2, r0, #0
    // add r2, #0xf4
    // ldr r3, [r2]
    // ldr r2, [r0, #4]
    // ldr r0, [r3]
    // cmp r0, r1
    // bne _021F978C
    // ldr r0, _021F9794 ; =0x0000FFFF
    // str r0, [r3]
    // bx lr
    // add r3, #8
    // sub r2, r2, #1
    // bne _021F9780
    // bx lr
    // _021F9794: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9798(void) {
    // push {r3, r4}
    // add r1, r0, #0
    // add r1, #0xf4
    // ldr r4, [r1]
    // ldr r1, _021F97B8 ; =0x0000FFFF
    // ldr r3, [r0, #4]
    // add r0, r1, #0
    // ldr r2, [r4]
    // cmp r2, r0
    // beq _021F97AE
    // str r1, [r4]
    // add r4, #8
    // sub r3, r3, #1
    // bne _021F97A6
    // pop {r3, r4}
    // bx lr
    // _021F97B8: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F97BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r6, r2, #0
    // bl MapObjectManager_GetObjectCount
    // add r4, r0, #0
    // add r0, r7, #0
    // bl MapObjectManager_GetObjects2
    // ldr r7, _021F9804 ; =0x0000FFFF
    // str r0, [sp]
    // ldr r0, [sp]
    // cmp r0, r5
    // beq _021F97F4
    // bl MapObject_CheckActive
    // cmp r0, #1
    // bne _021F97F4
    // ldr r0, [sp]
    // bl MapObject_GetSpriteID
    // cmp r0, r7
    // beq _021F97F4
    // cmp r0, r6
    // bne _021F97F4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, sp, #0
    // bl MapObjectArray_NextObject
    // sub r4, r4, #1
    // bne _021F97D4
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F9804: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9808(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // add r6, r2, #0
    // add r7, r3, #0
    // mov r0, #4
    // mov r1, #0x3f
    // lsl r2, r4, #0xc
    // add r3, r4, #0
    // bl ov01_021FC4C4
    // add r1, r5, #0
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, r5, #0
    // bl ov01_021F9B00
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021FA208
    // add r0, r5, #0
    // sub r1, r4, r6
    // bl ov01_021FA210
    // mov r0, #4
    // mov r1, #0x40
    // lsl r2, r7, #7
    // add r3, r7, #0
    // bl ov01_021FC4C4
    // add r1, r5, #0
    // add r1, #0xfc
    // str r0, [r1]
    // add r0, r5, #0
    // bl ov01_021F9C24
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // bl ov01_021FA218
    // ldr r1, [sp, #0x18]
    // add r0, r5, #0
    // sub r1, r7, r1
    // bl ov01_021FA220
    // ldr r0, [sp, #0x1c]
    // mov r1, #4
    // bl GF3dGfxRawResMan_Create
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA1EC
    // add r0, r5, #0
    // bl ov01_021F9D48
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // bl ov01_021FA228
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // sub r1, r2, r1
    // bl ov01_021FA230
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9890(void) {
    ov01_021FC520();
    ov01_021FC520(r4);
    ov01_021FA1F4(r4);
    GF3dGfxRawResMan_Destroy();
}


void ov01_021F98B4(void) {
    // ldrh r3, [r2]
    // cmp r3, r0
    // bne _021F98BE
    // add r0, r2, #0
    // bx lr
    // add r2, r2, #4
    // ldrh r3, [r2]
    // cmp r3, r1
    // bne _021F98B4
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F98CC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r4, r2, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r7, r3, #0
    // bl ov01_021FC5B8
    // cmp r0, #1
    // bne _021F98E6
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r2, [sp, #0x18]
    // add r0, r4, #0
    // add r1, r7, #0
    // bl ov01_021F98B4
    // add r7, r0, #0
    // bne _021F98F8
    // bl GF_AssertFail
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl MapObjectManager_GetMapModelNarc
    // add r2, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldrh r3, [r7, #2]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov01_021FC5CC
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9918(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r0, #0xf0
    // add r4, r2, #0
    // add r6, r1, #0
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl GF3dGfxRawResMan_DoesNotHaveObjWithId
    // cmp r0, #0
    // bne _021F9932
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA524
    // cmp r0, #0
    // beq _021F9942
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl GetMoveModelNoBySpriteId
    // add r2, r0, #0
    // bpl _021F9950
    // mov r0, #2
    // pop {r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r6, #0
    // bl ov01_021FA470
    // cmp r0, #1
    // bne _021F9962
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F9968(void) {
    ov01_021F9918();
}


void ov01_021F9974(void) {
    ov01_021F9918();
}


void ov01_021F9980(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r1, [r4]
    // ldr r0, _021F99A0 ; =0x0000FFFF
    // cmp r1, r0
    // beq _021F999E
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021F9968
    // add r4, r4, #4
    // ldr r1, [r4]
    // cmp r1, r6
    // bne _021F9990
    // pop {r4, r5, r6, pc}
    // _021F99A0: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F99A4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA1DC
    // ldr r0, _021F99CC ; =ov01_02207294
    // add r1, r5, #0
    // str r0, [sp]
    // add r1, #0xf8
    // ldr r1, [r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0xff
    // bl ov01_021F98CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9B10
    // pop {r3, r4, r5, pc}
    // _021F99CC: .word ov01_02207294
    // TODO: decompile
}


void ov01_021F99D0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA1DC
    // ldr r0, _021F99F8 ; =ov01_02207294
    // add r1, r5, #0
    // str r0, [sp]
    // add r1, #0xf8
    // ldr r1, [r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0xff
    // bl ov01_021F98CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9B54
    // pop {r3, r4, r5, pc}
    // _021F99F8: .word ov01_02207294
    // TODO: decompile
}


void ov01_021F99FC(void) {
    ov01_021F99A4();
}


void ov01_021F9A18(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA1E4
    // ldr r0, _021F9A40 ; =ov01_022072CC
    // add r1, r5, #0
    // str r0, [sp]
    // add r1, #0xfc
    // ldr r1, [r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0xff
    // bl ov01_021F98CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9C34
    // pop {r3, r4, r5, pc}
    // _021F9A40: .word ov01_022072CC
    // TODO: decompile
}


void ov01_021F9A44(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA1E4
    // ldr r0, _021F9A6C ; =ov01_022072CC
    // add r1, r5, #0
    // str r0, [sp]
    // add r1, #0xfc
    // ldr r1, [r1]
    // add r0, r5, #0
    // add r2, r4, #0
    // mov r3, #0xff
    // bl ov01_021F98CC
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9C78
    // pop {r3, r4, r5, pc}
    // _021F9A6C: .word ov01_022072CC
    // TODO: decompile
}


void ov01_021F9A70(void) {
    ov01_021F9A18();
}


void ov01_021F9A8C(void) {
    ov01_021F9980();
    ov01_021F99FC(r5, r4);
    ov01_021F9A70(r5, r6);
}


void ov01_021F9AAC(void) {
    // stmia r0!, {r1}
    // sub r2, r2, #1
    // bne _021F9AAC
    // bx lr
    // TODO: decompile
}


void ov01_021F9AB4(void) {
    // push {r3, r4}
    // ldr r4, [r0]
    // cmp r4, r2
    // bne _021F9AC4
    // str r1, [r0]
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // add r0, r0, #4
    // sub r3, r3, #1
    // bne _021F9AB6
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021F9AD0(void) {
    // ldr r3, [r0]
    // cmp r3, r1
    // bne _021F9ADA
    // mov r0, #1
    // bx lr
    // add r0, r0, #4
    // sub r2, r2, #1
    // bne _021F9AD0
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F9AE4(void) {
    // push {r3, r4}
    // ldr r4, [r0]
    // cmp r4, r1
    // bne _021F9AF4
    // str r2, [r0]
    // mov r0, #1
    // pop {r3, r4}
    // bx lr
    // add r0, r0, #4
    // sub r3, r3, #1
    // bne _021F9AE6
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021F9B00(void) {
    ov01_021FA200();
    ov01_021F9AAC(0xff, 8);
}


void ov01_021F9B10(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA20C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA200
    // add r1, r4, #0
    // mov r2, #0xff
    // add r3, r6, #0
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9B34
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F9B38(void) {
    ov01_021FA20C();
    ov01_021FA200(r5);
    ov01_021F9AD0(r4, r6);
}


void ov01_021F9B54(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA200
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA20C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA214
    // add r3, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // mov r2, #0xff
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9B82
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9B84(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA200
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA20C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA214
    // add r2, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // bl ov01_021F9AD0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9BAC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA200
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA20C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA214
    // add r3, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // mov r2, #0xff
    // bl ov01_021F9AE4
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9BD4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r0, #0
    // add r0, r6, #0
    // bl ov01_021FA1DC
    // add r0, r6, #0
    // bl ov01_021FA200
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov01_021FA20C
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, r6, #0
    // bl ov01_021FA214
    // add r4, r0, #0
    // ldr r1, [r5]
    // cmp r1, #0xff
    // beq _021F9C1C
    // add r0, r7, #0
    // mov r2, #0
    // bl ov01_021FA01C
    // cmp r0, #0
    // bne _021F9C1C
    // add r0, r6, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // ldr r1, [r5]
    // bl ov01_021FC588
    // mov r0, #0xff
    // str r0, [r5]
    // add r5, r5, #4
    // sub r4, r4, #1
    // bne _021F9BFA
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9C24(void) {
    ov01_021FA204();
    ov01_021F9AAC(0xff, 8);
}


void ov01_021F9C34(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA21C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA204
    // add r1, r4, #0
    // mov r2, #0xff
    // add r3, r6, #0
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9C58
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F9C5C(void) {
    ov01_021FA21C();
    ov01_021FA204(r5);
    ov01_021F9AD0(r4, r6);
}


void ov01_021F9C78(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA204
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA21C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA224
    // add r3, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // mov r2, #0xff
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9CA6
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9CA8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA204
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA21C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA224
    // add r2, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // bl ov01_021F9AD0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9CD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA204
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA21C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA224
    // add r3, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // mov r2, #0xff
    // bl ov01_021F9AE4
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9CF8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r7, r0, #0
    // add r0, r6, #0
    // bl ov01_021FA1E4
    // add r0, r6, #0
    // bl ov01_021FA204
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov01_021FA21C
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, r6, #0
    // bl ov01_021FA224
    // add r4, r0, #0
    // ldr r1, [r5]
    // cmp r1, #0xff
    // beq _021F9D40
    // add r0, r7, #0
    // mov r2, #0
    // bl ov01_021FA094
    // cmp r0, #0
    // bne _021F9D40
    // add r0, r6, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // ldr r1, [r5]
    // bl ov01_021FC588
    // mov r0, #0xff
    // str r0, [r5]
    // add r5, r5, #4
    // sub r4, r4, #1
    // bne _021F9D1E
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9D48(void) {
    // push {r3, lr}
    // bl ov01_021FA1FC
    // ldr r1, _021F9D58 ; =0x0000FFFF
    // mov r2, #0x20
    // bl ov01_021F9AAC
    // pop {r3, pc}
    // _021F9D58: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9D5C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA22C
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA1FC
    // ldr r2, _021F9D84 ; =0x0000FFFF
    // add r1, r4, #0
    // add r3, r6, #0
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9D80
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // nop
    // _021F9D84: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9D88(void) {
    ov01_021FA22C();
    ov01_021FA1FC(r5);
    ov01_021F9AD0(r4, r6);
}


void ov01_021F9DA4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9D88
    // cmp r0, #1
    // bne _021F9DB6
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9E9C
    // cmp r0, #1
    // bne _021F9DC6
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA524
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9DD0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA1FC
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA22C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA234
    // add r3, r0, #0
    // ldr r2, _021F9E00 ; =0x0000FFFF
    // add r0, r6, r4
    // add r1, r7, #0
    // bl ov01_021F9AB4
    // cmp r0, #0
    // bne _021F9DFE
    // bl GF_AssertFail
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F9E00: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9E04(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA1FC
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA22C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA234
    // add r3, r0, #0
    // ldr r2, _021F9E2C ; =0x0000FFFF
    // add r0, r6, r4
    // add r1, r7, #0
    // bl ov01_021F9AE4
    // pop {r3, r4, r5, r6, r7, pc}
    // _021F9E2C: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9E30(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // str r0, [sp]
    // add r0, r6, #0
    // bl ov01_021FA1F4
    // str r0, [sp, #4]
    // add r0, r6, #0
    // bl ov01_021FA1FC
    // add r4, r0, #0
    // add r0, r6, #0
    // bl ov01_021FA22C
    // lsl r0, r0, #2
    // add r5, r4, r0
    // add r0, r6, #0
    // bl ov01_021FA234
    // add r7, r0, #0
    // ldr r4, [r5]
    // ldr r0, _021F9E98 ; =0x0000FFFF
    // cmp r4, r0
    // beq _021F9E8C
    // ldr r0, [sp]
    // add r1, r4, #0
    // mov r2, #0
    // bl ov01_021F9FCC
    // cmp r0, #0
    // bne _021F9E8C
    // ldr r0, [sp, #4]
    // add r1, r4, #0
    // bl GF3dGfxRawResMan_FreeObjById
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov01_021FA4F0
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov01_021FA6A4
    // ldr r0, _021F9E98 ; =0x0000FFFF
    // str r0, [r5]
    // add r5, r5, #4
    // sub r7, r7, #1
    // bne _021F9E5A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021F9E98: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021F9E9C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r7, r1, #0
    // bl ov01_021FA1FC
    // add r6, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA22C
    // lsl r4, r0, #2
    // add r0, r5, #0
    // bl ov01_021FA234
    // add r2, r0, #0
    // add r0, r6, r4
    // add r1, r7, #0
    // bl ov01_021F9AD0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F9EC4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9D88
    // cmp r0, #1
    // bne _021F9ED6
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9E9C
    // cmp r0, #1
    // bne _021F9EE6
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9EEC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9B38
    // cmp r0, #1
    // bne _021F9EFE
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9B84
    // cmp r0, #1
    // bne _021F9F0E
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9F14(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9C5C
    // cmp r0, #1
    // bne _021F9F26
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9CA8
    // cmp r0, #1
    // bne _021F9F36
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9F3C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9DA4
    // cmp r0, #0
    // bne _021F9F52
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9974
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9F54(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9EEC
    // cmp r0, #2
    // bne _021F9F6A
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F99D0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9F6C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F9F14
    // cmp r0, #2
    // bne _021F9F82
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9A44
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F9F84(void) {
    ov01_021FA28C(r1);
    ov01_021F9F54(r5, r0);
    ov01_021FA2A0(r4);
    ov01_021F9F6C(r5, r0);
    ov01_021F9F3C(r5, r4);
}


void ov01_021F9FB0(void) {
    ov01_021F9BD4();
    ov01_021F9CF8(r5, r4);
    ov01_021F9E30(r5, r4);
}


void ov01_021F9FCC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // mov r1, #0
    // add r4, r2, #0
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // add r6, r0, #0
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // bne _021FA016
    // add r7, sp, #0
    // cmp r4, #0
    // beq _021F9FF6
    // ldr r0, [sp]
    // cmp r4, r0
    // beq _021FA006
    // ldr r0, [sp]
    // bl MapObject_GetSpriteID
    // cmp r0, r5
    // bne _021FA006
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r6, #0
    // add r1, r7, #0
    // add r2, sp, #4
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // beq _021F9FEC
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA01C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // mov r1, #0
    // add r5, r2, #0
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // add r7, r0, #0
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // bne _021FA088
    // cmp r5, #0
    // beq _021FA044
    // ldr r0, [sp]
    // cmp r5, r0
    // beq _021FA078
    // ldr r0, [sp]
    // bl MapObject_GetSpriteID
    // add r4, r0, #0
    // ldr r0, _021FA090 ; =0x0000FFFF
    // cmp r4, r0
    // beq _021FA078
    // ldr r0, [sp]
    // bl ov01_021F9318
    // ldrh r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _021FA078
    // ldr r0, _021FA090 ; =0x0000FFFF
    // cmp r4, r0
    // beq _021FA078
    // add r0, r4, #0
    // bl ov01_021FA28C
    // cmp r6, r0
    // bne _021FA078
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // beq _021FA03A
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FA090: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021FA094(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r6, r1, #0
    // mov r1, #0
    // add r5, r2, #0
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // add r7, r0, #0
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // bne _021FA0FE
    // cmp r5, #0
    // beq _021FA0BC
    // ldr r0, [sp]
    // cmp r0, r5
    // beq _021FA0EE
    // ldr r0, _021FA104 ; =0x0000FFFF
    // cmp r4, r0
    // beq _021FA0EE
    // ldr r0, [sp]
    // bl ov01_021F9318
    // ldrh r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1c
    // cmp r0, #1
    // bne _021FA0EE
    // ldr r0, [sp]
    // bl MapObject_GetSpriteID
    // ldr r1, _021FA104 ; =0x0000FFFF
    // add r4, r0, #0
    // cmp r4, r1
    // beq _021FA0EE
    // bl ov01_021FA2A0
    // cmp r6, r0
    // bne _021FA0EE
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, sp, #0
    // add r2, sp, #4
    // mov r3, #1
    // bl MapObjectManager_GetNextObjectWithFlagFromIndex
    // cmp r0, #1
    // beq _021FA0B2
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _021FA104: .word 0x0000FFFF
    // TODO: decompile
}


void ov01_021FA108(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r6, r0, #0
    // add r7, r2, #0
    // bl sub_0205F1A0
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA28C
    // str r0, [sp]
    // ldr r1, [sp]
    // add r0, r4, #0
    // bl ov01_021F9EEC
    // cmp r0, #1
    // bne _021FA14E
    // ldr r1, [sp]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov01_021FA01C
    // cmp r0, #0
    // bne _021FA14E
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // ldr r1, [sp]
    // bl ov01_021FC588
    // ldr r1, [sp]
    // add r0, r4, #0
    // bl ov01_021F9BAC
    // add r0, r5, #0
    // bl ov01_021FA2A0
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov01_021F9F14
    // cmp r0, #1
    // bne _021FA184
    // ldr r1, [sp, #4]
    // add r0, r6, #0
    // add r2, r7, #0
    // bl ov01_021FA094
    // cmp r0, #0
    // bne _021FA184
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // ldr r1, [sp, #4]
    // bl ov01_021FC588
    // ldr r1, [sp, #4]
    // add r0, r4, #0
    // bl ov01_021F9CD0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F9EC4
    // cmp r0, #1
    // bne _021FA1C2
    // add r0, r6, #0
    // add r1, r5, #0
    // add r2, r7, #0
    // bl ov01_021F9FCC
    // cmp r0, #0
    // bne _021FA1C2
    // add r0, r4, #0
    // bl ov01_021FA1F4
    // add r1, r5, #0
    // bl GF3dGfxRawResMan_FreeObjById
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021F9E04
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021FA4F0
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021FA6A4
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA1C8(void) {
    // add r0, #0xe0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1D0(void) {
    // add r0, #0xe0
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1D8(void) {
    ((u32*)r0)[4] = r1;
}


void ov01_021FA1DC(void) {
    // add r0, #0xe8
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1E4(void) {
    // add r0, #0xec
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1EC(void) {
    // add r0, #0xf0
    // str r1, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1F4(void) {
    // add r0, #0xf0
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021FA1FC(void) {
    // add r0, #0x60
    // bx lr
    // TODO: decompile
}


void ov01_021FA200(void) {
    // add r0, #0x20
    // bx lr
    // TODO: decompile
}


void ov01_021FA204(void) {
    // add r0, #0x40
    // bx lr
    // TODO: decompile
}


void ov01_021FA208(void) {
    ((u32*)r0)[8] = r1;
}


void ov01_021FA20C(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}


void ov01_021FA210(void) {
    ((u32*)r0)[0xc] = r1;
}


void ov01_021FA214(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}


void ov01_021FA218(void) {
    ((u32*)r0)[0x10] = r1;
}


void ov01_021FA21C(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void ov01_021FA220(void) {
    ((u32*)r0)[0x14] = r1;
}


void ov01_021FA224(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}


void ov01_021FA228(void) {
    ((u32*)r0)[0x18] = r1;
}


void ov01_021FA22C(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}


void ov01_021FA230(void) {
    ((u32*)r0)[0x1c] = r1;
}


void ov01_021FA234(void) {
    // ldr r0, [r0, #0x1c]
    // bx lr
    // TODO: decompile
}


void FldObjSys_ReadMModelFromNarc(void) {
    // mov r3, #0x41
    // lsl r3, r3, #2
    // ldr r0, [r0, r3]
    // ldr r3, _021FA244 ; =ReadMModelFromNarcInternal
    // bx r3
    // nop
    // _021FA244: .word ReadMModelFromNarcInternal
    // TODO: decompile
}


void sub_021FA248(void) {
    // push {r3, lr}
    // ldr r3, _021FA280 ; =ov01_022074A8
    // ldr r1, _021FA284 ; =0x0000FFFF
    // ldrh r2, [r3]
    // cmp r2, r0
    // bne _021FA270
    // ldrh r0, [r3, #4]
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x1a
    // cmp r0, #0xff ; Never eq due to data type limitations
    // bne _021FA268
    // bne _021FA264
    // bl GF_AssertFail
    // ldr r0, _021FA288 ; =ov01_02207318
    // pop {r3, pc}
    // ldr r1, _021FA288 ; =ov01_02207318
    // lsl r0, r0, #3
    // add r0, r1, r0
    // pop {r3, pc}
    // add r3, r3, #6
    // ldrh r2, [r3]
    // cmp r2, r1
    // bne _021FA24E
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // _021FA280: .word ov01_022074A8
    // _021FA284: .word 0x0000FFFF
    // _021FA288: .word ov01_02207318
    // TODO: decompile
}


void ov01_021FA28C(void) {
    sub_021FA248();
}


void ov01_021FA298(void) {
    ov01_021FA28C();
}


void ov01_021FA2A0(void) {
    sub_021FA248();
}


void ov01_021FA2AC(void) {
    sub_021FA248();
}


void ov01_021FA2B8(void) {
    // push {r3, lr}
    // cmp r1, #1
    // bne _021FA2C8
    // mov r1, #1
    // lsl r1, r1, #0x16
    // bl MapObject_SetFlagsBits
    // pop {r3, pc}
    // mov r1, #1
    // lsl r1, r1, #0x16
    // bl MapObject_ClearFlagsBits
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021FA2D4(void) {
    MapObject_GetFlagsBitsMask(0, 1, 1);
}


void ov01_021FA2EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #4
    // add r4, r1, #0
    // str r0, [sp, #4]
    // add r0, sp, #0
    // str r4, [sp]
    // bl sub_020237EC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov01_021FA1C8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA1D8
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FA314(void) {
    sub_02023874();
}


void ov01_021FA31C(void) {
    // push {r4, lr}
    // sub sp, #0x20
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldmia r2!, {r0, r1}
    // add r3, sp, #8
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // add r2, sp, #0x14
    // str r0, [r3]
    // ldr r3, _021FA36C ; =ov01_02208B64
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, sp, #0
    // bl sub_02023D44
    // add r4, r0, #0
    // beq _021FA364
    // mov r1, #0
    // bl sub_02023EA4
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023EE0
    // add r0, r4, #0
    // mov r1, #0
    // bl sub_02023F40
    // add r0, r4, #0
    // bl sub_02023F90
    // bl ov01_021EA3B0
    // add r0, r4, #0
    // add sp, #0x20
    // pop {r4, pc}
    // nop
    // _021FA36C: .word ov01_02208B64
    // TODO: decompile
}


void ov01_021FA370(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // add r0, r5, #0
    // add r4, r2, #0
    // bl ov01_021FA28C
    // add r1, r0, #0
    // add r0, r6, #0
    // add r0, #0xf8
    // ldr r0, [r0]
    // bl ov01_021FC5A4
    // str r0, [r4]
    // add r0, r5, #0
    // bl ov01_021FA2A0
    // add r1, r0, #0
    // add r0, r6, #0
    // add r0, #0xfc
    // ldr r0, [r0]
    // bl ov01_021FC5A4
    // add r1, r4, #0
    // add r1, #0xc
    // bl sub_02026E18
    // add r0, r6, #0
    // bl ov01_021FA1F4
    // add r1, r5, #0
    // bl GF3dGfxRawResMan_GetObjById
    // add r6, r0, #0
    // bl GF3dGfxRawResObj_GetTex
    // str r0, [r4, #4]
    // add r0, r6, #0
    // bl GF3dGfxRawResObj_GetTexKey
    // str r0, [r4, #0x1c]
    // add r0, r6, #0
    // bl GF3dGfxRawResObj_GetTex4x4Key
    // str r0, [r4, #0x20]
    // add r0, r6, #0
    // bl GF3dGfxRawResObj_GetPlttKey
    // str r0, [r4, #0x24]
    // add r0, r5, #0
    // bl ov01_021FA2AC
    // str r0, [r4, #8]
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FA3DC(void) {
    MapObject_GetManager();
    sub_0205F1A0();
}


void ov01_021FA3E8(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r1, #0
    // add r1, sp, #0
    // bl ov01_021F93AC
    // mov r0, #6
    // ldr r1, [sp, #8]
    // lsl r0, r0, #0xc
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, r4, #0
    // add r1, sp, #0
    // bl sub_02023E50
    // mov r0, #0
    // add sp, #0xc
    // pop {r3, r4, pc}
    // TODO: decompile
}


void ov01_021FA40C(void) {
    // push {r4, r5, r6, lr}
    // mov r4, #1
    // add r6, r1, #0
    // lsl r1, r4, #9
    // add r5, r0, #0
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FA420
    // mov r4, #0
    // mov r1, #1
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // bne _021FA43E
    // mov r1, #2
    // add r0, r5, #0
    // lsl r1, r1, #0xc
    // bl MapObject_TestFlagsBits
    // cmp r0, #0
    // bne _021FA43E
    // mov r4, #0
    // lsl r1, r4, #0x18
    // add r0, r6, #0
    // lsr r1, r1, #0x18
    // bl sub_02023EA4
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FA44C(void) {
    // lsl r1, r0, #2
    // ldr r0, _021FA454 ; =ov01_02208B70
    // ldr r0, [r0, r1]
    // bx lr
    // _021FA454: .word ov01_02208B70
    // TODO: decompile
}


void ov01_021FA458(void) {
    // lsl r1, r0, #2
    // ldr r0, _021FA460 ; =ov01_02208B80
    // ldr r0, [r0, r1]
    // bx lr
    // _021FA460: .word ov01_02208B80
    // TODO: decompile
}


void ov01_021FA464(void) {
    // lsl r1, r0, #2
    // ldr r0, _021FA46C ; =ov01_02208B90
    // ldr r0, [r0, r1]
    // bx lr
    // _021FA46C: .word ov01_02208B90
    // TODO: decompile
}


void ov01_021FA470(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r4, [r5, r0]
    // mov r0, #4
    // add r6, r1, #0
    // ldrsh r1, [r4, r0]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // add r7, r2, #0
    // str r3, [sp]
    // cmp r1, r0
    // bge _021FA49A
    // add r0, r5, #0
    // add r0, #0xe0
    // ldr r0, [r0]
    // bl sub_020238F8
    // cmp r0, #1
    // bne _021FA4CC
    // mov r2, #0
    // ldrsh r3, [r4, r2]
    // ldr r0, [r4, #0xc]
    // cmp r3, #0
    // ble _021FA4C4
    // ldr r1, [r0, #0xc]
    // cmp r1, #0
    // bne _021FA4BC
    // add r5, #0xf0
    // ldr r1, [r5]
    // str r1, [r0, #0xc]
    // ldr r1, [sp]
    // str r1, [r0, #8]
    // str r6, [r0, #4]
    // str r7, [r0]
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r2, r2, #1
    // add r0, #0x10
    // cmp r2, r3
    // blt _021FA4A4
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r7, #0
    // mov r2, #0
    // bl FldObjSys_ReadMModelFromNarc
    // add r2, r0, #0
    // ldr r3, [sp]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021FA61C
    // mov r0, #4
    // ldrsh r0, [r4, r0]
    // add r0, r0, #1
    // strh r0, [r4, #4]
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA4F0(void) {
    // push {r3, r4}
    // mov r2, #1
    // lsl r2, r2, #8
    // ldr r0, [r0, r2]
    // mov r3, #0
    // ldrsh r4, [r0, r3]
    // ldr r2, [r0, #0xc]
    // cmp r4, #0
    // ble _021FA51E
    // ldr r0, [r2, #4]
    // cmp r0, r1
    // bne _021FA516
    // ldr r0, [r2, #0xc]
    // cmp r0, #0
    // beq _021FA516
    // mov r0, #0
    // str r0, [r2, #0xc]
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r2, #0x10
    // cmp r3, r4
    // blt _021FA502
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021FA524(void) {
    // push {r3, r4}
    // mov r2, #1
    // lsl r2, r2, #8
    // ldr r0, [r0, r2]
    // mov r3, #0
    // ldrsh r4, [r0, r3]
    // ldr r2, [r0, #0xc]
    // cmp r4, #0
    // ble _021FA55C
    // ldr r0, [r2, #4]
    // cmp r0, r1
    // bne _021FA554
    // ldr r0, [r2, #0xc]
    // cmp r0, #0
    // beq _021FA554
    // ldr r0, [r2, #8]
    // cmp r0, #0
    // bne _021FA54E
    // mov r0, #3
    // pop {r3, r4}
    // bx lr
    // mov r0, #4
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r2, #0x10
    // cmp r3, r4
    // blt _021FA536
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021FA564(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // str r1, [sp]
    // mov r1, #1
    // ldr r0, [sp]
    // lsl r1, r1, #8
    // ldr r4, [r0, r1]
    // add r0, #0xe0
    // ldr r0, [r0]
    // mov r6, #0
    // ldr r5, [r4, #0xc]
    // bl sub_020238F8
    // cmp r0, #1
    // beq _021FA618
    // add r7, r4, #4
    // b _021FA5AE
    // ldr r0, [r5, #0xc]
    // cmp r0, #0
    // beq _021FA5AA
    // ldr r0, [sp]
    // ldr r1, [r5]
    // mov r2, #0
    // bl FldObjSys_ReadMModelFromNarc
    // add r2, r0, #0
    // ldr r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r3, [r5, #8]
    // bl ov01_021FA61C
    // mov r0, #0
    // str r0, [r5, #0xc]
    // ldrsh r0, [r7, r0]
    // add r0, r0, #1
    // strh r0, [r7]
    // add r5, #0x10
    // add r6, r6, #1
    // mov r0, #4
    // ldrsh r1, [r4, r0]
    // mov r0, #2
    // ldrsh r0, [r4, r0]
    // cmp r1, r0
    // bge _021FA5C2
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // cmp r6, r0
    // blt _021FA584
    // mov r6, #0
    // ldrsh r0, [r4, r6]
    // ldr r7, [r4, #0xc]
    // sub r1, r0, #1
    // cmp r1, #0
    // ble _021FA614
    // add r5, r7, #0
    // ldr r1, [r5, #0xc]
    // cmp r1, #0
    // bne _021FA606
    // add r2, r6, #1
    // cmp r2, r0
    // bge _021FA606
    // lsl r1, r2, #4
    // add r3, r7, r1
    // ldr r1, [r3, #0xc]
    // cmp r1, #0
    // beq _021FA5FE
    // lsl r0, r2, #4
    // add r3, r7, r0
    // mov ip, r3
    // add r2, r5, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r1, #0
    // mov r0, ip
    // str r1, [r0, #0xc]
    // b _021FA606
    // add r2, r2, #1
    // add r3, #0x10
    // cmp r2, r0
    // blt _021FA5E0
    // mov r0, #0
    // ldrsh r0, [r4, r0]
    // add r6, r6, #1
    // add r5, #0x10
    // sub r1, r0, #1
    // cmp r6, r1
    // blt _021FA5D0
    // mov r0, #0
    // strh r0, [r4, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA61C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // add r0, r5, #0
    // add r0, #0xf0
    // add r4, r1, #0
    // add r6, r3, #0
    // add r1, r2, #0
    // ldr r0, [r0]
    // add r2, r4, #0
    // mov r3, #1
    // bl GF3dGfxRawResMan_AllocObjAndKeys
    // cmp r0, #0
    // bne _021FA642
    // bl GF_AssertFail
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA668
    // cmp r6, #0
    // bne _021FA65A
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9D5C
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F9DD0
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FA668(void) {
    // push {r4, r5, r6, lr}
    // mov r3, #1
    // lsl r3, r3, #8
    // ldr r3, [r0, r3]
    // mov r5, #1
    // ldr r4, [r3, #0x10]
    // mov r2, #0
    // strh r5, [r3, #6]
    // ldrsh r6, [r3, r2]
    // cmp r6, #0
    // ble _021FA69C
    // ldr r5, [r4, #8]
    // cmp r5, #0
    // bne _021FA694
    // add r0, #0xf0
    // ldr r0, [r0]
    // str r0, [r4, #8]
    // str r1, [r4, #4]
    // mov r0, #0
    // str r0, [r4]
    // strh r0, [r3, #6]
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r4, #0xc
    // cmp r2, r6
    // blt _021FA67E
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FA6A4(void) {
    // push {r4, r5}
    // mov r2, #1
    // lsl r2, r2, #8
    // ldr r2, [r0, r2]
    // mov r0, #1
    // ldr r4, [r2, #0x10]
    // mov r3, #0
    // strh r0, [r2, #6]
    // ldrsh r5, [r2, r3]
    // cmp r5, #0
    // ble _021FA6D6
    // ldr r0, [r4, #8]
    // cmp r0, #0
    // beq _021FA6CE
    // ldr r0, [r4, #4]
    // cmp r0, r1
    // bne _021FA6CE
    // mov r0, #0
    // str r0, [r4, #8]
    // str r0, [r4]
    // b _021FA6D6
    // add r3, r3, #1
    // add r4, #0xc
    // cmp r3, r5
    // blt _021FA6BA
    // mov r0, #0
    // strh r0, [r2, #6]
    // pop {r4, r5}
    // bx lr
    // TODO: decompile
}


void ov01_021FA6E0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r6, [r1, r0]
    // ldrh r0, [r6, #6]
    // cmp r0, #1
    // beq _021FA71A
    // mov r4, #0
    // ldrsh r0, [r6, r4]
    // ldr r5, [r6, #0x10]
    // cmp r0, #0
    // ble _021FA71A
    // mov r7, #1
    // ldr r0, [r5]
    // cmp r0, #0
    // bne _021FA70E
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _021FA70E
    // ldr r1, [r5, #4]
    // bl GF3dGfxRawResMan_LoadObjTexById
    // str r7, [r5]
    // mov r0, #0
    // ldrsh r0, [r6, r0]
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, r0
    // blt _021FA6FA
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA71C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r6, [r1, r0]
    // mov r4, #0
    // ldr r5, [r6, #0x10]
    // mov r0, #1
    // strh r0, [r6, #6]
    // ldrsh r0, [r6, r4]
    // cmp r0, #0
    // ble _021FA756
    // add r7, r4, #0
    // ldr r0, [r5]
    // cmp r0, #1
    // bne _021FA74A
    // ldr r0, [r5, #8]
    // cmp r0, #0
    // beq _021FA74A
    // ldr r1, [r5, #4]
    // bl GF3dGfxRawResMan_FreeObjVramAndSecondaryHeaderById
    // str r7, [r5]
    // str r7, [r5, #8]
    // mov r0, #0
    // ldrsh r0, [r6, r0]
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, r0
    // blt _021FA734
    // mov r0, #0
    // strh r0, [r6, #6]
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA75C(void) {
    // push {r4, r5, r6, lr}
    // mov r5, #1
    // lsl r5, r5, #8
    // ldr r5, [r0, r5]
    // mov r4, #0
    // ldrsh r6, [r5, r4]
    // ldr r0, [r5, #8]
    // cmp r6, #0
    // ble _021FA792
    // ldr r5, [r0, #4]
    // cmp r5, #0
    // bne _021FA78A
    // str r1, [r0, #4]
    // str r2, [r0, #8]
    // str r3, [r0]
    // ldr r0, [r0, #8]
    // mov r2, #0
    // str r2, [r0]
    // add r0, r1, #0
    // mov r1, #1
    // bl ov01_021FA2B8
    // pop {r4, r5, r6, pc}
    // add r4, r4, #1
    // add r0, #0xc
    // cmp r4, r6
    // blt _021FA76E
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021FA798(void) {
    // push {r3, r4}
    // mov r2, #1
    // lsl r2, r2, #8
    // ldr r0, [r0, r2]
    // mov r3, #0
    // ldrsh r4, [r0, r3]
    // ldr r2, [r0, #8]
    // cmp r4, #0
    // ble _021FA7C2
    // ldr r0, [r2, #4]
    // cmp r0, r1
    // bne _021FA7BA
    // mov r0, #0
    // str r0, [r2, #4]
    // str r0, [r2, #8]
    // pop {r3, r4}
    // bx lr
    // add r3, r3, #1
    // add r2, #0xc
    // cmp r3, r4
    // blt _021FA7AA
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void ov01_021FA7C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r6, [r7, r0]
    // mov r4, #0
    // ldrsh r0, [r6, r4]
    // ldr r5, [r6, #8]
    // cmp r0, #0
    // ble _021FA7F6
    // ldr r0, [r5, #4]
    // cmp r0, #0
    // beq _021FA7EA
    // add r0, r7, #0
    // add r1, r5, #0
    // bl ov01_021FA804
    // mov r0, #0
    // ldrsh r0, [r6, r0]
    // add r4, r4, #1
    // add r5, #0xc
    // cmp r4, r0
    // blt _021FA7DC
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA7F8(void) {
    ov01_021FA7C8();
}


void ov01_021FA804(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // bl ov01_021F9EC4
    // cmp r0, #2
    // beq _021FA852
    // ldr r0, [r4, #4]
    // ldr r1, [r4]
    // bl ov01_021F9528
    // ldr r1, [r4, #8]
    // str r0, [r1]
    // ldr r0, [r4, #8]
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _021FA82A
    // bl GF_AssertFail
    // ldr r0, [r4, #4]
    // mov r1, #0
    // bl ov01_021FA2B8
    // mov r1, #2
    // ldr r0, [r4, #4]
    // lsl r1, r1, #0x14
    // bl MapObject_TestFlagsBits
    // cmp r0, #1
    // ldr r0, [r4, #4]
    // bne _021FA848
    // bl sub_0205F4C0
    // b _021FA84C
    // bl sub_0205F484
    // mov r0, #0
    // str r0, [r4, #4]
    // str r0, [r4, #8]
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021FA854(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r1, #0
    // add r5, r0, #0
    // mov r0, #0xc
    // add r7, r6, #0
    // mul r7, r0
    // lsl r0, r6, #4
    // lsl r1, r7, #1
    // str r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // mov r0, #4
    // str r2, [sp]
    // bl Heap_Alloc
    // add r4, r0, #0
    // bne _021FA882
    // bl GF_AssertFail
    // ldr r2, [sp, #8]
    // add r0, r4, #0
    // mov r1, #0
    // bl memset
    // ldr r0, [sp]
    // strh r6, [r4]
    // strh r0, [r4, #2]
    // add r0, r4, #0
    // add r0, #0x28
    // str r0, [r4, #8]
    // add r1, r0, r7
    // ldr r0, [sp, #4]
    // str r1, [r4, #0xc]
    // add r0, r1, r0
    // str r0, [r4, #0x10]
    // mov r0, #1
    // lsl r0, r0, #8
    // str r4, [r5, r0]
    // add r0, r0, #4
    // ldr r0, [r5, r0]
    // bl MapObjectManager_GetPriority
    // add r6, r0, #0
    // ldr r0, _021FA8E8 ; =ov01_021FA564
    // add r1, r5, #0
    // add r2, r6, #1
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x18]
    // ldr r0, _021FA8EC ; =ov01_021FA7F8
    // add r1, r5, #0
    // add r2, r6, #2
    // bl SysTask_CreateOnMainQueue
    // str r0, [r4, #0x1c]
    // ldr r0, _021FA8F0 ; =ov01_021FA6E0
    // add r1, r5, #0
    // mov r2, #0xff
    // bl SysTask_CreateOnVBlankQueue
    // str r0, [r4, #0x20]
    // ldr r0, _021FA8F4 ; =ov01_021FA71C
    // add r1, r5, #0
    // mov r2, #0xff
    // bl SysTask_CreateOnVWaitQueue
    // str r0, [r4, #0x24]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _021FA8E8: .word ov01_021FA564
    // _021FA8EC: .word ov01_021FA7F8
    // _021FA8F0: .word ov01_021FA6E0
    // _021FA8F4: .word ov01_021FA71C
    // TODO: decompile
}


void ov01_021FA8F8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #1
    // lsl r0, r0, #8
    // ldr r4, [r5, r0]
    // mov r0, #1
    // strh r0, [r4, #6]
    // ldr r0, [r4, #0x18]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x1c]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x20]
    // bl SysTask_Destroy
    // ldr r0, [r4, #0x24]
    // bl SysTask_Destroy
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #1
    // mov r1, #0
    // lsl r0, r0, #8
    // str r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021FA930(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021FA2D4
    // cmp r0, #1
    // beq _021FA948
    // add r0, r5, #0
    // bl ov01_021F72DC
    // cmp r0, #0
    // bne _021FA972
    // add r0, r5, #0
    // bl MapObject_GetSpriteID
    // add r6, r0, #0
    // add r0, r5, #0
    // bl MapObject_GetManager
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_0205E420
    // add r0, r7, #0
    // add r1, r6, #0
    // add r2, r5, #0
    // bl ov01_021FA108
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_0205E38C
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021FA97C
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021FA97C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x38
    // add r6, r0, #0
    // str r1, [sp, #8]
    // bl ov01_021FA3DC
    // add r7, r0, #0
    // bl ov01_021FA1D0
    // str r0, [sp, #0x14]
    // add r0, r6, #0
    // bl ov01_021F72DC
    // str r0, [sp, #0x10]
    // mov r0, #4
    // mov r1, #0x58
    // bl Heap_AllocAtEnd
    // mov r1, #0
    // mov r2, #0x58
    // add r5, r0, #0
    // bl memset
    // ldr r0, [sp, #8]
    // str r0, [r5]
    // add r0, r6, #0
    // str r6, [r5, #0x50]
    // bl MapObject_GetID
    // cmp r0, #0xff
    // bne _021FA9CE
    // add r0, r6, #0
    // bl ov01_021F72DC
    // bl sub_02023F90
    // mov r1, #0
    // bl NNS_G3dMdlGetMdlFogEnableFlag
    // str r0, [sp, #0x1c]
    // b _021FA9D2
    // mov r0, #0
    // str r0, [sp, #0x1c]
    // add r0, r6, #0
    // bl MapObject_GetSpriteID
    // str r0, [sp, #0x18]
    // bl ov01_021FA28C
    // ldr r4, _021FAB90 ; =ov01_02207294
    // ldrh r1, [r4]
    // cmp r1, r0
    // beq _021FA9EE
    // add r4, r4, #4
    // ldrh r1, [r4]
    // cmp r1, #0xff
    // bne _021FA9E0
    // cmp r1, #0xff
    // bne _021FA9F6
    // bl GF_AssertFail
    // ldrh r1, [r4, #2]
    // add r0, r7, #0
    // mov r2, #0
    // bl FldObjSys_ReadMModelFromNarc
    // str r0, [r5, #8]
    // ldr r0, [sp, #0x18]
    // bl ov01_021FA2A0
    // ldr r4, _021FAB94 ; =ov01_022072CC
    // ldrh r1, [r4]
    // cmp r1, r0
    // beq _021FAA18
    // add r4, r4, #4
    // ldrh r1, [r4]
    // cmp r1, #0xff
    // bne _021FAA0A
    // cmp r1, #0xff
    // bne _021FAA20
    // bl GF_AssertFail
    // ldrh r1, [r4, #2]
    // add r0, r7, #0
    // mov r2, #0
    // bl FldObjSys_ReadMModelFromNarc
    // add r1, r5, #0
    // add r1, #0x14
    // str r0, [r5, #0xc]
    // bl sub_02026E18
    // ldr r0, [sp, #0x18]
    // bl GetMoveModelNoBySpriteId
    // add r1, r0, #0
    // bpl _021FAA44
    // bl GF_AssertFail
    // mov r1, #0
    // add r0, r7, #0
    // mov r2, #0
    // bl FldObjSys_ReadMModelFromNarc
    // str r0, [r5, #0x10]
    // bl NNS_G3dGetTex
    // add r4, r0, #0
    // ldr r0, [sp, #0x18]
    // bl ov01_021FA2AC
    // add r3, r0, #0
    // add r0, r5, #0
    // add r0, #0x14
    // str r0, [sp]
    // add r0, r5, #0
    // ldr r1, [r5, #8]
    // add r0, #0x28
    // add r2, r4, #0
    // bl sub_02023E2C
    // ldr r0, [sp, #0x10]
    // bl sub_02023E68
    // add r3, r0, #0
    // add r2, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // add r4, r2, #0
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // add r1, r5, #0
    // str r0, [r2]
    // ldr r0, [sp, #0x14]
    // add r1, #0x28
    // add r2, r4, #0
    // bl ov01_021FA31C
    // str r0, [r5, #0x24]
    // cmp r0, #0
    // bne _021FAA98
    // bl GF_AssertFail
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // bne _021FAAAA
    // ldr r0, [r5, #0x24]
    // bl sub_02023F90
    // mov r1, #0
    // bl NNS_G3dMdlSetMdlFogEnableFlagAll
    // ldr r0, [sp, #0x10]
    // bl sub_02023EF4
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023EE0
    // ldr r0, [sp, #0x10]
    // bl sub_02023F70
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023F40
    // ldr r0, [sp, #0x10]
    // bl sub_02023F30
    // add r1, r0, #0
    // ldr r0, [r5, #0x24]
    // bl sub_02023F1C
    // ldr r0, [r5, #0x24]
    // mov r1, #0
    // bl sub_02023F04
    // ldr r0, [r5, #0x24]
    // mov r1, #1
    // bl sub_02023EA4
    // ldr r0, [r5, #0x24]
    // bl sub_02023FC0
    // add r0, r6, #0
    // bl MapObject_CheckFlag24
    // cmp r0, #1
    // bne _021FAB4A
    // add r0, r6, #0
    // mov r1, #2
    // bl MapObject_GetPriorityPlusValue
    // str r0, [sp, #0xc]
    // add r0, r6, #0
    // mov r1, #1
    // bl sub_02060FA8
    // lsl r0, r0, #0x18
    // lsr r4, r0, #0x18
    // add r0, r4, #0
    // bl sub_0205BA70
    // cmp r0, #1
    // bne _021FAB18
    // mov r4, #2
    // b _021FAB28
    // add r0, r4, #0
    // bl sub_0205B984
    // cmp r0, #1
    // bne _021FAB26
    // mov r4, #0
    // b _021FAB28
    // mov r4, #1
    // add r0, r6, #0
    // add r1, sp, #0x20
    // bl MapObject_CopyPositionVector
    // add r0, r6, #0
    // bl ov01_021F146C
    // ldr r1, [sp, #0xc]
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r1, r5, #0
    // ldr r2, [r5, #0x24]
    // add r1, #0x28
    // add r3, sp, #0x20
    // bl ov01_021FDE64
    // str r0, [r5, #0x54]
    // add r0, r6, #0
    // bl sub_0205E420
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // ldr r1, [sp, #0x18]
    // add r2, r6, #0
    // bl ov01_021FA108
    // ldr r1, [sp, #8]
    // add r0, r6, #0
    // bl sub_0205E38C
    // mov r0, #0x41
    // lsl r0, r0, #2
    // ldr r0, [r7, r0]
    // bl MapObjectManager_GetPriority
    // ldr r0, _021FAB98 ; =ov01_021FAB9C
    // add r1, r5, #0
    // mov r2, #0xff
    // bl SysTask_CreateOnVWaitQueue
    // add r4, r0, #0
    // bne _021FAB82
    // bl GF_AssertFail
    // add r0, r4, #0
    // add r1, r5, #0
    // bl ov01_021FAB9C
    // add sp, #0x38
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _021FAB90: .word ov01_02207294
    // _021FAB94: .word ov01_022072CC
    // _021FAB98: .word ov01_021FAB9C
    // TODO: decompile
}


void ov01_021FAB9C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5, #4]
    // ldr r4, [r5, #0x50]
    // cmp r0, #0
    // beq _021FABB0
    // cmp r0, #1
    // beq _021FAC08
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl MapObject_CheckActive
    // cmp r0, #0
    // beq _021FABC4
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #0
    // bne _021FABF4
    // ldr r0, [r5, #0x54]
    // cmp r0, #0
    // beq _021FABCE
    // bl sub_02068B48
    // ldr r0, [r5, #0x24]
    // bl sub_02023DA4
    // ldr r0, [r5, #8]
    // bl Heap_Free
    // ldr r0, [r5, #0xc]
    // bl Heap_Free
    // ldr r0, [r5, #0x10]
    // bl Heap_Free
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl MapObject_GetSpriteID
    // ldr r1, [r5]
    // cmp r1, r0
    // beq _021FAC40
    // ldr r0, [r5, #4]
    // add r0, r0, #1
    // str r0, [r5, #4]
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov01_021FA2D4
    // cmp r0, #0
    // bne _021FAC40
    // ldr r0, [r5, #0x54]
    // cmp r0, #0
    // beq _021FAC1C
    // bl sub_02068B48
    // ldr r0, [r5, #0x24]
    // bl sub_02023DA4
    // ldr r0, [r5, #8]
    // bl Heap_Free
    // ldr r0, [r5, #0xc]
    // bl Heap_Free
    // ldr r0, [r5, #0x10]
    // bl Heap_Free
    // add r0, r5, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl SysTask_Destroy
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}

