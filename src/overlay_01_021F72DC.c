/* Decompiled from asm/overlay_01_021F72DC.s */
#include "global.h"

Sprite * ov01_021F72DC(void) {
    MapObject_GetSpriteID();
    // sub r1, #0xb1
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F7324: ; jump table
    sub_0205F40C(r4, (0x00000103 + 2), 0x00000103);
    sub_0205F40C(r4, 0x000003E1);
    sub_02064084(r4, (0x00000106 + 7));
    sub_0205F40C(r4);
}




void ov01_021F73CC(void) {
    // mvn r0, r0
}




void ov01_021F73F4(void) {
}




void ov01_021F7408(void) {
    // add r1, #8
}




void ov01_021F7434(void) {
    // add r1, #8
}




void ov01_021F7478(void) {
    // mvn r0, r0
}




void ov01_021F74B4(void) {
}




void ov01_021F74C8(void) {
    // bic r1, r0
    // bic r1, r0
}




void ov01_021F7504(void) {
    // str r0, [sp, #0x10]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #8]
    // ldr r2, [sp, #8]
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #4]
    // ldr r3, [sp, #4]
    // ldr r1, [sp, #0x14]
    // add r1, sp, #0x30
    // add r0, r2, r0
    // str r0, [sp, #0x30]
    // add r0, r2, r0
    // str r0, [sp, #0x38]
    // add r1, sp, #0x30
    // ldr r0, [sp, #0x10]
    // add r0, #0xf4
    // ldr r0, [sp, #0x10]
    // add r0, #0xfc
    // ldr r0, [sp, #0x10]
    // add r0, #0xfb
    // ldr r0, [sp, #4]
    // ldr r0, [sp, #0x10]
    // add r0, #0xf8
    // ldr r0, [sp, #8]
    // ldr r0, [sp, #8]
    // str r0, [sp]
    // ldr r0, [sp, #0x10]
    // ldr r3, [sp, #4]
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #0x10]
    // ldr r1, [sp, #0xc]
    // add r1, sp, #0x18
    // str r0, [r1]
    // add r1, sp, #0x24
    // add r2, sp, #0x18
    // ldr r0, [sp, #0x18]
    // add r1, sp, #0x24
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #0x2c]
}




void ov01_021F7704(void) {
}




void ov01_021F771C(void) {
}




void ov01_021F772C(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    MapObject_GetFacingVector(r4, r7);
    *((u32*)(r0 + 8)) = (2 << 0xa);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    *((u8*)(r0 + 2)) = (2 << 0xa);
    sub_0205F330(r4, (2 << 0xa));
    // ldr r1, [sp]
    *((u8*)(r1 + 3)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F77A4(void) {
}




void ov01_021F77D0(void) {
}




void ov01_021F7810(void) {
    // str r0, [sp]
}




void ov01_021F7894(void) {
    // str r0, [sp]
}




void ov01_021F7918(void) {
    // bic r1, r0
    // orr r0, r1
}




void ov01_021F796C(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F79A0(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F79DC(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F7A18(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F7A54(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F7A90(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // strh r0, [r4]
    // ldrsb r0, [r4, r0]
    // strh r0, [r4]
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsh r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (0 << 2))), r3);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // add r1, sp, #0
    // strh r0, [r4]
}




void ov01_021F7B14(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // strh r0, [r4]
    // ldrsb r0, [r4, r0]
    // strh r0, [r4]
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldrsh r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (0 << 2))), r3);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // add r1, sp, #0
    // strh r0, [r4]
}




void ov01_021F7B90(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    // strh r0, [r4]
    // ldrsb r0, [r4, r0]
    // strh r0, [r4]
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldrsh r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (0 << 2))), r3);
    // ldrsh r1, [r4, r0]
    // strh r1, [r4]
    // ldrsh r1, [r4, r0]
    // add r1, sp, #0
    // strh r0, [r4]
}




