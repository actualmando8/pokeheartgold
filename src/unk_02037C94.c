/* Decompiled from asm/unk_02037C94.s */
#include "global.h"

u8 sub_02037C94(void) {
}




void sub_02037C98(void) {
    GF_AssertFail(*((u32*)_021D4150));
    sub_02034D8C();
    Heap_Alloc(0xf, 0x68);
    // str r0, [r1]
    MI_CpuFill8(0, 0x68);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = 0x32;
    // add r1, #0x52
    // strb r2, [r1]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r5;
    Save_PlayerData_GetProfile(r5, *((u32*)_021D4150), 1);
    *((u32*)(*((u32*)_021D4150) + 0x2c)) = r0;
    // add r0, #0x4a
    // strb r2, [r0]
    // add r0, #0x4c
    // strb r2, [r0]
    // add r0, #0x57
    // strb r2, [r0]
    // add r0, #0x4e
    // strb r4, [r0]
    // add r0, #0xc
    sub_0203778C(*((u32*)_021D4150), _021D4150, 0);
    sub_0203410C(0, 0, 0);
    sub_0203A880();
}




void sub_02037D2C(void) {
    sub_02034154(*((u32*)_021D4150));
    Heap_Free(*((u32*)*((u32*)_021D4150)));
    sub_02039998();
    Heap_Destroy(0x30);
    sub_0203A914();
    sub_02034DE0();
    Heap_Free(*((u32*)_021D4150));
    Heap_Destroy(0xf);
    // str r1, [r0]
}




void sub_02037D78(void) {
    // ldr r0, _02037D88 ; =_021D4150
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02037D84
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02037D88: .word _021D4150
    // TODO: decompile
}




void sub_02037D8C(void) {
    sub_02037474();
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r6, r7);
    // add r1, #0x4f
    // strb r5, [r1]
    *((u32*)(*((u32*)_021D4150) + 0x30)) = r4;
    sub_020381C0(sub_02038218, 0);
}




void sub_02037DD4(void) {
    sub_02037474();
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r6, r7);
    // add r1, #0x4f
    // strb r5, [r1]
    *((u32*)(*((u32*)_021D4150) + 0x30)) = r4;
    sub_020381C0(sub_02038294, 0);
}




void sub_02037E1C(void) {
    // add r1, #0x4d
    // strb r0, [r1]
}




void sub_02037E38(void) {
    sub_02036274();
    sub_020381C0(sub_020383B0, 0);
}




void sub_02037E4C(void) {
    *((u32*)(*((u32*)_021D4150) + 0x40)) = (*((u32*)(*((u32*)_021D4150) + 0x40)) - 1);
    sub_020399EC((*((u32*)(*((u32*)_021D4150) + 0x40)) - 1), *((u32*)_021D4150));
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02034FE8((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_02036024(*((u32*)(*((u32*)_021D4150) + 0x44)));
    sub_020381C0(sub_02038408, 0);
}




void sub_02037E9C(void) {
}




void sub_02037EC0(void) {
}




void sub_02037EC8(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldr r0, [sp]
}




void sub_02037F18(void) {
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_020399EC();
    sub_02037C98(r4, 9);
    // add r1, #0x4e
    // strb r2, [r1]
    // add r0, #0x4f
    // strb r1, [r0]
    sub_020381C0(sub_020384B4, 0, 9);
}




void sub_02037F64(void) {
    // add r2, #0x4d
    // strb r0, [r2]
    // add r0, #0x48
    // strh r2, [r0]
    sub_02033AA4(1, _021D4150, 3);
    sub_0203A880();
    sub_020381C0(sub_02038668, 0);
}




void sub_02037F94(void) {
    // mvn r0, r0
    // neg r0, r0
}




void sub_02037FCC(void) {
    // ldr r0, _02037FE8 ; =_021D4150
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _02037FD8
    // mov r0, #0
    // bx lr
    // ldr r1, [r0, #0x24]
    // ldr r0, _02037FEC ; =sub_02038854
    // cmp r1, r0
    // bne _02037FE4
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02037FE8: .word _021D4150
    // _02037FEC: .word sub_02038854
    // TODO: decompile
}




void sub_02037FF0(void) {
    sub_02033AA4(0);
    // add r0, #0x53
    // add r0, #0x54
    // add r1, #0x4e
    sub_020398D4(0, 0);
    sub_0203A914();
    // add r1, #0x4e
    // strb r2, [r1]
    // add r1, #0x57
    // strb r2, [r1]
    // add r0, #0x4a
    sub_02033908(*((u8*)*((u32*)_021D4150)), *((u32*)_021D4150), 0);
    sub_0203769C();
    sub_02033ACC(1);
    sub_020381C0(sub_02038418, 0xf);
    sub_020381C0(sub_02038460, 5);
}




void sub_02038070(void) {
    // ldr r0, _0203808C ; =_021D4150
    // ldr r0, [r0]
    // cmp r0, #0
    // bne _0203807C
    // mov r0, #1
    // bx lr
    // ldr r1, [r0, #0x24]
    // ldr r0, _02038090 ; =sub_02038538
    // cmp r1, r0
    // beq _02038088
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _0203808C: .word _021D4150
    // _02038090: .word sub_02038538
    // TODO: decompile
}




void sub_02038094(void) {
}




void sub_020380B0(void) {
}




void sub_020380CC(void) {
    // add r1, #0x57
    // strb r0, [r1]
    sub_02033AA4(1, *((u32*)_021D4150));
    sub_020381C0(sub_020388A8, 0);
}




void sub_020380F4(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02038104(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02038114(void) {
    sub_02037474();
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r5, r4);
    sub_020381C0(sub_02038E00, 0);
}




void sub_02038148(void) {
    sub_02037474();
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r5, r4);
    sub_020381C0(sub_02038E48, 0);
}




void sub_0203817C(void) {
    // blx r0
    sub_02039998(*((u32*)(*((u32*)_021D4150) + 0x24)));
    ov00_021EC9D4();
    // sub r0, r1, r0
    sub_0203A930(3);
    sub_02035650();
    WM_GetLinkLevel();
    // sub r0, r1, r0
    sub_0203A930(3);
}




void sub_020381C0(void) {
    *((u32*)(*((u32*)_021D4150) + 0x24)) = r0;
    *((u32*)(*((u32*)_021D4150) + 0x44)) = r1;
}




void sub_020381D0(void) {
    sub_02039998();
    sub_02035664();
    sub_020374E4();
    sub_020350A8(1);
    sub_020381C0(sub_02038404, 0);
}




void sub_020381FC(void) {
    sub_02034FE8();
    sub_0203622C();
    sub_020381C0(sub_020381D0, 0);
}




void sub_02038218(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 1);
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), *((u32*)(*((u32*)_021D4150) + 0x30)));
    sub_02035ED8(1, 1, (1 << 9), 1);
    sub_02035FD8();
    sub_020381C0(sub_02038260, 0);
}




