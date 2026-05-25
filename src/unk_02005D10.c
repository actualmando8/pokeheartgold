/* Decompiled from asm/unk_02005D10.s */
#include "global.h"

void sub_02005D10(void) {
    /* Original at 0x02005D10 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    str r5, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    sub r1, r1, #2\n    add r2, r1, #0\n    add r3, r1, #0\n    add r4, r0, #0\n    bl sub_02006C14\n    add r6, r0, #0\n    bne _02005D3A\n    add r0, r5, #0\n    bl sub_02004920\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02005DA0\n    add r0, r6, #0\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void PlayBGM(void) {
    /* Original at 0x02005D48 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    bl GF_GetPlayerNoBySeq\n    add r5, r0, #0\n    bl GF_GetSndHandleByPlayerNo\n    add r6, r0, #0\n    cmp r5, #7\n    bne _02005D6A\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_02005DC4\n    add r5, r0, #0\n    b _02005D84\n    cmp r5, #1\n    bne _02005D7C\n    add r0, r4, #0\n    add r1, r5, #0\n    add r2, r6, #0\n    bl sub_02005DF4\n    add r5, r0, #0\n    b _02005D84\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    bl sub_020059E0\n    cmp r5, #0\n    bne _02005D94\n    add r0, r4, #0\n    bl sub_02004920\n    add r0, r4, #0\n    add r1, r6, #0\n    bl sub_02005DA0\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005DA0(void) {
    /* Original at 0x02005DA0 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl sub_02004A60\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02005464\n    mov r0, #1\n    bl GF_SndSetState\n    cmp r4, #0\n    bne _02005DC2\n    mov r0, #0x80\n    bl GF_SndWorkSetGbSoundsVolume\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02005DC4(void) {
    /* Original at 0x02005DC4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #3\n    add r4, r2, #0\n    bl sub_02005328\n    bl GF_Snd_LoadState\n    add r0, r5, #0\n    bl GF_Snd_LoadSeq\n    str r5, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    sub r1, r1, #2\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02005DF4(void) {
    /* Original at 0x02005DF4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0x13\n    add r6, r2, #0\n    bl GF_SdatGetAttrPtr\n    mov r0, #0x20\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0\n    bl GF_GetSoundHandle\n    bl GF_NNS_SndPlayerGetSeqNo\n    bl GF_GetBankBySeqNo\n    add r1, r0, #0\n    add r0, r5, #0\n    bl sub_020051A4\n    mov r0, #0\n    bl SndRadio_StopSeq\n    ldrh r0, [r4]\n    bl GF_GetBankBySeqNo\n    add r2, r0, #0\n    str r5, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    sub r1, r1, #2\n    add r0, r6, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_02005E44(void) {
    /* Original at 0x02005E44 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x15\n    bl GF_SdatGetAttrPtr\n    ldrb r0, [r0]\n    cmp r0, #4\n    beq _02005E60\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    bl GF_GetPlayerNoBySeq\n    cmp r0, #7\n    beq _02005E74\n    bl GF_AssertFail\n    add sp, #8\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    str r4, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #7\n    add r1, r0, #0\n    sub r1, #8\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add r5, r0, #0\n    bne _02005E9A\n    add r0, r4, #0\n    bl sub_02004920\n    mov r0, #0\n    bl SndRadio_StopSeq\n    add r0, r4, #0\n    bl sub_02004A60\n    mov r0, #1\n    bl GF_SndSetState\n    add r0, r5, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void StopBGM(void) {
    /* Original at 0x02005EB4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl NNS_SndPlayerStopSeqBySeqNo\n    add r0, r5, #0\n    bl GBSounds_GetGBSeqNoByDSSeqNo\n    cmp r5, r0\n    beq _02005ECE\n    add r1, r4, #0\n    bl NNS_SndPlayerStopSeqBySeqNo\n    add r0, r5, #0\n    bl GF_GetPlayerNoBySeq\n    cmp r0, #0xff\n    beq _02005EE4\n    bl GF_GetSndHandleByPlayerNo\n    bl GF_GetSoundHandle\n    bl NNS_SndHandleReleaseSeq\n    bl sub_02005EEC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02005EEC(void) {
    /* Original at 0x02005EEC */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0\n    bl SndRadio_StopSeq\n    mov r0, #0\n    bl sub_02004A60\n    mov r0, #0\n    bl GF_SetCurrentPlayingBGM\n    mov r0, #0\n    bl sub_02004AB8\n    mov r0, #0\n    bl GF_SndSetState\n    pop {r3, pc}"
    );
    #endif
}

