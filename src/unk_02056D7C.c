/* Decompiled from asm/unk_02056D7C.s */
#include "global.h"

void sub_02056D7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r1, #0
    // ldr r1, _02056E2C ; =_021D41C4
    // ldr r2, [r1]
    // cmp r2, #0
    // beq _02056D8C
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // bne _02056D98
    // str r0, [r1]
    // mov r1, #0
    // mov r2, #0xf4
    // bl MI_CpuFill8
    // ldr r0, _02056E2C ; =_021D41C4
    // ldr r2, _02056E30 ; =0x0000FFFF
    // ldr r1, [r0]
    // mov r7, #2
    // str r4, [r1, #0x30]
    // mov r4, #0
    // add r5, r4, #0
    // sub r3, r4, #1
    // add r1, r4, #0
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x78
    // strb r3, [r6]
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x74
    // strh r2, [r6]
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x76
    // strh r2, [r6]
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x79
    // strb r7, [r6]
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x38
    // strb r3, [r6]
    // ldr r6, [r0]
    // add r6, r6, r5
    // strh r2, [r6, #0x34]
    // ldr r6, [r0]
    // add r6, r6, r5
    // strh r2, [r6, #0x36]
    // ldr r6, [r0]
    // add r6, r6, r5
    // add r6, #0x39
    // strb r7, [r6]
    // ldr r6, [r0]
    // add r5, #8
    // add r6, r6, r4
    // add r6, #0xb4
    // strb r1, [r6]
    // ldr r6, [r0]
    // add r6, r6, r4
    // add r6, #0xbc
    // add r4, r4, #1
    // strb r1, [r6]
    // cmp r4, #8
    // blt _02056DAA
    // ldr r2, _02056E2C ; =_021D41C4
    // ldr r0, [r2]
    // add r0, #0xed
    // strb r1, [r0]
    // ldr r0, [r2]
    // add r0, #0xef
    // strb r1, [r0]
    // ldr r1, [r2]
    // ldr r0, _02056E34 ; =sub_020572DC
    // ldr r1, [r1, #0x30]
    // mov r2, #0xc8
    // bl SysTask_CreateOnMainQueue
    // ldr r1, _02056E2C ; =_021D41C4
    // ldr r1, [r1]
    // str r0, [r1, #0x2c]
    // bl sub_020374E4
    // bl sub_02056EF4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02056E2C: .word _021D41C4
    // _02056E30: .word 0x0000FFFF
    // _02056E34: .word sub_020572DC
    // TODO: decompile
}



void sub_02056E38(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _02056E5C ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02056E58
    // mov r5, #0
    // mov r4, #1
    // lsl r0, r5, #0x18
    // lsr r0, r0, #0x18
    // add r1, r4, #0
    // add r2, r4, #0
    // bl sub_0205724C
    // add r5, r5, #1
    // cmp r5, #8
    // blt _02056E46
    // pop {r3, r4, r5, pc}
    // nop
    // _02056E5C: .word _021D41C4
    // TODO: decompile
}



void sub_02056E60(void) {
    // push {r3, lr}
    // ldr r0, _02056E9C ; =_021D41C4
    // ldr r2, [r0]
    // cmp r2, #0
    // beq _02056E9A
    // mov r1, #1
    // add r2, #0xec
    // strb r1, [r2]
    // ldr r0, [r0]
    // mov r1, #0
    // add r0, #0xee
    // strb r1, [r0]
    // bl sub_02056EF4
    // mov r0, #1
    // bl sub_0205701C
    // ldr r0, _02056E9C ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetXCoord
    // ldr r0, _02056E9C ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetZCoord
    // pop {r3, pc}
    // _02056E9C: .word _021D41C4
    // TODO: decompile
}



void sub_02056EA0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _02056EDC ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02056EDA
    // mov r4, #0
    // add r6, r4, #0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // add r1, r6, #0
    // add r2, r5, #0
    // bl sub_0205724C
    // add r4, r4, #1
    // cmp r4, #8
    // blt _02056EB0
    // ldr r0, _02056EDC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x2c]
    // bl SysTask_Destroy
    // ldr r0, _02056EDC ; =_021D41C4
    // ldr r0, [r0]
    // bl Heap_Free
    // ldr r0, _02056EDC ; =_021D41C4
    // mov r1, #0
    // str r1, [r0]
    // pop {r4, r5, r6, pc}
    // _02056EDC: .word _021D41C4
    // TODO: decompile
}



void sub_02056EE0(void) {
    // ldr r0, _02056EF0 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02056EEC
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02056EF0: .word _021D41C4
    // TODO: decompile
}



void sub_02056EF4(void) {
    // push {r4, lr}
    // bl sub_0203769C
    // ldr r1, _02056FCC ; =_021D41C4
    // lsl r0, r0, #2
    // ldr r2, [r1]
    // ldr r1, [r2, #0x30]
    // add r0, r2, r0
    // ldr r1, [r1, #0x40]
    // str r1, [r0, #4]
    // bl sub_0203769C
    // ldr r1, _02056FCC ; =_021D41C4
    // mov r2, #1
    // ldr r1, [r1]
    // add r0, r1, r0
    // add r0, #0x24
    // strb r2, [r0]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetXCoord
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // add r1, #0x74
    // strh r0, [r1]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetZCoord
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // add r1, #0x76
    // strh r0, [r1]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // add r1, #0x78
    // strb r0, [r1]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetXCoord
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // strh r0, [r1, #0x34]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetZCoord
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // strh r0, [r1, #0x36]
    // bl sub_0203769C
    // add r4, r0, #0
    // ldr r0, _02056FCC ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // ldr r1, _02056FCC ; =_021D41C4
    // ldr r2, [r1]
    // lsl r1, r4, #3
    // add r1, r2, r1
    // add r1, #0x38
    // strb r0, [r1]
    // pop {r4, pc}
    // nop
    // _02056FCC: .word _021D41C4
    // TODO: decompile
}



void sub_02056FD0(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _02057018 ; =_021D41C4
    // add r4, r1, #0
    // ldr r0, [r0]
    // add r6, r2, #0
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetFacingDirection
    // add r1, sp, #0
    // strb r4, [r1]
    // asr r2, r4, #8
    // strb r2, [r1, #1]
    // asr r2, r6, #8
    // strb r6, [r1, #2]
    // strb r2, [r1, #3]
    // strb r0, [r1, #4]
    // cmp r5, #0
    // beq _02057002
    // ldrb r2, [r1, #4]
    // mov r0, #0x80
    // orr r0, r2
    // strb r0, [r1, #4]
    // mov r0, #0x16
    // add r1, sp, #0
    // bl sub_020376E0
    // ldr r0, _02057018 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0xec
    // strb r1, [r0]
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _02057018: .word _021D41C4
    // TODO: decompile
}



void sub_0205701C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02057048 ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetXCoord
    // add r4, r0, #0
    // ldr r0, _02057048 ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetZCoord
    // add r2, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl sub_02056FD0
    // pop {r3, r4, r5, pc}
    // nop
    // _02057048: .word _021D41C4
    // TODO: decompile
}



