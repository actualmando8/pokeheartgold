/* Decompiled from asm/overlay_01_021EABA8.s */
#include "global.h"

void ov01_021EABA8(void) {
    // str r0, [sp, #0xc]
    // add r4, r1, r0
    GF_AssertFail((0x24 * r2), ov01_02206478);
    Camera_New(4);
    *((u32*)(r5 + 0x24)) = r0;
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    Camera_Init_FromTargetDistanceAndAngle(*((u32*)(r5 + 0x24)), *((u32*)r4), (r4 + 4), *((u16*)(r4 + 0xe)));
    Camera_SetStaticPtr(*((u32*)(r5 + 0x24)));
    Camera_SetPerspectiveClippingPlane(*((u32*)(r4 + 0x10)), *((u32*)(r4 + 0x14)), *((u32*)(r5 + 0x24)));
    // add r4, #0x18
    Camera_OffsetLookAtPosAndTarget(r4, *((u32*)(r5 + 0x24)));
    // str r0, [sp]
    Camera_History_New(7, 6, 2, 4);
    ov01_021EAC4C(4);
    *((u32*)(r5 + 0x28)) = r0;
    ov01_021EAC6C(r5, r6);
}




void ov01_021EAC30(void) {
}




void ov01_021EAC4C(void) {
}




void ov01_021EAC64(void) {
}




void ov01_021EAC6C(void) {
    // str r0, [r4]
    *((u32*)(*((u32*)(r0 + 0x28)) + 0x30)) = r1;
    // add r0, sp, #0
    // strh r1, [r0]
    *((u16*)((*((u32*)ov01_02209B60) << 0x18) + 2)) = 0;
    *((u16*)((*((u32*)ov01_02209B60) << 0x18) + 4)) = 0;
    *((u16*)((*((u32*)ov01_02209B60) << 0x18) + 6)) = 0;
    // add r5, r1, r3
    // add r1, sp, #0
    // strh r3, [r1]
    *((u8*)(*((u32*)(r0 + 0x28)) + 7)) = ((*((u32*)ov01_02209B60) << 0x18) >> 0x18);
    Camera_SetAnglePos((*((u32*)ov01_02209B60) << 0x18), *((u32*)*((u32*)(r0 + 0x28))), ((*((u32*)ov01_02209B60) << 0x18) >> 0x18), *((u16*)(ov01_02206464 + (0x14 * (((*((u32*)ov01_02209B60) << 0x18) >> 0x18) - 1)))));
    Camera_OffsetLookAtPosAndTarget((r5 + 4), *((u32*)r4));
}




void ov01_021EACBC(void) {
    // sub r1, r1, r2
    // ror r1, r0
    // add r0, r2, r1
    *((u16*)(r0 + 0x2e)) = 0x1f;
    GF_AssertFail(0x1f, ((*((u16*)(r0 + 0x2e)) + 1) << 0x1f), ((*((u16*)(r0 + 0x2e)) + 1) >> 0x1f));
    *((u8*)(r5 + 7)) = r1;
    *((u32*)(r5 + 0x28)) = 1;
    // add r0, r3, r0
    *((u16*)(r5 + 0x2c)) = *((u16*)((0x24 * *((u32*)(r5 + 0x30))) + 4));
    // add r2, #8
    // add r3, r0, r4
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r1, [r0]
    // add r6, #0xc
    *((u16*)(r5 + 0x2c)) = *((u16*)(ov01_02206464 + ((*((u8*)(r5 + 7)) - 1) * 0x14)));
    *((u16*)(r5 + 8)) = *((u16*)(ov01_02209B60 + 4));
    *((u16*)(r5 + 0xa)) = 0;
    // add r7, r0, r4
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // str r0, [r6]
    // str r0, [r2]
    *((u32*)(r5 + 0x10)) = ((0 - 1) * *((u32*)(r5 + 0x10)));
    *((u32*)(r5 + 0x14)) = ((0 - 1) * *((u32*)(r5 + 0x14)));
    // str r3, [r0]
    *((u8*)(r5 + 4)) = *((u32*)(ov01_02206464 + ((*((u8*)(r5 + 7)) - 1) * 0x14)));
    *((u8*)(r5 + 5)) = 0;
}




u32 ov01_021EAD8C(void) {
    *((u8*)(r0 + 5)) = (*((u8*)(r0 + 5)) + 1);
    // add r1, #0x2c
    // add r2, #8
    // str r0, [sp]
    ov01_021EAE50(*((u32*)r0), r0, r0, *((u8*)(r0 + 5)));
    // add r1, #0xc
    ov01_021EAEA4(*((u32*)r4), r4, *((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    *((u32*)(r4 + 0x28)) = 0;
    // add r3, #0xc
    // ldmia r3!, {r0, r1}
    // add r2, sp, #4
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // ldr r1, [sp, #4]
    // mvn r0, r0
    // ldr r1, [sp, #8]
    // str r2, [sp, #4]
    // ldr r1, [sp, #0xc]
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r5, [sp]
    // add r1, #8
    // sub r3, r5, r3
    // add r2, #0x2c
    ov01_021EAE50(*((u32*)r4), r4, r4, ((*((u8*)(r4 + 5)) << 0x18) >> 0x18));
    // add r1, sp, #4
    ov01_021EAEA4(*((u32*)r4), *((u8*)(r4 + 5)), *((u8*)(r4 + 4)));
    *((u8*)(r4 + 5)) = (*((u8*)(r4 + 5)) - 1);
    // str r1, [r0]
    *((u16*)(r4 + 0x2e)) = 0;
    *((u32*)(r4 + 0x28)) = 0;
}




void ov01_021EAE50(void) {
    // add r4, sp, #0
    // strh r0, [r4]
    // sub r0, r0, r4
    // add r1, sp, #8
    // sub r0, r4, r0
    // add r1, sp, #8
    // neg r0, r0
    // add r1, r4, r0
    // add r0, sp, #0
    // strh r1, [r0]
    // add r0, sp, #0
}




void ov01_021EAEA4(void) {
    // add r1, sp, #0
    // str r0, [r1]
    // str r0, [sp]
    // str r0, [sp, #8]
    // add r0, sp, #0
}




s32 ov01_021EAEE0(void) {
    // sub r0, r6, r0
}