void GF_SndStartFadeInBGM(void) {
    /* Original at 0x02005F10 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    add r5, r1, #0\n    add r4, r2, #0\n    bl GF_GetCurrentPlayingBGM\n    bl GF_GetPlayerNoBySeq\n    cmp r0, #0xff\n    beq _02005F4C\n    bl GF_GetSndHandleByPlayerNo\n    add r7, r0, #0\n    cmp r4, #0\n    bne _02005F36\n    mov r1, #0\n    add r2, r1, #0\n    bl GF_SndHandleMoveVolume\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    bl GF_SndHandleMoveVolume\n    add r0, r5, #0\n    bl sub_02005990\n    mov r0, #3\n    bl GF_SndSetState\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void GF_SndStartFadeOutBGM(void) {
    /* Original at 0x02005F50 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl GF_GetCurrentPlayingBGM\n    bl GF_GetPlayerNoBySeq\n    add r6, r0, #0\n    cmp r6, #0xff\n    beq _02005F86\n    bl GF_SndGetFadeTimer\n    cmp r0, #0\n    bne _02005F80\n    add r0, r6, #0\n    bl GF_GetSndHandleByPlayerNo\n    add r1, r5, #0\n    add r2, r4, #0\n    bl GF_SndHandleMoveVolume\n    add r0, r4, #0\n    bl sub_02005990\n    mov r0, #4\n    bl GF_SndSetState\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void GF_SndGetFadeTimer(void) {
    GF_SdatGetAttrPtr();
}

void sub_02005F94(void) {
    /* Original at 0x02005F94 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GF_GetPlayerNoBySeq\n    bl GF_SndPlayerCountPlayingSeqByPlayerNo\n    pop {r3, pc}"
    );
    #endif
}

void Sound_Stop(void) {
    /* Original at 0x02005FA0 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0\n    bl NNS_SndPlayerStopSeqAll\n    ldrb r0, [r5]\n    cmp r0, #1\n    bne _02005FC4\n    mov r0, #0xe\n    bl sub_02005728\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _02005FD0\n    mov r0, #0xf\n    bl sub_02005728\n    mov r0, #0\n    bl GF_SndSetState\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02005FD8(void) {
    /* Original at 0x02005FD8 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r7, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #7\n    bl GF_GetSoundHandle\n    mov r1, #0\n    bl NNS_SndPlayerStopSeq\n    bl sub_02005EEC\n    mov r5, #0\n    add r4, r5, #0\n    add r0, r5, #3\n    add r1, r4, #0\n    bl sub_0200615C\n    add r5, r5, #1\n    cmp r5, #4\n    blt _02005FFE\n    mov r0, #0\n    bl sub_02006300\n    ldrb r0, [r7]\n    cmp r0, #1\n    bne _0200601E\n    mov r0, #0xe\n    bl sub_02005728\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _0200602A\n    mov r0, #0xf\n    bl sub_02005728\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_0200602C(void) {
    /* Original at 0x0200602C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlaySE\n    add r6, r0, #0\n    ldr r1, _02006048 ; =0x0000FFFF\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_020061B4\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _02006048: .word 0x0000FFFF"
    );
    #endif
}

void PlaySE(void) {
    /* Original at 0x0200604C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    mov r1, #0\n    mvn r1, r1\n    add r2, r1, #0\n    add r3, r1, #0\n    str r4, [sp]\n    bl sub_020060BC\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void sub_0200606C(void) {
    /* Original at 0x0200606C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    bl GF_GetSndHandleByPlayerNo\n    mov r2, #0\n    mvn r2, r2\n    add r1, r4, #0\n    add r3, r2, #0\n    str r5, [sp]\n    bl sub_020060BC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02006088(void) {
    /* Original at 0x02006088 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0x20\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    add r0, r5, #0\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    add r6, r0, #0\n    ldrh r0, [r4]\n    bl GF_GetBankBySeqNo\n    mov r1, #0\n    mvn r1, r1\n    add r2, r0, #0\n    add r0, r6, #0\n    add r3, r1, #0\n    str r5, [sp]\n    bl sub_020060BC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void sub_020060BC(void) {
    /* Original at 0x020060BC */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r4, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    ldr r5, [sp, #0x20]\n    bl sub_02005BFC\n    cmp r0, #1\n    bne _020060E0\n    ldr r0, _02006114 ; =0x000005DC\n    sub r0, r5, r0\n    cmp r0, #1\n    bhi _020060E0\n    add sp, #0xc\n    mov r0, #0\n    pop {r4, r5, r6, r7, pc}\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r3, [sp, #8]\n    add r0, r6, #0\n    add r1, r4, #0\n    add r2, r7, #0\n    bl sub_02006C14\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl sub_02005464\n    cmp r4, #0\n    bne _0200610C\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    bl sub_02004920\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02006114: .word 0x000005DC"
    );
    #endif
}