void sub_0205704C(void) {
    // ldrh r2, [r1]
    // and r0, r4
    // add r4, sp, #0
    // strb r0, [r4]
    *((u8*)(0xf + 1)) = ((0xf << 0xc) - 1);
    // asr r2, r2, #8
    // and r5, r0
    // asr r2, r3, #7
    // and r0, r2
    // add r0, r5, r0
    *((u8*)(0xf + 2)) = 2;
    *((u8*)(0xf + 3)) = ((0xf << 0xc) - 1);
    // orr r0, r2
    *((u8*)(0xf + 2)) = 0x80;
    // ldrsb r2, [r1, r2]
    // add r5, sp, #0
    // ldrb r0, [r5]
    // sub r3, r3, r4
    // ror r3, r2
    // add r2, r4, r3
    // add r0, r0, r2
    // strb r0, [r5]
    // ldrb r2, [r5]
    // add r1, sp, #0
    // add r0, r2, r0
    // strb r0, [r5]
    sub_02037108(0x17, 0, (4 << 0x1e));
}



void sub_020570C8(void) {
    // push {r3, r4, r5, lr}
    // ldr r0, _02057128 ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetUnk10
    // add r4, r0, #0
    // ldr r0, _02057128 ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_GetUnk14
    // add r5, r0, #0
    // cmp r4, #0
    // bne _02057112
    // bl sub_0203769C
    // bl sub_020373B4
    // cmp r0, #0
    // beq _02057112
    // ldr r0, _02057128 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, #0xeb
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057112
    // mov r0, #1
    // bl sub_0205701C
    // ldr r0, _02057128 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0xeb
    // strb r1, [r0]
    // cmp r4, #1
    // bne _02057124
    // cmp r5, #1
    // bne _02057124
    // ldr r0, _02057128 ; =_021D41C4
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0xeb
    // strb r1, [r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _02057128: .word _021D41C4
    // TODO: decompile
}



void sub_0205712C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r4, #0
    // ldr r7, _0205717C ; =_021D41C4
    // add r5, r4, #0
    // add r6, r4, #0
    // ldr r0, [r7]
    // add r1, r0, r4
    // add r1, #0x24
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _02057168
    // add r2, r0, r4
    // add r2, #0xcc
    // ldrb r2, [r2]
    // add r1, r0, #0
    // add r1, #0x34
    // cmp r2, #0
    // bne _0205715A
    // add r2, r0, #0
    // add r2, #0xec
    // ldrb r2, [r2]
    // cmp r2, #0
    // beq _02057168
    // add r0, r0, r4
    // add r0, #0xcc
    // strb r6, [r0]
    // add r0, r4, #0
    // add r1, r1, r5
    // bl sub_0205704C
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, #8
    // blt _02057136
    // ldr r0, _0205717C ; =_021D41C4
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, #0xec
    // strb r1, [r0]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0205717C: .word _021D41C4
    // TODO: decompile
}



u8 sub_02057180(void) {
}



void sub_02057184(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // ldr r1, _02057248 ; =_021D41C4
    // add r5, r0, #0
    // ldr r2, [r1]
    // lsl r4, r5, #2
    // add r1, r2, r4
    // ldr r1, [r1, #4]
    // cmp r1, #0
    // bne _02057242
    // add r2, #0xee
    // ldrb r1, [r2]
    // cmp r1, #0
    // bne _02057242
    // bl sub_02034818
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // beq _02057242
    // bl sub_0203769C
    // cmp r5, r0
    // beq _020571CC
    // ldr r0, _02057248 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // lsl r1, r1, #8
    // ldr r0, [r0, #0x30]
    // add r1, r5, r1
    // ldr r0, [r0, #0x3c]
    // bl MapObjectManager_GetFirstActiveObjectByID
    // cmp r0, #0
    // beq _020571CC
    // bl MapObject_Remove
    // ldr r0, [sp, #0x14]
    // mov r7, #2
    // bl PlayerProfile_GetVersion
    // cmp r0, #0
    // bne _020571DC
    // mov r7, #1
    // b _020571E2
    // cmp r0, #0xc
    // bne _020571E2
    // mov r7, #0
    // lsl r0, r5, #3
    // str r0, [sp, #0x10]
    // ldr r0, _02057248 ; =_021D41C4
    // ldr r6, [r0]
    // ldr r0, [sp, #0x14]
    // bl PlayerProfile_GetTrainerGender
    // mov r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r7, [sp, #8]
    // str r1, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // ldr r0, [r6, #0x30]
    // add r3, r6, r1
    // add r1, r3, #0
    // add r2, r3, #0
    // add r1, #0x74
    // add r2, #0x76
    // mov r6, #0x78
    // ldrh r1, [r1]
    // ldrh r2, [r2]
    // ldrsb r3, [r3, r6]
    // ldr r0, [r0, #0x3c]
    // bl PlayerAvatar_CreateWithParams
    // add r6, r0, #0
    // bne _0205721E
    // bl GF_AssertFail
    // ldr r0, _02057248 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, r0, r4
    // str r6, [r0, #4]
    // add r0, r6, #0
    // bl PlayerAvatar_GetMapObject
    // mov r1, #1
    // lsl r1, r1, #8
    // add r1, r5, r1
    // bl MapObject_SetID
    // ldr r0, _02057248 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, r0, r5
    // add r0, #0x24
    // strb r1, [r0]
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02057248: .word _021D41C4
    // TODO: decompile
}



void sub_0205724C(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _020572A8 ; =_021D41C4
    // add r6, r1, #0
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _020572A4
    // lsl r4, r5, #2
    // add r0, r1, r4
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02057284
    // ldr r1, [r1, #0x30]
    // ldr r1, [r1, #0x40]
    // cmp r1, r0
    // beq _0205727A
    // cmp r2, #0
    // beq _02057276
    // bl PlayerAvatar_DeleteFromMap
    // b _0205727A
    // bl PlayerAvatar_FreeToHeap
    // ldr r0, _020572A8 ; =_021D41C4
    // mov r1, #0
    // ldr r0, [r0]
    // add r0, r0, r4
    // str r1, [r0, #4]
    // ldr r0, _020572A8 ; =_021D41C4
    // ldr r1, [r0]
    // add r1, #0x24
    // ldrb r0, [r1, r5]
    // cmp r0, #0
    // beq _02057298
    // cmp r6, #0
    // bne _02057298
    // mov r0, #0
    // strb r0, [r1, r5]
    // ldr r0, _020572A8 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, r0, r5
    // add r0, #0xcc
    // strb r1, [r0]
    // pop {r4, r5, r6, pc}
    // nop
    // _020572A8: .word _021D41C4
    // TODO: decompile
}



