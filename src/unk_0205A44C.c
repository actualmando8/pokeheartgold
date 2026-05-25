/* Decompiled from asm/unk_0205A44C.s */
#include "global.h"

void sub_0205A44C(void) {
    // add r0, #0x80
    *((u32*)(*((u32*)r3) + 0x2c)) = 1;
    // add r3, #0x80
    // ldrb r1, [r2]
    *((u32*)(*((u32*)r3) + 0x40)) = 1;
    // ldrb r0, [r2]
    sub_020388E0(*((u32*)r3), 1);
}



void sub_0205A46C(void) {
    // add r3, #0x80
    *((u32*)(*((u32*)r3) + 0x44)) = 1;
}



void sub_0205A478(void) {
    // ldr r0, [r0, #0x44]
    // bx lr
    // TODO: decompile
}



void sub_0205A47C(void) {
}



void sub_0205A498(void) {
    // push {r4, lr}
    // add r4, r2, #0
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02034818
    // ldr r0, _0205A4B0 ; =0x0000066A
    // mov r1, #1
    // strh r1, [r4, r0]
    // pop {r4, pc}
    // _0205A4B0: .word 0x0000066A
    // TODO: decompile
}



void sub_0205A4B4(void) {
    // add r1, #0x80
    // add r1, r1, r0
    // ldr r0, [r1, r0]
}



void sub_0205A4C4(void) {
    // add r3, #0x80
    // ldr r1, [r3]
    // ldrb r2, [r2]
    // add r1, r1, r0
    // ldr r0, _0205A4D4 ; =0x00000176
    // strb r2, [r1, r0]
    // bx lr
    // nop
    // _0205A4D4: .word 0x00000176
    // TODO: decompile
}



void sub_0205A4D8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0203769C
    // ldr r2, _0205A504 ; =0x00000176
    // add r1, r4, r0
    // ldrb r1, [r1, r2]
    // cmp r1, #2
    // bne _0205A4EE
    // mov r0, #1
    // pop {r4, pc}
    // mov r1, #1
    // eor r0, r1
    // add r0, r4, r0
    // ldrb r0, [r0, r2]
    // cmp r0, #2
    // bne _0205A4FE
    // mov r0, #2
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _0205A504: .word 0x00000176
    // TODO: decompile
}



void sub_0205A508(void) {
}



void sub_0205A51C(void) {
    // ldr r3, _0205A540 ; =_020FC824
    // mov r2, #0
    // ldrh r1, [r3]
    // cmp r1, r0
    // bgt _0205A530
    // add r1, r1, #4
    // cmp r1, r0
    // ble _0205A530
    // add r0, r2, #0
    // bx lr
    // add r2, r2, #1
    // add r3, r3, #2
    // cmp r2, #0xa
    // blt _0205A520
    // mov r0, #0
    // mvn r0, r0
    // bx lr
    // nop
    // _0205A540: .word _020FC824
    // TODO: decompile
}



void sub_0205A544(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // cmp r4, #9
    // ble _0205A564
    // add r0, r4, #0
    // bl sub_0205A51C
    // add r5, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _0205A566
    // bl GF_AssertFail
    // b _0205A566
    // add r5, r4, #0
    // mov r0, #0x11
    // lsl r0, r0, #4
    // add r6, r6, r0
    // lsl r7, r5, #2
    // ldr r0, [r6, r7]
    // cmp r0, #0
    // bne _0205A578
    // mov r0, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl sub_02035798
    // ldr r5, [r6, r7]
    // add r5, #0x50
    // add r5, #0x30
    // cmp r0, #0
    // bne _0205A58C
    // mov r0, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // cmp r4, #9
    // ble _0205A5A6
    // sub r4, #0xa
    // lsr r2, r4, #0x1f
    // lsl r1, r4, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // add r0, r5, r0
    // ldrb r0, [r0, #0x18]
    // asr r4, r0, #7
    // b _0205A5AC
    // bl PlayerProfile_GetTrainerGender
    // add r4, r0, #0
    // ldrb r0, [r5, #0x1c]
    // cmp r0, #0xd
    // bhi _0205A68A
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A5BE: ; jump table
    // ldr r0, _0205A690 ; =_020FC7FC
    // lsl r1, r4, #2
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A694 ; =_020FC814
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A698 ; =_020FC8D4
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A69C ; =_020FC804
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A6A0 ; =_020FC8B4
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A6A4 ; =_020FC8F4
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // bl LCRandom
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1e
    // sub r1, r1, r2
    // mov r0, #0x1e
    // ror r1, r0
    // add r0, r2, r1
    // lsl r2, r0, #3
    // ldr r0, _0205A6A8 ; =_020FC914
    // lsl r1, r4, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0x28
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0205A690: .word _020FC7FC
    // _0205A694: .word _020FC814
    // _0205A698: .word _020FC8D4
    // _0205A69C: .word _020FC804
    // _0205A6A0: .word _020FC8B4
    // _0205A6A4: .word _020FC8F4
    // _0205A6A8: .word _020FC914
    // TODO: decompile
}