void sub_02006118(void) {
    /* Original at 0x02006118 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlaySE\n    add r6, r0, #0\n    beq _0200612E\n    add r0, r5, #0\n    add r1, r4, #0\n    bl GF_SetVolumeBySeqNo\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void PlaySE_SetPitch(void) {
    /* Original at 0x02006134 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl PlaySE\n    add r6, r0, #0\n    beq _0200614C\n    ldr r1, _02006150 ; =0x0000FFFF\n    add r0, r5, #0\n    add r2, r4, #0\n    bl sub_0200592C\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    _02006150: .word 0x0000FFFF"
    );
    #endif
}

void StopSE(void) {
    NNS_SndPlayerStopSeqBySeqNo();
}

void sub_0200615C(void) {
    /* Original at 0x0200615C */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl GF_GetSoundHandle\n    add r1, r4, #0\n    bl NNS_SndPlayerStopSeq\n    pop {r4, pc}"
    );
    #endif
}

void sub_0200616C(void) {
    sub_0200615C(0);
}

void IsSEPlaying(void) {
    /* Original at 0x02006184 */
    /* Requires manual decompilation - 4 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl GF_GetPlayerNoBySeq\n    bl GF_SndPlayerCountPlayingSeqByPlayerNo\n    pop {r3, pc}"
    );
    #endif
}

void sub_02006190(void) {
    GF_SndPlayerCountPlayingSeqByPlayerNo();
}

void GF_IsAnySEPlaying(void) {
    GF_SndPlayerCountPlayingSeqByPlayerNo(0, 1, 0);
}

void sub_020061B4(void) {
    /* Original at 0x020061B4 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl GF_GetPlayerNoBySeq\n    bl GF_GetSndHandleByPlayerNo\n    bl GF_GetSoundHandle\n    add r1, r5, #0\n    add r2, r4, #0\n    bl NNS_SndPlayerSetTrackPan\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_020061D0(void) {
    /* Original at 0x020061D0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    bl GF_GetSndHandleByPlayerNo\n    bl GF_GetSoundHandle\n    ldr r1, _020061E8 ; =0x0000FFFF\n    add r2, r4, #0\n    bl NNS_SndPlayerSetTrackPan\n    pop {r4, pc}\n    nop\n    _020061E8: .word 0x0000FFFF"
    );
    #endif
}

void sub_020061EC(void) {
    /* Original at 0x020061EC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #3\n    bl GF_GetSndHandleByPlayerNo\n    ldr r7, _02006214 ; =0x0000FFFF\n    add r4, r0, #0\n    mov r5, #0\n    add r0, r4, r5\n    bl GF_GetSoundHandle\n    add r1, r7, #0\n    add r2, r6, #0\n    bl NNS_SndPlayerSetTrackPan\n    add r5, r5, #1\n    cmp r5, #4\n    blt _020061FC\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02006214: .word 0x0000FFFF"
    );
    #endif
}

void PlayCry(void) {
    /* Original at 0x02006218 */
    /* Requires manual decompilation - 86 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0x12\n    str r1, [sp, #8]\n    bl GF_SdatGetAttrPtr\n    add r7, r0, #0\n    mov r0, #0x24\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x35\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldr r1, [sp, #8]\n    add r0, r5, #0\n    bl sub_02006A0C\n    cmp r0, #1\n    bne _02006246\n    ldr r5, _020062D8 ; =0x000001EE\n    ldr r0, _020062D8 ; =0x000001EE\n    cmp r5, r0\n    beq _02006258\n    add r0, r0, #1\n    cmp r5, r0\n    bhi _02006256\n    cmp r5, #0\n    bne _02006258\n    mov r5, #1\n    ldr r0, _020062DC ; =0x000001B9\n    cmp r5, r0\n    bne _0200627A\n    mov r1, #0\n    ldr r0, [r6]\n    mov r2, #0x7f\n    add r3, r1, #0\n    bl sub_02006D04\n    cmp r0, #1\n    bne _0200627A\n    mov r0, #0\n    bl sub_02006E3C\n    add sp, #0xc\n    mov r0, #1\n    pop {r4, r5, r6, r7, pc}\n    ldrb r0, [r7]\n    cmp r0, #0\n    bne _020062AC\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _0200628C\n    mov r0, #0\n    bl sub_02006300\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #1\n    sub r1, r0, #2\n    add r2, r5, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #1\n    bl sub_02005464\n    b _020062CC\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #8\n    add r1, r0, #0\n    sub r1, #9\n    add r2, r5, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #8\n    bl sub_02005464\n    mov r0, #0\n    bl sub_02006E3C\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _020062D8: .word 0x000001EE\n    _020062DC: .word 0x000001B9"
    );
    #endif
}

void sub_020062E0(void) {
    sub_02006920(0, 0xb, 1, 0x7f);
}

void sub_02006300(void) {
    /* Original at 0x02006300 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0xf\n    bl GF_SdatGetAttrPtr\n    mov r0, #1\n    bl GF_GetSoundHandle\n    add r1, r5, #0\n    bl NNS_SndPlayerStopSeq\n    mov r0, #8\n    bl GF_GetSoundHandle\n    add r1, r5, #0\n    bl NNS_SndPlayerStopSeq\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _02006344\n    mov r0, #0xe\n    bl sub_020058B8\n    mov r0, #0xe\n    bl sub_02005680\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _02006356\n    mov r0, #0xf\n    bl sub_020058B8\n    mov r0, #0xf\n    bl sub_02005680\n    bl sub_02006DB8\n    bl sub_02006A30\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void IsCryFinished(void) {
    /* Original at 0x02006360 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r0, #0x10\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0xf\n    bl GF_SdatGetAttrPtr\n    mov r0, #0x2e\n    bl GF_SdatGetAttrPtr\n    ldrb r0, [r5]\n    cmp r0, #1\n    bne _0200638C\n    mov r0, #0xe\n    bl sub_02005738\n    pop {r3, r4, r5, pc}\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _0200639A\n    mov r0, #0xf\n    bl sub_02005738\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    bl GF_SndPlayerCountPlayingSeqByPlayerNo\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void PlayCryEx(void) {
    /* Original at 0x020063A4 */
    /* Requires manual decompilation - 451 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x38]\n    add r4, r1, #0\n    str r0, [sp, #0x38]\n    mov r0, #0x10\n    add r6, r2, #0\n    add r7, r3, #0\n    ldr r5, [sp, #0x3c]\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x14]\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x10]\n    mov r0, #0x12\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0xc]\n    mov r0, #0x1e\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #8]\n    mov r0, #0x24\n    bl GF_SdatGetAttrPtr\n    add r0, r4, #0\n    add r1, r5, #0\n    bl sub_02006A0C\n    cmp r0, #1\n    bne _020063EA\n    ldr r4, _02006740 ; =0x000001EE\n    ldr r0, _02006740 ; =0x000001EE\n    cmp r4, r0\n    beq _020063FC\n    add r0, r0, #1\n    cmp r4, r0\n    bhi _020063FA\n    cmp r4, #0\n    bne _020063FC\n    mov r4, #1\n    lsr r0, r6, #0x1f\n    add r0, r6, r0\n    asr r0, r0, #1\n    str r0, [sp, #0x1c]\n    add r0, #0x40\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    str r0, [sp, #0x18]\n    sub r0, #0x1e\n    str r0, [sp, #0x18]\n    cmp r0, #0\n    bgt _02006418\n    mov r0, #1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    strb r1, [r0]\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02006432\n    mov r0, #0xe\n    bl sub_020058B8\n    mov r0, #0xe\n    bl sub_02005680\n    ldr r0, [sp, #0x10]\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _02006446\n    mov r0, #0xf\n    bl sub_020058B8\n    mov r0, #0xf\n    bl sub_02005680\n    ldr r0, _02006744 ; =0x000001B9\n    cmp r4, r0\n    bne _020064DA\n    ldr r1, [sp, #4]\n    cmp r1, #0xc\n    bhi _020064D4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0200645E: ; jump table\n    add r1, r5, #0\n    bl PlayCry\n    ldr r0, [sp, #8]\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0200649C\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    b _020064CE\n    ldr r0, [sp, #0x14]\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _020064BA\n    ldr r1, [sp, #0x1c]\n    mov r0, #0xe\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02005748\n    mov r0, #0xe\n    add r1, r7, #0\n    bl sub_02005774\n    b _020064CE\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    add sp, #0x20\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    bl sub_02006E3C\n    ldr r0, [sp, #4]\n    cmp r0, #0xe\n    bls _020064E2\n    b _02006814\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _020064EE: ; jump table\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0x14\n    bl sub_02006838\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    mov r2, #0x40\n    bl GF_SndHandleSetTrackPitch\n    add r0, r4, #0\n    mov r1, #0x14\n    add r2, r5, #0\n    bl sub_02006AC0\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #8\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    mov r1, #8\n    bl sub_02006820\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0x1e\n    bl sub_02006838\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    mov r2, #0xc0\n    bl GF_SndHandleSetTrackPitch\n    add r0, r4, #0\n    mov r1, #0x10\n    add r2, r5, #0\n    bl sub_02006AC0\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #8\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    mov r1, #8\n    bl sub_02006820\n    b _02006814\n    mov r0, #0xe\n    bl sub_02005600\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r3, #0xe\n    bl sub_020057AC\n    ldr r1, [sp, #0x1c]\n    mov r0, #0xe\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02005748\n    ldr r1, [sp, #0x38]\n    mov r0, #0xf\n    bl sub_02006838\n    mov r1, #0x86\n    mov r0, #0xe\n    lsl r1, r1, #8\n    bl sub_02005760\n    ldr r0, [sp, #0x38]\n    mov r1, #0x3f\n    str r0, [sp]\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r0, r4, #0\n    mvn r1, r1\n    bl sub_02006AF4\n    mov r1, #0x86\n    mov r0, #0xf\n    lsl r1, r1, #8\n    bl sub_02005760\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    mov r0, #1\n    add r2, r0, #0\n    ldr r1, _02006748 ; =0x0000FFFF\n    sub r2, #0xe1\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    mov r2, #0x2c\n    bl GF_SndHandleSetTrackPitch\n    mov r1, #0x3f\n    add r0, r4, #0\n    mvn r1, r1\n    add r2, r5, #0\n    bl sub_02006AC0\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #8\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    ldr r2, [sp, #0x18]\n    add r0, r4, #0\n    mov r1, #8\n    bl sub_02006820\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0xb\n    bl sub_02006838\n    mov r0, #1\n    add r2, r0, #0\n    ldr r1, _02006748 ; =0x0000FFFF\n    sub r2, #0x81\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0x3c\n    bl sub_02006838\n    ldr r1, _02006748 ; =0x0000FFFF\n    mov r0, #1\n    mov r2, #0x3c\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    mov r0, #0xe\n    bl sub_02005600\n    ldr r0, [sp, #0x38]\n    ldr r2, [sp, #0x1c]\n    str r0, [sp]\n    add r0, r4, #0\n    add r1, r7, #0\n    mov r3, #0xe\n    bl sub_020057AC\n    ldr r1, [sp, #0x1c]\n    mov r0, #0xe\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    bl sub_02005748\n    ldr r1, [sp, #0x38]\n    mov r0, #0xd\n    bl sub_02006838\n    mov r1, #0x1a\n    mov r0, #0xe\n    lsl r1, r1, #0xa\n    bl sub_02005760\n    b _02006814\n    _02006740: .word 0x000001EE\n    _02006744: .word 0x000001B9\n    _02006748: .word 0x0000FFFF\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _0200681C ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0x64\n    bl sub_02006838\n    mov r0, #1\n    add r2, r0, #0\n    ldr r1, _0200681C ; =0x0000FFFF\n    sub r2, #0x2d\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _0200681C ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    mov r0, #1\n    add r2, r0, #0\n    ldr r1, _0200681C ; =0x0000FFFF\n    sub r2, #0x61\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    ldr r1, _0200681C ; =0x0000FFFF\n    mov r0, #1\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    add r0, r4, #0\n    mov r1, #1\n    add r2, r7, #0\n    bl sub_02006820\n    ldr r1, [sp, #0x38]\n    mov r0, #0x14\n    bl sub_02006838\n    mov r0, #1\n    add r2, r0, #0\n    ldr r1, _0200681C ; =0x0000FFFF\n    sub r2, #0x61\n    bl GF_SndHandleSetTrackPitch\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0x7f\n    bl sub_02006820\n    add r0, r4, #0\n    mov r1, #0x14\n    add r2, r5, #0\n    bl sub_02006AC0\n    ldr r1, _0200681C ; =0x0000FFFF\n    mov r0, #8\n    add r2, r6, #0\n    bl GF_SndHandleSetTrackPan\n    mov r0, #8\n    add r1, r7, #0\n    mov r2, #0\n    bl GF_SndHandleMoveVolume\n    b _02006814\n    add r0, r4, #0\n    add r1, r5, #0\n    bl PlayCry\n    mov r0, #1\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0200681C: .word 0x0000FFFF"
    );
    #endif
}

void sub_02006820(void) {
    /* Original at 0x02006820 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    add r1, r2, #0\n    bl GF_SndHandleSetInitialVolume\n    add r0, r5, #0\n    add r1, r4, #0\n    bl sub_02005464\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02006838(void) {
    /* Original at 0x02006838 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x23\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    bl sub_020068F8\n    add r0, r4, #0\n    mov r1, #8\n    bl Heap_Alloc\n    add r4, r0, #0\n    bne _0200685C\n    bl GF_AssertFail\n    pop {r4, r5, r6, pc}\n    mov r2, #0\n    strb r2, [r4]\n    strb r2, [r4, #1]\n    strb r2, [r4, #2]\n    strb r2, [r4, #3]\n    strb r2, [r4, #4]\n    strb r2, [r4, #5]\n    strb r2, [r4, #6]\n    strb r2, [r4, #7]\n    ldr r0, _02006880 ; =sub_02006884\n    add r1, r4, #0\n    str r5, [r4]\n    bl SysTask_CreateOnMainQueue\n    str r0, [r4, #4]\n    str r0, [r6]\n    pop {r4, r5, r6, pc}\n    nop\n    _02006880: .word sub_02006884"
    );
    #endif
}

void sub_02006884(void) {
    /* Original at 0x02006884 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    mov r0, #0x10\n    add r5, r1, #0\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x11\n    bl GF_SdatGetAttrPtr\n    ldr r2, [r5]\n    add r4, r0, #0\n    cmp r2, #0xa\n    bne _020068B0\n    mov r0, #1\n    mov r1, #0\n    bl GF_SndHandleMoveVolume\n    ldr r2, [r5]\n    mov r0, #8\n    mov r1, #0\n    bl GF_SndHandleMoveVolume\n    ldr r0, [r5]\n    sub r0, r0, #1\n    str r0, [r5]\n    bl IsCryFinished\n    cmp r0, #0\n    bne _020068C2\n    mov r0, #0\n    str r0, [r5]\n    ldr r0, [r5]\n    cmp r0, #0\n    bgt _020068F6\n    mov r0, #0\n    bl sub_02006300\n    ldrb r0, [r6]\n    cmp r0, #1\n    bne _020068E0\n    mov r0, #0xe\n    bl sub_020058B8\n    mov r0, #0xe\n    bl sub_02005680\n    ldrb r0, [r4]\n    cmp r0, #1\n    bne _020068F2\n    mov r0, #0xf\n    bl sub_020058B8\n    mov r0, #0xf\n    bl sub_02005680\n    bl sub_020068F8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void sub_020068F8(void) {
    /* Original at 0x020068F8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    mov r0, #0x23\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0200691A\n    bl SysTask_GetData\n    add r5, r0, #0\n    ldr r0, [r4]\n    bl SysTask_Destroy\n    add r0, r5, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [r4]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02006920(void) {
    /* Original at 0x02006920 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x28\n    add r6, r0, #0\n    mov r0, #6\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0x35\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0xc]\n    ldrb r0, [r4]\n    cmp r0, #0\n    bne _02006974\n    mov r0, #0x29\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x24]\n    mov r0, #0x2d\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x20]\n    mov r0, #0x2a\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x1c]\n    mov r0, #0x2b\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x18]\n    mov r0, #0x2c\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x14]\n    mov r0, #0x2e\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x10]\n    b _020069A4\n    mov r0, #0x2f\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x24]\n    mov r0, #0x33\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x20]\n    mov r0, #0x30\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x1c]\n    mov r0, #0x31\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x18]\n    mov r0, #0x32\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x14]\n    mov r0, #0x34\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0xc]\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _020069B4\n    ldrb r1, [r4]\n    mov r0, #1\n    eor r0, r1\n    strb r0, [r4]\n    add r1, sp, #0x30\n    ldrb r1, [r1, #0x18]\n    add r0, r5, #0\n    bl sub_02006A0C\n    cmp r0, #1\n    bne _020069C4\n    ldr r5, _02006A08 ; =0x000001EE\n    cmp r5, #0\n    beq _02006A04\n    add r1, sp, #0x30\n    ldrb r0, [r1, #0x14]\n    cmp r0, #0\n    bne _020069E8\n    ldr r0, [sp, #0x40]\n    ldr r3, [sp, #8]\n    str r0, [sp]\n    ldrb r0, [r1, #0x18]\n    add r1, r5, #0\n    add r2, r7, #0\n    str r0, [sp, #4]\n    add r0, r6, #0\n    bl PlayCryEx\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r1, [sp, #0x24]\n    ldr r2, [sp, #8]\n    str r6, [r1]\n    ldr r1, [sp, #0x20]\n    strh r5, [r1]\n    ldr r1, [sp, #0x1c]\n    str r7, [r1]\n    ldr r1, [sp, #0x18]\n    str r2, [r1]\n    ldr r2, [sp, #0x40]\n    ldr r1, [sp, #0x14]\n    str r2, [r1]\n    ldr r1, [sp, #0x10]\n    strb r0, [r1]\n    add sp, #0x28\n    pop {r3, r4, r5, r6, r7, pc}\n    _02006A08: .word 0x000001EE"
    );
    #endif
}

void sub_02006A0C(void) {
    /* Original at 0x02006A0C */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0x7b\n    lsl r2, r2, #2\n    cmp r0, r2\n    bne _02006A1C\n    cmp r1, #1\n    bne _02006A1C\n    mov r0, #1\n    bx lr\n    ldr r1, _02006A2C ; =0x000001EE\n    cmp r0, r1\n    bne _02006A26\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr\n    nop\n    _02006A2C: .word 0x000001EE"
    );
    #endif
}

