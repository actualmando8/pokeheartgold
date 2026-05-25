/* Decompiled from asm/overlay_01_021F944C.s */
#include "global.h"

void ov01_021F944C(void) {
    // str r1, [r5, r2]
    ov01_021FA2EC(r2, (0x41 << 2));
    // ldr r2, [sp, #0x24]
    ov01_021FA854(r5, r4);
    // ldr r0, [sp, #0x18]
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x1c]
    // str r0, [sp, #8]
    ov01_021F9808(r5, 8, 4, 8);
    ov01_021F9698(r5, r4);
    // ldr r1, [sp, #0x20]
    ov01_021F9A8C(r5, ov01_02207260, ov01_02206CF0);
}




void ov01_021F94A0(void) {
}




void ov01_021F94C0(void) {
    // str r1, [r5]
    // str r0, [sp]
    // ldr r0, [sp]
    // str r0, [r5]
}




void ov01_021F9510(void) {
}




void ov01_021F9528(void) {
    // add r1, sp, #0
    // add r2, sp, #0
}




void ov01_021F9574(void) {
    // str r0, [r5]
}




void ov01_021F95A8(void) {
}




void ov01_021F95CC(void) {
    ov01_021F9688();
    sub_02023DA4(*((u32*)r5));
    // str r0, [r5]
    MapObject_GetManager(r6);
    ov01_021F97BC(r6, r4);
    ov01_021FA3DC(r6);
    ov01_021F9778(r4);
}




void ov01_021F9610(void) {
}




void ov01_021F9630(void) {
}




void ov01_021F9654(void) {
    // str r0, [r4]
}




void ov01_021F9688(void) {
}




void ov01_021F9698(void) {
    Heap_Alloc(4, (0x28 * r1));
    // add r0, #0xe4
    // str r6, [r0]
    GF_AssertFail(r7);
    Heap_Alloc(4, (r5 << 3));
    // add r7, #0xf4
    // str r4, [r7]
    GF_AssertFail();
    // str r0, [r4]
    *((u32*)(r4 + 4)) = r6;
    // add r4, #8
    // add r6, #0x28
}




void ov01_021F96E4(void) {
}




void ov01_021F9704(void) {
    // add r2, #0xf4
    // add r6, #8
    // str r1, [r4]
    ov01_021FA370(*((u32*)(*((u32*)r0) + 4)), *((u32*)(*((u32*)r0) + 4)), 0x0000FFFF);
    // add r4, #8
}




void ov01_021F9744(void) {
    // add r1, #0xf4
    // ldmia r3!, {r0, r1}
    // stmia r4!, {r0, r1}
    // add r2, #8
}




void ov01_021F9778(void) {
    // add r2, #0xf4
    // str r0, [r3]
    // add r3, #8
}




void ov01_021F9798(void) {
    // add r1, #0xf4
    // str r1, [r4]
    // add r4, #8
}




void ov01_021F97BC(void) {
    MapObjectManager_GetObjectCount();
    MapObjectManager_GetObjects2(r7);
    // str r0, [sp]
    // ldr r0, [sp]
    MapObject_CheckActive();
    // ldr r0, [sp]
    MapObject_GetSpriteID();
    // add r0, sp, #0
    MapObjectArray_NextObject(1);
}




void ov01_021F9808(void) {
    // add r1, #0xf8
    // str r0, [r1]
    // sub r1, r4, r6
    // add r1, #0xfc
    // str r0, [r1]
    // ldr r1, [sp, #0x18]
    // ldr r1, [sp, #0x18]
    // sub r1, r7, r1
    // ldr r0, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // ldr r2, [sp, #0x1c]
    // ldr r1, [sp, #0x20]
    // sub r1, r2, r1
}




void ov01_021F9890(void) {
}




void ov01_021F98B4(void) {
    // ldrh r3, [r2]
    // ldrh r3, [r2]
}




void ov01_021F98CC(void) {
    // ldr r2, [sp, #0x18]
    // str r0, [sp]
}




void ov01_021F9918(void) {
    // add r0, #0xf0
    // bpl _021F9950
}




void ov01_021F9968(void) {
}




void ov01_021F9974(void) {
}




void ov01_021F9980(void) {
    ov01_021F9968(r0, *((u32*)r1));
}