int sub_0205A6AC(void) {
    // str r0, [sp]
    sub_0203769C();
    sub_020348A8();
    sub_0203769C((r0 << 0x18));
    // eor r0, r1
    sub_020348A8(1);
    sub_0203769C((r0 << 0x18));
    sub_020348CC();
    sub_0203769C((r0 << 0x18));
    // eor r0, r1
    sub_020348CC(1);
    // ldr r0, [sp]
    BufferCountryName(0xf, 3, r4);
    // ldr r0, [sp]
    BufferCityName(4, r4, r5);
}



void sub_0205A730(void) {
}



void sub_0205A750(void) {
    // push {r4, r5, r6, lr}
    // add r4, r2, #0
    // add r5, r0, #0
    // add r6, r3, #0
    // cmp r4, #0
    // bne _0205A764
    // sub r1, r1, #1
    // bl sub_0205A544
    // pop {r4, r5, r6, pc}
    // sub r0, r1, #1
    // bl sub_02035798
    // cmp r0, #0
    // bne _0205A780
    // mov r0, #1
    // add r1, r0, #0
    // bl sub_020398D4
    // mov r0, #1
    // bl sub_02039AD8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // bl PlayerProfile_GetTrainerGender
    // add r1, r0, #0
    // cmp r4, #0x1a
    // bhi _0205A860
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A796: ; jump table
    // ldr r0, [r5, #0x34]
    // add r2, r6, #0
    // sub r0, r0, #1
    // bl sub_0205A730
    // pop {r4, r5, r6, pc}
    // ldr r0, _0205A868 ; =_020FC7D4
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r5, #0x34]
    // cmp r0, #0
    // bne _0205A7EA
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // lsl r2, r0, #3
    // ldr r0, _0205A86C ; =_020FC95C
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // sub r4, #0x13
    // ldr r0, _0205A870 ; =_020FC880
    // lsl r2, r4, #3
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // sub r0, r4, #3
    // lsl r2, r0, #3
    // ldr r0, _0205A874 ; =_020FC934
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // sub r4, #0xa
    // ldr r0, _0205A878 ; =_020FC838
    // lsl r2, r4, #3
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // sub r4, #0xd
    // ldr r0, _0205A87C ; =_020FC850
    // lsl r2, r4, #3
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // sub r4, #0x10
    // ldr r0, _0205A880 ; =_020FC868
    // lsl r2, r4, #3
    // lsl r1, r1, #2
    // add r0, r0, r2
    // ldr r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // ldr r0, _0205A884 ; =_020FC7E4
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // ldr r0, _0205A888 ; =_020FC7DC
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // ldr r0, _0205A88C ; =_020FC7EC
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // mov r0, #0xda
    // pop {r4, r5, r6, pc}
    // ldr r0, _0205A890 ; =_020FC7F4
    // lsl r1, r1, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // mov r0, #0x28
    // pop {r4, r5, r6, pc}
    // _0205A868: .word _020FC7D4
    // _0205A86C: .word _020FC95C
    // _0205A870: .word _020FC880
    // _0205A874: .word _020FC934
    // _0205A878: .word _020FC838
    // _0205A87C: .word _020FC850
    // _0205A880: .word _020FC868
    // _0205A884: .word _020FC7E4
    // _0205A888: .word _020FC7DC
    // _0205A88C: .word _020FC7EC
    // _0205A890: .word _020FC7F4
    // TODO: decompile
}



u32 sub_0205A894(void) {
    sub_0203769C();
    // eor r0, r1
    sub_02034818(1);
    GF_AssertFail();
    PlayerProfile_GetVersion(r4);
}