void sub_02038260(void) {
    sub_0203769C();
    sub_020373B4();
    sub_020381C0(sub_0203827C, 0);
}




void sub_0203827C(void) {
    sub_02037474();
    sub_020381C0(sub_02038408, 0);
}




void sub_02038294(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 1);
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), *((u32*)(*((u32*)_021D4150) + 0x30)));
    sub_02035F14(1, 1, (1 << 9));
    sub_02035FD8();
    sub_020381C0(sub_020382DC, 0);
}




void sub_020382DC(void) {
}




void sub_020382E4(void) {
    sub_0203528C();
    // add r0, #0x4d
    sub_020360E4(*((u8*)*((u32*)_021D4150)));
    sub_020381C0(sub_0203830C, 0xa);
}




void sub_0203830C(void) {
    sub_02037700();
    sub_020381C0(sub_02038344, 0);
    sub_0203769C();
    sub_020373B4();
    sub_0203769C();
    sub_020381C0(sub_02038398, 0);
}




void sub_02038344(void) {
    sub_02034FE8();
    sub_020381C0(sub_02038358, 2);
}




void sub_02038358(void) {
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02035664((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_02035F14(0, 1, (1 << 9));
    sub_02035FD8();
    sub_020381C0(sub_020382E4, 0xa);
}




void sub_02038398(void) {
    sub_02037474();
    sub_020381C0(sub_02038408, 0);
}




void sub_020383B0(void) {
    sub_02034FE8();
    sub_020381C0(sub_020383C4, 2);
}




void sub_020383C4(void) {
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02035664((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_02035F14(0, 1, (1 << 9));
    sub_02035FD8();
    sub_020381C0(sub_020382DC, 0xa);
}




void sub_02038404(void) {
    // bx lr
    // TODO: decompile
}




void sub_02038408(void) {
}




void sub_02038418(void) {
    sub_02037454();
    sub_02033ACC(0);
    sub_0203624C();
    sub_020381C0(sub_02038538, 0);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02033ACC(0, *((u32*)_021D4150));
    sub_0203624C();
    sub_020381C0(sub_02038538, 0);
}




void sub_02038460(void) {
    sub_02034FE8();
    sub_0203622C();
    sub_020381C0(sub_02038538, 0);
}




void sub_0203847C(void) {
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02034FE8((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_02036024(*((u32*)(*((u32*)_021D4150) + 0x44)));
    sub_020381C0(sub_02038408, 0);
}




void sub_020384B4(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 1);
    // add r0, #0x4a
    sub_02033908(*((u8*)*((u32*)_021D4150)));
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), 0);
    sub_02035F14(1, 1, (1 << 9));
    sub_02035FD8();
    sub_020381C0(sub_02038508, 0x40);
}




void sub_02038508(void) {
    sub_0203528C();
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02034FE8((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_020381C0(sub_02038550, 0);
}




void sub_02038538(void) {
    sub_02034FE8();
    sub_020381C0(sub_02038550, 0);
}




void sub_02038550(void) {
    sub_02035664();
    // add r1, #0x52
    sub_02035ED8(0, *((u8*)*((u32*)_021D4150)), (2 << 8), 1);
    // add r5, #0xc
    _ll_mul(*((u32*)(*((u32*)_021D4150) + 8)), *((u32*)(*((u32*)_021D4150) + 0xc)), *((u32*)(*((u32*)_021D4150) + 0xc)), *((u32*)(*((u32*)_021D4150) + 4)));
    // add r0, r2, r0
    // adc r3, r1
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 0x14));
    sub_02035FD8(*((u32*)(r5 + 0x10)), *((u32*)(r5 + 0x14)));
    // add r0, #0x52
    // strb r1, [r0]
    sub_020381C0(sub_020385B8, 0x00002710);
}




void sub_020385B8(void) {
    sub_020358B0();
    sub_020376F8();
    // add r0, #0x52
    // strb r1, [r0]
    sub_0203A880(*((u32*)_021D4150), 1);
    sub_020381C0(sub_02038854, 0);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02034FE8((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    sub_020381C0(sub_02038610, 0);
}




void sub_02038610(void) {
    sub_02035664();
    sub_02035F14(0, 0, (2 << 8));
    sub_02035FD8();
    // add r5, #0xc
    _ll_mul(*((u32*)(*((u32*)_021D4150) + 8)), *((u32*)(*((u32*)_021D4150) + 0xc)), *((u32*)(*((u32*)_021D4150) + 0xc)), *((u32*)(*((u32*)_021D4150) + 4)));
    // add r0, r2, r0
    // adc r3, r1
    *((u32*)(r4 + 0xc)) = r0;
    *((u32*)(r5 + 4)) = *((u32*)(r5 + 0x14));
    sub_020381C0(sub_02038508, ((0 << 5) | (*((u32*)(r5 + 0x14)) >> 0x1b)), (*((u32*)(r5 + 0x14)) >> 0x1b), *((u32*)(r5 + 0x14)));
}




void sub_02038668(void) {
    sub_02034FE8();
    sub_020381C0(sub_02038680, 0);
}




void sub_02038680(void) {
    sub_02035664();
    sub_02035F14(0, 0, (2 << 8));
    sub_02035FD8();
    sub_020381C0(sub_020386AC, 0x64);
}




void sub_020386AC(void) {
    // add r0, #0x4d
    sub_020351AC(*((u8*)*((u32*)_021D4150)));
    // add r0, #0x4d
    sub_020360E4(*((u8*)*((u32*)_021D4150)));
    sub_020381C0(sub_02038710, 0x64);
    sub_02037700();
    sub_020381C0(sub_02038804, 0);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_020381C0(sub_02038804, 0);
}




void sub_02038710(void) {
    sub_02037700();
    sub_020381C0(sub_02038804, 0);
    sub_0203769C();
    sub_020373B4();
    // add r0, #0x4c
    // strb r1, [r0]
    sub_020381C0(sub_0203876C, 0x78);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_020381C0(sub_02038804, 0);
}




void sub_0203876C(void) {
    sub_02037700();
    sub_020381C0(sub_02038804, 0);
    // add r0, #0x4c
    sub_020381C0(sub_02038800, 0);
    sub_02034434();
    sub_020381C0(sub_020387E8, 0);
    sub_020376E0(6, _0210F90C);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_020381C0(sub_02038804, 0);
}




void sub_020387E8(void) {
    sub_02037700();
    sub_020381C0(sub_02038804, 0);
}




void sub_02038800(void) {
    // bx lr
    // TODO: decompile
}




void sub_02038804(void) {
    // add r0, #0x4c
    // strb r1, [r0]
    sub_02034FE8(*((u32*)_021D4150), 0);
    // add r0, #0x48
    // add r0, #0x48
    // add r1, #0x48
    // strh r0, [r1]
    sub_020381C0(sub_02038680, 0);
    sub_020381C0(sub_02038800, 0);
}




void sub_02038854(void) {
    sub_020376F8();
    sub_02039918();
    sub_02034FE8();
    sub_020381C0(sub_02038610, 0);
    sub_0203769C();
    sub_02034638();
    sub_02037700();
    sub_02039918();
    sub_020381C0(sub_02038804, 0);
}




void sub_020388A8(void) {
    sub_02035664();
    // add r1, #0x52
    sub_02035ED8(0, *((u8*)*((u32*)_021D4150)), (2 << 8), 0);
    sub_02035FD8();
    sub_020381C0(sub_02038404, 0);
}




void sub_020388E0(void) {
    // add r0, #0x4e
    // strb r1, [r0]
    sub_0203769C(*((u32*)_021D4150), 0xd);
    // add r0, sp, #0
    *((u8*)(r0 + 1)) = 0;
    // add r1, sp, #0
    // add r1, #1
    sub_020376E0(0xa, 0);
    // strb r1, [r0]
    // add r1, sp, #0
    sub_020376E0(0xa, 0);
}




void sub_02038918(void) {
    // add r2, #0x4d
    // strb r0, [r2]
    // add r0, #0x48
    // strh r2, [r0]
}




void sub_0203893C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_0203894C(void) {
    // add r2, #0x4d
    // strb r0, [r2]
    // add r0, #0x4e
    // strb r2, [r0]
    // add r0, #0x48
    // strh r2, [r0]
    sub_0203A880(*((u32*)_021D4150), _021D4150, 3);
    sub_020381C0(sub_02038668, 0);
}




void sub_0203897C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_0203898C(void) {
    // add r2, #0x4d
    // strb r0, [r2]
    // add r0, #0x4e
    // strb r2, [r0]
    // add r0, #0x48
    // strh r2, [r0]
    sub_0203A880(*((u32*)_021D4150), _021D4150, 3);
    sub_020381C0(sub_02038668, 0);
}




void sub_020389BC(void) {
    sub_02034FE8();
    sub_020381C0(sub_020389D4, 0);
}




void sub_020389D4(void) {
    sub_02035664();
    // add r0, #0x4e
    // strb r1, [r0]
    sub_02035F14(0, 0, (2 << 8));
    sub_02035FE4();
    sub_020381C0(sub_02038A10, 0x64);
}




void sub_02038A10(void) {
    // add r0, #0x4d
    sub_020351AC(*((u8*)*((u32*)_021D4150)));
    // add r0, #0x4d
    sub_020360E4(*((u8*)*((u32*)_021D4150)));
    sub_020381C0(sub_02038A94, 0x64);
    sub_02037700();
    // add r0, #0x48
    // add r2, #0x48
    // strh r0, [r2]
    // add r0, #0x48
    sub_020381C0(sub_02038800, 0, *((u32*)_021D4150));
    sub_020381C0(sub_020389BC, 0);
    *((u32*)(r1 + 0x44)) = (r0 - 1);
}




void sub_02038A94(void) {
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_02037700((*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    // add r0, #0x48
    // add r2, #0x48
    // strh r0, [r2]
    // add r0, #0x48
    sub_020381C0(sub_02038800, 0, *((u32*)_021D4150));
    sub_020381C0(sub_020389BC, 0);
    sub_0203769C();
    sub_020373B4();
    sub_020381C0(sub_020387E8, 0);
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    // add r0, #0x48
    // add r2, #0x48
    // strh r0, [r2]
    // add r0, #0x48
    sub_020381C0(sub_02038800, 0, *((u32*)_021D4150));
    sub_020381C0(sub_020389BC, 0);
}




void sub_02038B3C(void) {
    sub_0203769C();
    // add r0, #0x57
    // strb r5, [r1]
    sub_02037184(7, _0210F904, (0 + 1), 0);
    // strb r5, [r1]
    sub_02037184(7, _0210F914);
}




void sub_02038B9C(void) {
    sub_0203769C(*((u8*)(r2 + 1)), *((u8*)_0210F904), (1 + 1));
    // add r0, #0x4c
    // strb r1, [r0]
    sub_0203769C(*((u8*)(r2 + 1)), *((u8*)_0210F914), (_0210F914 + 1));
    // add r0, #0x4c
    // strb r1, [r0]
}




u8 sub_02038C18(void) {
}




void sub_02038C1C(void) {
}




void sub_02038C34(void) {
}




void sub_02038C3C(void) {
    // add r1, #0x92
    // add r0, #0x58
    // add r2, #0x58
    // strb r0, [r2]
    // add r0, #0x58
    // add r2, #0x58
    // strb r0, [r2]
    // add r0, #0x58
    // add r2, #0x58
    // strb r0, [r2]
    // add r0, #0x58
    // add r2, #0x58
    // strb r0, [r2]
}




void sub_02038CC4(void) {
    sub_02035F14(1, 1, 0x20);
    sub_02035FD8();
    sub_020381C0(sub_02038C34, 0);
}




void sub_02038CE8(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 0);
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), 0);
    sub_02033A7C(sub_02038C3C);
    sub_020381C0(sub_02038CC4, 0);
}




void sub_02038D28(void) {
    sub_02037474();
    Heap_CreateAtEnd(3, 0xf, (7 << 0xc));
    sub_02037C98(r4, 0x11);
    // add r0, #0x4f
    // strb r1, [r0]
    sub_020381C0(sub_02038CE8, 0);
}




void sub_02038D64(void) {
}




void sub_02038D80(void) {
    // add r0, #0x58
}




BOOL sub_02038D90(void) {
    sub_02037988();
    // add r0, #0x4e
    ov00_021E6CB8(*((u8*)1));
    sub_02039998(1);
    // add r0, #0x4e
    sub_020381C0(sub_02039D78, 0);
    sub_020381C0(sub_020392F4, 0);
    sub_020381C0(sub_020381FC, 0);
}




void sub_02038E00(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 1);
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), 0);
    sub_02035ED8(1, 1, (1 << 9), 1);
    sub_02035FD8();
    sub_020381C0(sub_02038260, 0);
}




void sub_02038E48(void) {
    sub_02034DB8();
    sub_02034B0C(*((u32*)(*((u32*)_021D4150) + 0x2c)), 1);
    sub_02034354(*((u32*)(*((u32*)_021D4150) + 0x28)), 0);
    sub_02035F14(1, 1, (1 << 9));
    sub_02035FD8();
    sub_020381C0(sub_020382DC, 0);
}




void sub_02038E90(void) {
    // bx lr
    // TODO: decompile
}




void sub_02038E94(void) {
    ov00_021E5E54(0);
    sub_020381C0(sub_02038E90, 0);
}




void sub_02038EB0(void) {
    // bx lr
    // TODO: decompile
}




void sub_02038EB4(void) {
    // bx lr
    // TODO: decompile
}




void sub_02038EB8(void) {
    sub_0203786C(1);
    ov00_021E5E54(0);
    sub_020381C0(sub_02038EB4, 0);
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038E94, 0);
    // add r0, #0x53
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038EB0, 0);
    // add r0, #0x53
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038EB0, 0);
    // add r0, #0x53
    sub_02037454(*((u8*)*((u32*)_021D4150)));
    // add r1, #0x4b
    sub_020381C0(sub_02038E90, 0);
}