void ov01_021F99A4(void) {
    ov01_021FA1DC();
    // str r0, [sp]
    // add r1, #0xf8
    ov01_021F98CC(r5, *((u32*)r5), r4, 0xff);
    ov01_021F9B10(r5, r4);
}




void ov01_021F99D0(void) {
    ov01_021FA1DC();
    // str r0, [sp]
    // add r1, #0xf8
    ov01_021F98CC(r5, *((u32*)r5), r4, 0xff);
    ov01_021F9B54(r5, r4);
}




void ov01_021F99FC(void) {
}




void ov01_021F9A18(void) {
    ov01_021FA1E4();
    // str r0, [sp]
    // add r1, #0xfc
    ov01_021F98CC(r5, *((u32*)r5), r4, 0xff);
    ov01_021F9C34(r5, r4);
}




void ov01_021F9A44(void) {
    ov01_021FA1E4();
    // str r0, [sp]
    // add r1, #0xfc
    ov01_021F98CC(r5, *((u32*)r5), r4, 0xff);
    ov01_021F9C78(r5, r4);
}




void ov01_021F9A70(void) {
}




void ov01_021F9A8C(void) {
}




void ov01_021F9AAC(void) {
    // stmia r0!, {r1}
}




void ov01_021F9AB4(void) {
    // str r1, [r0]
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
    // str r2, [r0]
}




void ov01_021F9B00(void) {
}




void ov01_021F9B10(void) {
}




void ov01_021F9B38(void) {
}




void ov01_021F9B54(void) {
    // add r0, r6, r4
}




void ov01_021F9B84(void) {
    // add r0, r6, r4
}




void ov01_021F9BAC(void) {
    // add r0, r6, r4
}




void ov01_021F9BD4(void) {
    // add r5, r4, r0
    // add r0, #0xf8
    // str r0, [r5]
}




void ov01_021F9C24(void) {
}




void ov01_021F9C34(void) {
}




void ov01_021F9C5C(void) {
}




void ov01_021F9C78(void) {
    // add r0, r6, r4
}




void ov01_021F9CA8(void) {
    // add r0, r6, r4
}




void ov01_021F9CD0(void) {
    // add r0, r6, r4
}




void ov01_021F9CF8(void) {
    // add r5, r4, r0
    // add r0, #0xfc
    // str r0, [r5]
}




void ov01_021F9D48(void) {
    ov01_021FA1FC();
    ov01_021F9AAC(0x0000FFFF, 0x20);
}




void ov01_021F9D5C(void) {
    ov01_021FA22C();
    ov01_021FA1FC(r5);
    ov01_021F9AB4(r4, 0x0000FFFF, r6);
    GF_AssertFail();
}




void ov01_021F9D88(void) {
}




void ov01_021F9DA4(void) {
}




void ov01_021F9DD0(void) {
    ov01_021FA1FC();
    ov01_021FA22C(r5);
    ov01_021FA234(r5);
    // add r0, r6, r4
    ov01_021F9AB4(r7, 0x0000FFFF, r0);
    GF_AssertFail();
}




void ov01_021F9E04(void) {
    ov01_021FA1FC();
    ov01_021FA22C(r5);
    ov01_021FA234(r5);
    // add r0, r6, r4
    ov01_021F9AE4(r7, 0x0000FFFF, r0);
}




void ov01_021F9E30(void) {
    // str r0, [sp]
    ov01_021FA1F4(r1);
    // str r0, [sp, #4]
    ov01_021FA1FC(r6);
    ov01_021FA22C(r6);
    // add r5, r4, r0
    ov01_021FA234(r6);
    // ldr r0, [sp]
    ov01_021F9FCC(0x0000FFFF, *((u32*)r5), 0);
    // ldr r0, [sp, #4]
    GF3dGfxRawResMan_FreeObjById(r4);
    ov01_021FA4F0(r6, r4);
    ov01_021FA6A4(r6, r4);
    // str r0, [r5]
}




void ov01_021F9E9C(void) {
    // add r0, r6, r4
}




void ov01_021F9EC4(void) {
}




void ov01_021F9EEC(void) {
}




void ov01_021F9F14(void) {
}




void ov01_021F9F3C(void) {
}




void ov01_021F9F54(void) {
}




void ov01_021F9F6C(void) {
}




void ov01_021F9F84(void) {
}




void ov01_021F9FB0(void) {
}




