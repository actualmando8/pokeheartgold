/* Decompiled from asm/unk_02030A98.s */
#include "global.h"

void sub_02030A98(void) {
    MI_CpuFill8();
}


void sub_02030AA4(void) {
    // push {r3, r4}
    // cmp r1, #0xa
    // bne _02030ACE
    // ldrb r1, [r3]
    // cmp r1, #1
    // blo _02030ABE
    // mov r1, #1
    // ldrb r3, [r0]
    // lsl r1, r2
    // orr r1, r3
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // mov r1, #1
    // add r3, r1, #0
    // ldrb r4, [r0]
    // lsl r3, r2
    // mov r1, #0xff
    // eor r1, r3
    // and r1, r4
    // strb r1, [r0]
    // pop {r3, r4}
    // bx lr
    // TODO: decompile
}


void sub_02030AD4(void) {
    // cmp r1, #0xa
    // bne _02030AE4
    // ldrb r0, [r0]
    // add r1, r0, #0
    // asr r1, r2
    // mov r0, #1
    // and r0, r1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_02030AE8(void) {
    Save_Frontier_GetStatic();
}


void sub_02030AF8(void) {
    MI_CpuFill8();
}


void sub_02030B04(void) {
    Save_Frontier_GetStatic();
}


void sub_02030B14(void) {
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // bx lr
    // TODO: decompile
}