void sub_02038F74(void) {
    // sub r3, #0x19
    // neg r0, r0
    *((u32*)(*((u32*)_021D4150) + 0x34)) = r0;
    *((u32*)(*((u32*)_021D4150) + 0x38)) = r1;
    *((u32*)(*((u32*)_021D4150) + 0x3c)) = r2;
}




void sub_02038F9C(void) {
    ov00_021E5E54(0);
    sub_020381C0(sub_02038EB4, 0);
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038EB8, 0);
    sub_020381C0(sub_02038EB0, 0);
    sub_020381C0(sub_02038EB4, 0);
    sub_020381C0(sub_02038EB0, 0);
}




void sub_0203900C(void) {
    ov00_021E5E54(1);
    sub_020381C0(sub_02038E90, 0);
    // add r0, #0x4e
    sub_02033FC4(*((u8*)*((u32*)_021D4150)));
    // ldrsb r0, [r1, r0]
    ov00_021E6D7C(0x51, (r0 + 1), 0);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02039052: ; jump table
    sub_0203622C((*((u16*)((r0 + 3) + 6)) << 0x10));
    sub_020381C0(sub_02038F9C, 0);
    sub_020381C0(sub_02038E90, 0);
}




s32 sub_02039080(void) {
    ov00_021E5C84(sub_02036904, sub_020367A8);
    // add r0, #0x51
    // strb r4, [r0]
    sub_020381C0(sub_0203900C, 0);
}