void ov01_021F9FCC(void) {
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    // add r7, sp, #0
    // ldr r0, [sp]
    // ldr r0, [sp]
    // add r2, sp, #4
}




void ov01_021FA01C(void) {
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    MapObjectManager_GetNextObjectWithFlagFromIndex(0, 1);
    // ldr r0, [sp]
    // ldr r0, [sp]
    MapObject_GetSpriteID();
    // ldr r0, [sp]
    ov01_021F9318(0x0000FFFF);
    ov01_021FA28C(r4);
    // add r1, sp, #0
    // add r2, sp, #4
    MapObjectManager_GetNextObjectWithFlagFromIndex(r7, 1);
}




void ov01_021FA094(void) {
    // str r1, [sp, #4]
    // str r1, [sp]
    // add r1, sp, #0
    // add r2, sp, #4
    MapObjectManager_GetNextObjectWithFlagFromIndex(0, 1);
    // ldr r0, [sp]
    // ldr r0, [sp]
    ov01_021F9318(0x0000FFFF);
    // ldr r0, [sp]
    MapObject_GetSpriteID(((*((u16*)r0) << 0x1c) >> 0x1c));
    ov01_021FA2A0(0x0000FFFF);
    // add r1, sp, #0
    // add r2, sp, #4
    MapObjectManager_GetNextObjectWithFlagFromIndex(r7, 1);
}




void ov01_021FA108(void) {
    // str r0, [sp]
    // ldr r1, [sp]
    // ldr r1, [sp]
    // add r0, #0xf8
    // ldr r1, [sp]
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
    // add r0, #0xfc
    // ldr r1, [sp, #4]
    // ldr r1, [sp, #4]
}




void ov01_021FA1C8(void) {
    // add r0, #0xe0
    // str r1, [r0]
}




void ov01_021FA1D0(void) {
    // add r0, #0xe0
}




void ov01_021FA1D8(void) {
}




void ov01_021FA1DC(void) {
    // add r0, #0xe8
}




void ov01_021FA1E4(void) {
    // add r0, #0xec
}




void ov01_021FA1EC(void) {
    // add r0, #0xf0
    // str r1, [r0]
}




void ov01_021FA1F4(void) {
    // add r0, #0xf0
}




void ov01_021FA1FC(void) {
    // add r0, #0x60
}




void ov01_021FA200(void) {
    // add r0, #0x20
}




void ov01_021FA204(void) {
    // add r0, #0x40
}




void ov01_021FA208(void) {
}




void ov01_021FA20C(void) {
    // ldr r0, [r0, #8]
    // bx lr
    // TODO: decompile
}




void ov01_021FA210(void) {
}




void ov01_021FA214(void) {
    // ldr r0, [r0, #0xc]
    // bx lr
    // TODO: decompile
}




void ov01_021FA218(void) {
}




void ov01_021FA21C(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}




void ov01_021FA220(void) {
}




void ov01_021FA224(void) {
    // ldr r0, [r0, #0x14]
    // bx lr
    // TODO: decompile
}




void ov01_021FA228(void) {
}




void ov01_021FA22C(void) {
    // ldr r0, [r0, #0x18]
    // bx lr
    // TODO: decompile
}




void ov01_021FA230(void) {
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
    GF_AssertFail(((*((u16*)(ov01_022074A8 + 4)) << 0x10) >> 0x1a), 0x0000FFFF, *((u16*)ov01_022074A8), ov01_022074A8);
    // add r0, r1, r0
    GF_AssertFail((ov01_02207318 << 3), ov01_02207318, *((u16*)(r3 + 6)), (r3 + 6));
}




void ov01_021FA28C(void) {
}




void ov01_021FA298(void) {
}




void ov01_021FA2A0(void) {
}




void ov01_021FA2AC(void) {
}




void ov01_021FA2B8(void) {
}




void ov01_021FA2D4(void) {
}




void ov01_021FA2EC(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0
    // str r4, [sp]
}




void ov01_021FA314(void) {
}




void ov01_021FA31C(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldmia r2!, {r0, r1}
    // add r3, sp, #8
    // stmia r3!, {r0, r1}
    // add r2, sp, #0x14
    // str r0, [r3]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r0, sp, #0
    sub_02023D44(*((u32*)ov01_02208B64), ov01_02208B64);
    sub_02023EA4(0);
    sub_02023EE0(r4, 0);
    sub_02023F40(r4, 0);
    sub_02023F90(r4);
    ov01_021EA3B0();
}