void ov01_021F7C14(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    *((u8*)(r4 + 2)) = r7;
    sub_0205F330(r4, r7);
    // ldr r1, [sp]
    *((u8*)(r1 + 3)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F7C80(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
}




void ov01_021F7CBC(void) {
    // ldrsb r0, [r2, r0]
}




void ov01_021F7CE4(void) {
    // str r0, [sp, #4]
    // str r0, [sp, #4]
    // ldr r1, [sp, #4]
    // ldrsb r0, [r6, r0]
    // ldr r1, [sp, #4]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r1, [sp]
}




void ov01_021F7DA8(void) {
    // mvn r0, r0
    // strb r0, [r4]
}




void ov01_021F7DD0(void) {
}




void ov01_021F7DFC(void) {
    // add r1, #8
}




void ov01_021F7E28(void) {
    // add r1, #8
}




void ov01_021F7E6C(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    MapObject_GetFacingVector(r4, r7);
    *((u32*)(r0 + 8)) = (2 << 0xa);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    sub_0205F330(r4, (2 << 0xa));
    // ldr r1, [sp]
    *((u8*)(r1 + 2)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F7EE4(void) {
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
}




void ov01_021F7F54(void) {
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
}




void ov01_021F7FC8(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
}




void ov01_021F801C(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
}




void ov01_021F8070(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
}




void ov01_021F80C4(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    *((u8*)(r4 + 1)) = 0;
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r5, r0);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 1)) = 0;
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    // ldrsb r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (1 << 2))), r3);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 1)) = (r1 + 1);
    // ldrsb r0, [r4, r0]
    // add r0, sp, #0
    *((u8*)(r4 + 1)) = 0;
}




void ov01_021F8164(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    *((u8*)(r4 + 1)) = 0;
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r5, r0);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 1)) = 0;
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldrsb r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (1 << 2))), r3);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 1)) = (r1 + 1);
    // ldrsb r0, [r4, r0]
    // add r0, sp, #0
    *((u8*)(r4 + 1)) = 0;
}




void ov01_021F81FC(void) {
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    sub_02023EE0(r5, r0);
    sub_02023F40(r5, 0);
    *((u8*)(r4 + 1)) = 0;
    // ldrsb r0, [r4, r0]
    ov01_021FA44C(r3);
    ov01_021F8C64(r5, r0);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 1)) = 0;
    ov01_021F9344(r6);
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldrsb r1, [r4, r1]
    sub_02023F04(r5, *((u32*)(r3 + (1 << 2))), r3);
    // ldrsb r1, [r4, r0]
    *((u8*)(r4 + 1)) = (r1 + 1);
    // ldrsb r0, [r4, r0]
    // add r0, sp, #0
    *((u8*)(r4 + 1)) = 0;
}




void ov01_021F829C(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
}




void ov01_021F82F0(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r7);
    // ldr r0, [sp]
    MapObject_GetFacingDirection(r7);
    // str r0, [sp, #8]
    sub_0205F330(r7);
    // str r0, [sp, #4]
    GF_AssertFail();
    // ldrsb r2, [r4, r1]
    // ldr r0, [sp, #4]
    // strb r0, [r4]
    // ldr r5, [sp, #4]
    // ldr r1, [sp]
    // ldr r3, [sp, #8]
    // blx r5
    // ldr r0, [sp, #8]
    // ldr r1, [sp]
    // strb r0, [r4]
    // ldr r0, [sp, #4]
    *((u8*)(r4 + 2)) = r7;
    ov01_021FA3E8(r7, 2, r4);
    // ldr r1, [sp]
    ov01_021F8C88(r7);
}




void ov01_021F8374(void) {
    // add r2, sp, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldrsb r0, [r4, r0]
    sub_02023EE0(r1, *((u32*)(r2 + (r3 << 2))), ov01_02208A38);
    sub_02023F40(r5, 0);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) & ~(1));
    // ldrsb r0, [r4, r2]
    *((u8*)(r4 + 3)) = (1 | (*((u8*)(r4 + 3)) & ~(1)));
    sub_02023EE0(r5, (*((u8*)(r4 + 3)) & ~(1)), 2);
    sub_02023F40(r5, 0);
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) & ~(1));
    sub_02023F04(r5, (r2 << 0xb));
}




void ov01_021F8400(void) {
    // str r3, [sp]
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    // ldrsb r0, [r6, r0]
}




void ov01_021F847C(void) {
    // str r3, [sp]
    // ldrsb r1, [r6, r0]
    // ldr r0, [sp]
    // ldrsb r0, [r6, r0]
}




