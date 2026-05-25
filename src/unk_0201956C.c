/* Decompiled from asm/unk_0201956C.s */
#include "global.h"

UnkStruct_0201956C * sub_0201956C(void) {
    // str r3, [sp]
    Heap_Alloc(r3, 0x10);
    // str r6, [r4]
    *((u16*)(r0 + 8)) = r5;
    // ldr r0, [sp]
    *((u32*)(r0 + 0xc)) = r0;
    // and r0, r1
    // and r2, r3
    *((u16*)(r0 + 0xa)) = (*((u16*)(r0 + 0xa)) | (0xFFFF8000 >> 0x11));
    // and r0, r2
    *((u16*)(r0 + 0xa)) = (0xFFFF8000 - 1);
    // ldr r0, [sp]
    Heap_Alloc((0xFFFF8000 - 1), (r5 << 4), *((u16*)(r0 + 0xa)), ((r7 << 0x10) >> 0x10));
    *((u32*)(r4 + 4)) = r0;
    MI_CpuFill8(0, r5);
}




void sub_020195C0(void) {
    // add r4, #0x10
}




void sub_020195F4(void) {
    // ldr r1, [sp, #0x18]
    // add r5, r4, r7
    // str r2, [sp]
    Heap_Alloc(*((u32*)(r0 + 0xc)), ((r1 * r3) << 1));
    // str r0, [r4, r7]
    // and r1, r2
    *((u16*)(r5 + 4)) = ((*((u16*)(r5 + 4)) & ~(0x3f)) | 0x3f);
    // and r1, r0
    // ldr r0, [sp, #0x18]
    *((u16*)(r5 + 4)) = (((((0xFFFFF03F << 0x10) >> 0x10) << 0x1a) >> 0x14) | *((u16*)(r5 + 4)));
    // ldr r0, [sp]
    *((u8*)(r5 + 0xa)) = (((((0xFFFFF03F << 0x10) >> 0x10) << 0x1a) >> 0x14) | *((u16*)(r5 + 4)));
    *((u8*)(r5 + 6)) = 0;
    *((u8*)(r5 + 7)) = 0;
    // and r1, r2
    *((u16*)(r5 + 4)) = 0xFFFF1FFF;
    *((u16*)(r5 + 4)) = ((1 << 0xc) | *((u16*)(r5 + 4)));
    *((u8*)(r5 + 0xc)) = 0;
    *((u8*)(r5 + 0xd)) = 0x20;
    *((u8*)(r5 + 0xe)) = 0;
    *((u8*)(r5 + 0xf)) = 0x18;
}




void sub_02019668(void) {
    // add r4, r3, r1
}




void sub_02019688(void) {
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // add r3, sp, #4
    // ldr r2, [sp, #4]
    // add r2, #0xc
}




void sub_020196B8(void) {
    // str r0, [sp]
    // ldr r2, [sp, #0x18]
    // add r3, sp, #4
    // ldr r2, [sp, #4]
    // add r2, #0xc
}




void sub_020196E8(void) {
    // str r0, [sp, #0x1c]
    // ldr r2, [sp, #0x1c]
    // add r4, r2, r1
    *((u8*)(r4 + 6)) = r2;
    *((u8*)(r4 + 7)) = r3;
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #0x28]
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #0x20]
    // str r2, [sp, #0x2c]
    // add r7, r0, r2
    // ldrsb r2, [r4, r2]
    // mov ip, r2
    // str r1, [sp, #0x24]
    // add r6, r3, r1
    // ldrsb r2, [r4, r1]
    // str r1, [sp, #0x34]
    // ldr r1, [sp, #0x2c]
    // str r5, [sp, #0x30]
    // mov r5, ip
    // mov r5, ip
    // str r5, [sp, #0x34]
    // mov r5, ip
    // sub r0, r5, r0
    // sub r1, r1, r0
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x28]
    // sub r0, r7, r0
    // sub r0, r1, r0
    // ldr r0, [sp, #0x24]
    // sub r2, r2, r3
    // sub r0, r0, r2
    // ldr r2, [sp, #0x20]
    // sub r2, r6, r2
    // sub r0, r0, r2
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x30]
    // str r0, [sp, #0xc]
    // str r5, [sp, #0x10]
    // ldr r0, [sp, #0x2c]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x1c]
    // ldr r2, [sp, #0x34]
    CopyToBgTilemapRect(*((u32*)((((*((u32*)r4) << 0x18) >> 0x18) << 0x18) >> 0x18)), *((u8*)(r4 + 0xa)), (0xc << 0x18), ((0xc << 0x18) >> 0x18));
    // ldr r2, [sp, #0x1c]
    // ldr r0, [sp, #0x1c]
    // blx r2
    // and r0, r1
    *((u16*)(r4 + 4)) = 0xFFFFEFFF;
}




void sub_020197F4(void) {
}