void ov01_021FA370(void) {
    // add r0, #0xf8
    // str r0, [r4]
    // add r0, #0xfc
    // add r1, #0xc
}




void ov01_021FA3DC(void) {
}




void ov01_021FA3E8(void) {
    // add r1, sp, #0
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
}




void ov01_021FA40C(void) {
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
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // str r3, [sp]
    // add r0, #0xe0
    // ldrsh r3, [r4, r2]
    // add r5, #0xf0
    // ldr r1, [sp]
    // str r7, [r0]
    // add r0, #0x10
    // ldr r3, [sp]
    // ldrsh r0, [r4, r0]
}




void ov01_021FA4F0(void) {
    // ldrsh r4, [r0, r3]
    // add r2, #0x10
}




void ov01_021FA524(void) {
    // ldrsh r4, [r0, r3]
    // add r2, #0x10
}




void ov01_021FA564(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r0, #0xe0
    // ldr r0, [sp]
    // ldr r0, [sp]
    // ldrsh r0, [r7, r0]
    // strh r0, [r7]
    // add r5, #0x10
    // ldrsh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r6]
    // add r3, r7, r1
    // add r3, r7, r0
    // mov ip, r3
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // mov r0, ip
    // add r3, #0x10
    // ldrsh r0, [r4, r0]
    // add r5, #0x10
}




void ov01_021FA61C(void) {
    // str r0, [sp]
    // add r0, #0xf0
}




void ov01_021FA668(void) {
    // ldrsh r6, [r3, r2]
    // add r0, #0xf0
    // str r0, [r4]
    // add r4, #0xc
}




void ov01_021FA6A4(void) {
    // ldrsh r5, [r2, r3]
    // str r0, [r4]
    // add r4, #0xc
}




void ov01_021FA6E0(void) {
    // ldrsh r0, [r6, r4]
    // str r7, [r5]
    // ldrsh r0, [r6, r0]
    // add r5, #0xc
}




void ov01_021FA71C(void) {
    // ldrsh r0, [r6, r4]
    // str r7, [r5]
    // ldrsh r0, [r6, r0]
    // add r5, #0xc
}




void ov01_021FA75C(void) {
    // ldrsh r6, [r5, r4]
    // str r3, [r0]
    // str r2, [r0]
    // add r0, #0xc
}




void ov01_021FA798(void) {
    // ldrsh r4, [r0, r3]
    // add r2, #0xc
}




void ov01_021FA7C8(void) {
    // ldrsh r0, [r6, r4]
    // ldrsh r0, [r6, r0]
    // add r5, #0xc
}




void ov01_021FA7F8(void) {
}




void ov01_021FA804(void) {
    // str r0, [r1]
}




void ov01_021FA854(void) {
    // str r0, [sp, #4]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r0, #0x28
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r2, [sp]
    Heap_Alloc(4, ((r1 * 0xc) << 1));
    GF_AssertFail();
    // ldr r2, [sp, #8]
    memset(r4, 0);
    // ldr r0, [sp]
    // strh r6, [r4]
    *((u16*)(r4 + 2)) = r0;
    // add r0, #0x28
    *((u32*)(r4 + 8)) = r4;
    // add r1, r0, r7
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0xc)) = r1;
    // add r0, r1, r0
    *((u32*)(r4 + 0x10)) = r4;
    // str r4, [r5, r0]
    MapObjectManager_GetPriority(*((u32*)(r5 + ((1 << 8) + 4))));
    SysTask_CreateOnMainQueue(ov01_021FA564, r5, (r0 + 1));
    *((u32*)(r4 + 0x18)) = r0;
    SysTask_CreateOnMainQueue(ov01_021FA7F8, r5, (r6 + 2));
    *((u32*)(r4 + 0x1c)) = r0;
    SysTask_CreateOnVBlankQueue(ov01_021FA6E0, r5, 0xff);
    *((u32*)(r4 + 0x20)) = r0;
    SysTask_CreateOnVWaitQueue(ov01_021FA71C, r5, 0xff);
    *((u32*)(r4 + 0x24)) = r0;
}




void ov01_021FA8F8(void) {
    // str r1, [r5, r0]
}




void ov01_021FA930(void) {
}




