/* Decompiled from asm/unk_02005D10.s */
#include "global.h"

void sub_02005D10(void) {
    // str r5, [sp]
    // str r1, [sp, #4]
}




void PlayBGM(void) {
}




void sub_02005DA0(void) {
}




void sub_02005DC4(void) {
    // str r5, [sp]
    // str r1, [sp, #4]
}




void sub_02005DF4(void) {
    // str r5, [sp]
    // str r1, [sp, #4]
}




void sub_02005E44(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // sub r1, #8
}




void StopBGM(void) {
}




void sub_02005EEC(void) {
}




void GF_SndStartFadeInBGM(void) {
}




void GF_SndStartFadeOutBGM(void) {
}




void GF_SndGetFadeTimer(void) {
}




void sub_02005F94(void) {
}




void Sound_Stop(void) {
    // ldrb r0, [r5]
    // ldrb r0, [r4]
}




void sub_02005FD8(void) {
    // ldrb r0, [r7]
    // ldrb r0, [r6]
}




void sub_0200602C(void) {
    PlaySE();
    sub_020061B4(r5, 0x0000FFFF, r4);
}




void PlaySE(void) {
    // mvn r1, r1
    // str r4, [sp]
}




void sub_0200606C(void) {
    // mvn r2, r2
    // str r5, [sp]
}




void sub_02006088(void) {
    // mvn r1, r1
    // str r5, [sp]
}




void sub_020060BC(void) {
    // str r3, [sp, #8]
    // ldr r5, [sp, #0x20]
    sub_02005BFC();
    // sub r0, r5, r0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #8]
    sub_02006C14(r6, r4, r7);
    sub_02005464(r5, r6);
    sub_02004920(((r5 << 0x10) >> 0x10));
}




void sub_02006118(void) {
}




void PlaySE_SetPitch(void) {
    PlaySE();
    sub_0200592C(r5, 0x0000FFFF, r4);
}




void StopSE(void) {
}




void sub_0200615C(void) {
}




void sub_0200616C(void) {
}




void IsSEPlaying(void) {
}




void sub_02006190(void) {
}




void GF_IsAnySEPlaying(void) {
}




void sub_020061B4(void) {
}




void sub_020061D0(void) {
    GF_GetSndHandleByPlayerNo();
    GF_GetSoundHandle();
    NNS_SndPlayerSetTrackPan(0x0000FFFF, r4);
}




void sub_020061EC(void) {
    GF_GetSndHandleByPlayerNo(3);
    // add r0, r4, r5
    GF_GetSoundHandle();
    NNS_SndPlayerSetTrackPan(r7, r6);
}