void sub_020572AC(void) {
    // push {r4, lr}
    // ldr r1, _020572D8 ; =gSystem
    // mov r4, #2
    // ldr r1, [r1, #0x44]
    // tst r1, r4
    // beq _020572BC
    // mov r4, #1
    // b _020572CE
    // cmp r0, #0
    // beq _020572CE
    // bl FieldSystem_GetPlayerAvatar
    // bl PlayerAvatar_CheckRunningShoesLock
    // cmp r0, #0
    // beq _020572CE
    // mov r4, #1
    // add r0, r4, #0
    // bl sub_02037498
    // pop {r4, pc}
    // nop
    // _020572D8: .word gSystem
    // TODO: decompile
}



void sub_020572DC(void) {
    sub_02037474();
    sub_020572AC(r4);
    sub_0203769C();
    sub_0205712C(r4);
    sub_020570C8(r4);
    sub_020570C8(r4);
    sub_02057314(r4);
}



void sub_02057314(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // mov r5, #0
    // ldr r4, _02057354 ; =_021D41C4
    // add r7, r5, #0
    // add r6, sp, #0
    // lsl r0, r5, #0x10
    // lsr r0, r0, #0x10
    // bl sub_020373B4
    // cmp r0, #0
    // beq _02057332
    // add r0, r5, #0
    // bl sub_02057818
    // b _0205734C
    // ldr r3, [r4]
    // add r0, r3, r5
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0205734C
    // strb r5, [r6]
    // ldr r3, [r3, #0x30]
    // add r0, r7, #0
    // mov r1, #1
    // add r2, sp, #0
    // bl sub_0205776C
    // add r5, r5, #1
    // cmp r5, #8
    // blt _0205731E
    // pop {r3, r4, r5, r6, r7, pc}
    // _02057354: .word _021D41C4
    // TODO: decompile
}



void sub_02057358(void) {
    // push {r3, lr}
    // ldr r1, _02057380 ; =_021D41C4
    // ldr r2, [r1]
    // cmp r2, #0
    // beq _0205737C
    // add r1, r2, #0
    // add r1, #0xed
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _02057370
    // add r2, #0xed
    // strb r0, [r2]
    // ldr r1, _02057380 ; =_021D41C4
    // mov r0, #0x3e
    // ldr r1, [r1]
    // add r1, #0xed
    // bl sub_020376E0
    // pop {r3, pc}
    // nop
    // _02057380: .word _021D41C4
    // TODO: decompile
}



void sub_02057384(void) {
    // push {r3, lr}
    // ldr r2, _020573A8 ; =_021D41C4
    // ldr r3, [r2]
    // cmp r3, #0
    // beq _020573A6
    // add r1, r3, #0
    // add r1, #0xed
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _020573A6
    // add r3, #0xed
    // strb r0, [r3]
    // ldr r1, [r2]
    // mov r0, #0x3e
    // add r1, #0xed
    // bl sub_020376E0
    // pop {r3, pc}
    // _020573A8: .word _021D41C4
    // TODO: decompile
}



void sub_020573AC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _020573EC ; =_021D41C4
    // add r4, r2, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _020573E8
    // cmp r1, #1
    // beq _020573C2
    // bl GF_AssertFail
    // cmp r5, #8
    // blt _020573CA
    // bl GF_AssertFail
    // ldrb r0, [r4]
    // mov r1, #1
    // cmp r0, #1
    // beq _020573D8
    // cmp r0, #0
    // beq _020573D8
    // mov r1, #0
    // cmp r1, #0
    // bne _020573E0
    // bl GF_AssertFail
    // ldrb r1, [r4]
    // add r0, r5, #0
    // bl sub_02057C5C
    // pop {r3, r4, r5, pc}
    // nop
    // _020573EC: .word _021D41C4
    // TODO: decompile
}



void sub_020573F0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _02057450 ; =_021D41C4
    // add r4, r1, #0
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0205744E
    // add r0, r4, #0
    // bl sub_02057384
    // ldr r0, _02057450 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, #0xf1
    // strb r4, [r0]
    // ldr r4, [r5, #0x40]
    // cmp r4, #0
    // beq _02057420
    // bl sub_0203769C
    // ldr r1, _02057450 ; =_021D41C4
    // lsl r0, r0, #2
    // ldr r1, [r1]
    // add r0, r1, r0
    // str r4, [r0, #4]
    // bl sub_02037474
    // cmp r0, #0
    // beq _0205743A
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0205743A
    // ldr r1, _02057450 ; =_021D41C4
    // mov r0, #0
    // ldr r1, [r1]
    // bl sub_02057550
    // bl sub_02037474
    // cmp r0, #0
    // beq _0205744E
    // bl sub_0203769C
    // cmp r0, #0
    // bne _0205744E
    // bl sub_02057D74
    // pop {r3, r4, r5, pc}
    // _02057450: .word _021D41C4
    // TODO: decompile
}



void sub_02057454(void) {
    // tst r0, r1
    // tst r0, r1
    // tst r0, r1
    // tst r1, r0
    // sub r0, #0x81
}



void sub_02057480(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _020574C0 ; =_021D41C4
    // add r6, r1, #0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // bl Field_GetNumObjectEvents
    // add r4, r0, #0
    // ldr r0, _020574C0 ; =_021D41C4
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // bl Field_GetObjectEvents
    // mov r2, #0
    // cmp r4, #0
    // ble _020574BA
    // ldrh r1, [r0, #0x18]
    // cmp r5, r1
    // bne _020574B2
    // ldrh r1, [r0, #0x1a]
    // cmp r6, r1
    // bne _020574B2
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r2, r2, #1
    // add r0, #0x20
    // cmp r2, r4
    // blt _020574A2
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _020574C0: .word _021D41C4
    // TODO: decompile
}



void sub_020574C4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r0, _0205751C ; =0x0000FFFF
    // add r6, r1, #0
    // add r7, r2, #0
    // cmp r5, r0
    // beq _0205750A
    // cmp r6, r0
    // beq _0205750A
    // mov r4, #0
    // cmp r4, r7
    // beq _020574F4
    // add r0, r4, #0
    // bl sub_02057B4C
    // cmp r5, r0
    // bne _020574F4
    // add r0, r4, #0
    // bl sub_02057B9C
    // cmp r6, r0
    // bne _020574F4
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // add r4, r4, #1
    // cmp r4, #8
    // blt _020574D8
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02057480
    // cmp r0, #0
    // beq _0205750A
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, _02057520 ; =_021D41C4
    // add r1, r5, #0
    // ldr r0, [r0]
    // add r2, r6, #0
    // ldr r0, [r0, #0x30]
    // bl sub_020548C0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0205751C: .word 0x0000FFFF
    // _02057520: .word _021D41C4
    // TODO: decompile
}



void sub_02057524(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // ldr r3, _0205754C ; =_020FC7B8
    // add r4, r0, #0
    // ldmia r3!, {r0, r1}
    // add r2, sp, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // cmp r4, #5
    // str r0, [r2]
    // blt _02057542
    // bl GF_AssertFail
    // lsl r1, r4, #2
    // add r0, sp, #0
    // ldr r0, [r0, r1]
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _0205754C: .word _020FC7B8
    // TODO: decompile
}