void ov01_021FA97C(void) {
    // str r1, [sp, #8]
    ov01_021FA3DC();
    ov01_021FA1D0();
    // str r0, [sp, #0x14]
    ov01_021F72DC(r6);
    // str r0, [sp, #0x10]
    Heap_AllocAtEnd(4, 0x58);
    memset(0, 0x58);
    // ldr r0, [sp, #8]
    // str r0, [r5]
    *((u32*)(r5 + 0x50)) = r6;
    MapObject_GetID(r6);
    ov01_021F72DC(r6);
    sub_02023F90();
    NNS_G3dMdlGetMdlFogEnableFlag(0);
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x1c]
    MapObject_GetSpriteID(r6);
    // str r0, [sp, #0x18]
    ov01_021FA28C();
    GF_AssertFail(*((u16*)(ov01_02207294 + 4)));
    FldObjSys_ReadMModelFromNarc(r7, *((u16*)(r4 + 2)), 0);
    *((u32*)(r5 + 8)) = r0;
    // ldr r0, [sp, #0x18]
    ov01_021FA2A0();
    GF_AssertFail(*((u16*)(ov01_022072CC + 4)));
    FldObjSys_ReadMModelFromNarc(r7, *((u16*)(r4 + 2)), 0);
    // add r1, #0x14
    *((u32*)(r5 + 0xc)) = r0;
    sub_02026E18(r5);
    // ldr r0, [sp, #0x18]
    GetMoveModelNoBySpriteId();
    // bpl _021FAA44
    GF_AssertFail(r0);
    FldObjSys_ReadMModelFromNarc(r7, 0, 0);
    *((u32*)(r5 + 0x10)) = r0;
    NNS_G3dGetTex();
    // ldr r0, [sp, #0x18]
    ov01_021FA2AC();
    // add r0, #0x14
    // str r0, [sp]
    // add r0, #0x28
    sub_02023E2C(r5, *((u32*)(r5 + 8)), r4, r0);
    // ldr r0, [sp, #0x10]
    sub_02023E68();
    // add r2, sp, #0x2c
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r0, [sp, #0x14]
    // add r1, #0x28
    ov01_021FA31C(*((u32*)r0), r5, r2, r0);
    *((u32*)(r5 + 0x24)) = r0;
    GF_AssertFail();
    // ldr r0, [sp, #0x1c]
    sub_02023F90(*((u32*)(r5 + 0x24)));
    NNS_G3dMdlSetMdlFogEnableFlagAll(0);
    // ldr r0, [sp, #0x10]
    sub_02023EF4();
    sub_02023EE0(*((u32*)(r5 + 0x24)), r0);
    // ldr r0, [sp, #0x10]
    sub_02023F70();
    sub_02023F40(*((u32*)(r5 + 0x24)), r0);
    // ldr r0, [sp, #0x10]
    sub_02023F30();
    sub_02023F1C(*((u32*)(r5 + 0x24)), r0);
    sub_02023F04(*((u32*)(r5 + 0x24)), 0);
    sub_02023EA4(*((u32*)(r5 + 0x24)), 1);
    sub_02023FC0(*((u32*)(r5 + 0x24)));
    MapObject_CheckFlag24(r6);
    MapObject_GetPriorityPlusValue(r6, 2);
    // str r0, [sp, #0xc]
    sub_02060FA8(r6, 1);
    sub_0205BA70(((r0 << 0x18) >> 0x18));
    sub_0205B984(2);
    // add r1, sp, #0x20
    MapObject_CopyPositionVector(r6);
    ov01_021F146C(r6);
    // ldr r1, [sp, #0xc]
    // str r4, [sp]
    // str r1, [sp, #4]
    // add r1, #0x28
    // add r3, sp, #0x20
    ov01_021FDE64(r5, *((u32*)(r5 + 0x24)));
    *((u32*)(r5 + 0x54)) = r0;
    sub_0205E420(r6);
    // ldr r1, [sp, #0x18]
    ov01_021FA108(*((u32*)(r7 + (0x41 << 2))), r6);
    // ldr r1, [sp, #8]
    sub_0205E38C(r6);
    MapObjectManager_GetPriority(*((u32*)(r7 + (0x41 << 2))));
    SysTask_CreateOnVWaitQueue(ov01_021FAB9C, r5, 0xff);
    GF_AssertFail();
    ov01_021FAB9C(r4, r5);
}




void ov01_021FAB9C(void) {
}