void sub_0201980C(void) {
    // str r0, [sp, #0x10]
    // add r4, r2, r0
    *((u16*)(r4 + 4)) = ((1 << 0xc) | *((u16*)(r4 + 4)));
    // ldrsb r6, [r4, r0]
    // ldrsb r0, [r4, r0]
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #0x28]
    // ldrsb r3, [r4, r1]
    // ldr r1, [sp, #0x28]
    // str r1, [sp, #0x24]
    // add r7, r0, r1
    // ldrsb r1, [r4, r1]
    // mov ip, r1
    // str r1, [sp, #0x1c]
    // ldr r1, [sp, #0x1c]
    // str r3, [sp, #0x18]
    // add r2, r3, r1
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #0x14]
    // ldr r1, [sp, #0x24]
    // mov r5, ip
    // str r0, [sp, #0x20]
    // asr r1, r1, #0x18
    // mov r5, ip
    // str r5, [sp, #0x20]
    // mov r5, ip
    // sub r0, r5, r0
    // sub r0, r1, r0
    // asr r1, r0, #0x18
    // sub r0, r7, r6
    // sub r0, r1, r0
    // asr r1, r0, #0x18
    // ldr r0, [sp, #0x1c]
    // ldr r5, [sp, #0x14]
    // asr r0, r0, #0x18
    // ldr r5, [sp, #0x18]
    // sub r5, r6, r5
    // sub r0, r0, r5
    // asr r0, r0, #0x18
    // ldr r5, [sp, #0x28]
    // sub r2, r2, r5
    // sub r0, r0, r2
    // asr r0, r0, #0x18
    // str r2, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #0x20]
    FillBgTilemapRect(*((u32*)0x10), *((u8*)(r4 + 0xa)), 0, ((r5 << 0x18) >> 0x18));
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // blx r2
}




void sub_020198FC(void) {
    // add r1, r4, r1
    *((u8*)((r1 << 4) + 8)) = r2;
    *((u8*)((r1 << 4) + 9)) = r3;
    // add r2, sp
    *((u8*)((r1 << 4) + 0xb)) = *((u8*)(0xFFFFFFF8 + 0x10));
    // and r3, r2
    *((u16*)((r1 << 4) + 4)) = (*((u16*)((r1 << 4) + 4)) | (2 << 0xc));
    *((u16*)(r0 + 0xa)) = (((2 << 0xc) << 2) | *((u16*)(r0 + 0xa)));
}




void sub_02019934(void) {
    // and r0, r1
    *((u16*)(r0 + 0xa)) = 0xFFFF7FFF;
    // add r6, #0xa
    sub_02019978(r0, 0);
    // strh r0, [r6]
}




void sub_02019978(void) {
    // add r2, r2, r4
    sub_0201980C(0, ((*((u16*)(*((u32*)(r0 + 4)) + 4)) << 0x10) >> 0x1d));
    // add r3, r2, r4
    // ldrsb r0, [r1, r4]
    // ldrsb r2, [r3, r2]
    // add r0, r0, r2
    // strb r0, [r1, r4]
    // add r3, r2, r4
    // ldrsb r0, [r1, r4]
    // ldrsb r2, [r3, r2]
    // add r0, r0, r2
    // strb r0, [r1, r4]
    sub_020197F4(r5, r6, 9);
    // add r1, #0xb
    // strb r0, [r1, r4]
    // add r2, r0, r4
    // and r0, r1
    *((u16*)(r2 + 4)) = 0xFFFF1FFF;
}




BOOL sub_020199E4(void) {
    // add r0, r2, r0
}




void sub_020199F4(void) {
    // str r2, [sp]
    // add r1, r2, r0
    // mov ip, r0
    // add r1, sp, #0x10
    // mov lr, r0
    // add r0, r7, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r2, r0, r1
    // ldr r1, [sp]
    // mov r0, lr
    // mov r0, ip
    // add r3, r0, r3
    // and r4, r6
    // strh r4, [r3, r0]
    // ldr r0, [sp, #4]
}




void sub_02019A60(void) {
    // str r0, [sp]
    // str r0, [sp, #0xc]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r3, r1, r0
    // mov ip, r0
    // mov lr, r0
    // str r0, [sp, #8]
    // add r3, r0, r6
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r0, r1, r0
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // ldr r0, [sp, #0xc]
    // add r4, r5, r1
    // add r0, r3, r0
    // ldr r0, [sp, #8]
    // add r3, r7, r1
    // add r0, r0, r3
    // add r4, r3, r6
    // mov r3, lr
    // add r3, r5, r4
    // add r3, r1, r3
    // mov r3, ip
    // strh r0, [r3, r4]
    // str r0, [sp, #4]
    // ldr r0, [sp, #4]
    // add r0, r7, r0
}




u16 * sub_02019B08(void) {
    // ldr r0, [r2, r0]
}



void sub_02019B10(void) {
    // add r0, r2, r0
}




void sub_02019B1C(void) {
    // add r5, r5, r4
    // ldrsb r4, [r5, r4]
    // strb r4, [r2]
    // add r1, r2, r0
    // ldrsb r0, [r1, r0]
    // strb r0, [r3]
}




void sub_02019B44(void) {
    // add r4, r5, r4
    // strh r4, [r2]
    // add r0, r2, r0
    // strh r0, [r3]
}




void sub_02019B70(void) {
    // add r4, r4, r1
    *((u8*)(*((u32*)(r0 + 4)) + 0xc)) = r2;
    // add r2, r2, r1
    *((u8*)(*((u32*)(r0 + 4)) + 0xd)) = r3;
    // add r3, sp
    // ldrsb r4, [r3, r2]
    // add r2, r2, r1
    *((u8*)(*((u32*)(r0 + 4)) + 0xe)) = *((u32*)(r0 + 4));
    // ldrsb r2, [r3, r2]
    // add r0, r0, r1
    *((u8*)(*((u32*)(r0 + 4)) + 0xf)) = 0x14;
}




void sub_02019BA0(void) {
}