void sub_02030B1C(void) {
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // ldrb r3, [r0]
    // mov r2, #8
    // lsr r1, r1, #0x1c
    // bic r3, r2
    // orr r1, r3
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02030B30(void) {
    // push {r4, lr}
    // ldr r3, [sp, #8]
    // cmp r1, #4
    // bhi _02030B82
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030B44: ; jump table
    // ldrb r4, [r0]
    // ldrb r2, [r3]
    // mov r1, #7
    // bic r4, r1
    // mov r1, #7
    // and r1, r2
    // orr r1, r4
    // strb r1, [r0]
    // pop {r4, pc}
    // ldrb r1, [r3]
    // strb r1, [r0, #1]
    // pop {r4, pc}
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #4]
    // pop {r4, pc}
    // ldrb r1, [r3]
    // add r0, r0, r2
    // strb r1, [r0, #2]
    // pop {r4, pc}
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0x2c]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030B88(void) {
    // push {r3, lr}
    // cmp r1, #4
    // bhi _02030BC6
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030B9A: ; jump table
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // pop {r3, pc}
    // ldrb r0, [r0, #1]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #4]
    // pop {r3, pc}
    // add r0, r0, r2
    // ldrb r0, [r0, #2]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0x2c]
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02030BD0(void) {
    // lsl r2, r0, #0x17
    // lsr r2, r2, #0x18
    // ldrb r3, [r1, r2]
    // lsr r2, r0, #0x1f
    // lsl r1, r0, #0x1f
    // sub r1, r1, r2
    // mov r0, #0x1f
    // ror r1, r0
    // add r0, r2, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x16
    // add r1, r3, #0
    // asr r1, r0
    // mov r0, #0xf
    // and r0, r1
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bx lr
    // TODO: decompile
}


void sub_02030BF4(void) {
    // push {r3, r4, r5, r6}
    // lsr r5, r0, #0x1f
    // lsl r4, r0, #0x1f
    // lsl r3, r0, #0x17
    // sub r4, r4, r5
    // mov r0, #0x1f
    // ror r4, r0
    // add r0, r5, r4
    // lsl r0, r0, #0x18
    // lsr r3, r3, #0x18
    // lsr r0, r0, #0x18
    // bne _02030C14
    // add r4, r1, r3
    // ldrb r6, [r1, r3]
    // mov r5, #0xf0
    // b _02030C1A
    // ldrb r6, [r1, r3]
    // add r4, r1, r3
    // mov r5, #0xf
    // and r5, r6
    // strb r5, [r1, r3]
    // lsl r0, r0, #2
    // add r1, r2, #0
    // lsl r1, r0
    // lsl r0, r1, #0x18
    // ldrb r3, [r4]
    // lsr r0, r0, #0x18
    // orr r0, r3
    // strb r0, [r4]
    // pop {r3, r4, r5, r6}
    // bx lr
    // TODO: decompile
}


void sub_02030C34(void) {
    sub_02030BF4(0);
}


void sub_02030C50(void) {
    MI_CpuFill8();
}


void sub_02030C5C(void) {
    Save_Frontier_GetStatic();
}


void sub_02030C6C(void) {
    // push {r4, lr}
    // ldr r3, [sp, #8]
    // cmp r1, #5
    // bne _02030C98
    // ldrb r1, [r3]
    // cmp r1, #1
    // blo _02030C86
    // mov r1, #1
    // ldrb r3, [r0]
    // lsl r1, r2
    // orr r1, r3
    // strb r1, [r0]
    // pop {r4, pc}
    // mov r1, #1
    // add r3, r1, #0
    // ldrb r4, [r0]
    // lsl r3, r2
    // mov r1, #0xff
    // eor r1, r3
    // and r1, r4
    // strb r1, [r0]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030CA0(void) {
    GF_AssertFail(0, 1);
}


void sub_02030CBC(void) {
    MI_CpuFill8();
}


void sub_02030CC8(void) {
    Save_Frontier_GetStatic();
}


void sub_02030CD8(void) {
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // bx lr
    // TODO: decompile
}


void sub_02030CE0(void) {
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // ldrb r3, [r0]
    // mov r2, #8
    // lsr r1, r1, #0x1c
    // bic r3, r2
    // orr r1, r3
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02030CF4(void) {
    // push {r4, lr}
    // ldr r4, [sp, #8]
    // cmp r1, #8
    // bhi _02030D7E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030D08: ; jump table
    // ldrb r3, [r0]
    // ldrb r2, [r4]
    // mov r1, #7
    // bic r3, r1
    // mov r1, #7
    // and r1, r2
    // orr r1, r3
    // strb r1, [r0]
    // pop {r4, pc}
    // ldrb r1, [r4]
    // strb r1, [r0, #1]
    // pop {r4, pc}
    // ldrh r3, [r4]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0x22]
    // pop {r4, pc}
    // lsl r1, r2, #2
    // add r0, r0, r1
    // add r0, r0, r3
    // ldrb r4, [r4]
    // add r0, #0x2a
    // strb r4, [r0]
    // pop {r4, pc}
    // lsl r1, r2, #2
    // ldr r3, [r4]
    // add r0, r0, r1
    // str r3, [r0, #0x3c]
    // pop {r4, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r3, [r4]
    // add r0, #0x4c
    // strh r3, [r0]
    // pop {r4, pc}
    // ldrh r3, [r4]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #6]
    // pop {r4, pc}
    // ldrb r1, [r4]
    // add r0, r0, r2
    // strb r1, [r0, #3]
    // pop {r4, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r3, [r4]
    // add r0, #0x54
    // strh r3, [r0]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030D84(void) {
    // push {r3, lr}
    // cmp r1, #8
    // bhi _02030DF2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030D96: ; jump table
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // pop {r3, pc}
    // ldrb r0, [r0, #1]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0x22]
    // pop {r3, pc}
    // lsl r1, r2, #2
    // add r0, r0, r1
    // add r0, r0, r3
    // add r0, #0x2a
    // ldrb r0, [r0]
    // pop {r3, pc}
    // lsl r1, r2, #2
    // add r0, r0, r1
    // ldr r0, [r0, #0x3c]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // add r0, #0x4c
    // ldrh r0, [r0]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #6]
    // pop {r3, pc}
    // add r0, r0, r2
    // ldrb r0, [r0, #3]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // add r0, #0x54
    // ldrh r0, [r0]
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02030DFC(void) {
    MI_CpuFill8();
}


void sub_02030E08(void) {
    Save_Frontier_GetStatic();
}


void sub_02030E18(void) {
    // push {r4, lr}
    // ldr r3, [sp, #8]
    // cmp r1, #9
    // beq _02030E26
    // cmp r1, #0xa
    // beq _02030E4A
    // b _02030E50
    // ldrb r1, [r3]
    // cmp r1, #1
    // blo _02030E38
    // mov r1, #1
    // ldrb r3, [r0]
    // lsl r1, r2
    // orr r1, r3
    // strb r1, [r0]
    // pop {r4, pc}
    // mov r1, #1
    // add r3, r1, #0
    // ldrb r4, [r0]
    // lsl r3, r2
    // mov r1, #0xff
    // eor r1, r3
    // and r1, r4
    // strb r1, [r0]
    // pop {r4, pc}
    // mov r1, #1
    // strb r1, [r0, #1]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030E58(void) {
    // push {r3, lr}
    // cmp r1, #9
    // beq _02030E64
    // cmp r1, #0xa
    // beq _02030E70
    // b _02030E74
    // ldrb r0, [r0]
    // add r1, r0, #0
    // asr r1, r2
    // mov r0, #1
    // and r0, r1
    // pop {r3, pc}
    // ldrb r0, [r0, #1]
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02030E7C(void) {
    MI_CpuFill8();
}


void sub_02030E88(void) {
    Save_Frontier_GetStatic();
}


void sub_02030E98(void) {
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1c
    // lsr r0, r0, #0x1f
    // bx lr
    // TODO: decompile
}


void sub_02030EA0(void) {
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x1f
    // ldrb r3, [r0]
    // mov r2, #8
    // lsr r1, r1, #0x1c
    // bic r3, r2
    // orr r1, r3
    // strb r1, [r0]
    // bx lr
    // TODO: decompile
}


void sub_02030EB4(void) {
    // push {r4, lr}
    // ldr r3, [sp, #8]
    // cmp r1, #7
    // bhi _02030F2E
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030EC8: ; jump table
    // ldrb r4, [r0]
    // ldrb r2, [r3]
    // mov r1, #7
    // bic r4, r1
    // mov r1, #7
    // and r1, r2
    // orr r1, r4
    // strb r1, [r0]
    // pop {r4, pc}
    // ldrb r2, [r0]
    // mov r1, #0x10
    // bic r2, r1
    // ldrb r1, [r3]
    // lsl r1, r1, #0x1f
    // lsr r1, r1, #0x1b
    // orr r1, r2
    // strb r1, [r0]
    // pop {r4, pc}
    // ldrb r1, [r3]
    // strb r1, [r0, #1]
    // pop {r4, pc}
    // ldrb r1, [r3]
    // strb r1, [r0, #2]
    // pop {r4, pc}
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #6]
    // pop {r4, pc}
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0xe]
    // pop {r4, pc}
    // ldrb r1, [r3]
    // add r0, r0, r2
    // strb r1, [r0, #3]
    // pop {r4, pc}
    // ldrh r3, [r3]
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #0x2a]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030F34(void) {
    // push {r3, lr}
    // cmp r1, #7
    // bhi _02030F8C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02030F46: ; jump table
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1d
    // lsr r0, r0, #0x1d
    // pop {r3, pc}
    // ldrb r0, [r0]
    // lsl r0, r0, #0x1b
    // lsr r0, r0, #0x1f
    // pop {r3, pc}
    // ldrb r0, [r0, #1]
    // pop {r3, pc}
    // ldrb r0, [r0, #2]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #6]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0xe]
    // pop {r3, pc}
    // add r0, r0, r2
    // ldrb r0, [r0, #3]
    // pop {r3, pc}
    // lsl r1, r2, #1
    // add r0, r0, r1
    // ldrh r0, [r0, #0x2a]
    // pop {r3, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02030F94(void) {
    MI_CpuFill8();
}


void sub_02030FA0(void) {
    Save_Frontier_GetStatic();
}


void sub_02030FB0(void) {
    // push {r4, lr}
    // ldr r3, [sp, #8]
    // cmp r1, #8
    // bne _02030FDC
    // ldrb r1, [r3]
    // cmp r1, #1
    // blo _02030FCA
    // mov r1, #1
    // ldrb r3, [r0]
    // lsl r1, r2
    // orr r1, r3
    // strb r1, [r0]
    // pop {r4, pc}
    // mov r1, #1
    // add r3, r1, #0
    // ldrb r4, [r0]
    // lsl r3, r2
    // mov r1, #0xff
    // eor r1, r3
    // and r1, r4
    // strb r1, [r0]
    // pop {r4, pc}
    // bl GF_AssertFail
    // pop {r4, pc}
    // TODO: decompile
}


void sub_02030FE4(void) {
    GF_AssertFail(0, 1);
}


void Save_Frontier_sizeof(void) {
    // ldr r0, _02031004 ; =0x00001628
    // bx lr
    // _02031004: .word 0x00001628
    // TODO: decompile
}


void Save_Frontier_Init(void) {
    // push {r4, lr}
    // ldr r2, _02031058 ; =0x00001628
    // mov r1, #0
    // add r4, r0, #0
    // bl MI_CpuFill8
    // ldr r0, _0203105C ; =0x00000954
    // add r0, r4, r0
    // bl sub_0202D240
    // ldr r0, _02031060 ; =0x00000ABC
    // add r0, r4, r0
    // bl sub_0202D254
    // ldr r0, _02031064 ; =0x00000ADC
    // add r0, r4, r0
    // bl sub_0202D274
    // ldr r0, _02031068 ; =0x00001618
    // add r0, r4, r0
    // bl sub_02030A98
    // ldr r0, _0203106C ; =0x0000161C
    // add r0, r4, r0
    // bl sub_02030C50
    // ldr r0, _02031070 ; =0x00001620
    // add r0, r4, r0
    // bl sub_02030DFC
    // ldr r0, _02031074 ; =0x00001624
    // add r0, r4, r0
    // bl sub_02030F94
    // ldr r1, _02031078 ; =_021D2AFC
    // ldr r2, _02031058 ; =0x00001628
    // add r0, r4, #0
    // bl MI_CpuCopy8
    // pop {r4, pc}
    // _02031058: .word 0x00001628
    // _0203105C: .word 0x00000954
    // _02031060: .word 0x00000ABC
    // _02031064: .word 0x00000ADC
    // _02031068: .word 0x00001618
    // _0203106C: .word 0x0000161C
    // _02031070: .word 0x00001620
    // _02031074: .word 0x00001624
    // _02031078: .word _021D2AFC
    // TODO: decompile
}


void Save_Frontier_GetStatic(void) {
    // ldr r0, _02031080 ; =_021D2AFC
    // bx lr
    // _02031080: .word _021D2AFC
    // TODO: decompile
}


void Save_Frontier_Commit(void) {
    // push {r3, lr}
    // mov r1, #0x13
    // bl SaveArray_Get
    // add r1, r0, #0
    // ldr r0, _02031098 ; =_021D2AFC
    // ldr r2, _0203109C ; =0x00001628
    // bl MI_CpuCopy8
    // pop {r3, pc}
    // _02031098: .word _021D2AFC
    // _0203109C: .word 0x00001628
    // TODO: decompile
}


void Save_Frontier_Load(void) {
    // push {r3, lr}
    // mov r1, #0x13
    // bl SaveArray_Get
    // ldr r1, _020310B4 ; =_021D2AFC
    // ldr r2, _020310B8 ; =0x00001628
    // bl MI_CpuCopy8
    // pop {r3, pc}
    // nop
    // _020310B4: .word _021D2AFC
    // _020310B8: .word 0x00001628
    // TODO: decompile
}


void FrontierSave_GetStat(void) {
    // push {r3, lr}
    // cmp r1, #0x70
    // bge _020310E6
    // cmp r1, #0x64
    // blt _020310E0
    // cmp r2, #0x10
    // blt _020310CE
    // add r1, r1, #1
    // sub r2, #0x10
    // lsl r1, r1, #1
    // ldrh r0, [r0, r1]
    // add r1, r0, #0
    // asr r1, r2
    // mov r0, #1
    // and r0, r1
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // pop {r3, pc}
    // lsl r1, r1, #1
    // ldrh r0, [r0, r1]
    // pop {r3, pc}
    // mov r3, #0
    // mvn r3, r3
    // cmp r2, r3
    // bne _020310F6
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r3, pc}
    // lsl r2, r2, #6
    // sub r1, #0x70
    // add r2, r0, r2
    // lsl r0, r1, #1
    // add r0, r2, r0
    // add r0, #0xe0
    // ldrh r0, [r0]
    // pop {r3, pc}
    // TODO: decompile
}


void sub_02031108(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r0, _02031180 ; =0x0000270F
    // add r7, r3, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // cmp r7, r0
    // bls _0203111A
    // add r7, r0, #0
    // cmp r5, #0x70
    // bge _02031166
    // cmp r5, #0x64
    // blt _02031158
    // cmp r4, #0xff
    // bne _0203112A
    // bl GF_AssertFail
    // cmp r4, #0x10
    // blt _02031132
    // add r5, r5, #1
    // sub r4, #0x10
    // cmp r7, #0
    // bne _0203114A
    // mov r2, #1
    // add r3, r2, #0
    // lsl r1, r5, #1
    // ldrh r0, [r6, r1]
    // lsl r3, r4
    // ldr r2, _02031184 ; =0x0000FFFF
    // eor r2, r3
    // and r0, r2
    // strh r0, [r6, r1]
    // b _0203117C
    // lsl r2, r5, #1
    // mov r0, #1
    // ldrh r1, [r6, r2]
    // lsl r0, r4
    // orr r0, r1
    // strh r0, [r6, r2]
    // b _0203117C
    // cmp r4, #0xff
    // beq _02031160
    // bl GF_AssertFail
    // lsl r0, r5, #1
    // strh r7, [r6, r0]
    // b _0203117C
    // cmp r4, #0xff
    // bne _0203116E
    // bl GF_AssertFail
    // lsl r0, r4, #6
    // sub r5, #0x70
    // add r1, r6, r0
    // lsl r0, r5, #1
    // add r0, r1, r0
    // add r0, #0xe0
    // strh r7, [r0]
    // add r0, r7, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _02031180: .word 0x0000270F
    // _02031184: .word 0x0000FFFF
    // TODO: decompile
}


void sub_02031188(void) {
    // push {r4, lr}
    // mov r2, #2
    // add r4, r0, #0
    // add r0, #0xe0
    // mov r1, #0
    // lsl r2, r2, #0xa
    // bl MI_CpuFill8
    // mov r1, #0x64
    // add r4, #0xc8
    // mov r0, #0
    // add r1, r1, #1
    // strh r0, [r4]
    // add r4, r4, #2
    // cmp r1, #0x6f
    // ble _0203119E
    // pop {r4, pc}
    // TODO: decompile
}


void sub_020311AC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r1, #0
    // add r6, r0, #0
    // cmp r5, #0xff
    // bne _020311BA
    // bl GF_AssertFail
    // cmp r5, #0x1f
    // bge _02031200
    // add r0, r6, #0
    // str r0, [sp]
    // add r0, #0xe0
    // lsl r1, r5, #6
    // str r0, [sp]
    // add r7, r0, r1
    // add r0, r5, #1
    // lsl r1, r0, #6
    // ldr r0, [sp]
    // mov r2, #0x40
    // add r0, r0, r1
    // add r1, r7, #0
    // bl MI_CpuCopy8
    // mov r4, #0x64
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #1
    // bl FrontierSave_GetStat
    // add r3, r0, #0
    // add r0, r6, #0
    // add r1, r4, #0
    // add r2, r5, #0
    // bl sub_02031108
    // add r4, r4, #2
    // cmp r4, #0x6f
    // blt _020311DC
    // add r5, r5, #1
    // add r7, #0x40
    // cmp r5, #0x1f
    // blt _020311CA
    // mov r0, #0x1f
    // add r6, #0xe0
    // lsl r0, r0, #6
    // add r0, r6, r0
    // mov r1, #0
    // mov r2, #0x40
    // bl MI_CpuFill8
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02031214(void) {
    // ldr r3, _02031224 ; =MI_CpuFill8
    // add r0, #0xe0
    // lsl r1, r1, #6
    // add r0, r0, r1
    // mov r1, #0
    // mov r2, #0x40
    // bx r3
    // nop
    // _02031224: .word MI_CpuFill8
    // TODO: decompile
}


void sub_02031228(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r4, r3, #0
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // bl FrontierSave_GetStat
    // add r0, r0, r4
    // lsl r0, r0, #0x10
    // lsr r3, r0, #0x10
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_02031108
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_02031248(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl FrontierSave_GetStat
    // sub r3, r0, r4
    // bpl _0203125C
    // mov r3, #0
    // lsl r3, r3, #0x10
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // lsr r3, r3, #0x10
    // bl sub_02031108
    // pop {r3, r4, r5, r6, r7, pc}
    // TODO: decompile
}


void sub_0203126C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // add r6, r1, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl FrontierSave_GetStat
    // cmp r0, r4
    // bhs _0203128C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // add r3, r4, #0
    // bl sub_02031108
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, _020312A0 ; =0x0000270F
    // cmp r0, r3
    // bls _0203129C
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r7, #0
    // bl sub_02031108
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _020312A0: .word 0x0000270F
    // TODO: decompile
}


void sub_020312A4(void) {
    r0 = r0 << 4;
}


void sub_020312AC(void) {
    MI_CpuFill8(0, 0, 0xba);
}


void sub_020312C4(void) {
    sub_02027144();
}


void sub_020312CC(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl sub_02027158
    // add r4, r0, #0
    // add r0, r5, #0
    // bl SaveGameNormal
    // orr r0, r4
    // pop {r3, r4, r5, pc}
    // TODO: decompile
}


void sub_020312E0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl Save_CheckExtraChunksExist
    // cmp r0, #0
    // bne _020312F4
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // cmp r4, #0
    // beq _02031302
    // cmp r4, #1
    // beq _0203130A
    // cmp r4, #2
    // beq _02031314
    // b _02031320
    // lsl r0, r6, #1
    // add r0, r5, r0
    // ldrh r0, [r0, #4]
    // pop {r4, r5, r6, pc}
    // lsl r0, r6, #1
    // add r1, r5, r0
    // ldr r0, _02031328 ; =0x000003E2
    // ldrh r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // lsl r0, r6, #1
    // add r1, r5, r0
    // mov r0, #0x1f
    // lsl r0, r0, #6
    // ldrh r0, [r1, r0]
    // pop {r4, r5, r6, pc}
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // _02031328: .word 0x000003E2
    // TODO: decompile
}


void sub_0203132C(void) {
    // push {r4, lr}
    // ldr r4, _02031370 ; =0x0000270F
    // cmp r3, r4
    // bls _02031336
    // add r3, r4, #0
    // cmp r1, #0
    // beq _02031344
    // cmp r1, #1
    // beq _0203134C
    // cmp r1, #2
    // beq _02031356
    // b _02031362
    // lsl r1, r2, #1
    // add r0, r0, r1
    // strh r3, [r0, #4]
    // b _0203136A
    // lsl r1, r2, #1
    // add r1, r0, r1
    // ldr r0, _02031374 ; =0x000003E2
    // strh r3, [r1, r0]
    // b _0203136A
    // lsl r1, r2, #1
    // add r1, r0, r1
    // mov r0, #0x1f
    // lsl r0, r0, #6
    // strh r3, [r1, r0]
    // b _0203136A
    // bl GF_AssertFail
    // mov r0, #0
    // pop {r4, pc}
    // add r0, r3, #0
    // pop {r4, pc}
    // nop
    // _02031370: .word 0x0000270F
    // _02031374: .word 0x000003E2
    // TODO: decompile
}


void sub_02031378(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r5, r1, #0
    // add r4, r2, #0
    // add r6, r3, #0
    // bl Save_CheckExtraChunksExist
    // cmp r0, #0
    // bne _0203138E
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // add r0, r7, #0
    // add r1, r5, #0
    // add r2, r4, #0
    // add r3, r6, #0
    // bl sub_020312E0
    // add r1, sp, #8
    // ldrh r3, [r1, #0x10]
    // cmp r0, r3
    // bhs _020313AE
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0203132C
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r3, _020313C0 ; =0x0000270F
    // cmp r0, r3
    // bls _020313BE
    // add r0, r5, #0
    // add r1, r4, #0
    // add r2, r6, #0
    // bl sub_0203132C
    // pop {r3, r4, r5, r6, r7, pc}
    // _020313C0: .word 0x0000270F
    // TODO: decompile
}


void sub_020313C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r5, r0, #0
    // mov r0, #0
    // add r6, r1, #0
    // str r2, [sp, #4]
    // str r3, [sp, #8]
    // ldr r4, [sp, #0x38]
    // ldr r7, [sp, #0x3c]
    // str r0, [sp, #0xc]
    // cmp r6, #0x22
    // blt _020313E0
    // cmp r6, #0x3c
    // ble _020313E4
    // bl GF_AssertFail
    // ldr r1, [sp, #4]
    // mov r0, #0
    // sub r1, #0x24
    // cmp r1, #0x18
    // bhi _020313FC
    // mov r3, #1
    // add r2, r3, #0
    // lsl r2, r1
    // ldr r1, _020314A0 ; =0x01001001
    // tst r1, r2
    // beq _020313FC
    // add r0, r3, #0
    // cmp r0, #0
    // bne _02031404
    // bl GF_AssertFail
    // mov r0, #1
    // str r0, [r4]
    // mov r0, #2
    // str r0, [r7]
    // ldr r0, [sp, #8]
    // cmp r0, #0xff
    // beq _02031418
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl Save_CheckExtraChunksExist
    // cmp r0, #0
    // bne _02031428
    // add sp, #0x1c
    // mov r0, #0
    // pop {r4, r5, r6, r7, pc}
    // add r0, r5, #0
    // bl Save_Frontier_GetStatic
    // ldr r2, [sp, #8]
    // str r0, [sp, #0x18]
    // add r1, r6, #0
    // bl FrontierSave_GetStat
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x18]
    // ldr r1, [sp, #4]
    // ldr r2, [sp, #8]
    // bl FrontierSave_GetStat
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #0x34]
    // add r0, r5, #0
    // add r2, r4, #0
    // bl sub_020312C4
    // add r6, r0, #0
    // ldr r0, [r4]
    // cmp r0, #1
    // beq _0203145C
    // mov r4, #0
    // b _0203146A
    // ldr r2, [sp, #0x30]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_020312E0
    // add r4, r0, #0
    // ldr r0, [sp, #0x14]
    // ldr r2, [sp, #0x30]
    // str r0, [sp]
    // ldr r3, [sp, #0x10]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_02031378
    // ldr r0, [sp, #0x14]
    // cmp r0, r4
    // beq _0203148E
    // add r0, r5, #0
    // add r1, r6, #0
    // bl sub_020312CC
    // str r0, [r7]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // cmp r6, #0
    // beq _02031498
    // add r0, r6, #0
    // bl Heap_Free
    // ldr r0, [sp, #0xc]
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _020314A0: .word 0x01001001
    // TODO: decompile
}


