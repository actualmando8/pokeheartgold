/* Decompiled from asm/overlay_01_021F1348.s */
#include "global.h"

void ov01_021F1348(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r2, #0
    // add r6, r0, #0
    // add r5, r1, #0
    // add r0, r7, #0
    // mov r1, #0x24
    // bl Heap_Alloc
    // add r4, r0, #0
    // mov r1, #0
    // mov r2, #0x24
    // bl memset
    // str r7, [r4]
    // str r5, [r4, #4]
    // str r6, [r4, #0x10]
    // add r0, r7, #0
    // lsl r1, r5, #3
    // bl Heap_Alloc
    // str r0, [r4, #0x14]
    // add r0, r4, #0
    // bl ov01_021F14DC
    // add r0, r4, #0
    // bl ov01_021F147C
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F1384(void) {
    ov01_021F15EC();
}


void ov01_021F1390(void) {
    ov01_021F1648();
}


void ov01_021F13B0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov01_021F1588
    // cmp r0, #0
    // beq _021F13C4
    // bl GF_AssertFail
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F14F4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F13D0(void) {
    ov01_021F13B0();
}


void ov01_021F13EC(void) {
    ov01_021F1610();
}


void ov01_021F13F4(void) {
    ov01_021F15FC();
    ov01_021F1538(r4);
    ov01_021F16B8(r4);
    ov01_021F1490(r4);
    Heap_Free(*((u32*)(r4 + 0x14)));
    Heap_Free(r4);
}


void ov01_021F141C(void) {
    // push {r3, lr}
    // cmp r2, #0
    // ldr r0, [r0]
    // bne _021F142A
    // bl Heap_Alloc
    // pop {r3, pc}
    // bl Heap_AllocAtEnd
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021F1430(void) {
    ov01_021F141C();
    memset(r4, r5);
}


void ov01_021F1448(void) {
    Heap_Free();
}


void ov01_021F1450(void) {
    // push {r3, lr}
    // bl ov01_021F1588
    // cmp r0, #0
    // bne _021F1462
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // ldr r0, [r0, #4]
    // pop {r3, pc}
    // TODO: decompile
}


void ov01_021F1468(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}


void ov01_021F146C(void) {
    MapObject_GetFieldSystem();
}


void ov01_021F1478(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}


void ov01_021F147C(void) {
    ov01_021F1478();
    NARC_New(0x67, r0);
    *((u32*)(r4 + 0x18)) = r0;
}


void ov01_021F1490(void) {
    NARC_Delete();
}


void ov01_021F149C(void) {
    NARC_GetMemberSize();
}


void ov01_021F14A8(void) {
    NARC_ReadWholeMember();
}


void ov01_021F14B4(void) {
    NARC_GetMemberSize(*((u32*)(r0 + 0x18)));
    ov01_021F141C(r4, r0, r5);
    NARC_ReadWholeMember(*((u32*)(r4 + 0x18)), r6, r0);
}


void ov01_021F14DC(void) {
    ov01_021F15A0();
}


void ov01_021F14F4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // bl ov01_021F15C4
    // add r1, r0, #0
    // ldr r1, [r1, #4]
    // add r0, r5, #0
    // blx r1
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov01_021F1560
    // add r1, r6, #0
    // add r2, r4, #0
    // bl ov01_021F15AC
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F151C(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4]
    // bl ov01_021F15C4
    // add r1, r0, #0
    // ldr r0, [r4, #4]
    // ldr r1, [r1, #8]
    // blx r1
    // add r0, r4, #0
    // bl ov01_021F15A0
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F1538(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r4, [r6, #4]
    // ldr r5, [r6, #0x14]
    // cmp r4, #0
    // beq _021F155C
    // add r0, r5, #0
    // bl ov01_021F15B4
    // cmp r0, #0
    // bne _021F1556
    // add r0, r6, #0
    // add r1, r5, #0
    // bl ov01_021F151C
    // add r5, #8
    // sub r4, r4, #1
    // bne _021F1544
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F1560(void) {
    // push {r3, r4, r5, lr}
    // ldr r4, [r0, #4]
    // ldr r5, [r0, #0x14]
    // cmp r4, #0
    // beq _021F157E
    // add r0, r5, #0
    // bl ov01_021F15B4
    // cmp r0, #1
    // bne _021F1578
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // add r5, #8
    // sub r4, r4, #1
    // bne _021F156A
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F1588(void) {
    // ldr r3, [r0, #4]
    // ldr r0, [r0, #0x14]
    // cmp r3, #0
    // beq _021F159C
    // ldr r2, [r0]
    // cmp r2, r1
    // beq _021F159E
    // add r0, #8
    // sub r3, r3, #1
    // bne _021F1590
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F15A0(void) {
    *(u32*)r0 = 0x17;
    ((u32*)r0)[4] = 0;
}


void ov01_021F15AC(void) {
    *(u32*)r0 = r1;
    ((u32*)r0)[4] = r2;
}


void ov01_021F15B4(void) {
    // ldr r0, [r0]
    // cmp r0, #0x17
    // bne _021F15BE
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void ov01_021F15C4(void) {
    // push {r3, lr}
    // ldr r1, _021F15E8 ; =ov01_02208C5C
    // ldr r2, [r1]
    // cmp r2, #0x17
    // beq _021F15DE
    // cmp r2, r0
    // bne _021F15D6
    // add r0, r1, #0
    // pop {r3, pc}
    // add r1, #0xc
    // ldr r2, [r1]
    // cmp r2, #0x17
    // bne _021F15CE
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _021F15E8: .word ov01_02208C5C
    // TODO: decompile
}


void ov01_021F15EC(void) {
    sub_020689C8();
}


void ov01_021F15FC(void) {
    sub_020689F8(0);
}


void ov01_021F1610(void) {
    sub_02068BAC();
}


void ov01_021F1620(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r4, [sp, #0x10]
    // str r4, [sp]
    // ldr r4, [sp, #0x14]
    // str r4, [sp, #4]
    // ldr r0, [r0, #0x1c]
    // bl sub_02068B0C
    // add r4, r0, #0
    // bne _021F163A
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #8
    // pop {r4, pc}
    // TODO: decompile
}


void ov01_021F1640(void) {
    sub_02068B48();
}


void ov01_021F1648(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r6, r2, #0
    // add r5, r1, #0
    // mov r2, #0
    // str r3, [sp]
    // mov r1, #0x24
    // add r3, r2, #0
    // add r7, r0, #0
    // bl ov01_021F1430
    // add r4, r0, #0
    // str r4, [r7, #0x20]
    // str r5, [r4]
    // ldr r0, [sp]
    // strh r6, [r4, #4]
    // strh r0, [r4, #6]
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x28]
    // strh r0, [r4, #8]
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp]
    // strh r0, [r4, #0xa]
    // add r0, r5, #0
    // mov r1, #0x44
    // bl ov01_021FC4C4
    // str r0, [r4, #0x10]
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x20]
    // add r0, r5, #0
    // mov r1, #0x45
    // bl ov01_021FC4C4
    // str r0, [r4, #0x14]
    // ldr r0, [sp, #0x24]
    // add r1, r5, #0
    // bl GF3dGfxRawResMan_Create
    // str r0, [r4, #0x18]
    // add r0, r7, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl ov01_021F17BC
    // add r0, r7, #0
    // str r6, [sp, #4]
    // bl ov01_021F1478
    // str r0, [sp, #8]
    // add r0, sp, #4
    // bl sub_020237EC
    // str r0, [r4, #0xc]
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F16B8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // ldr r5, [r4, #0x20]
    // cmp r5, #0
    // beq _021F16EA
    // ldr r0, [r5, #0xc]
    // bl sub_02023874
    // add r0, r5, #0
    // bl ov01_021F17F0
    // ldr r0, [r5, #0x10]
    // bl ov01_021FC520
    // ldr r0, [r5, #0x14]
    // bl ov01_021FC520
    // ldr r0, [r5, #0x18]
    // bl GF3dGfxRawResMan_Destroy
    // add r0, r5, #0
    // bl ov01_021F1448
    // mov r0, #0
    // str r0, [r4, #0x20]
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F16EC(void) {
    // push {r4, lr}
    // sub sp, #0x20
    // ldr r0, [r0, #0x20]
    // add r3, sp, #8
    // ldr r0, [r0, #0xc]
    // str r0, [sp]
    // str r1, [sp, #4]
    // ldmia r2!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r2]
    // add r2, sp, #0x14
    // str r0, [r3]
    // ldr r3, _021F173C ; =ov01_02206988
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // str r0, [r2]
    // add r0, sp, #0
    // bl sub_02023D44
    // add r4, r0, #0
    // bne _021F171C
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _021F1736
    // add r0, r4, #0
    // bl sub_02023F90
    // mov r1, #1
    // bl NNS_G3dMdlSetMdlFogEnableFlagAll
    // add r0, r4, #0
    // bl sub_02023F90
    // bl ov01_021EA3B0
    // add r0, r4, #0
    // add sp, #0x20
    // pop {r4, pc}
    // _021F173C: .word ov01_02206988
    // TODO: decompile
}


void ov01_021F1740(void) {
    ov01_021F18A8(*((u32*)(r0 + 0x20)));
    ov01_021F16EC(r5, r0, r4);
}


void ov01_021F1758(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // ldr r5, [r0, #0x20]
    // add r6, r1, #0
    // ldr r0, [r5, #0x10]
    // add r1, r2, #0
    // add r4, r3, #0
    // bl ov01_021FC5A4
    // add r7, r0, #0
    // ldr r0, [r5, #0x14]
    // add r1, r4, #0
    // bl ov01_021FC5A4
    // add r1, sp, #0xc
    // bl sub_02026E18
    // ldr r0, [r5, #0x18]
    // ldr r1, [sp, #0x30]
    // bl GF3dGfxRawResMan_GetObjById
    // add r4, r0, #0
    // bne _021F178A
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl GF3dGfxRawResObj_GetTex
    // ldr r1, [sp, #0x34]
    // cmp r1, #1
    // bne _021F1798
    // mov r4, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // add r3, sp, #0xc
    // bl ov01_021F1824
    // add r4, r0, #0
    // bne _021F17B4
    // bl GF_AssertFail
    // add r0, r4, #0
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F17BC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r1, #0
    // add r5, r2, #0
    // mov r1, #0x28
    // add r7, r0, #0
    // mul r1, r5
    // mov r2, #0
    // bl ov01_021F141C
    // add r4, r0, #0
    // add r0, r7, #0
    // lsl r1, r5, #3
    // mov r2, #0
    // str r4, [r6, #0x20]
    // bl ov01_021F141C
    // str r0, [r6, #0x1c]
    // mov r1, #0xf
    // str r1, [r0]
    // str r4, [r0, #4]
    // add r0, #8
    // add r4, #0x28
    // sub r5, r5, #1
    // bne _021F17E0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F17F0(void) {
    ov01_021F1448(*((u32*)(r0 + 0x1c)));
    ov01_021F1448(*((u32*)(r4 + 0x20)));
}


void ov01_021F1804(void) {
    GF_AssertFail(0xf);
}


void ov01_021F1824(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldrh r5, [r6, #4]
    // add r0, r1, #0
    // ldr r1, [sp, #0x1c]
    // str r2, [sp]
    // ldr r6, [r6, #0x1c]
    // add r7, r3, #0
    // str r1, [sp, #0x1c]
    // mov r4, #0
    // add r2, r5, #0
    // add r3, r6, #0
    // ldr r1, [r3]
    // cmp r1, r0
    // bne _021F1846
    // ldr r0, [r3, #4]
    // pop {r3, r4, r5, r6, r7, pc}
    // add r3, #8
    // sub r2, r2, #1
    // bne _021F183C
    // ldr r1, [r6]
    // cmp r1, #0xf
    // bne _021F1858
    // str r0, [r6]
    // ldr r4, [r6, #4]
    // b _021F185E
    // add r6, #8
    // sub r5, r5, #1
    // bne _021F184C
    // cmp r4, #0
    // bne _021F1866
    // bl GF_AssertFail
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #0x28
    // bl memset
    // ldr r0, [sp]
    // add r2, r4, #0
    // str r0, [r4]
    // add r2, #0xc
    // ldmia r7!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r7!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    // str r0, [r4, #4]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #0
    // beq _021F18A0
    // bl GF3dGfxRawResObj_GetTexKey
    // str r0, [r4, #0x1c]
    // ldr r0, [sp, #0x1c]
    // bl GF3dGfxRawResObj_GetTex4x4Key
    // str r0, [r4, #0x20]
    // ldr r0, [sp, #0x1c]
    // bl GF3dGfxRawResObj_GetPlttKey
    // str r0, [r4, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [r4, #8]
    // add r0, r4, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F18A8(void) {
    GF_AssertFail(0);
}


void ov01_021F18C8(void) {
    ov01_021F1804();
}


void ov01_021F18D4(void) {
    ov01_021FC5CC(0);
}


void ov01_021F18F0(void) {
    ov01_021FC5A4();
}


void ov01_021F18FC(void) {
    ov01_021FC588();
}


void ov01_021F1908(void) {
    ov01_021FC5CC(0);
}


void ov01_021F1924(void) {
    ov01_021FC588();
}


void ov01_021F1930(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r6, r1, #0
    // add r1, r2, #0
    // ldr r4, [r5, #0x20]
    // mov r2, #1
    // add r7, r3, #0
    // bl ov01_021F14B4
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl ov01_021F1478
    // str r0, [sp]
    // ldr r0, [r4, #0x18]
    // ldr r1, [sp, #4]
    // add r2, r6, #0
    // add r3, r7, #0
    // bl GF3dGfxRawResMan_AllocObjAndKeys
    // cmp r0, #0
    // bne _021F1962
    // bl GF_AssertFail
    // ldr r2, [r4, #0x18]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov01_021F197C
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void ov01_021F1970(void) {
    GF3dGfxRawResMan_FreeObjById();
}


void ov01_021F197C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r6, r2, #0
    // mov r1, #0xc
    // mov r2, #1
    // bl ov01_021F141C
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [r4]
    // str r5, [r4, #4]
    // ldr r0, _021F19AC ; =ov01_021F19B4
    // add r1, r4, #0
    // mov r2, #0xff
    // str r6, [r4, #8]
    // bl SysTask_CreateOnVBlankQueue
    // ldr r0, _021F19B0 ; =ov01_021F19D0
    // add r1, r4, #0
    // mov r2, #0xff
    // bl SysTask_CreateOnVWaitQueue
    // pop {r4, r5, r6, pc}
    // nop
    // _021F19AC: .word ov01_021F19B4
    // _021F19B0: .word ov01_021F19D0
    // TODO: decompile
}


void ov01_021F19B4(void) {
    GF3dGfxRawResMan_LoadObjTexById(*((u32*)(r1 + 8)), *((u32*)(r1 + 4)));
    SysTask_Destroy(r5);
}


void ov01_021F19D0(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // ldr r0, [r4]
    // cmp r0, #1
    // bne _021F19F0
    // ldr r0, [r4, #8]
    // ldr r1, [r4, #4]
    // bl GF3dGfxRawResMan_FreeObjVramAndSecondaryHeaderById
    // add r0, r4, #0
    // bl ov01_021F1448
    // add r0, r5, #0
    // bl SysTask_Destroy
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F19F4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // add r1, r2, #0
    // str r0, [sp, #4]
    // ldr r2, [r5, #0x18]
    // add r0, r4, #0
    // bl sub_020696C4
    // add r0, r4, #0
    // bl sub_02069714
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F1A18(void) {
    sub_020697DC();
}


void ov01_021F1A34(void) {
    sub_02069894();
}


void ov01_021F1A48(void) {
    // push {r4, r5, r6, lr}
    // add r4, r3, #0
    // ldr r0, [r4]
    // add r6, r1, #0
    // add r5, r2, #0
    // bl NNS_G3dGetTex
    // cmp r0, #0
    // beq _021F1A78
    // bl GF3dRender_ResTexIsLoaded
    // cmp r0, #0
    // bne _021F1A78
    // ldr r0, [r4]
    // ldr r1, [r0, #8]
    // bl DC_FlushRange
    // ldr r0, [r4]
    // bl NNS_G3dResDefaultSetup
    // cmp r0, #0
    // bne _021F1A78
    // bl GF_AssertFail
    // ldr r0, [r4]
    // bl NNS_G3dGetMdlSet
    // cmp r0, #0
    // beq _021F1AA2
    // add r2, r0, #0
    // add r2, #8
    // beq _021F1A96
    // ldrb r1, [r0, #9]
    // cmp r1, #0
    // bls _021F1A96
    // ldrh r1, [r0, #0xe]
    // add r1, r2, r1
    // add r1, r1, #4
    // b _021F1A98
    // mov r1, #0
    // cmp r1, #0
    // beq _021F1AA2
    // ldr r1, [r1]
    // add r0, r0, r1
    // b _021F1AA4
    // mov r0, #0
    // str r0, [r5]
    // cmp r5, #0
    // bne _021F1AAE
    // bl GF_AssertFail
    // ldr r1, [r5]
    // add r0, r6, #0
    // bl NNS_G3dRenderObjInit
    // pop {r4, r5, r6, pc}
    // TODO: decompile
}


void ov01_021F1AB8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r3, #0
    // bl ov01_021F14B4
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [r3]
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov01_021F1A48
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void ov01_021F1AD4(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, [r0, #0x20]
    // ldr r0, [r0, #0x18]
    // bl GF3dGfxRawResMan_GetObjById
    // add r5, r0, #0
    // ldr r4, _021F1AF8 ; =0x00000000
    // bne _021F1AE8
    // bl GF_AssertFail
    // cmp r5, #0
    // beq _021F1AF4
    // add r0, r5, #0
    // bl GF3dGfxRawResObj_GetTex
    // add r4, r0, #0
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _021F1AF8: .word 0x00000000
    // TODO: decompile
}