void sub_02057550(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // mov r5, #0
    // ldr r6, _020576B8 ; =_021D41C4
    // str r5, [sp]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0x24
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _02057570
    // add r1, r0, r5
    // add r1, #0xb4
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _02057572
    // b _020576A4
    // add r2, r0, #0
    // ldr r1, [sp]
    // add r2, #0x34
    // add r4, r2, r1
    // add r1, r0, r5
    // add r1, #0xd4
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _02057592
    // add r1, r0, r5
    // add r1, #0xd4
    // ldrb r1, [r1]
    // add r0, r0, r5
    // add r0, #0xd4
    // sub r1, r1, #1
    // strb r1, [r0]
    // ldr r0, [r6]
    // add r0, r0, r5
    // add r0, #0xbc
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _020575A2
    // mov r7, #0
    // b _020575AA
    // add r0, r5, #0
    // bl sub_020374C0
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_020374AC
    // strb r0, [r4, #5]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xd4
    // ldrb r1, [r1]
    // cmp r1, #0
    // bne _020576A4
    // ldrb r1, [r4, #7]
    // cmp r1, #1
    // bne _020575CC
    // add r1, r0, r5
    // add r1, #0xcc
    // mov r0, #1
    // strb r0, [r1]
    // mov r0, #0
    // strb r0, [r4, #7]
    // ldr r1, [r6]
    // add r0, r1, r5
    // add r0, #0xc4
    // ldrb r0, [r0]
    // cmp r0, #2
    // bne _020575E6
    // add r1, r1, r5
    // add r1, #0xc4
    // mov r0, #1
    // strb r0, [r1]
    // b _020576A4
    // add r0, r7, #0
    // add r1, r7, #0
    // bl sub_02057454
    // add r7, r0, #0
    // add r0, r5, #0
    // bl sub_02057BEC
    // str r0, [sp, #4]
    // add r0, r5, #0
    // bl sub_02057C24
    // str r0, [sp, #8]
    // ldr r1, [sp, #4]
    // ldr r0, _020576BC ; =0x0000FFFF
    // cmp r1, r0
    // beq _020576A4
    // ldr r1, [sp, #8]
    // cmp r1, r0
    // beq _020576A4
    // mov r0, #0
    // mvn r0, r0
    // cmp r7, r0
    // beq _020576A4
    // mov r0, #4
    // ldrsb r0, [r4, r0]
    // cmp r0, r7
    // beq _02057650
    // strb r7, [r4, #4]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xd4
    // mov r0, #4
    // strb r0, [r1]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xcc
    // mov r0, #1
    // strb r0, [r1]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xc4
    // ldrb r1, [r1]
    // cmp r1, #2
    // bls _020576A4
    // add r1, r0, r5
    // add r1, #0xc4
    // ldrb r1, [r1]
    // add r0, r0, r5
    // add r0, #0xc4
    // sub r1, r1, #1
    // strb r1, [r0]
    // b _020576A4
    // ldr r0, [r6]
    // add r0, r0, r5
    // add r0, #0xc4
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _020576A4
    // ldr r0, [sp, #4]
    // add r2, r5, #0
    // bl sub_020574C4
    // cmp r0, #0
    // beq _02057682
    // mov r0, #1
    // strb r0, [r4, #7]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xcc
    // mov r0, #1
    // strb r0, [r1]
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xd4
    // mov r0, #4
    // strb r0, [r1]
    // b _020576A4
    // ldr r0, [r6]
    // add r1, r0, r5
    // add r1, #0xcc
    // mov r0, #1
    // strb r0, [r1]
    // ldr r0, [sp, #4]
    // strh r0, [r4]
    // ldr r0, [sp, #8]
    // strh r0, [r4, #2]
    // strb r7, [r4, #4]
    // ldrb r0, [r4, #5]
    // bl sub_02057524
    // ldr r1, [r6]
    // add r1, r1, r5
    // add r1, #0xd4
    // strb r0, [r1]
    // ldr r0, [sp]
    // add r5, r5, #1
    // add r0, #8
    // str r0, [sp]
    // cmp r5, #8
    // bge _020576B2
    // b _0205755A
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _020576B8: .word _021D41C4
    // _020576BC: .word 0x0000FFFF
    // TODO: decompile
}



void sub_020576C0(void) {
    // push {r4, r5, r6, lr}
    // ldr r3, _02057768 ; =_021D41C4
    // add r1, r0, #0
    // ldr r4, [r3]
    // add r0, r2, #0
    // cmp r4, #0
    // beq _02057764
    // add r5, r4, #0
    // ldrb r6, [r0, #4]
    // add r5, #0x34
    // lsl r2, r1, #3
    // add r2, r5, r2
    // mov r5, #0x80
    // tst r5, r6
    // beq _020576E6
    // mov r0, #1
    // add r4, #0xec
    // strb r0, [r4]
    // pop {r4, r5, r6, pc}
    // mov r4, #4
    // ldrsb r5, [r2, r4]
    // sub r4, r4, #5
    // cmp r5, r4
    // bne _02057702
    // mov r5, #0
    // mov r4, #1
    // ldr r6, [r3]
    // add r6, r6, r5
    // add r6, #0xcc
    // add r5, r5, #1
    // strb r4, [r6]
    // cmp r5, #8
    // blt _020576F4
    // mov r3, #0
    // strh r3, [r2]
    // strh r3, [r2, #2]
    // ldrh r4, [r2]
    // ldrb r3, [r0]
    // add r3, r4, r3
    // strh r3, [r2]
    // ldrb r4, [r0, #1]
    // ldrh r3, [r2]
    // lsl r5, r4, #8
    // mov r4, #0xff
    // lsl r4, r4, #8
    // and r5, r4
    // add r3, r3, r5
    // strh r3, [r2]
    // ldrh r5, [r2, #2]
    // ldrb r3, [r0, #2]
    // add r3, r5, r3
    // strh r3, [r2, #2]
    // ldrb r5, [r0, #3]
    // ldrh r3, [r2, #2]
    // lsl r5, r5, #8
    // and r4, r5
    // add r3, r3, r4
    // strh r3, [r2, #2]
    // ldrb r3, [r0, #4]
    // mov r0, #0xf
    // ldr r4, _02057768 ; =_021D41C4
    // and r0, r3
    // strb r0, [r2, #4]
    // ldr r3, [r4]
    // mov r0, #1
    // add r3, r3, r1
    // add r3, #0x24
    // strb r0, [r3]
    // ldr r3, [r4]
    // add r1, r3, r1
    // add r1, #0xcc
    // strb r0, [r1]
    // ldr r0, [r4]
    // ldrh r1, [r2]
    // ldrh r2, [r2, #2]
    // ldr r0, [r0, #0x30]
    // bl sub_020548C0
    // cmp r0, #0
    // beq _02057764
    // bl GF_AssertFail
    // pop {r4, r5, r6, pc}
    // nop
    // _02057768: .word _021D41C4
    // TODO: decompile
}