void sub_020390C4(void) {
    // ldr r0, _02039120 ; =_021D4150
    // ldr r1, _02039124 ; =sub_02038F9C
    // ldr r0, [r0]
    // ldr r0, [r0, #0x24]
    // cmp r0, r1
    // bne _020390D4
    // mov r0, #0
    // bx lr
    // ldr r1, _02039128 ; =sub_02038EB8
    // cmp r0, r1
    // bne _020390DE
    // mov r0, #1
    // bx lr
    // ldr r1, _0203912C ; =sub_02038E94
    // cmp r0, r1
    // bne _020390E8
    // mov r0, #3
    // bx lr
    // ldr r1, _02039130 ; =sub_02038EB0
    // cmp r0, r1
    // bne _020390F2
    // mov r0, #4
    // bx lr
    // ldr r1, _02039134 ; =sub_02038EB4
    // cmp r0, r1
    // bne _020390FC
    // mov r0, #5
    // bx lr
    // ldr r1, _02039138 ; =sub_02039DE4
    // cmp r0, r1
    // bne _02039106
    // mov r0, #0
    // bx lr
    // ldr r1, _0203913C ; =sub_02039DC4
    // cmp r0, r1
    // bne _02039110
    // mov r0, #1
    // bx lr
    // ldr r1, _02039140 ; =sub_02039E7C
    // cmp r0, r1
    // bne _0203911A
    // mov r0, #3
    // bx lr
    // mov r0, #2
    // bx lr
    // nop
    // _02039120: .word _021D4150
    // _02039124: .word sub_02038F9C
    // _02039128: .word sub_02038EB8
    // _0203912C: .word sub_02038E94
    // _02039130: .word sub_02038EB0
    // _02039134: .word sub_02038EB4
    // _02039138: .word sub_02039DE4
    // _0203913C: .word sub_02039DC4
    // _02039140: .word sub_02039E7C
    // TODO: decompile
}