void PlayCry(void) {
    // str r1, [sp, #8]
    GF_SdatGetAttrPtr(0x12);
    GF_SdatGetAttrPtr(0x24);
    GF_SdatGetAttrPtr(0x35);
    // ldr r1, [sp, #8]
    sub_02006A0C(r5);
    sub_02006D04(*((u32*)r6), 0, 0x7f, 0);
    sub_02006E3C(0);
    sub_02006300(0);
    // str r0, [sp]
    // str r0, [sp, #4]
    sub_02006C14(1, (1 - 2), r5, (1 - 2));
    sub_02005464(r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // sub r1, #9
    sub_02006C14(8, 8, r5, 8);
    sub_02005464(r5, 8);
    sub_02006E3C(0);
}




void sub_020062E0(void) {
}




void sub_02006300(void) {
    // ldrb r0, [r6]
    // ldrb r0, [r4]
}




BOOL IsCryFinished(void) {
    // ldrb r0, [r5]
    // ldrb r0, [r4]
}




void PlayCryEx(void) {
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x38]
    // str r0, [sp, #0x38]
    // ldr r5, [sp, #0x3c]
    GF_SdatGetAttrPtr(0x10);
    // str r0, [sp, #0x14]
    GF_SdatGetAttrPtr(0x11);
    // str r0, [sp, #0x10]
    GF_SdatGetAttrPtr(0x12);
    // str r0, [sp, #0xc]
    GF_SdatGetAttrPtr(0x1e);
    // str r0, [sp, #8]
    GF_SdatGetAttrPtr(0x24);
    sub_02006A0C(r4, r5);
    // add r0, r6, r0
    // asr r0, r0, #1
    // str r0, [sp, #0x1c]
    // add r0, #0x40
    // str r0, [sp, #0x1c]
    // str r0, [sp, #0x18]
    // sub r0, #0x1e
    // str r0, [sp, #0x18]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0xc]
    // strb r1, [r0]
    // ldr r0, [sp, #0x14]
    sub_020058B8(0xe, 0);
    sub_02005680(0xe);
    // ldr r0, [sp, #0x10]
    sub_020058B8(0xf);
    sub_02005680(0xf);
    // ldr r1, [sp, #4]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _0200645E: ; jump table
    PlayCry(0x000001B9, r5);
    // ldr r0, [sp, #8]
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r0, [sp, #0x14]
    // ldr r1, [sp, #0x1c]
    sub_02005748(0xe, ((r1 << 0x18) >> 0x18));
    sub_02005774(0xe, r7);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    sub_02006E3C(1);
    // ldr r0, [sp, #4]
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _020064EE: ; jump table
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0x14);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 0x40);
    sub_02006AC0(r4, 0x14, r5);
    GF_SndHandleSetTrackPan(8, 0x0000FFFF, r6);
    // ldr r2, [sp, #0x18]
    sub_02006820(r4, 8);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0x1e);
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 0xc0);
    sub_02006AC0(r4, 0x10, r5);
    GF_SndHandleSetTrackPan(8, 0x0000FFFF, r6);
    // ldr r2, [sp, #0x18]
    sub_02006820(r4, 8);
    sub_02005600(0xe);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    sub_020057AC(r4, r7, 0xe);
    // ldr r1, [sp, #0x1c]
    sub_02005748(0xe, ((r1 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x38]
    sub_02006838(0xf);
    sub_02005760(0xe, (0x86 << 8));
    // ldr r0, [sp, #0x38]
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // mvn r1, r1
    sub_02006AF4(r4, 0x3f);
    sub_02005760(0xf, (0x86 << 8));
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // sub r2, #0xe1
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 1);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 0x2c);
    // mvn r1, r1
    sub_02006AC0(r4, 0x3f, r5);
    GF_SndHandleSetTrackPan(8, 0x0000FFFF, r6);
    // ldr r2, [sp, #0x18]
    sub_02006820(r4, 8);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0xb);
    // sub r2, #0x81
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 1);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0x3c);
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 0x3c);
    sub_02005600(0xe);
    // ldr r0, [sp, #0x38]
    // ldr r2, [sp, #0x1c]
    // str r0, [sp]
    sub_020057AC(r4, r7, 0xe);
    // ldr r1, [sp, #0x1c]
    sub_02005748(0xe, ((r1 << 0x18) >> 0x18));
    // ldr r1, [sp, #0x38]
    sub_02006838(0xd);
    sub_02005760(0xe, (0x1a << 0xa));
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0x64);
    // sub r2, #0x2d
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 1);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // sub r2, #0x61
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 1);
    PlayCry(r4, r5);
    GF_SndHandleSetTrackPan(1, 0x0000FFFF, r6);
    sub_02006820(r4, 1, r7);
    // ldr r1, [sp, #0x38]
    sub_02006838(0x14);
    // sub r2, #0x61
    GF_SndHandleSetTrackPitch(1, 0x0000FFFF, 1);
    PlayCry(r4, r5);
    sub_02006820(r4, 1, 0x7f);
    sub_02006AC0(r4, 0x14, r5);
    GF_SndHandleSetTrackPan(8, 0x0000FFFF, r6);
    GF_SndHandleMoveVolume(8, r7, 0);
    PlayCry(r4, r5);
}




void sub_02006820(void) {
}




void sub_02006838(void) {
    GF_SdatGetAttrPtr(0x23);
    sub_020068F8();
    Heap_Alloc(r4, 8);
    GF_AssertFail();
    // strb r2, [r4]
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 2)) = 0;
    *((u8*)(r4 + 3)) = 0;
    *((u8*)(r4 + 4)) = 0;
    *((u8*)(r4 + 5)) = 0;
    *((u8*)(r4 + 6)) = 0;
    *((u8*)(r4 + 7)) = 0;
    // str r5, [r4]
    SysTask_CreateOnMainQueue(sub_02006884, r4, 0);
    *((u32*)(r4 + 4)) = r0;
    // str r0, [r6]
}




void sub_02006884(void) {
    // str r0, [r5]
    // str r0, [r5]
}




void sub_020068F8(void) {
    // str r0, [r4]
}




