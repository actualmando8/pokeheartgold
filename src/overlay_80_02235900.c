/* Decompiled from asm/overlay_80_02235900.s */
#include "global.h"

u32 FrtCmd_170(void) {
}




u32 FrtCmd_171(void) {
}




void FrtCmd_172(void) {
    // str r0, [sp]
    // ldr r3, [sp]
    // strh r0, [r4]
}




void FrtCmd_173(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_02235990);
}




void ov80_02235990(void) {
    // add r1, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
}




void FrtCmd_202(void) {
    FrontierScriptContext_ReadHalfWord();
    // add r1, #0x78
    // strh r0, [r1]
    FrontierScriptContext_Pause(r4, ov80_022359D4);
}




void ov80_022359D4(void) {
    // add r1, #0x6f
    // add r0, #0x6f
    // strb r1, [r0]
    // eor r0, r1
    // add r1, #0x39
    // strb r0, [r1]
}




void FrtCmd_174(void) {
    // add r0, #0x6e
    // strh r0, [r4]
}




void FrtCmd_175(void) {
    // add r0, #0x98
    // str r1, [r0]
    // add r0, #0xb0
    // str r6, [r0]
}




void FrtCmd_176(void) {
    // add r0, #0xa8
    // add r0, #0x26
    // strh r0, [r4]
    // add r0, r5, r2
    // add r0, #0xa1
    // strb r1, [r0]
    // add r1, #0x30
    // strh r0, [r4]
    // strh r0, [r4]
    // add r0, #0xa8
    // add r0, #0x31
    // strh r0, [r6]
    // strh r0, [r6]
    // add r0, #0xa8
    // add r5, #0xa8
    // str r0, [r5]
}




u32 FrtCmd_177(void) {
}




void FrtCmd_178(void) {
    // str r1, [sp]
    // ldr r0, [sp]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02235B64: ; jump table
    // add r4, #0x86
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x76
    // add r0, #0x86
    // add r0, #0x88
    // strh r0, [r5]
    // add r0, #0x78
    // add r0, #0x86
    // add r4, #0x88
    // strh r0, [r5]
    // add r0, #0x76
    // add r4, #0x86
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0x76
    // add r0, #0x86
    // add r0, #0x88
    // strh r0, [r5]
    // add r0, #0x78
    // add r0, #0x86
    // add r4, #0x88
    // strh r0, [r5]
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, r4, r0
    // add r0, #0x76
    // strh r0, [r5]
    // add r4, #0xa0
    // strb r6, [r4]
    // add r4, #0x74
    // strh r0, [r5]
    // add r4, #0xa0
    // strh r0, [r5]
    // add r4, #0x71
    // strh r0, [r5]
    // strh r0, [r5]
    // add r0, #0xa0
    // add r1, #0x72
    // add r0, #0xa0
    // strh r0, [r5]
    // add r0, #0xa0
    // strh r0, [r5]
    // add r0, #0xa0
    // add r0, #0xa0
    // add r0, #0xa0
    // add r0, #0xa0
    // add r0, #0xa0
    // add r0, r4, r2
    // add r0, #0xa1
    // strb r1, [r0]
    // add r4, #0x9f
    // strb r1, [r4]
}




void FrtCmd_179(void) {
    Frontier_GetLaunchArgs(*((u32*)*((u32*)r0)));
    Frontier_GetData(*((u32*)*((u32*)r5)));
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    ov80_02235FEC(r0, (0x16 - 1));
    FrontierFieldSystem_New(*((u32*)(r7 + 8)), 0, 6);
    Frontier_SetData(*((u32*)*((u32*)r5)), r0);
    ov80_0222A840(*((u32*)(r7 + 8)));
    // add r3, sp, #0
    // add r0, #0x6a
    // add r0, r4, r2
    // add r0, #0x2a
    // strb r1, [r0]
    // add r0, #0x76
    *((u16*)(r4 + 0x2e)) = *((u16*)r3);
    // add r0, #0x7e
    *((u16*)(r4 + 0x36)) = *((u16*)r3);
    // add r0, sp, #0x80
    *((u16*)(r4 + 0x16)) = *((u16*)(*((u8*)(r4 + 0xe)) + 6));
    *((u16*)(r4 + 0x18)) = *((u16*)(*((u8*)(r4 + 0xe)) + 8));
    // add r0, sp, #0x40
    *((u8*)(r4 + 0x12)) = *((u8*)(*((u16*)(*((u8*)(r4 + 0xe)) + 8)) + 0x18));
    *((u8*)(r4 + 0x10)) = ((*((u8*)(r4 + 0x10)) & ~(0xe0)) | (((((*((u8*)(*((u16*)(*((u8*)(r4 + 0xe)) + 8)) + 0x18)) + 5) << 0x18) >> 0x18) << 0x1d) >> 0x18));
    sub_0203769C(((*((u8*)(r4 + 0x10)) & ~(0xe0)) | (((((*((u8*)(*((u16*)(*((u8*)(r4 + 0xe)) + 8)) + 0x18)) + 5) << 0x18) >> 0x18) << 0x1d) >> 0x18)), (((((*((u8*)(*((u16*)(*((u8*)(r4 + 0xe)) + 8)) + 0x18)) + 5) << 0x18) >> 0x18) << 0x1d) >> 0x18), *((u8*)(*((u16*)(*((u8*)(r4 + 0xe)) + 8)) + 0x18)), (r3 + 1));
    FrontierFieldSystem_SetRandomFrontierTrainers(r4, *((u32*)(r7 + 8)));
    SaveArray_Party_Get(*((u32*)(r7 + 8)));
    HealParty();
    sub_02096910(r4);
    // strb r0, [r4, r1]
}




u32 FrtCmd_180(void) {
}




void FrtCmd_181(void) {
}




void ov80_02235F90(void) {
}




u32 FrtCmd_182(void) {
}