void sub_02039144(void) {
    ov00_021E5C84(sub_02036904, sub_020367A8);
    // mvn r0, r0
    ov00_021E6D7C(0, 4, 1);
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _0203916C: ; jump table
    // add r0, #0x5c
    // strb r1, [r0]
    sub_0203622C(*((u32*)_021D4150), 0);
    sub_020381C0(sub_02038F9C, 0);
    sub_020381C0(sub_02038E90, 0);
    ov00_021E6690();
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038E90, 0);
}




void sub_020391D0(void) {
    sub_0203786C(0);
    // add r0, #0x50
    ov00_021E6BE4(*((u8*)*((u32*)_021D4150)));
    ov00_021E6C68();
    sub_020343E4();
    sub_020381C0(sub_02039144, 0);
    ov00_021E5E54(0);
    sub_020381C0(sub_02038E90, 0);
}




void sub_02039220(void) {
    sub_0203769C();
    // add r0, #0x50
    // strb r1, [r0]
    sub_020381C0(sub_020391D0, 0);
    // add r0, #0x50
    // strb r1, [r0]
    sub_020381C0(sub_020391D0, 0);
    // add r0, #0x5c
    // strb r1, [r0]
}




s32 sub_02039264(void) {
    // add r0, #0x5c
}




void sub_02039274(void) {
    // ldr r0, _02039294 ; =_021D4150
    // ldr r0, [r0]
    // ldr r1, [r0, #0x24]
    // ldr r0, _02039298 ; =sub_02039144
    // cmp r1, r0
    // bne _02039284
    // mov r0, #1
    // bx lr
    // ldr r0, _0203929C ; =sub_02039C60
    // cmp r1, r0
    // bne _0203928E
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // nop
    // _02039294: .word _021D4150
    // _02039298: .word sub_02039144
    // _0203929C: .word sub_02039C60
    // TODO: decompile
}




void sub_020392A0(void) {
    // ldr r0, _020392C8 ; =_021D4150
    // ldr r0, [r0]
    // ldr r1, [r0, #0x24]
    // ldr r0, _020392CC ; =sub_02038F9C
    // cmp r1, r0
    // bne _020392B0
    // mov r0, #1
    // bx lr
    // ldr r0, _020392D0 ; =sub_02039144
    // cmp r1, r0
    // bne _020392BA
    // mov r0, #1
    // bx lr
    // ldr r0, _020392D4 ; =sub_02039C60
    // cmp r1, r0
    // bne _020392C4
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _020392C8: .word _021D4150
    // _020392CC: .word sub_02038F9C
    // _020392D0: .word sub_02039144
    // _020392D4: .word sub_02039C60
    // TODO: decompile
}




