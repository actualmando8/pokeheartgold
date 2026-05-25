/* Decompiled from asm/overlay_01_021F1348.s */
#include "global.h"

void ov01_021F1348(void) {
    Heap_Alloc(r2, 0x24);
    memset(0, 0x24);
    // str r7, [r4]
    *((u32*)(r4 + 4)) = r5;
    *((u32*)(r4 + 0x10)) = r6;
    Heap_Alloc(r7, (r5 << 3));
    *((u32*)(r4 + 0x14)) = r0;
    ov01_021F14DC(r4);
    ov01_021F147C(r4);
}



void ov01_021F1384(void) {
}



void ov01_021F1390(void) {
}



void ov01_021F13B0(void) {
    ov01_021F1588();
    GF_AssertFail();
    ov01_021F14F4(r5, r4);
}



void ov01_021F13D0(void) {
}



void ov01_021F13EC(void) {
}



void ov01_021F13F4(void) {
}



void ov01_021F141C(void) {
    Heap_Alloc(*((u32*)r0));
    Heap_AllocAtEnd();
}



void ov01_021F1430(void) {
}



void ov01_021F1448(void) {
}



UnkOv01_021FFECC * ov01_021F1450(void) {
    ov01_021F1588();
    GF_AssertFail();
}



void ov01_021F1468(void) {
    // ldr r0, [r0, #0x10]
    // bx lr
    // TODO: decompile
}



void ov01_021F146C(void) {
}



void ov01_021F1478(void) {
    // ldr r0, [r0]
    // bx lr
    // TODO: decompile
}



void ov01_021F147C(void) {
}



void ov01_021F1490(void) {
}



void ov01_021F149C(void) {
}



void ov01_021F14A8(void) {
}



void ov01_021F14B4(void) {
}



void ov01_021F14DC(void) {
}



void ov01_021F14F4(void) {
    ov01_021F15C4(r1);
    // blx r1
    ov01_021F1560(r5, *((u32*)(r0 + 4)));
    ov01_021F15AC(r6, r4);
}



void ov01_021F151C(void) {
    ov01_021F15C4(*((u32*)r1));
    // blx r1
    ov01_021F15A0(r4, *((u32*)(r0 + 8)));
}



void ov01_021F1538(void) {
    ov01_021F15B4(*((u32*)(r0 + 0x14)));
    ov01_021F151C(r6, r5);
    // add r5, #8
}



void ov01_021F1560(void) {
    ov01_021F15B4(*((u32*)(r0 + 0x14)));
    // add r5, #8
    GF_AssertFail(r5);
}



void ov01_021F1588(void) {
    // add r0, #8
}



void ov01_021F15A0(void) {
}



void ov01_021F15AC(void) {
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
}



void ov01_021F15FC(void) {
}



void ov01_021F1610(void) {
}



void ov01_021F1620(void) {
    // ldr r4, [sp, #0x10]
    // str r4, [sp]
    // ldr r4, [sp, #0x14]
    // str r4, [sp, #4]
    sub_02068B0C(*((u32*)(r0 + 0x1c)));
    GF_AssertFail();
}



void ov01_021F1640(void) {
}



void ov01_021F1648(void) {
    // str r3, [sp]
    ov01_021F1430(0x24, 0, 0);
    *((u32*)(r7 + 0x20)) = r0;
    // str r5, [r4]
    // ldr r0, [sp]
    *((u16*)(r0 + 4)) = r6;
    *((u16*)(r0 + 6)) = r0;
    // ldr r0, [sp, #0x20]
    // ldr r2, [sp, #0x28]
    *((u16*)(r0 + 8)) = r0;
    // ldr r0, [sp, #0x24]
    // ldr r3, [sp]
    *((u16*)(r0 + 0xa)) = r0;
    ov01_021FC4C4(r5, 0x44);
    *((u32*)(r4 + 0x10)) = r0;
    // ldr r2, [sp, #0x2c]
    // ldr r3, [sp, #0x20]
    ov01_021FC4C4(r5, 0x45);
    *((u32*)(r4 + 0x14)) = r0;
    // ldr r0, [sp, #0x24]
    GF3dGfxRawResMan_Create(r5);
    *((u32*)(r4 + 0x18)) = r0;
    ov01_021F17BC(r7, r4, r6);
    // str r6, [sp, #4]
    ov01_021F1478(r7);
    // str r0, [sp, #8]
    // add r0, sp, #4
    sub_020237EC();
    *((u32*)(r4 + 0xc)) = r0;
}



void ov01_021F16B8(void) {
    sub_02023874(*((u32*)(*((u32*)(r0 + 0x20)) + 0xc)));
    ov01_021F17F0(r5);
    ov01_021FC520(*((u32*)(r5 + 0x10)));
    ov01_021FC520(*((u32*)(r5 + 0x14)));
    GF3dGfxRawResMan_Destroy(*((u32*)(r5 + 0x18)));
    ov01_021F1448(r5);
    *((u32*)(r4 + 0x20)) = 0;
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
}