void sub_0205A8B4(void) {
    sub_02034818(1);
    sub_0203769C();
    PlayerProfile_GetTrainerID(r6);
    // str r0, [r5, r1]
    PlayerProfile_GetAvatar(r6, (r4 << 2));
    // str r0, [sp]
    PlayerProfile_GetTrainerGender(r6);
    // ldr r0, [sp]
    // orr r1, r0
    // add r0, r5, r4
    *((u8*)(r0 + 0x18)) = (r0 << 7);
    // str r0, [r5, r1]
    // add r1, r5, r4
    *((u8*)((r4 << 2) + 0x18)) = 0;
}



void sub_0205A904(void) {
    // add r0, sp, #0
    MI_CpuFill8(0, 0x20);
    // add r0, r4, r4
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205A924: ; jump table
    // add r0, sp, #0
    sub_0205A8B4((*((u16*)(r0 + 6)) << 0x10), 2);
    // add r0, sp, #0
    sub_0205A8B4(2);
    // add r0, sp, #0
    sub_0205A8B4(5);
    // add r0, sp, #0
    sub_0205A8B4(4);
    // add r0, sp, #0
    sub_0205A8B4(5);
    // add r0, sp, #0
    sub_0205A8B4(4);
    // add r0, sp, #0
    sub_0205A8B4(5);
    // add r0, sp, #0
    sub_0205A8B4(4);
    // add r0, sp, #0
    *((u8*)(r0 + 0x1c)) = r4;
    // add r0, sp, #0
    sub_02035854();
    sub_0203588C();
}



void sub_0205A9A0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // mov r3, #0
    // mov r0, #0x11
    // add r6, r1, #0
    // add r2, r3, #0
    // add r4, r5, #0
    // lsl r0, r0, #4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _0205A9B8
    // add r3, r3, #1
    // add r2, r2, #1
    // add r4, r4, #4
    // cmp r2, #0xa
    // blt _0205A9B0
    // cmp r3, #0
    // beq _0205A9C8
    // mov r0, #0xa6
    // pop {r4, r5, r6, pc}
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl MailMsg_IsInit
    // cmp r0, #0
    // bne _0205A9DA
    // mov r0, #0xa7
    // pop {r4, r5, r6, pc}
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl MailMsg_GetMsgBank
    // cmp r0, #4
    // beq _0205AA0C
    // ldr r0, [r5, #8]
    // bl PlayerProfile_GetAvatar
    // add r4, r0, #0
    // ldr r0, [r5, #8]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r4, #0
    // mov r2, #2
    // bl GetUnionRoomAvatarAttrBySprite
    // add r2, r0, #0
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferTrainerClassName
    // mov r0, #0xa8
    // pop {r4, r5, r6, pc}
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r5, r0
    // bl MailMsg_GetMsgNo
    // add r4, r0, #0
    // cmp r4, #0x14
    // blt _0205AA1E
    // mov r4, #0
    // mov r0, #0x5e
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r1, #0
    // bl MailMsg_GetFieldI
    // add r2, r0, #0
    // ldr r0, _0205AA44 ; =0x0000FFFF
    // cmp r2, r0
    // beq _0205AA3A
    // add r0, r6, #0
    // mov r1, #0
    // bl BufferECWord
    // ldr r0, _0205AA48 ; =_020FC9D4
    // lsl r1, r4, #2
    // ldr r0, [r0, r1]
    // pop {r4, r5, r6, pc}
    // nop
    // _0205AA44: .word 0x0000FFFF
    // _0205AA48: .word _020FC9D4
    // TODO: decompile
}



void sub_0205AA4C(void) {
    *((u8*)(r0 + 0x1c)) = 0;
    // stmia r4!, {r2}
    // add r1, r0, r3
    *((u8*)(r1 + 0x18)) = 0;
    *((u8*)(r1 + 0x10)) = 0;
    *((u8*)(r1 + 0x14)) = 0;
}



void sub_0205AA6C(void) {
}



void sub_0205AA84(void) {
    // ldr r2, [r0, r1]
    // str r2, [r0, r1]
    // sub r1, #8
    // add r0, r0, r1
}