void sub_020392D8(void) {
}




void sub_020392F4(void) {
    sub_0203786C(0);
    ov00_021E6BE4(0);
    ov00_021E6C68();
    sub_020381C0(sub_0203847C, 0);
    ov00_021E5E54(0);
    sub_020381C0(sub_02038E90, 0);
}




void sub_02039330(void) {
    sub_0201A738(1);
    sub_020343E4();
    sub_020381C0(sub_0203847C, 5);
}




void sub_02039358(void) {
}




void sub_02039378(void) {
    sub_020398D4(0, 1);
    sub_0203769C();
    // add r0, #0x50
    // strb r1, [r0]
    sub_020381C0(sub_020391D0, 0);
}




void sub_020393B4(void) {
}




BOOL sub_020393C8(void) {
    // add r0, #0x53
    // add r2, #0x53
}




void sub_02039418(void) {
    // add r2, #0xf1
    Heap_CreateAtEnd(3, 0xf, 0xf);
    Heap_Alloc(0xf, 0x68);
    // str r0, [r1]
    MI_CpuFill8(0, 0x68);
    // add r1, #0x4e
    // strb r2, [r1]
    // add r2, #0x55
    // strb r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r4;
    sub_020398D4(0, 1, *((u32*)_021D4150));
    sub_0201A728(1);
}




void sub_0203946C(void) {
    sub_0201A738(1);
    sub_020398D4(0, 0);
    Heap_Free(*((u32*)_021D4150));
    // str r1, [r0]
    Heap_Destroy(0xf, 0);
}




void sub_020394A0(void) {
    // add r2, #0xf1
    Heap_CreateAtEnd(3, 0xf, 0xf);
    Heap_Alloc(0xf, 0x68);
    // str r0, [r1]
    MI_CpuFill8(0, 0x68);
    // add r1, #0x4e
    // strb r2, [r1]
    // add r2, #0x55
    // strb r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r4;
    sub_020398D4(0, 1, *((u32*)_021D4150));
    sub_0201A728(1);
}




void sub_020394F4(void) {
    sub_0201A738(1);
    sub_020398D4(0, 0);
    Heap_Free(*((u32*)_021D4150));
    // str r1, [r0]
    Heap_Destroy(0xf, 0);
}




void sub_02039528(void) {
    // add r2, #0xf1
    Heap_CreateAtEnd(3, 0xf, 0xf);
    Heap_Alloc(0xf, 0x68);
    // str r0, [r1]
    MI_CpuFill8(0, 0x68);
    // add r1, #0x4e
    // strb r2, [r1]
    // add r2, #0x55
    // strb r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r4;
    sub_020398D4(0, 1, *((u32*)_021D4150));
    sub_0201A728(1);
}




void sub_0203957C(void) {
    sub_0201A738(1);
    sub_020398D4(0, 0);
    Heap_Free(*((u32*)_021D4150));
    // str r1, [r0]
    Heap_Destroy(0xf, 0);
}




void sub_020395B0(void) {
    // add r0, #0x4e
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C(*((u8*)0));
    ov00_021EC210();
    // add r0, sp, #4
    // add r1, sp, #0
    ov00_021EC11C(1);
    // ldr r0, [sp]
}




void sub_0203960C(void) {
    ov00_021E5B6C();
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    // add r0, #0x4e
    ov45_0222E804(*((u32*)(*((u32*)_021D4150) + 0x60)), *((u32*)_021D4150), (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1), *((u32*)_021D4150));
    // add r0, #0x64
    // strb r2, [r0]
    sub_020381C0(sub_02039C14, *((u32*)(*((u32*)_021D4150) + 0x44)), 1);
    sub_020381C0(sub_02039DC0, 0);
    sub_020381C0(sub_02039144, 0);
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038E90, 0);
}




void sub_02039694(void) {
    sub_02034DB8();
    Heap_CreateAtEnd(3, 0x30, (0xd5 << 0xa));
    sub_02035ED8(1, 1, (1 << 9), 1);
    // add r0, #0x4e
    sub_02033FC4(*((u8*)*((u32*)_021D4150)));
    ov00_021E5900(*((u32*)(*((u32*)_021D4150) + 0x28)), 0x30, (0xb1 << 0xa), (r0 + 1));
    ov00_021E6CA4(sub_020399DC);
    sub_02035FD8();
    sub_020381C0(sub_0203960C, (0xe1 << 4));
}




void sub_020396FC(void) {
    Save_PlayerData_GetProfile();
    sub_02037474();
    sub_0201A728(1);
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r5, 0x17);
    Heap_Alloc(0xf, r4);
    // str r0, [r2]
    MI_CpuFill8(*((u32*)*((u32*)_021D4150)), 0, r4);
    // add r2, #0x4f
    // strb r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r5;
    sub_020381C0(sub_02039694, 0, *((u32*)_021D4150));
}




void sub_0203976C(void) {
    Save_PlayerData_GetProfile();
    sub_02037474();
    sub_0201A728(1);
    Heap_CreateAtEnd(3, 0xf, 0x00007080);
    sub_02037C98(r5, 0x21);
    // str r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x60)) = r4;
    // add r2, #0x64
    // strb r1, [r2]
    // add r2, #0x4f
    // strb r1, [r2]
    *((u32*)(*((u32*)_021D4150) + 0x28)) = r5;
    sub_020381C0(sub_02039BA0, 0, *((u32*)_021D4150));
}