void sub_0205776C(void) {
    // push {r4, lr}
    // ldr r0, _02057794 ; =_021D41C4
    // ldrb r4, [r2]
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02057790
    // bl sub_0203769C
    // cmp r4, r0
    // beq _02057790
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl sub_0205724C
    // add r0, r4, #0
    // bl sub_020346E8
    // pop {r4, pc}
    // nop
    // _02057794: .word _021D41C4
    // TODO: decompile
}



u8 sub_02057798(void) {
}



void sub_0205779C(void) {
    // push {r3, r4, r5, lr}
    // ldrb r1, [r2]
    // mov r0, #0xf
    // add r3, r1, #0
    // and r3, r0
    // ldr r0, _02057814 ; =_021D41C4
    // ldr r1, [r0]
    // cmp r1, #0
    // beq _02057810
    // ldrb r4, [r2, #2]
    // add r1, #0x74
    // lsl r0, r3, #3
    // add r1, r1, r0
    // mov r0, #0x80
    // tst r0, r4
    // beq _020577C0
    // mov r0, #1
    // b _020577C2
    // mov r0, #0
    // strb r0, [r1, #7]
    // mov r0, #0
    // strh r0, [r1]
    // strh r0, [r1, #2]
    // ldrh r4, [r1]
    // ldrb r0, [r2, #1]
    // add r0, r4, r0
    // strh r0, [r1]
    // ldrb r4, [r2, #2]
    // ldrh r0, [r1]
    // lsl r5, r4, #8
    // mov r4, #1
    // lsl r4, r4, #8
    // and r5, r4
    // add r0, r0, r5
    // strh r0, [r1]
    // ldrh r5, [r1, #2]
    // ldrb r0, [r2, #3]
    // add r0, r5, r0
    // strh r0, [r1, #2]
    // ldrb r5, [r2, #2]
    // ldrh r0, [r1, #2]
    // lsl r5, r5, #7
    // and r4, r5
    // add r0, r0, r4
    // strh r0, [r1, #2]
    // ldrb r0, [r2]
    // asr r4, r0, #4
    // mov r0, #3
    // and r4, r0
    // strb r4, [r1, #4]
    // ldrb r2, [r2]
    // asr r2, r2, #6
    // and r0, r2
    // strb r0, [r1, #5]
    // lsl r0, r3, #0x18
    // lsr r0, r0, #0x18
    // bl sub_02057184
    // pop {r3, r4, r5, pc}
    // nop
    // _02057814: .word _021D41C4
    // TODO: decompile
}



void sub_02057818(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // ldr r0, _02057A00 ; =_021D41C4
    // lsl r1, r5, #3
    // ldr r0, [r0]
    // add r2, r0, #0
    // add r2, #0x74
    // add r6, r2, r1
    // add r2, r0, #0
    // add r2, #0xdc
    // ldrb r1, [r2, r5]
    // cmp r1, #0
    // beq _0205783C
    // sub r0, r1, #1
    // add sp, #0x1c
    // strb r0, [r2, r5]
    // pop {r4, r5, r6, r7, pc}
    // ldrh r2, [r6]
    // ldr r1, _02057A04 ; =0x0000FFFF
    // cmp r2, r1
    // beq _02057866
    // ldrh r2, [r6, #2]
    // cmp r2, r1
    // beq _02057866
    // add r0, #0xee
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057866
    // bl sub_0203769C
    // cmp r5, r0
    // bne _02057868
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, #0xf1
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057868
    // b _020579FC
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r1, [r0]
    // lsl r0, r5, #2
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // str r0, [sp, #0x18]
    // cmp r0, #0
    // bne _0205787A
    // b _020579FC
    // bl PlayerAvatar_GetXCoord
    // ldrh r1, [r6]
    // sub r0, r0, r1
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x18]
    // bl PlayerAvatar_GetZCoord
    // ldrh r1, [r6, #2]
    // sub r7, r0, r1
    // ldr r0, [sp, #0x18]
    // bl PlayerAvatar_GetFacingDirection
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // bne _020578A4
    // cmp r7, #0
    // bne _020578A4
    // mov r4, #0
    // b _020578CE
    // ldr r0, [sp, #0x10]
    // bl abs
    // add r4, r0, #0
    // add r0, r7, #0
    // bl abs
    // cmp r4, r0
    // ble _020578C4
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // ble _020578C0
    // mov r4, #0x20
    // b _020578CE
    // mov r4, #0x10
    // b _020578CE
    // cmp r7, #0
    // ble _020578CC
    // mov r4, #0x40
    // b _020578CE
    // mov r4, #0x80
    // add r0, r7, #0
    // bl abs
    // ldr r0, [sp, #0x10]
    // bl abs
    // ldrb r0, [r6, #5]
    // mov r7, #0xff
    // str r0, [sp, #0x14]
    // cmp r0, #3
    // bhi _02057916
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _020578F0: ; jump table
    // mov r0, #5
    // str r0, [sp, #8]
    // b _02057916
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #2
    // orr r0, r4
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // b _02057916
    // mov r0, #2
    // str r0, [sp, #8]
    // b _02057916
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, #0xf0
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _0205793C
    // bl sub_0203769C
    // cmp r5, r0
    // bne _0205793C
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r1, [r0]
    // add r0, r1, #0
    // add r0, #0xf0
    // ldrb r0, [r0]
    // add r1, #0xf0
    // sub r0, r0, #1
    // strb r0, [r1]
    // b _020579A8
    // mov r0, #2
    // add r1, r4, #0
    // bic r1, r0
    // bne _0205797A
    // ldrb r0, [r6, #7]
    // cmp r0, #0
    // beq _0205797A
    // mov r0, #3
    // str r0, [sp, #0x14]
    // mov r0, #4
    // ldrsb r0, [r6, r0]
    // cmp r0, #3
    // bhi _0205796E
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02057962: ; jump table
    // mov r7, #0x1c
    // b _020579A8
    // mov r7, #0x1d
    // b _020579A8
    // mov r7, #0x1e
    // b _020579A8
    // mov r7, #0x1f
    // b _020579A8
    // cmp r1, #0
    // bne _02057992
    // mov r0, #4
    // ldrsb r0, [r6, r0]
    // ldr r1, [sp, #0xc]
    // cmp r0, r1
    // beq _02057992
    // mov r1, #0x24
    // bl sub_0206234C
    // add r7, r0, #0
    // b _020579A8
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #8]
    // add r1, r4, #0
    // add r2, r4, #0
    // bl sub_0205DF0C
    // add r7, r0, #0
    // ldr r0, [sp, #0x18]
    // bl sub_0205DFC8
    // cmp r0, #0
    // bne _020579BC
    // ldr r0, [sp, #0x18]
    // bl sub_0205DE38
    // cmp r0, #0
    // beq _020579FC
    // cmp r7, #0xff
    // beq _020579FC
    // ldr r0, [sp, #0x18]
    // add r1, r7, #0
    // bl sub_0205DFD4
    // mov r0, #2
    // bic r4, r0
    // beq _020579FC
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, r0, r5
    // add r0, #0xdc
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _020579EC
    // ldr r0, [sp, #0x14]
    // bl sub_02057524
    // ldr r1, _02057A00 ; =_021D41C4
    // ldr r1, [r1]
    // add r1, r1, r5
    // add r1, #0xdc
    // strb r0, [r1]
    // ldr r0, _02057A00 ; =_021D41C4
    // ldr r1, [r0]
    // add r1, #0xdc
    // ldrb r0, [r1, r5]
    // cmp r0, #0
    // beq _020579FC
    // sub r0, r0, #1
    // strb r0, [r1, r5]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // _02057A00: .word _021D41C4
    // _02057A04: .word 0x0000FFFF
    // TODO: decompile
}