void sub_0205AA9C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r7, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // str r3, [sp, #8]
    // ldr r2, _0205AB80 ; =0x000002E2
    // mov r0, #1
    // mov r1, #0x1b
    // mov r3, #4
    // bl NewMsgDataFromNarc
    // add r6, r0, #0
    // cmp r4, #0
    // bne _0205AAC2
    // sub r0, r7, #1
    // bl sub_02035798
    // b _0205AACE
    // bl sub_0203769C
    // mov r1, #1
    // eor r0, r1
    // bl sub_02034818
    // add r4, r0, #0
    // cmp r4, #0
    // bne _0205AADE
    // add r0, r6, #0
    // bl DestroyMsgData
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // mov r1, #0
    // add r2, r4, #0
    // bl BufferPlayersName
    // ldr r2, [sp, #8]
    // add r0, r5, #0
    // mov r1, #1
    // bl BufferPlayersName
    // add r0, r4, #0
    // bl PlayerProfile_GetLanguage
    // add r4, r0, #0
    // cmp r4, #1
    // blt _0205AB1C
    // cmp r4, #7
    // bgt _0205AB1C
    // sub r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // cmp r0, #7
    // bhs _0205AB1C
    // lsl r1, r0, #2
    // ldr r0, _0205AB84 ; =_020FC898
    // ldr r1, [r0, r1]
    // cmp r1, #0
    // blt _0205AB1C
    // ldr r0, [sp, #0x20]
    // bl Save_EasyChat_SetGreetingFlag
    // cmp r4, #7
    // bhi _0205AB54
    // add r0, r4, r4
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0205AB2C: ; jump table
    // mov r1, #0xd3
    // b _0205AB56
    // mov r1, #0xd4
    // b _0205AB56
    // mov r1, #0xd5
    // b _0205AB56
    // mov r1, #0xd6
    // b _0205AB56
    // mov r1, #0xd7
    // b _0205AB56
    // mov r1, #0xd8
    // b _0205AB56
    // mov r1, #0xd9
    // add r0, r6, #0
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #2
    // add r2, r7, #0
    // mov r3, #0
    // str r4, [sp, #4]
    // bl BufferString
    // add r0, r7, #0
    // bl Heap_Free
    // add r0, r6, #0
    // bl DestroyMsgData
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0205AB80: .word 0x000002E2
    // _0205AB84: .word _020FC898
    // TODO: decompile
}



void sub_0205AB88(void) {
}



void sub_0205ABB0(void) {
}



void sub_0205ABBC(void) {
    *((u32*)(r0 + 0x20)) = 0;
    *((u32*)(r0 + 0x24)) = 0;
    *((u32*)(r0 + 0x2c)) = 0;
    *((u32*)(r0 + 0x30)) = 0;
    *((u32*)(r0 + 0x40)) = 0;
    // strh r2, [r0, r1]
    // add r1, #0xc
    // str r2, [r0, r1]
    *((u32*)(r0 + 0x44)) = 0;
}



void sub_0205ABD8(void) {
    sub_020691A8(0);
    // str r0, [r4, r1]
    sub_020691A8(0, (0x61 << 2));
    // str r0, [r4, r1]
    sub_020691A8(0, (0x62 << 2));
    // str r0, [r4, r1]
    PlayerProfile_GetTrainerGender(*((u32*)(r4 + 8)), (0x63 << 2));
    PlayerProfile_GetAvatar(*((u32*)(r4 + 8)));
    GetUnionRoomAvatarAttrBySprite(r5, r0, 0);
    // str r0, [sp]
    // ldr r0, [r4, r0]
    // str r0, [sp, #4]
    sub_02068FC8(0, 0, 0, ((r0 << 0x18) >> 0x18));
    sub_0203769C();
    // eor r0, r1
    // add r1, r4, r0
    // ldr r0, [r1, r0]
}



void sub_0205AC4C(void) {
    // ldr r0, [r4, r0]
    Heap_Free((0x62 << 2));
    // ldr r0, [r4, r0]
    Heap_Free((0x63 << 2));
    // ldr r0, [r4, r0]
    Heap_Free((0x61 << 2));
}



void sub_0205AC70(void) {
    // mov r1, #0x61
    // add r2, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r2, r1]
    // ldr r3, _0205AC80 ; =sub_02036FD8
    // mov r0, #0x69
    // ldr r2, _0205AC84 ; =0x0000066C
    // bx r3
    // _0205AC80: .word sub_02036FD8
    // _0205AC84: .word 0x0000066C
    // TODO: decompile
}