void sub_020397C8(void) {
}




void sub_020397E4(void) {
    // add r0, #0x64
}




void sub_020397FC(void) {
    // ldr r0, _02039814 ; =_021D4150
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _02039810
    // ldr r1, [r0, #0x24]
    // ldr r0, _02039818 ; =sub_02039DC0
    // cmp r1, r0
    // bne _02039810
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // _02039814: .word _021D4150
    // _02039818: .word sub_02039DC0
    // TODO: decompile
}




void sub_0203981C(void) {
    GF_AssertFail(*((u32*)_021D4150));
    sub_020392A0();
    GF_AssertFail();
    ov45_0222F274(r4);
    ov45_0222F028(r4, 4);
    sub_020381C0(sub_02039DE4, 0);
    ov45_0222F350(r4);
    sub_020381C0(sub_02039DE4, 0);
}




void sub_0203986C(void) {
    ov45_0222F464();
    ov45_0222F154();
    ov45_0222F70C();
    sub_020381C0(sub_02039E30, 0);
}




void sub_0203988C(void) {
    // ldr r0, _020398B8 ; =_021D4150
    // ldr r0, [r0]
    // cmp r0, #0
    // beq _020398B4
    // ldr r1, [r0, #0x24]
    // ldr r0, _020398BC ; =sub_02039DC4
    // cmp r1, r0
    // bne _020398A0
    // mov r0, #2
    // bx lr
    // ldr r0, _020398C0 ; =sub_02039DE4
    // cmp r1, r0
    // bne _020398AA
    // mov r0, #1
    // bx lr
    // ldr r0, _020398C4 ; =sub_02039E30
    // cmp r1, r0
    // bne _020398B4
    // mov r0, #3
    // bx lr
    // mov r0, #0
    // bx lr
    // _020398B8: .word _021D4150
    // _020398BC: .word sub_02039DC4
    // _020398C0: .word sub_02039DE4
    // _020398C4: .word sub_02039E30
    // TODO: decompile
}




void sub_020398C8(void) {
    // ldr r0, _020398D0 ; =_021D4150
    // ldr r0, [r0]
    // ldr r0, [r0]
    // bx lr
    // _020398D0: .word _021D4150
    // TODO: decompile
}




void sub_020398D4(void) {
    // add r2, #0x53
    // strb r4, [r2]
    // add r2, #0x54
    // strb r1, [r2]
    sub_02037454(_021D4150, *((u32*)_021D4150));
    // add r1, #0x4b
    // strb r0, [r1]
    // add r0, #0x4b
    // strb r1, [r0]
    sub_020356C0(r4, 0);
    sub_020356EC(r4);
}




void sub_02039918(void) {
    // add r0, #0x5d
    // add r1, #0x54
}




int sub_0203993C(void) {
    // add r0, #0x4e
}




void sub_02039954(void) {
    // add r0, #0x4f
}




void sub_0203996C(void) {
    // ldr r1, _02039978 ; =_021D4150
    // ldr r3, _0203997C ; =MI_CpuCopy8
    // ldr r1, [r1]
    // mov r2, #6
    // add r1, r1, #4
    // bx r3
    // _02039978: .word _021D4150
    // _0203997C: .word MI_CpuCopy8
    // TODO: decompile
}




void sub_02039980(void) {
    // add r1, r0, #0
    // ldr r0, _02039990 ; =_021D4150
    // ldr r3, _02039994 ; =MI_CpuCopy8
    // ldr r0, [r0]
    // mov r2, #6
    // add r0, r0, #4
    // bx r3
    // nop
    // _02039990: .word _021D4150
    // _02039994: .word MI_CpuCopy8
    // TODO: decompile
}




void sub_02039998(void) {
}




void sub_020399A4(void) {
    // add r1, #0x56
    // strb r0, [r1]
}




void sub_020399B8(void) {
}




void sub_020399DC(void) {
}




void sub_020399EC(void) {
}




void sub_020399FC(void) {
    // bx lr
    // TODO: decompile
}




void sub_02039A00(void) {
    sub_02039918();
    sub_02037700();
    sub_020393C8();
    sub_020395B0();
    // add r0, #0x5d
    sub_020397FC(*((u8*)*((u32*)_021D4150)));
    sub_0201A79C();
    sub_020399B8();
    Sound_Stop();
    Save_Cancel(*((u32*)(*((u32*)_021D4150) + 0x28)));
    *((u8*)(gSystem + 8)) = 1;
    // add r1, #0x5d
    sub_020399A4(3, *((u8*)*((u32*)_021D4150)), *((u32*)_021D4150));
    sub_020399A4(5);
    // add r2, #0x4e
    sub_020399A4(2, *((u8*)r2));
    sub_020399A4();
}




BOOL sub_02039AA4(void) {
}




void sub_02039AD8(void) {
}