void ov01_021F84F4(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    // ldr r2, [sp, #4]
    ov01_021F8708(r4, r7);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    sub_0205F330(r4);
    // ldr r1, [sp]
    *((u8*)(r1 + 2)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F856C(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_022089F8 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, (0xf << 0xc));
    sub_02023F70(r4);
    // sub r1, r0, r1
    // bpl _021F85A6
    sub_02023F40(r4, 0);
    sub_02023F04(r4, 0);
}




void ov01_021F85BC(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_022089F8 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}




void ov01_021F85F4(void) {
    // ldrsb r0, [r4, r0]
    // ldrsb r0, [r4, r0]
    sub_02023EE0(r1, *((u32*)(ov01_022089F8 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r5, (0xf << 0xc));
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) & ~(0xfe));
    sub_02023F70(r5, (*((u8*)(r4 + 3)) & ~(0xfe)));
    // sub r1, r1, r3
    *((u8*)(r4 + 3)) = ((*((u8*)(r4 + 3)) & ~(0xfe)) | (((((((*((u8*)(r4 + 3)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18));
    // add r1, r1, r3
    *((u8*)(r4 + 3)) = ((((*((u8*)(r4 + 3)) & ~(0xfe)) | (((((((*((u8*)(r4 + 3)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18)) & ~(0xfe)) | ((((((((((((*((u8*)(r4 + 3)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18));
    *((u8*)(r4 + 1)) = 0;
    // ldrsb r2, [r4, r0]
    *((u8*)(r4 + 1)) = (((((((((((((*((u8*)(r4 + 3)) << 0x18) >> 0x19) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18) + 1) << 0x18) >> 0x18) << 0x19) >> 0x18) + 1);
    // ldrsb r0, [r4, r0]
    *((u8*)(r4 + 1)) = 0;
    *((u8*)(r4 + 3)) = (*((u8*)(r4 + 3)) & ~(0xfe));
    sub_02023F40(r5, r0, (*((u8*)(r4 + 3)) & ~(0xfe)), 0xfe);
    sub_02023F04(r5, 0);
}




void ov01_021F86B8(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_022089F8 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, (0xf << 0xc));
    sub_02023F70(r4);
    // sub r1, r0, r1
    // bpl _021F86F2
    sub_02023F40(r4, 0);
    sub_02023F04(r4, 0);
}




void ov01_021F8708(void) {
    // add r2, sp, #0
    // str r0, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    sub_02023F30(r1);
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F8738: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // ldr r1, [sp, #8]
    // add r0, r1, r0
    // str r0, [sp, #8]
    // add r1, sp, #0
    MapObject_SetFacingVector(r5, (*((u16*)((r1 >> 0x14) + 6)) << 0x10));
}




void ov01_021F878C(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    // ldr r2, [sp, #4]
    ov01_021F8874(r4, r7);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    sub_0205F330(r4);
    // ldr r1, [sp]
    *((u8*)(r1 + 2)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F8804(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_02208A18 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}




void ov01_021F883C(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_02208A18 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}




void ov01_021F8874(void) {
    // add r2, sp, #0
    // str r0, [r2]
    *((u32*)(r2 + 4)) = 0;
    *((u32*)(r2 + 8)) = 0;
    sub_02023F30(r1);
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r0, r1, #0xc
    // add r1, r4, r4
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _021F88A4: ; jump table
    // str r0, [sp, #8]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // str r0, [sp]
    // add r1, sp, #0
    MapObject_SetFacingVector(r5, (*((u16*)((r1 >> 0x14) + 6)) << 0x10));
}




void ov01_021F88F0(void) {
    // strb r7, [r6]
}




void ov01_021F894C(void) {
    // strb r0, [r6]
}




void ov01_021F89B8(void) {
    // strb r7, [r6]
}




void ov01_021F8A4C(void) {
    // ldrsb r1, [r4, r1]
    // strb r7, [r4]
}




void ov01_021F8AB0(void) {
    // str r0, [sp]
    // ldrsb r0, [r6, r0]
    // ldr r0, [sp]
    // strb r0, [r6]
}




void ov01_021F8B30(void) {
    sub_0205F40C();
    // str r0, [sp]
    ov01_021FA2D4(r4);
    MapObject_GetFacingDirection(r4);
    // str r0, [sp, #4]
    sub_0205F330(r4);
    GF_AssertFail();
    // ldr r2, [sp]
    // ldr r3, [sp, #4]
    // blx r5
    // ldr r2, [sp, #4]
    ov01_021F8BE0(r4, r7);
    // ldr r1, [sp, #4]
    // ldr r0, [sp]
    // strb r1, [r0]
    sub_0205F330(r4);
    // ldr r1, [sp]
    *((u8*)(r1 + 2)) = r0;
    ov01_021FA3E8(r4, r7);
    ov01_021F8C88(r4, r7);
}




void ov01_021F8BA8(void) {
    // ldrsb r0, [r2, r0]
    // ldrsb r0, [r2, r0]
    sub_02023EE0(r1, *((u32*)(ov01_02208A28 + (r3 << 2))), (r3 << 2));
    sub_02023F40(r4, 0);
    sub_02023F04(r4, (1 << 0xc));
}




void ov01_021F8BE0(void) {
}




void ov01_021F8C00(void) {
    // asr r1, r0, #0xb
    // add r1, r0, r1
    // asr r4, r1, #0xc
    // sub r1, r4, r1
}




void ov01_021F8C30(void) {
}




void ov01_021F8C3C(void) {
}




void ov01_021F8C64(void) {
}




void ov01_021F8C88(void) {
}




void ov01_021F8CC8(void) {
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // str r0, [r2]
    // add r3, #0x10
    GF_AssertFail(*((u32*)(ov01_022073D8 + 4)), 0x0000FFFF, r1, (ov01_022073D8 + 4));
}




void ov01_021F8CFC(void) {
}




void ov01_021F8D24(void) {
    // bx lr
    // TODO: decompile
}




void ov01_021F8D28(void) {
    // str r0, [r4]
}




void ov01_021F8D40(void) {
    // str r0, [r4]
}




void ov01_021F8D58(void) {
}