u8 sub_02057A08(void) {
}



void sub_02057A0C(void) {
    // push {r3, lr}
    // ldr r0, _02057A30 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02057A1A
    // mov r0, #0
    // pop {r3, pc}
    // bl sub_0203769C
    // bl sub_020373B4
    // cmp r0, #0
    // beq _02057A2A
    // mov r0, #1
    // pop {r3, pc}
    // mov r0, #0
    // pop {r3, pc}
    // nop
    // _02057A30: .word _021D41C4
    // TODO: decompile
}



void sub_02057A34(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02057A80 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02057A44
    // ldr r0, _02057A84 ; =0x0000FFFF
    // pop {r4, pc}
    // bl sub_0203769C
    // cmp r4, r0
    // bne _02057A5A
    // ldr r0, _02057A80 ; =_021D41C4
    // ldr r1, [r0]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // add r0, #0x74
    // ldrh r0, [r0]
    // pop {r4, pc}
    // bl sub_02057A0C
    // cmp r0, #0
    // beq _02057A70
    // ldr r0, _02057A80 ; =_021D41C4
    // ldr r1, [r0]
    // add r0, r1, r4
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057A74
    // ldr r0, _02057A84 ; =0x0000FFFF
    // pop {r4, pc}
    // lsl r0, r4, #3
    // add r0, r1, r0
    // add r0, #0x74
    // ldrh r0, [r0]
    // pop {r4, pc}
    // nop
    // _02057A80: .word _021D41C4
    // _02057A84: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02057A88(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02057AD4 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02057A98
    // ldr r0, _02057AD8 ; =0x0000FFFF
    // pop {r4, pc}
    // bl sub_0203769C
    // cmp r4, r0
    // bne _02057AAE
    // ldr r0, _02057AD4 ; =_021D41C4
    // ldr r1, [r0]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // add r0, #0x76
    // ldrh r0, [r0]
    // pop {r4, pc}
    // bl sub_02057A0C
    // cmp r0, #0
    // beq _02057AC4
    // ldr r0, _02057AD4 ; =_021D41C4
    // ldr r1, [r0]
    // add r0, r1, r4
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057AC8
    // ldr r0, _02057AD8 ; =0x0000FFFF
    // pop {r4, pc}
    // lsl r0, r4, #3
    // add r0, r1, r0
    // add r0, #0x76
    // ldrh r0, [r0]
    // pop {r4, pc}
    // nop
    // _02057AD4: .word _021D41C4
    // _02057AD8: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02057ADC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02057A34
    // ldr r1, _02057B0C ; =0x0000FFFF
    // cmp r0, r1
    // bne _02057AEE
    // add r0, r1, #0
    // pop {r4, pc}
    // ldr r0, _02057B10 ; =_021D41C4
    // lsl r4, r4, #3
    // ldr r0, [r0]
    // add r1, r0, r4
    // mov r0, #0x78
    // ldrsb r0, [r1, r0]
    // bl GetDeltaXByFacingDirection
    // ldr r1, _02057B10 ; =_021D41C4
    // ldr r1, [r1]
    // add r1, r1, r4
    // add r1, #0x74
    // ldrh r1, [r1]
    // add r0, r1, r0
    // pop {r4, pc}
    // _02057B0C: .word 0x0000FFFF
    // _02057B10: .word _021D41C4
    // TODO: decompile
}



void sub_02057B14(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02057A88
    // ldr r1, _02057B44 ; =0x0000FFFF
    // cmp r0, r1
    // bne _02057B26
    // add r0, r1, #0
    // pop {r4, pc}
    // ldr r0, _02057B48 ; =_021D41C4
    // lsl r4, r4, #3
    // ldr r0, [r0]
    // add r1, r0, r4
    // mov r0, #0x78
    // ldrsb r0, [r1, r0]
    // bl GetDeltaYByFacingDirection
    // ldr r1, _02057B48 ; =_021D41C4
    // ldr r1, [r1]
    // add r1, r1, r4
    // add r1, #0x76
    // ldrh r1, [r1]
    // add r0, r1, r0
    // pop {r4, pc}
    // _02057B44: .word 0x0000FFFF
    // _02057B48: .word _021D41C4
    // TODO: decompile
}



void sub_02057B4C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02057B94 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02057B5C
    // ldr r0, _02057B98 ; =0x0000FFFF
    // pop {r4, pc}
    // bl sub_0203769C
    // cmp r4, r0
    // bne _02057B70
    // ldr r0, _02057B94 ; =_021D41C4
    // ldr r1, [r0]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // pop {r4, pc}
    // bl sub_02057A0C
    // cmp r0, #0
    // beq _02057B86
    // ldr r0, _02057B94 ; =_021D41C4
    // ldr r1, [r0]
    // add r0, r1, r4
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057B8A
    // ldr r0, _02057B98 ; =0x0000FFFF
    // pop {r4, pc}
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x34]
    // pop {r4, pc}
    // nop
    // _02057B94: .word _021D41C4
    // _02057B98: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02057B9C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02057BE4 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02057BAC
    // ldr r0, _02057BE8 ; =0x0000FFFF
    // pop {r4, pc}
    // bl sub_0203769C
    // cmp r4, r0
    // bne _02057BC0
    // ldr r0, _02057BE4 ; =_021D41C4
    // ldr r1, [r0]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x36]
    // pop {r4, pc}
    // bl sub_02057A0C
    // cmp r0, #0
    // beq _02057BD6
    // ldr r0, _02057BE4 ; =_021D41C4
    // ldr r1, [r0]
    // add r0, r1, r4
    // add r0, #0x24
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057BDA
    // ldr r0, _02057BE8 ; =0x0000FFFF
    // pop {r4, pc}
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldrh r0, [r0, #0x36]
    // pop {r4, pc}
    // nop
    // _02057BE4: .word _021D41C4
    // _02057BE8: .word 0x0000FFFF
    // TODO: decompile
}



void sub_02057BEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02057B4C
    // ldr r1, _02057C1C ; =0x0000FFFF
    // cmp r0, r1
    // bne _02057BFE
    // add r0, r1, #0
    // pop {r4, pc}
    // ldr r0, _02057C20 ; =_021D41C4
    // lsl r4, r4, #3
    // ldr r0, [r0]
    // add r1, r0, r4
    // mov r0, #0x38
    // ldrsb r0, [r1, r0]
    // bl GetDeltaXByFacingDirection
    // ldr r1, _02057C20 ; =_021D41C4
    // ldr r1, [r1]
    // add r1, r1, r4
    // ldrh r1, [r1, #0x34]
    // add r0, r1, r0
    // pop {r4, pc}
    // nop
    // _02057C1C: .word 0x0000FFFF
    // _02057C20: .word _021D41C4
    // TODO: decompile
}