void sub_02006A30(void) {
    /* Original at 0x02006A30 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    mov r0, #0x29\n    bl GF_SdatGetAttrPtr\n    add r5, r0, #0\n    mov r0, #0x2d\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #0x2a\n    bl GF_SdatGetAttrPtr\n    add r6, r0, #0\n    mov r0, #0x2b\n    bl GF_SdatGetAttrPtr\n    add r7, r0, #0\n    mov r0, #0x2c\n    bl GF_SdatGetAttrPtr\n    str r0, [sp]\n    mov r0, #0x2e\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #4]\n    mov r0, #0x2f\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #8]\n    mov r0, #0x33\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0xc]\n    mov r0, #0x30\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x10]\n    mov r0, #0x31\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x14]\n    mov r0, #0x32\n    bl GF_SdatGetAttrPtr\n    str r0, [sp, #0x18]\n    mov r0, #0x34\n    bl GF_SdatGetAttrPtr\n    mov r1, #0\n    str r1, [r5]\n    strh r1, [r4]\n    str r1, [r6]\n    ldr r2, [sp]\n    str r1, [r7]\n    str r1, [r2]\n    ldr r2, [sp, #4]\n    strb r1, [r2]\n    ldr r2, [sp, #8]\n    str r1, [r2]\n    ldr r2, [sp, #0xc]\n    strh r1, [r2]\n    ldr r2, [sp, #0x10]\n    str r1, [r2]\n    ldr r2, [sp, #0x14]\n    str r1, [r2]\n    ldr r2, [sp, #0x18]\n    str r1, [r2]\n    strb r1, [r0]\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void sub_02006AC0(void) {
    /* Original at 0x02006AC0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    mov r0, #0x12\n    add r4, r1, #0\n    add r6, r2, #0\n    bl GF_SdatGetAttrPtr\n    mov r1, #1\n    strb r1, [r0]\n    add r0, r1, #0\n    bl sub_02006E3C\n    add r0, r5, #0\n    add r1, r6, #0\n    bl PlayCry\n    add r5, r0, #0\n    ldr r1, _02006AF0 ; =0x0000FFFF\n    mov r0, #8\n    add r2, r4, #0\n    bl GF_SndHandleSetTrackPitch\n    add r0, r5, #0\n    pop {r4, r5, r6, pc}\n    _02006AF0: .word 0x0000FFFF"
    );
    #endif
}

void sub_02006AF4(void) {
    /* Original at 0x02006AF4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    mov r0, #0x12\n    add r4, r2, #0\n    add r6, r3, #0\n    bl GF_SdatGetAttrPtr\n    mov r1, #1\n    strb r1, [r0]\n    mov r0, #0xf\n    bl sub_02005600\n    ldr r0, [sp, #0x18]\n    add r1, r4, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r2, r6, #0\n    mov r3, #0xf\n    bl sub_020057AC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void PlayFanfare(void) {
    /* Original at 0x02006B24 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl GF_GetBankInfoBySeqNo\n    add r0, r4, #0\n    bl sub_02006C04\n    bl GF_GetCurrentPlayingBGM\n    bl GF_GetPlayerNoBySeq\n    cmp r0, #0xff\n    beq _02006B48\n    mov r1, #1\n    bl sub_020053A8\n    b _02006B4E\n    mov r0, #1\n    bl SndRadio_PausePlayer\n    mov r0, #0x1d\n    bl GF_SdatGetAttrPtr\n    bl GF_Snd_SaveState\n    add r0, r4, #0\n    mov r1, #3\n    bl GF_Snd_LoadSeqEx\n    str r4, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    sub r1, r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl sub_02006C14\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #2\n    bl sub_02005464\n    add r0, r5, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void sub_02006B84(void) {
    /* Original at 0x02006B84 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r0, #0xe\n    bl GF_SdatGetAttrPtr\n    add r4, r0, #0\n    mov r0, #2\n    bl GF_SndPlayerCountPlayingSeqByPlayerNo\n    cmp r0, #0\n    beq _02006B9C\n    mov r0, #1\n    pop {r4, pc}\n    ldrh r0, [r4]\n    cmp r0, #0\n    beq _02006BAA\n    sub r0, r0, #1\n    strh r0, [r4]\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}"
    );
    #endif
}

void sub_02006BB0(void) {
    /* Original at 0x02006BB0 */
    /* Requires manual decompilation - 10 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    bl GF_GetSoundHandle\n    add r1, r4, #0\n    bl NNS_SndPlayerStopSeq\n    mov r0, #6\n    bl sub_02005328\n    bl GF_Snd_LoadState\n    pop {r4, pc}"
    );
    #endif
}

void IsFanfarePlaying(void) {
    /* Original at 0x02006BCC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r0, #0xe\n    bl GF_SdatGetAttrPtr\n    bl sub_02006B84\n    cmp r0, #1\n    bne _02006BE0\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    bl sub_02006BB0\n    bl GF_GetCurrentPlayingBGM\n    bl GF_GetPlayerNoBySeq\n    cmp r0, #0xff\n    beq _02006BF8\n    mov r1, #0\n    bl sub_020053A8\n    mov r0, #0\n    bl SndRadio_PausePlayer\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void sub_02006C04(void) {
    GF_SdatGetAttrPtr();
}

void sub_02006C14(void) {
    /* Original at 0x02006C14 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    str r0, [sp, #4]\n    add r0, sp, #0x10\n    ldrh r6, [r0, #0x10]\n    ldrb r0, [r0, #0x14]\n    add r5, r1, #0\n    add r7, r2, #0\n    str r3, [sp, #8]\n    cmp r0, #1\n    bne _02006C6A\n    bl SoundSys_GetGBSoundsState\n    cmp r0, #1\n    bne _02006C6A\n    add r0, sp, #0x10\n    ldrh r0, [r0, #0x10]\n    bl GBSounds_GetGBSeqNoByDSSeqNo\n    add r1, sp, #0x10\n    ldrh r1, [r1, #0x10]\n    add r4, r0, #0\n    cmp r1, r4\n    beq _02006C6A\n    add r6, r4, #0\n    ldr r7, _02006C88 ; =0x000002BD\n    bl sub_02004AB8\n    add r0, r4, #0\n    bl GF_GetPlayerNoBySeq\n    mov r1, #0\n    mvn r1, r1\n    cmp r5, r1\n    beq _02006C5E\n    lsl r0, r5, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #7\n    bne _02006C6A\n    add r0, r4, #0\n    mov r1, #1\n    bl GF_Snd_LoadSeqEx\n    ldr r0, [sp, #4]\n    bl GF_GetSoundHandle\n    ldr r3, [sp, #8]\n    add r1, r5, #0\n    add r2, r7, #0\n    str r6, [sp]\n    bl NNS_SndArcPlayerStartSeqEx\n    add r4, r0, #0\n    bl GBSounds_SetAllocatableChannels\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02006C88: .word 0x000002BD"
    );
    #endif
}