void sub_020314A4(void) {
    Heap_Alloc(0x80);
    MI_CpuFill8(0, 0x80);
}


void sub_020314BC(void) {
    Heap_Free();
}


void sub_020314C4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x64
    // add r6, r1, #0
    // add r5, r0, #0
    // add r0, r6, #0
    // bl Save_PlayerData_GetProfile
    // add r4, r0, #0
    // add r0, r6, #0
    // bl Save_WiFiHistory_Get
    // str r0, [sp]
    // add r0, r6, #0
    // bl Save_SysInfo_Get
    // add r0, r6, #0
    // bl Save_Misc_Const_Get
    // add r7, r0, #0
    // add r0, sp, #0x10
    // bl OS_GetOwnerInfo
    // add r0, r7, #0
    // add r1, sp, #0xc
    // add r2, sp, #8
    // add r3, sp, #4
    // bl SaveMisc_GetFavoriteMon
    // add r0, r5, #0
    // mov r1, #0
    // mov r2, #0x80
    // bl MI_CpuFill8
    // add r0, r4, #0
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // add r0, r5, #0
    // bl CopyU16StringArray
    // add r0, r4, #0
    // bl PlayerProfile_GetTrainerID
    // str r0, [r5, #0x10]
    // add r0, r4, #0
    // bl PlayerProfile_GetTrainerGender
    // strb r0, [r5, #0x14]
    // ldr r0, [sp, #0xc]
    // mov r1, #0xfe
    // strh r0, [r5, #0x1c]
    // ldrb r0, [r5, #0x1b]
    // bic r0, r1
    // ldr r1, [sp, #8]
    // lsl r1, r1, #0x18
    // lsr r1, r1, #0x18
    // lsl r1, r1, #0x19
    // lsr r1, r1, #0x18
    // orr r0, r1
    // strb r0, [r5, #0x1b]
    // ldrb r0, [r5, #0x1b]
    // mov r1, #1
    // bic r0, r1
    // ldr r1, [sp, #4]
    // lsl r1, r1, #0x18
    // lsr r2, r1, #0x18
    // mov r1, #1
    // and r1, r2
    // orr r0, r1
    // strb r0, [r5, #0x1b]
    // ldr r0, [sp]
    // bl WifiHistory_GetPlayerCountry
    // strb r0, [r5, #0x17]
    // ldr r0, [sp]
    // bl WiFiHistory_GetPlayerRegion
    // strb r0, [r5, #0x18]
    // ldr r0, _020315B4 ; =0x0000FFFF
    // mov r1, #0
    // add r2, r5, #0
    // add r1, r1, #1
    // strh r0, [r2, #0x20]
    // add r2, r2, #2
    // cmp r1, #0x28
    // blt _02031566
    // add r1, r5, #0
    // add r0, r7, #0
    // add r1, #0x20
    // bl SaveMisc_GetBattleGreeting
    // add r0, sp, #4
    // ldrb r0, [r0, #0xe]
    // strb r0, [r5, #0x15]
    // add r0, r4, #0
    // bl PlayerProfile_GetTrainerGender
    // add r7, r0, #0
    // add r0, r4, #0
    // bl PlayerProfile_GetAvatar
    // add r1, r0, #0
    // add r0, r7, #0
    // mov r2, #0
    // bl GetUnionRoomAvatarAttrBySprite
    // strb r0, [r5, #0x16]
    // mov r0, #GAME_VERSION
    // strb r0, [r5, #0x19]
    // mov r0, #2
    // strb r0, [r5, #0x1a]
    // add r0, r6, #0
    // add r1, r5, #0
    // mov r2, #0x7c
    // bl SaveArray_CalcCRC16
    // add r5, #0x7c
    // strh r0, [r5]
    // add sp, #0x64
    // pop {r4, r5, r6, r7, pc}
    // _020315B4: .word 0x0000FFFF
    // TODO: decompile
}