void sub_02006920(void) {
    // str r3, [sp, #8]
    GF_SdatGetAttrPtr(6);
    GF_SdatGetAttrPtr(0x35);
    // str r0, [sp, #0xc]
    GF_SdatGetAttrPtr(0x29);
    // str r0, [sp, #0x24]
    GF_SdatGetAttrPtr(0x2d);
    // str r0, [sp, #0x20]
    GF_SdatGetAttrPtr(0x2a);
    // str r0, [sp, #0x1c]
    GF_SdatGetAttrPtr(0x2b);
    // str r0, [sp, #0x18]
    GF_SdatGetAttrPtr(0x2c);
    // str r0, [sp, #0x14]
    GF_SdatGetAttrPtr(0x2e);
    // str r0, [sp, #0x10]
    GF_SdatGetAttrPtr(0x2f);
    // str r0, [sp, #0x24]
    GF_SdatGetAttrPtr(0x33);
    // str r0, [sp, #0x20]
    GF_SdatGetAttrPtr(0x30);
    // str r0, [sp, #0x1c]
    GF_SdatGetAttrPtr(0x31);
    // str r0, [sp, #0x18]
    GF_SdatGetAttrPtr(0x32);
    // str r0, [sp, #0x14]
    GF_SdatGetAttrPtr(0x34);
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // eor r0, r1
    // strb r0, [r4]
    // add r1, sp, #0x30
    sub_02006A0C(r5, *((u8*)(*((u8*)r4) + 0x18)));
    // add r1, sp, #0x30
    // ldr r0, [sp, #0x40]
    // ldr r3, [sp, #8]
    // str r0, [sp]
    // str r0, [sp, #4]
    PlayCryEx(r6, 0x000001EE, r7);
    // ldr r1, [sp, #0x24]
    // ldr r2, [sp, #8]
    // str r6, [r1]
    // ldr r1, [sp, #0x20]
    // strh r5, [r1]
    // ldr r1, [sp, #0x1c]
    // str r7, [r1]
    // ldr r1, [sp, #0x18]
    // str r2, [r1]
    // ldr r2, [sp, #0x40]
    // ldr r1, [sp, #0x14]
    // str r2, [r1]
    // ldr r1, [sp, #0x10]
    // strb r0, [r1]
}




void sub_02006A0C(void) {
    // bne _02006A1C
    // cmp r1, #1
    // bne _02006A1C
    // bne _02006A26
    // nop
    // _02006A2C: .word 0x000001EE
}




void sub_02006A30(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // str r0, [sp, #0x14]
    // str r0, [sp, #0x18]
    // str r1, [r5]
    // strh r1, [r4]
    // str r1, [r6]
    // ldr r2, [sp]
    // str r1, [r7]
    // str r1, [r2]
    // ldr r2, [sp, #4]
    // strb r1, [r2]
    // ldr r2, [sp, #8]
    // str r1, [r2]
    // ldr r2, [sp, #0xc]
    // strh r1, [r2]
    // ldr r2, [sp, #0x10]
    // str r1, [r2]
    // ldr r2, [sp, #0x14]
    // str r1, [r2]
    // ldr r2, [sp, #0x18]
    // str r1, [r2]
    // strb r1, [r0]
}




void sub_02006AC0(void) {
    GF_SdatGetAttrPtr(0x12);
    // strb r1, [r0]
    sub_02006E3C(1, 1);
    PlayCry(r5, r6);
    GF_SndHandleSetTrackPitch(8, 0x0000FFFF, r4);
}




void sub_02006AF4(void) {
    // strb r1, [r0]
    // ldr r0, [sp, #0x18]
    // str r0, [sp]
}




void PlayFanfare(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
}




void sub_02006B84(void) {
    // strh r0, [r4]
}




void sub_02006BB0(void) {
}




BOOL IsFanfarePlaying(void) {
}




void sub_02006C04(void) {
}




void sub_02006C14(void) {
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r3, [sp, #8]
    SoundSys_GetGBSoundsState(*((u8*)(r0 + 0x14)));
    // add r0, sp, #0x10
    GBSounds_GetGBSeqNoByDSSeqNo(*((u16*)(r0 + 0x10)));
    // add r1, sp, #0x10
    sub_02004AB8(*((u16*)(r1 + 0x10)));
    GF_GetPlayerNoBySeq(r4);
    // mvn r1, r1
    GF_Snd_LoadSeqEx(r4, 1);
    // ldr r0, [sp, #4]
    GF_GetSoundHandle();
    // ldr r3, [sp, #8]
    // str r6, [sp]
    NNS_SndArcPlayerStartSeqEx(r5, r7);
    GBSounds_SetAllocatableChannels();
}