void sub_02057C24(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_02057B9C
    // ldr r1, _02057C54 ; =0x0000FFFF
    // cmp r0, r1
    // bne _02057C36
    // add r0, r1, #0
    // pop {r4, pc}
    // ldr r0, _02057C58 ; =_021D41C4
    // lsl r4, r4, #3
    // ldr r0, [r0]
    // add r1, r0, r4
    // mov r0, #0x38
    // ldrsb r0, [r1, r0]
    // bl GetDeltaYByFacingDirection
    // ldr r1, _02057C58 ; =_021D41C4
    // ldr r1, [r1]
    // add r1, r1, r4
    // ldrh r1, [r1, #0x36]
    // add r0, r1, r0
    // pop {r4, pc}
    // nop
    // _02057C54: .word 0x0000FFFF
    // _02057C58: .word _021D41C4
    // TODO: decompile
}



void sub_02057C5C(void) {
    // push {r3, r4}
    // ldr r3, _02057C90 ; =_021D41C4
    // ldr r4, [r3]
    // add r4, #0xb4
    // ldrb r2, [r4, r0]
    // cmp r1, r2
    // beq _02057C8C
    // strb r1, [r4, r0]
    // ldr r2, [r3]
    // lsl r1, r0, #3
    // add r2, r2, r1
    // mov r4, #0
    // add r2, #0x3b
    // strb r4, [r2]
    // ldr r2, [r3]
    // mov r4, #1
    // add r0, r2, r0
    // add r0, #0xcc
    // strb r4, [r0]
    // ldr r0, [r3]
    // mov r2, #2
    // add r0, r0, r1
    // add r0, #0x39
    // strb r2, [r0]
    // pop {r3, r4}
    // bx lr
    // _02057C90: .word _021D41C4
    // TODO: decompile
}



void sub_02057C94(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // ldr r1, _02057D48 ; =_020FC7A0
    // add r0, sp, #8
    // ldrh r2, [r1]
    // ldr r3, _02057D4C ; =_020FC7A8
    // strh r2, [r0]
    // ldrh r2, [r1, #2]
    // strh r2, [r0, #2]
    // ldrh r2, [r1, #4]
    // ldrh r1, [r1, #6]
    // strh r2, [r0, #4]
    // strh r1, [r0, #6]
    // add r2, sp, #0x20
    // mov r1, #8
    // ldrh r0, [r3]
    // add r3, r3, #2
    // strh r0, [r2]
    // add r2, r2, #2
    // sub r1, r1, #1
    // bne _02057CB2
    // bl sub_0203993C
    // bl sub_0203774C
    // add r6, r0, #0
    // mov r0, #0
    // str r0, [sp, #4]
    // str r0, [sp]
    // cmp r6, #2
    // bne _02057CD6
    // add r5, sp, #8
    // b _02057CD8
    // add r5, sp, #0x20
    // mov r7, #0
    // cmp r6, #0
    // ble _02057D24
    // mov r4, #0
    // cmp r6, #0
    // ble _02057D1C
    // add r0, r4, #0
    // bl sub_02057A34
    // ldrh r1, [r5]
    // cmp r1, r0
    // bne _02057D16
    // add r0, r4, #0
    // bl sub_02057A88
    // ldrh r1, [r5, #2]
    // cmp r1, r0
    // bne _02057D16
    // ldr r0, [sp, #4]
    // lsl r1, r4, #2
    // add r0, r0, #1
    // str r0, [sp, #4]
    // add r0, sp, #0x10
    // str r7, [r0, r1]
    // bl sub_0203769C
    // cmp r4, r0
    // bne _02057D1C
    // mov r0, #1
    // str r0, [sp]
    // b _02057D1C
    // add r4, r4, #1
    // cmp r4, r6
    // blt _02057CE4
    // add r7, r7, #1
    // add r5, r5, #4
    // cmp r7, r6
    // blt _02057CDE
    // ldr r0, [sp, #4]
    // cmp r0, r6
    // bne _02057D42
    // mov r5, #0
    // cmp r6, #0
    // ble _02057D42
    // add r4, sp, #0x10
    // ldr r0, [r4]
    // add r1, r5, #0
    // bl sub_02037894
    // add r5, r5, #1
    // add r4, r4, #4
    // cmp r5, r6
    // blt _02057D32
    // ldr r0, [sp]
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // _02057D48: .word _020FC7A0
    // _02057D4C: .word _020FC7A8
    // TODO: decompile
}



void sub_02057D50(void) {
    // ldrb r2, [r2]
    // cmp r2, #3
    // bne _02057D64
    // ldr r1, _02057D70 ; =_021D41C4
    // mov r2, #0
    // ldr r1, [r1]
    // add r0, r1, r0
    // add r0, #0xbc
    // strb r2, [r0]
    // bx lr
    // ldr r1, _02057D70 ; =_021D41C4
    // ldr r1, [r1]
    // add r0, r1, r0
    // add r0, #0xe6
    // strb r2, [r0]
    // bx lr
    // _02057D70: .word _021D41C4
    // TODO: decompile
}



void sub_02057D74(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // bl sub_0203993C
    // bl sub_0203774C
    // add r7, r0, #0
    // cmp r7, #2
    // bne _02057D8C
    // ldr r0, _02057DFC ; =_0210FAB4
    // str r0, [sp]
    // b _02057D90
    // ldr r0, _02057E00 ; =_0210FABC
    // str r0, [sp]
    // mov r1, #0
    // add r0, sp, #4
    // strb r1, [r0]
    // cmp r7, #0
    // ble _02057DF8
    // ldr r0, _02057E04 ; =_021D41C4
    // add r6, sp, #4
    // ldr r1, [r0]
    // ldrb r0, [r6]
    // add r0, r1, r0
    // add r0, #0xe6
    // ldrb r0, [r0]
    // cmp r0, #0
    // beq _02057DEA
    // mov r4, #0
    // cmp r7, #0
    // ble _02057DEA
    // ldr r5, [sp]
    // ldrb r0, [r6]
    // bl sub_02057B4C
    // ldrh r1, [r5]
    // cmp r1, r0
    // bne _02057DE2
    // ldrb r0, [r6]
    // bl sub_02057B9C
    // ldrh r1, [r5, #2]
    // cmp r1, r0
    // bne _02057DE2
    // ldr r0, _02057E04 ; =_021D41C4
    // ldr r1, [r0]
    // ldrb r0, [r6]
    // add r1, r1, r0
    // add r1, #0xbc
    // mov r0, #1
    // strb r0, [r1]
    // mov r0, #0x5f
    // add r1, sp, #4
    // bl sub_02037184
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, r7
    // blt _02057DB4
    // add r0, sp, #4
    // ldrb r1, [r0]
    // add r1, r1, #1
    // strb r1, [r0]
    // ldrb r0, [r0]
    // cmp r0, r7
    // blt _02057D9A
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02057DFC: .word _0210FAB4
    // _02057E00: .word _0210FABC
    // _02057E04: .word _021D41C4
    // TODO: decompile
}