void sub_02039AF8(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039B18(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039B38(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039B58(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039B7C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039BA0(void) {
    sub_02034DB8();
    Heap_CreateAtEnd(3, 0x30, (0x30 << 0xd));
    sub_02035ED8(1, 1, (1 << 9), 1);
    // add r0, #0x4e
    sub_02033FC4(*((u8*)*((u32*)_021D4150)));
    ov00_021E5900(*((u32*)(*((u32*)_021D4150) + 0x28)), 0x30, (0x16 << 0xe), (r0 + 1));
    ov00_021E6CA4(sub_020399DC);
    sub_02035FD8();
    ov00_021E70B8(0);
    sub_020378E4(0);
    sub_020381C0(sub_0203960C, (0xe1 << 4));
}




void sub_02039C14(void) {
    *((u32*)(*((u32*)_021D4150) + 0x44)) = (*((u32*)(*((u32*)_021D4150) + 0x44)) - 1);
    sub_020381C0(sub_02038E90, 0, *((u32*)_021D4150));
    sub_0203786C(1);
    sub_02039D3C();
    ov45_0222E8F4();
    sub_020381C0(sub_02039C60, 0);
}




void sub_02039C60(void) {
}




void sub_02039C6C(void) {
    sub_020381C0(sub_02038EB4, 0);
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02039E7C, 0);
    // add r0, #0x53
    sub_020381C0(sub_02038E90, 0);
    sub_020381C0(sub_02038EB0, r4);
    // add r0, #0x53
    sub_02037454(*((u8*)*((u32*)_021D4150)));
    // add r1, #0x4b
    sub_020381C0(sub_02038E90, 0);
}




void sub_02039D08(void) {
    ov45_0222E6C8();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02039D20: ; jump table
    sub_020381C0(sub_02039DC0, 0);
}




void sub_02039D3C(void) {
}




void sub_02039D54(void) {
    // str r0, [r4]
    // str r1, [r4]
}




void sub_02039D78(void) {
    ov45_0222E91C();
    sub_020381C0(sub_02039D8C, 0);
}




void sub_02039D8C(void) {
    ov00_021E5E54(0);
    sub_02039D08();
    ov45_0222E944();
    sub_0201A738(1);
    sub_020343E4();
    sub_020381C0(sub_0203847C, 5);
    sub_0203786C(0);
}




void sub_02039DC0(void) {
    // bx lr
    // TODO: decompile
}




void sub_02039DC4(void) {
    sub_02039D3C();
    ov45_0222F254();
    ov45_0222F70C();
    sub_020381C0(sub_02039E30, 0);
}




void sub_02039DE4(void) {
    ov45_0222F254();
    ov45_0222F70C();
    sub_020381C0(sub_02039E30, 0);
    // add r0, sp, #0
    sub_02039D54();
    // ldr r0, [sp]
    sub_020381C0(sub_02039DC4, 0);
    ov45_0222F70C();
    sub_020381C0(sub_02039C60, 0);
}




void sub_02039E30(void) {
    ov00_021E5E54(1);
    sub_020381C0(sub_02038E90, 0);
    sub_02039D08();
    ov00_021E6BE4(0);
    ov00_021E6C68();
    sub_0203622C();
    sub_020378E4(0);
    sub_020381C0(sub_02039C60, 0);
}




void sub_02039E7C(void) {
    ov00_021E5E54(0);
    sub_020381C0(sub_02038E90, 0);
    sub_02039D08();
}




void sub_02039E9C(void) {
    // add r0, #0x4e
    // strb r1, [r0]
}




void sub_02039EAC(void) {
}




void sub_02039EB4(void) {
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _02039ECE: ; jump table
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
    // str r0, [r4]
}




void sub_02039F68(void) {
    // str r0, [sp]
    // ldr r0, [sp]
}




void sub_02039FB8(void) {
}




void sub_02039FD8(void) {
    // add r0, #0x1f
}




void sub_02039FFC(void) {
}




void sub_0203A01C(void) {
    sub_0202C08C();
    DWC_CheckUserData();
    DWC_CreateUserData(r4, 0x4144414A);
    DWC_ClearDirtyFlag(r4);
}




void sub_0203A040(void) {
}




BOOL sub_0203A05C(void) {
}




void sub_0203A084(void) {
    // str r2, [sp]
    // ldr r0, [sp]
    // mvn r1, r1
    // str r1, [r0]
    // ldr r0, [sp]
    // str r7, [r0]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // str r7, [r0]
    // ldr r0, [sp]
    // ldr r0, [sp]
    // str r7, [r0]
    // add r4, #0xc
}




void sub_0203A128(void) {
    // str r1, [sp]
    // str r2, [sp, #4]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // ldr r1, [sp]
    // ldr r2, [sp, #4]
    // add r0, sp, #0xc
    // add r1, sp, #0xc
    // mvn r0, r0
    // str r0, [r6]
    // add r1, sp, #0xc
    // str r0, [sp, #8]
    // ldr r1, [sp, #8]
    // str r4, [r6]
    // str r4, [r6]
    // add r5, #0xc
}




void sub_0203A1C4(void) {
    // str r2, [sp, #4]
    // str r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r2, sp, #0x10
    // str r0, [r6]
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #4]
    // str r0, [sp]
    // ldr r2, [sp, #0x10]
    // ldr r3, [sp, #4]
    // ldr r2, [sp, #0x10]
    // ldr r1, [sp, #8]
    // add r1, r1, r3
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
}




void sub_0203A280(void) {
    // str r0, [sp]
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #8]
    // ldr r0, [sp, #0x28]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0xc]
    // ldr r2, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #4]
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r2, [sp, #0x10]
    // ldr r0, [sp, #0x10]
    // ldr r0, [sp]
}




void sub_0203A378(void) {
}