void ov01_021F1758(void) {
    ov01_021FC5A4(*((u32*)(*((u32*)(r0 + 0x20)) + 0x10)), r2);
    ov01_021FC5A4(*((u32*)(r5 + 0x14)), r4);
    // add r1, sp, #0xc
    sub_02026E18();
    // ldr r1, [sp, #0x30]
    GF3dGfxRawResMan_GetObjById(*((u32*)(r5 + 0x18)));
    GF_AssertFail();
    GF3dGfxRawResObj_GetTex(r4);
    // ldr r1, [sp, #0x34]
    // str r0, [sp]
    // ldr r0, [sp, #0x38]
    // str r4, [sp, #4]
    // str r0, [sp, #8]
    // add r3, sp, #0xc
    ov01_021F1824(r5, r6, r7);
    GF_AssertFail();
}



void ov01_021F17BC(void) {
    // mul r1, r5
    ov01_021F141C(0x28, 0);
    *((u32*)(r6 + 0x20)) = r0;
    ov01_021F141C(r7, (r5 << 3), 0);
    *((u32*)(r6 + 0x1c)) = r0;
    // str r1, [r0]
    *((u32*)(r0 + 4)) = r4;
    // add r0, #8
    // add r4, #0x28
}



void ov01_021F17F0(void) {
}



void ov01_021F1804(void) {
}



void ov01_021F1824(void) {
    // ldr r1, [sp, #0x1c]
    // str r2, [sp]
    // str r1, [sp, #0x1c]
    // add r3, #8
    // str r0, [r6]
    // add r6, #8
    GF_AssertFail(*((u32*)(*((u32*)(r0 + 0x1c)) + 4)), *((u32*)*((u32*)(r0 + 0x1c))), (*((u16*)(r0 + 4)) - 1), *((u32*)(r0 + 0x1c)));
    memset(r4, 0, 0x28);
    // ldr r0, [sp]
    // str r0, [r4]
    // add r2, #0xc
    // ldmia r7!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r7!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [sp, #0x18]
    *((u32*)(r4 + 4)) = r0;
    // ldr r0, [sp, #0x1c]
    GF3dGfxRawResObj_GetTexKey(r4);
    *((u32*)(r4 + 0x1c)) = r0;
    // ldr r0, [sp, #0x1c]
    GF3dGfxRawResObj_GetTex4x4Key();
    *((u32*)(r4 + 0x20)) = r0;
    // ldr r0, [sp, #0x1c]
    GF3dGfxRawResObj_GetPlttKey();
    *((u32*)(r4 + 0x24)) = r0;
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 8)) = r0;
}



void ov01_021F18A8(void) {
}



void ov01_021F18C8(void) {
}



void ov01_021F18D4(void) {
}



void ov01_021F18F0(void) {
}



void ov01_021F18FC(void) {
}



void ov01_021F1908(void) {
}



void ov01_021F1924(void) {
}



void ov01_021F1930(void) {
    ov01_021F14B4(r2, 1);
    // str r0, [sp, #4]
    ov01_021F1478(r5);
    // str r0, [sp]
    // ldr r1, [sp, #4]
    GF3dGfxRawResMan_AllocObjAndKeys(*((u32*)(r4 + 0x18)), r6, r7);
    GF_AssertFail();
    ov01_021F197C(r5, r6, *((u32*)(r4 + 0x18)));
}



void ov01_021F1970(void) {
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
}



void ov01_021F19D0(void) {
    GF3dGfxRawResMan_FreeObjVramAndSecondaryHeaderById(*((u32*)(r1 + 8)), *((u32*)(r1 + 4)));
    ov01_021F1448(r4);
    SysTask_Destroy(r5);
}



void ov01_021F19F4(void) {
    // str r0, [sp]
    // ldr r0, [sp, #0x18]
    // str r0, [sp, #4]
    sub_020696C4(r1, r2, *((u32*)(r0 + 0x18)));
    sub_02069714(r4);
}



void ov01_021F1A18(void) {
}



void ov01_021F1A34(void) {
}



void ov01_021F1A48(void) {
    NNS_G3dGetTex(*((u32*)r3));
    GF3dRender_ResTexIsLoaded();
    DC_FlushRange(*((u32*)r4), *((u32*)(*((u32*)r4) + 8)));
    NNS_G3dResDefaultSetup(*((u32*)r4));
    GF_AssertFail();
    NNS_G3dGetMdlSet(*((u32*)r4));
    // add r2, #8
    // add r1, r2, r1
    // add r0, r0, r1
    // str r0, [r5]
    GF_AssertFail(0, *((u32*)0), r0);
    NNS_G3dRenderObjInit(r6, *((u32*)r5));
}



void ov01_021F1AB8(void) {
    ov01_021F14B4();
    // ldr r3, [sp, #0x14]
    // ldr r2, [sp, #0x10]
    // str r0, [r3]
    ov01_021F1A48(r5, r4);
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