void sub_020315B8(void) {
    String_New(0xf);
    CopyU16ArrayToStringN(r5, 0xf);
}


void sub_020315D0(void) {
    // ldrb r0, [r0, #0x14]
    // cmp r0, #0
    // beq _020315DC
    // cmp r0, #1
    // beq _020315DC
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_020315E0(void) {
    // ldrh r0, [r0, #0x1c]
    // ldr r1, _020315EC ; =0x000001EF
    // cmp r0, r1
    // blo _020315EA
    // mov r0, #0
    // bx lr
    // _020315EC: .word 0x000001EF
    // TODO: decompile
}


void sub_020315F0(void) {
    sub_02070438(0);
}


void sub_02031610(void) {
    // ldrb r0, [r0, #0x1b]
    // lsl r0, r0, #0x1f
    // lsr r0, r0, #0x1f
    // cmp r0, #1
    // bls _0203161C
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_02031620(void) {
    // ldrb r0, [r0, #0x17]
    // cmp r0, #0xea
    // blo _02031628
    // mov r0, #0
    // bx lr
    // TODO: decompile
}


void sub_0203162C(void) {
    LocationGmmDatRegionCountGetByCountryMsgNo(0, 0);
}


void sub_0203164C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldrb r0, [r5, #0x1e]
    // add r4, r1, #0
    // mov r6, #0
    // cmp r0, #0
    // bne _020316CE
    // ldrh r0, [r5, #0x20]
    // strh r0, [r4]
    // ldrh r0, [r5, #0x22]
    // strh r0, [r4, #2]
    // ldrh r0, [r5, #0x24]
    // strh r0, [r4, #4]
    // ldrh r0, [r5, #0x26]
    // strh r0, [r4, #6]
    // ldrh r0, [r4]
    // cmp r0, #5
    // blo _02031676
    // add r6, r6, #1
    // b _020316AA
    // ldrh r0, [r4, #2]
    // cmp r0, #0x13
    // bls _02031680
    // add r6, r6, #1
    // b _020316AA
    // ldrh r0, [r4, #4]
    // ldr r1, _020316E8 ; =0x0000FFFF
    // cmp r0, r1
    // beq _02031694
    // add r1, sp, #4
    // add r2, sp, #0
    // bl GetCategoryAndMsgNoByECWordIdx
    // cmp r0, #0
    // beq _020316A8
    // ldrh r0, [r4, #6]
    // ldr r1, _020316E8 ; =0x0000FFFF
    // cmp r0, r1
    // beq _020316AA
    // add r1, sp, #4
    // add r2, sp, #0
    // bl GetCategoryAndMsgNoByECWordIdx
    // cmp r0, #0
    // bne _020316AA
    // add r6, r6, #1
    // cmp r6, #0
    // ble _020316C8
    // add r0, r4, #0
    // mov r1, #4
    // bl MailMsg_Init_WithBank
    // mov r0, #0
    // strh r0, [r4, #2]
    // ldr r0, _020316EC ; =0x0000011F
    // mov r1, #0x63
    // bl GetECWordIndexByPair
    // strh r0, [r4, #4]
    // ldr r0, _020316E8 ; =0x0000FFFF
    // strh r0, [r4, #6]
    // add sp, #8
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #0x28
    // add r1, r2, #0
    // bl String_New
    // add r5, #0x20
    // add r1, r5, #0
    // mov r2, #0x28
    // add r4, r0, #0
    // bl CopyU16ArrayToStringN
    // add r0, r4, #0
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _020316E8: .word 0x0000FFFF
    // _020316EC: .word 0x0000011F
    // TODO: decompile
}


void sub_020316F0(void) {
    // ldrb r0, [r0, #0x15]
    // cmp r0, #1
    // blo _020316FA
    // cmp r0, #0xc
    // bls _020316FC
    // mov r0, #1
    // bx lr
    // TODO: decompile
}


void sub_02031700(void) {
    // ldrb r0, [r0, #0x16]
    // cmp r0, #0xf
    // bls _02031708
    // mov r0, #0
    // bx lr
    // TODO: decompile
}