void sub_02057E08(void) {
    // push {r4, lr}
    // bl sub_0203769C
    // add r4, r0, #0
    // bl sub_02057A34
    // cmp r0, #8
    // ble _02057E28
    // mov r0, #2
    // bl sub_02057F28
    // mov r0, #2
    // mov r1, #0x24
    // bl sub_0206234C
    // b _02057E36
    // mov r0, #3
    // bl sub_02057F28
    // mov r0, #3
    // mov r1, #0x24
    // bl sub_0206234C
    // add r1, r0, #0
    // ldr r0, _02057E4C ; =_021D41C4
    // ldr r2, [r0]
    // lsl r0, r4, #2
    // add r0, r2, r0
    // ldr r0, [r0, #4]
    // bl sub_0205DFD4
    // bl sub_02058024
    // pop {r4, pc}
    // _02057E4C: .word _021D41C4
    // TODO: decompile
}



void sub_02057E50(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // bl sub_0203993C
    // bl sub_0203774C
    // str r0, [sp]
    // ldr r1, [sp]
    // mov r0, #0
    // cmp r1, #0
    // ble _02057E8E
    // ldr r1, _02057EE8 ; =_021D41C4
    // ldr r2, [r1]
    // add r1, r2, #0
    // add r1, #0x24
    // ldrb r1, [r1]
    // cmp r1, #0
    // beq _02057E7E
    // add r1, r2, #0
    // add r1, #0xcc
    // ldrb r1, [r1]
    // cmp r1, #1
    // bne _02057E84
    // add sp, #8
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r1, [sp]
    // add r0, r0, #1
    // add r2, r2, #1
    // cmp r0, r1
    // blt _02057E6A
    // ldr r0, [sp]
    // mov r5, #0
    // cmp r0, #0
    // ble _02057EE2
    // add r4, r5, #0
    // ldr r0, _02057EE8 ; =_021D41C4
    // ldr r7, [r0]
    // mov r0, #4
    // add r7, #0x34
    // add r6, r7, r4
    // ldrsb r0, [r6, r0]
    // bl sub_02057EEC
    // str r0, [sp, #4]
    // bl GetDeltaXByFacingDirection
    // ldrh r1, [r7, r4]
    // add r0, r1, r0
    // strh r0, [r7, r4]
    // ldr r0, [sp, #4]
    // bl GetDeltaYByFacingDirection
    // ldrh r1, [r6, #2]
    // add r0, r1, r0
    // strh r0, [r6, #2]
    // mov r0, #2
    // strb r0, [r6, #5]
    // ldr r0, _02057EE8 ; =_021D41C4
    // ldr r0, [r0]
    // add r1, r0, r5
    // add r1, #0xcc
    // mov r0, #1
    // strb r0, [r1]
    // add r0, r5, #0
    // mov r1, #1
    // bl sub_02057C5C
    // ldr r0, [sp]
    // add r5, r5, #1
    // add r4, #8
    // cmp r5, r0
    // blt _02057E98
    // mov r0, #1
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02057EE8: .word _021D41C4
    // TODO: decompile
}



void sub_02057EEC(void) {
    GF_AssertFail(2);
}



void sub_02057F18(void) {
    // ldr r1, _02057F24 ; =_021D41C4
    // ldr r1, [r1]
    // add r0, r1, r0
    // add r0, #0xdc
    // ldrb r0, [r0]
    // bx lr
    // _02057F24: .word _021D41C4
    // TODO: decompile
}



void sub_02057F28(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02057F54 ; =_021D41C4
    // add r1, r4, #0
    // ldr r0, [r0]
    // ldr r0, [r0, #0x30]
    // ldr r0, [r0, #0x40]
    // bl PlayerAvatar_SetFacingDirection
    // bl sub_0203769C
    // ldr r1, _02057F54 ; =_021D41C4
    // lsl r0, r0, #3
    // ldr r1, [r1]
    // add r0, r1, r0
    // add r0, #0x78
    // strb r4, [r0]
    // mov r0, #0
    // bl sub_0205701C
    // pop {r4, pc}
    // nop
    // _02057F54: .word _021D41C4
    // TODO: decompile
}



void sub_02057F58(void) {
}



void sub_02057F70(void) {
}



void sub_02057F80(void) {
    // push {r3, lr}
    // ldr r0, _02057FA0 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, #0xef
    // ldrb r0, [r0]
    // cmp r0, #0
    // bne _02057F9C
    // bl sub_02057F70
    // ldr r0, _02057FA0 ; =_021D41C4
    // mov r1, #1
    // ldr r0, [r0]
    // add r0, #0xef
    // strb r1, [r0]
    // pop {r3, pc}
    // nop
    // _02057FA0: .word _021D41C4
    // TODO: decompile
}



void sub_02057FA4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // ldr r0, _02058020 ; =_021D41C4
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _0205801A
    // mov r6, #0
    // add r4, r6, #0
    // add r5, r6, #0
    // ldr r0, _02058020 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, r0, r4
    // ldr r0, [r0, #4]
    // cmp r0, #0
    // beq _02058010
    // bl sub_0203769C
    // cmp r6, r0
    // beq _02058010
    // ldr r0, _02058020 ; =_021D41C4
    // ldr r0, [r0]
    // add r0, r0, r4
    // ldr r0, [r0, #4]
    // bl PlayerAvatar_GetMapObject
    // ldr r1, _02058020 ; =_021D41C4
    // str r0, [sp, #0xc]
    // ldr r1, [r1]
    // add r1, r1, r5
    // add r2, r1, #0
    // add r2, #0x74
    // ldrh r2, [r2]
    // str r2, [sp, #8]
    // add r2, r1, #0
    // add r2, #0x76
    // ldrh r7, [r2]
    // mov r2, #0x78
    // ldrsb r1, [r1, r2]
    // str r1, [sp, #4]
    // ldr r1, [sp, #8]
    // bl MapObject_SetCurrentX
    // ldr r0, [sp, #0xc]
    // add r1, r7, #0
    // bl MapObject_SetCurrentZ
    // ldr r0, [sp, #4]
    // ldr r1, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0xc]
    // mov r2, #0
    // add r3, r7, #0
    // bl MapObject_SetPositionFromXYZAndDirection
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, #8
    // cmp r6, #8
    // blt _02057FB6
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02058020: .word _021D41C4
    // TODO: decompile
}



void sub_02058024(void) {
    // ldr r0, _02058030 ; =_021D41C4
    // mov r1, #8
    // ldr r0, [r0]
    // add r0, #0xf0
    // strb r1, [r0]
    // bx lr
    // _02058030: .word _021D41C4
    // TODO: decompile
}


