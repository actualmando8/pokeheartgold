/* Decompiled from asm/overlay_73.s */
#include "global.h"

BOOL ov73_021E5900(void) {
    // and r1, r0
    *((u32*)r2) = r1;
    // and r0, r1
    *((u32*)r2) = r0;
    *((u32*)r4) = r0;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    // and r0, r1
    *((u16*)r2) = r0;
    *((u32*)r5) = r0;
    *((u32*)r5) = r0;
    return 0;
}




BOOL ov73_021E5AB8(void) {
    // and r0, r2
    *((u32*)(r4 + r1)) = r0;
    *((u32*)r5) = ((s32)((r1 + r1)) >> 0x10);
    // blx r2
    *((u32*)r5) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)r5) = (r4 + ((s32)((r1 + r1)) >> 0x10));
    // blx r2
    *((u32*)r5) = (r4 + ((s32)((r1 + r1)) >> 0x10));
    return (r4 + ((s32)((r1 + r1)) >> 0x10));
}




BOOL ov73_021E5BAC(void) {
    *((u32*)sp) = r0;
    *((u16*)r2) = *((u32*)sp);
    return *((u32*)sp);
}




void ov73_021E5C74(void) {
}




void ov73_021E5CD8(void) {
    *((u32*)(r3 + r1)) = r0;
}




void ov73_021E5D00(void) {
}




void ov73_021E5D20(void) {
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    SetBothScreensModesAndDisable(r3, r3);
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 5);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 0, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    BgClearTilemapBufferAndCommit(r4, 1);
    BG_ClearCharDataRange(0, 0x20, 0, 0x32);
    BG_ClearCharDataRange(4, 0x20, 0, 0x32);
}




void ov73_021E5E0C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r6 + r0)) = r1;
    *((u32*)(*((u32*)sp) + *((u32*)sp))) = r2;
    *((u32*)(*((u32*)sp) + *((u32*)sp))) = *((u32*)sp);
    *((u32*)(*((u32*)sp) + (*((u32*)sp) + 0x1c))) = *((u32*)(sp + 4));
    *((u32*)(*((u32*)sp) + r3)) = (r4 + 8);
    // strb r0, [r1, r2]
}




void ov73_021E5ED4(void) {
    // ldr r0, [r6, r0]
}




void ov73_021E5F0C(void) {
}




void ov73_021E5F38(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E6048(void) {
}




void ov73_021E6060(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x32);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov73_021E6090(void) {
    *((u32*)(sp + 0x14)) = r1;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(r5 + r7)) = (r0 + 0x54);
    *((u32*)sp) = (r0 + 0x54);
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = (r0 + 0x54);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r0 + 0x54);
    *((u32*)sp) = (r0 + 0x54);
    *((u32*)(sp + 4)) = (r0 + 0x54);
    *((u32*)(sp + 8)) = (r0 + 0x54);
    // sub r1, #0x2c
    *((u32*)(sp + 0xc)) = (r0 + 0x54);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r0 + 0x54);
    *((u32*)sp) = (r0 + 0x54);
    *((u32*)(sp + 4)) = (r0 + 0x54);
    // sub r1, #0x2c
    *((u32*)(sp + 8)) = (r0 + 0x54);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r0 + 0x54);
    *((u32*)sp) = (r0 + 0x54);
    *((u32*)(sp + 4)) = (r0 + 0x54);
    // sub r1, #0x2c
    *((u32*)(sp + 8)) = (r0 + 0x54);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r0 + 0x54);
    // sub r1, #0xc
}




void ov73_021E6184(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x18)) = r2;
    *((u32*)(sp + 0x1c)) = (r2 + 8);
    *((u32*)(sp + 0x20)) = ((r2 + 8) + 0xc);
    *((u32*)(sp + 0x24)) = r0;
    *((u32*)(sp + 0x28)) = r0;
    *((u32*)(sp + 0x2c)) = (r5 + (r3 + 0x88));
    *((u32*)(sp + 0x30)) = (r5 + (r5 + (r3 + 0x88)));
    *((u32*)(sp + 0x3c)) = r1;
    *((u32*)(sp + 0x40)) = (r5 + (r5 + (r3 + 0x88)));
    *((u32*)(sp + 0x44)) = (r5 + (r5 + (r3 + 0x88)));
    *((u32*)(sp + 0x48)) = (r5 + (r5 + (r3 + 0x88)));
    *((u32*)(sp + 0x50)) = (sp + 0x2c);
    *((u32*)(sp + 0x54)) = (sp + 0x2c);
    *((u32*)(sp + 0x58)) = (sp + 0x2c);
    *((u32*)(sp + 0x34)) = (sp + 0x2c);
    *((u32*)(sp + 0x38)) = (sp + 0x2c);
    *((u32*)(r5 + r1)) = (sp + 0x2c);
    *((u32*)(sp + 0x34)) = (sp + 0x2c);
    *((u32*)(sp + 0x38)) = (sp + 0x2c);
    *((u32*)(r5 + r1)) = (sp + 0x2c);
    *((u32*)(sp + 0x34)) = (sp + 0x2c);
    *((u32*)(sp + 0x38)) = (sp + 0x2c);
}




void ov73_021E629C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = (r4 + r0);
    *((u32*)(sp + 4)) = (r4 + r0);
    *((u32*)(sp + 8)) = (r4 + r0);
    *((u32*)(sp + 0xc)) = (r4 + r0);
    *((u32*)(sp + 0x10)) = (r4 + r0);
    *((u32*)sp) = (r4 + (r4 + r0));
    *((u32*)(sp + 4)) = (r4 + (r4 + r0));
    *((u32*)(sp + 8)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + r0));
    *((u32*)sp) = (r4 + (r4 + (r4 + r1)));
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 8)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + (r4 + r1)));
    *((u32*)sp) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)(sp + 8)) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)(r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r1))))))) = (r4 + (r4 + (r4 + (r4 + (r4 + (r4 + r0))))));
}




void ov73_021E63BC(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r4;
    // sub r4, r3, r6
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
}




void ov73_021E6400(void) {
}




void ov73_021E6444(void) {
}




void ov73_021E6484(void) {
}




void ov73_021E64B0(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




void ov73_021E6508(void) {
    *((u32*)sp) = (sp + 8);
    *((u32*)(r5 + (((sp + 4) + 2) + 0x28))) = ((sp + 4) + 0x28);
    *((u8*)(sp + 4)) = ((sp + 4) + 1);
    *((u32*)(r5 + (sp + 4))) = (sp + 4);
}




void ov73_021E66F0(void) {
}




void ov73_021E66F4(void) {
}




void ov73_021E670C(void) {
    *((u32*)(r0 + r2)) = r3;
    *((u32*)(r0 + r2)) = r1;
}




void ov73_021E671C(void) {
    *((u32*)(r5 + r0)) = r2;
    *((u32*)(r5 + r0)) = ~(r1);
}




void ov73_021E6778(void) {
    *((u32*)sp) = r0;
    *((u32*)(r5 + r0)) = (sp + 0);
}




void ov73_021E67A8(void) {
    *((u32*)sp) = (sp + 0);
    *((u32*)(sp + 4)) = (sp + 0);
    *((u32*)(sp + 8)) = (sp + 0);
    *((u32*)(sp + 0xc)) = (sp + 0);
    // sub r3, #0x2c
    // and r2, r5
    // strb r1, [r4, r0]
}




void ov73_021E6830(void) {
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x2c
    // strb r1, [r4, r0]
    *((u32*)(r4 + r0)) = ~(r1);
}




void ov73_021E6890(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E68AC(void) {
    *((u32*)(sp + 4)) = r0;
    *((u8*)(sp + 0)) = (sp + 0);
    // strb r1, [r5, r0]
    // strh r1, [r5, r0]
    *((u32*)(r5 + ((sp + 0) + 0xa))) = (sp + 0);
}




void ov73_021E69D0(void) {
}




void ov73_021E69E8(void) {
    // strh r1, [r5, r0]
    *((u32*)(r5 + r0)) = r1;
    // ldrsh r0, [r5, r0]
    // strh r2, [r5, r0]
    // ldrsh r0, [r5, r0]
    *((u8*)(sp + 0)) = (sp + 0);
    // strh r1, [r5, r0]
    *((u32*)(r5 + (sp + 0))) = (sp + 0);
}




void ov73_021E6A70(void) {
    // strb r1, [r5, r2]
}




void ov73_021E6A90(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6AAC(void) {
    *((u32*)sp) = r0;
    *((u32*)(r5 + r0)) = (sp + 0);
    // strb r0, [r5, r1]
}




void ov73_021E6B6C(void) {
    // strb r1, [r5, r0]
}




void ov73_021E6B98(void) {
}




void ov73_021E6BC8(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6BF8(void) {
    *((u32*)(r5 + r0)) = (r5 + r1);
}




void ov73_021E6C20(void) {
    *((u32*)(r5 + (r5 + r0))) = r1;
}




void ov73_021E6C50(void) {
    *((u32*)(r5 + r0)) = r1;
    // strb r1, [r5, r0]
}




void ov73_021E6CC0(void) {
    *((u32*)(r0 + r2)) = r3;
    // sub r2, #0xc
    *((u32*)(r0 + r2)) = r3;
}




void ov73_021E6CDC(void) {
}




void ov73_021E6CFC(void) {
    *((u32*)(r5 + r0)) = r1;
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov73_021E6D38(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6D54(void) {
    *((u32*)sp) = (r1 + 8);
    *((u32*)(r5 + r0)) = (r1 + 8);
    *((u32*)(r5 + r0)) = (sp + 0);
}




void ov73_021E6DF8(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6E48(void) {
    *((u32*)(r0 + r1)) = r2;
    // sub r1, #0xc
    *((u32*)(r0 + r1)) = r2;
}




void ov73_021E6E6C(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6E8C(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov73_021E6ECC(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6EF8(void) {
    *((u32*)(r5 + r0)) = r1;
}




void ov73_021E6F1C(void) {
    *((u32*)(r5 + r0)) = ~(r1);
    *((u32*)(r5 + r0)) = ~(r1);
    *((u32*)(r5 + ~(r1))) = r0;
    *((u32*)(r5 + (~(r1) + 8))) = r0;
}




void ov73_021E6FAC(void) {
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + (r0 + 0xc))) = r1;
}




void ov73_021E6FE8(void) {
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r0)) = r1;
    // sub r0, #8
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r1)) = r0;
    // sub r1, #0xc
    *((u32*)(r5 + r1)) = r0;
}




void ov73_021E705C(void) {
    // eor r0, r6
    // and r0, r2
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r0)) = r4;
}




void ov73_021E7120(void) {
    *((u32*)(r5 + r0)) = r4;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + (r1 + 8))) = r0;
    *((u32*)sp) = r2;
    // eor r0, r6
    // and r0, r2
    *((u32*)(r5 + (sp + 0))) = r0;
    *((u32*)(r5 + r0)) = r4;
    *((u32*)(r5 + r0)) = (sp + 0);
    *((u32*)(r5 + (sp + 0))) = r0;
}




void ov73_021E71E4(void) {
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r4;
    *((u32*)(sp + 8)) = (r4 + 0xc);
    *((u32*)(sp + 0xc)) = (r4 + 0xc);
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x14)) = r2;
    *((u32*)(sp + 0x18)) = r1;
}




void ov73_021E7230(void) {
    // sub r3, r1, r0
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(r4 + (r4 + r0))) = ~(r1);
    // sub r3, r1, r0
    *((u32*)sp) = ~(r1);
    *((u32*)(sp + 4)) = ~(r1);
    *((u32*)(sp + 8)) = (r4 + r0);
    *((u32*)(sp + 0xc)) = ~(r1);
}




void ov73_021E72F4(void) {
    *((u16*)r0) = (r1 + 0xa);
    *((u16*)r0) = (r1 + 0xa);
    *((u16*)(sp + 0)) = r2;
}




void ov73_021E7340(void) {
}




void ov73_021E735C(void) {
    *((u32*)(sp + 0x14)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(sp + 0x1c)) = r0;
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x14));
    *((u32*)sp) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x14));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x20));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x20));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x20));
}




void ov73_021E7468(void) {
}




void ov73_021E746C(void) {
}




void ov73_021E7488(void) {
}




void ov73_021E7490(void) {
    *((u32*)sp) = r4;
    *((u32*)(r6 + r0)) = r1;
    *((u32*)(r6 + r1)) = r0;
    *((u32*)(r5 + r2)) = r1;
    *((u32*)(r5 + r1)) = r0;
    *((u32*)(r5 + r1)) = r0;
    // sub r0, #8
    *((u32*)(r5 + r0)) = r1;
    *((u32*)(r5 + r0)) = r1;
    *((u32*)sp) = r1;
    *((u32*)(r2 + r0)) = r1;
    *((u32*)(r2 + r0)) = r1;
    // eor r1, r6
    // eor r5, r0
    *((u32*)sp) = r1;
    *((u32*)(r2 + r0)) = r1;
    *((u32*)(r2 + r0)) = r1;
}




void ov73_021E756C(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r5 + (r5 + r0));
    *((u32*)(sp + 8)) = r3;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r3;
}




void ov73_021E75FC(void) {
}




void ov73_021E761C(void) {
}




void ov73_021E762C(void) {
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 0x14)) = (r5 + r0);
    *((u32*)(sp + 8)) = r4;
    *((u32*)(sp + 0x18)) = (r5 + (r5 + r0));
    *((u32*)(sp + 0xc)) = ((s32)(((r5 + (r5 + r0)) + (r5 + (r5 + r0)))) >> 0x10);
    *((u32*)(sp + 0x10)) = ((s32)(((r5 + (r5 + r0)) + (r5 + (r5 + r0)))) >> 0x10);
    *((u32*)sp) = *((u32*)(sp + 0xc));
    *((u32*)(r5 + *((u32*)(sp + 0x14)))) = *((u32*)(sp + 4));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x14));
    *((u32*)(r5 + *((u32*)(sp + 0x14)))) = (*((u32*)(sp + 4)) + 0x27);
    *((u32*)(sp + 4)) = *((u32*)(sp + 4));
}




void ov73_021E7740(void) {
    *((u32*)(r5 + (r5 + r2))) = r0;
    *((u32*)(r5 + r3)) = r0;
    // sub r3, #0xc
    *((u32*)sp) = r0;
    *((u32*)(r5 + (r5 + r3))) = r0;
    *((u32*)sp) = r0;
    *((u32*)(r5 + r1)) = r0;
}




void ov73_021E77A4(void) {
}




void ov73_021E77E8(void) {
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
    // ldr r0, [r4, r0]
}




u8 ov73_021E7818(void) {
}




void ov73_021E781C(void) {
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
    // strb r1, [r5, r0]
}




void ov73_021E7870(void) {
    *((u8*)(sp + 0)) = r2;
    *((u32*)(r4 + (sp + 0))) = (sp + 0);
    *((u32*)(r4 + ((s32)((r5 + r5)) >> 0x10))) = (sp + 0);
    // sub r1, #0x12
    // ldrsb r0, [r4, r0]
    *((u32*)(r4 + (sp + 0))) = (((s32)((r5 + r5)) >> 0x10) + 0x11);
    *((u32*)(r4 + (sp + 0))) = (((s32)((r5 + r5)) >> 0x10) + 0x11);
}




u8 ov73_021E795C(void) {
}




void ov73_021E7960(void) {
}




void ov73_021E7964(void) {
    // mov ip, r1
    // add r6, #0xdc
    // sub r4, #0x2c
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // sub r6, #0x2c
    // str r0, [r3]
    // add r7, #0x58
    // mov r2, ip
    // ldmia r2!, {r0, r1}
    // mov ip, r2
    // stmia r7!, {r0, r1}
    // mov r0, ip
    // str r0, [r7]
}




void ov73_021E79A8(void) {
    GF_AssertFail();
    // add r3, r4, r0
    // sub r6, #0x2c
    // ldmia r7!, {r0, r1}
    // stmia r6!, {r0, r1}
    // add r3, #0x2c
    // str r0, [r6]
    // add r4, #0xdc
    // add r1, #0xdc
    // strh r0, [r4]
    *((u16*)(r4 + 0x10)) = 0x0000FFFF;
}




void ov73_021E79F4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
    *((u32*)(sp + 0xc)) = (r5 + r2);
}




void ov73_021E7A74(void) {
}




void ov73_021E7A7C(void) {
}




void ov73_021E7A84(void) {
}




/* Address: 0x021E7A8C
 * Searches a byte array for a target value (terminated by 0xFF).
 */
u32 ov73_021E7A8C(u32 a1, u32 a2) {
    u32 *data = (u32*)ov73_021EA664;
    u8 *ptr = (u8*)data[a1];
    
    if (*((u8*)ptr) == 0xFF)
        return 0;
    if (*((u8*)ptr) == a2)
        return 1;
    
    while (1) {
        ptr++;
        if (*ptr == 0xFF)
            return 0;
        if (*ptr == a2)
            return 1;
    }
}




void ov73_021E7AC0(void) {
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // str r0, [r5]
    // mov r0, #GAME_VERSION
    // add r0, #8
    // add r3, #0x18
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [sp, #4]
    // add r7, #0x30
    // str r0, [sp, #4]
    // ldr r0, [sp]
    // add r5, #0x48
}




void ov73_021E7B3C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E7B84(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r3;
}




void ov73_021E7BC8(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E7C0C(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E7C50(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E7C94(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021E7CD8(void) {
    // mvn r0, r0
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r2, #0x48
    // add r3, r5, r0
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r1, #0x48
}




void ov73_021E7D54(void) {
}




void ov73_021E7D74(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x44)) = *((u32*)(sp + 0x44));
    *((u32*)(sp + 0x48)) = *((u32*)(sp + 0x48));
    *((u32*)(sp + 8)) = r3;
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x40));
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0x10)) = *((u32*)(sp + 0x14));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x14));
    // strb r1, [r0, r4]
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0x48);
    *((u32*)(sp + 0x18)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x14));
}




void ov73_021E7E24(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x18));
}




BOOL ov73_021E7E4C(void) {
    Main_SetVBlankIntrCB(0, 0);
    HBlankInterruptDisable();
    GfGfx_DisableEngineAPlanes();
    GfGfx_DisableEngineBPlanes();
    // and r1, r0
    // str r1, [r2]
    // and r0, r1
    // str r0, [r2]
    Heap_Create(3, 0x96, (5 << 0x10));
    OverlayManager_CreateAndGetData(r6, 0x000012CC, 0x96);
    memset(0, 0x000012CC);
    BgConfig_Alloc(0x96);
    *((u32*)(r4 + 4)) = r0;
    // add r2, sp, #0
    // str r4, [r0]
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    SetBothScreensModesAndDisable(r2, ov73_021EA68C);
    MessageFormat_New_Custom(0xb, 0x20, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000031F, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, 0x0000030A, 0x96);
    // str r0, [r4, r1]
    NewMsgDataFromNarc(0, 0x1b, (0x32 << 4), 0x96);
    // str r0, [r4, r1]
    SetKeyRepeatTimers(4, 8);
    ov73_021E8148(r4, r6);
    ov73_021E8454(r4);
    Sound_SetSceneAndPlayBGM(0x34, 0, 0);
    Heap_Alloc(0x96, 0x00020020);
    *((u32*)(r4 + 0x24)) = r0;
    // add r0, #0x1f
    NNS_FndCreateExpHeapEx((r0 & ~(0x1f)), (2 << 0x10), 0);
    *((u32*)(r4 + 0x28)) = r0;
    Sound_SetSceneAndPlayBGM(0xb, 0x0000047D, 1);
    // and r0, r1
    // strh r0, [r2]
    // str r0, [r5]
    LoadDwcOverlay(1, *((u16*)0x04000304), 0x04000304);
    LoadOVY38();
    sub_02034D8C();
    // str r0, [r5]
}




BOOL ov73_021E7FB8(void) {
    *((u32*)r4) = ((s32)((r1 + r1)) >> 0x10);
    // blx r2
    *((u32*)r4) = ((s32)((r1 + r1)) >> 0x10);
    *((u32*)r4) = ((s32)((r1 + r1)) >> 0x10);
    // blx r2
    *((u32*)r4) = ((s32)((r1 + r1)) >> 0x10);
    // blx r2
    *((u32*)r4) = ((s32)((r1 + r1)) >> 0x10);
    return ((s32)((r1 + r1)) >> 0x10);
}




BOOL ov73_021E808C(void) {
    OverlayManager_GetData();
    Heap_Free(*((u32*)(r0 + 0x24)));
    UnloadOVY38();
    UnloadDwcOverlay();
    ov73_021E847C(r4);
    DestroyMsgData(*((u32*)(r4 + 0x00000BDC)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD8)));
    DestroyMsgData(*((u32*)(r4 + 0x00000BD4)));
    MessageFormat_Delete(*((u32*)(r4 + (0xbd << 4))));
    ov73_021E8164(r4);
    sub_02034DE0();
    Heap_Free(*((u32*)(r4 + 4)));
    OverlayManager_FreeData(r5);
    Main_SetVBlankIntrCB(0, 0);
    Heap_Destroy(0x96);
}




void ov73_021E8100(void) {
    *((u32*)(r3 + r1)) = r0;
}




void ov73_021E8128(void) {
}




void ov73_021E8148(void) {
}




void ov73_021E8164(void) {
}




void ov73_021E8168(void) {
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    ObjCharTransfer_Init(r3, r3);
    ObjPlttTransfer_Init(0x14, 0x96);
    ObjCharTransfer_ClearBuffers();
    ObjPlttTransfer_Reset();
}




void ov73_021E8198(void) {
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r3;
    *((u32*)(sp + 0x10)) = r2;
    *((u32*)(r6 + (r6 + r1))) = r0;
    *((u32*)(r5 + r7)) = (r6 + r0);
    *((u32*)sp) = (r6 + r0);
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = (r6 + r0);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r6 + r0);
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r6 + r0);
    *((u32*)(sp + 8)) = (r6 + r0);
    // sub r1, #0xc
    *((u32*)(sp + 0xc)) = (r6 + r0);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r6 + r0);
    *((u32*)sp) = (r6 + r0);
    *((u32*)(sp + 4)) = (r6 + r0);
    // sub r1, #0xc
    *((u32*)(sp + 8)) = (r6 + r0);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r6 + r0);
    *((u32*)sp) = (r6 + r0);
    *((u32*)(sp + 4)) = (r6 + r0);
    // sub r1, #0xc
    *((u32*)(sp + 8)) = (r6 + r0);
    *((u32*)(r6 + *((u32*)(sp + 0x14)))) = (r6 + r0);
    // sub r1, #0xc
}




void ov73_021E82A8(void) {
    *((u32*)r0) = r1;
}




void ov73_021E82D4(void) {
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r1;
    *((u32*)(sp + 0x10)) = r1;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x18)) = r0;
    *((u32*)(sp + 0x1c)) = (r0 + 8);
    *((u32*)(sp + 0x20)) = ((r0 + 8) + 0xc);
    *((u32*)(sp + 0x24)) = r1;
    *((u32*)(sp + 0x28)) = r1;
    *((u32*)(sp + 0x34)) = (sp + 0x2c);
    *((u32*)(sp + 0x38)) = (sp + 0x2c);
    *((u32*)(r5 + r1)) = (sp + 0x2c);
}




void ov73_021E8390(void) {
    *((u32*)(sp + 0xc)) = r2;
    *((u32*)sp) = r5;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r6;
}




void ov73_021E83D4(void) {
}




void ov73_021E83EC(void) {
}




void ov73_021E83F4(void) {
    OS_DisableInterrupts();
    NNS_FndAllocFromExpHeapEx(*((u32*)(_021EA940 + 4)), r5, r4);
    OS_RestoreInterrupts(r6);
}




void ov73_021E841C(void) {
    OS_DisableInterrupts();
    NNS_FndFreeToExpHeap(*((u32*)(_021EA940 + 4)), r5);
    OS_RestoreInterrupts(r4);
}




void ov73_021E8440(void) {
}




void ov73_021E844C(void) {
}




void ov73_021E8454(void) {
    ov73_021E8128();
    ov73_021E8168();
    ov73_021E8198(r4);
    ov73_021E82D4(r4);
    Main_SetVBlankIntrCB(ov73_021E8100, r4);
}




void ov73_021E847C(void) {
    *((u32*)(r6 + r0)) = r1;
}




void ov73_021E84D0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(r1 + 0x90)) = r0;
    *((u32*)((r0 + 0x90) + 0x94)) = (r1 + 0x90);
    *((u32*)(((r0 + 0x90) + 0x94) + 0x9c)) = (r1 + 0x90);
    *((u32*)(r4 + (((r0 + 0x90) + 0x94) + 0x9c))) = (r1 + 0x90);
    *((u32*)sp) = (((r0 + 0x90) + 0x94) + 0x9c);
}




void ov73_021E85AC(void) {
    // blx r1
    // strh r2, [r5, r1]
    // strh r2, [r5, r1]
}




void ov73_021E85DC(void) {
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
    *((u32*)(r4 + r0)) = r1;
}




void ov73_021E8628(void) {
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r0, 0, r3, 0);
    GfGfx_EngineATogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 0);
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 1, r3, 0);
    GfGfx_EngineATogglePlanes(2, 0);
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 4, r3, 0);
    GfGfx_EngineBTogglePlanes(1, 0);
    BgClearTilemapBufferAndCommit(r4, 4);
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // str r0, [r3]
    InitBgFromTemplate(r4, 5, r3, 0);
    GfGfx_EngineBTogglePlanes(2, 0);
    BG_ClearCharDataRange(0, 0x20, 0, 0x96);
    BG_ClearCharDataRange(4, 0x20, 0, 0x96);
}




void ov73_021E870C(void) {
}




void ov73_021E8730(void) {
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = r2;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x2c)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x10));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x10));
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x2c));
    *((u32*)sp) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x2c));
    *((u32*)sp) = r1;
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 8)) = r1;
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0x2c));
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x38));
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x10)) + (sp + 0x38)));
    // sub r1, #0x80
    *((u32*)(sp + 0x14)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x10)) + (sp + 0x38)));
    *((u32*)(sp + 0x20)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x10)) + (sp + 0x38)));
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x10)) + (sp + 0x38)));
    *((u32*)(sp + 0x30)) = (*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x10)) + (sp + 0x38)));
    *((u32*)(sp + 0x34)) = ((s32)(*((u32*)(sp + 0x20))) >> 8);
    *((u32*)sp) = ((s32)(*((u32*)(sp + 0x20))) >> 8);
    *((u32*)(sp + 0x18)) = (*((u32*)(sp + 0x18)) + 0x20);
    *((u32*)(sp + 0x24)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0x20)) = (*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x1c)));
    *((u32*)(sp + 0x20)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 0x1c)) = *((u32*)(sp + 0x1c));
    *((u32*)(sp + 0x14)) = (*((u32*)(sp + 0x14)) + 0x20);
    *((u32*)(sp + 0x28)) = *((u32*)(sp + 0x28));
    *((u32*)(*((u32*)(sp + 0x10)) + (*((u32*)(sp + 0x20)) + *((u32*)(sp + 0x1c))))) = (sp + 0x38);
    *((u32*)(*((u32*)(sp + 0x10)) + (sp + 0x38))) = *((u32*)(sp + 0x34));
    *((u32*)(*((u32*)(sp + 0x10)) + (sp + 0x38))) = *((u32*)(sp + 0x10));
}




void ov73_021E8960(void) {
    // eor r2, r0
    // strb r2, [r4, r1]
    // ldrsh r0, [r4, r0]
    // ldrsh r0, [r4, r0]
    // ldrsb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r2, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // strh r2, [r4, r1]
    // ldrsb r1, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
}




void ov73_021E8A08(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
    *((u32*)(sp + 0xc)) = r0;
    *((u32*)(sp + 0x10)) = r0;
    *((u32*)sp) = (r4 + r0);
    *((u32*)(sp + 4)) = (r4 + r0);
    *((u32*)(sp + 8)) = (r4 + r0);
    *((u32*)(sp + 0xc)) = (r4 + r0);
    *((u32*)(sp + 0x10)) = (r4 + r0);
    *((u32*)sp) = (r4 + (r4 + r0));
    *((u32*)(sp + 4)) = (r4 + (r4 + r0));
    *((u32*)(sp + 8)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + r0));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + r0));
    *((u32*)sp) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 8)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + (r4 + r0)));
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + (r4 + r0))));
    *((u32*)sp) = (r4 + (r4 + (r4 + (r4 + (r4 + r0)))));
    *((u32*)(sp + 4)) = (r4 + (r4 + (r4 + (r4 + (r4 + r0)))));
    *((u32*)(sp + 8)) = (r4 + (r4 + (r4 + (r4 + (r4 + r0)))));
    *((u32*)(sp + 0xc)) = (r4 + (r4 + (r4 + (r4 + (r4 + r0)))));
    *((u32*)(sp + 0x10)) = (r4 + (r4 + (r4 + (r4 + (r4 + r0)))));
}




void ov73_021E8B20(void) {
}




void ov73_021E8B64(void) {
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x18
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r1)) = r0;
}




void ov73_021E8BBC(void) {
    String_Delete(*((u32*)(r0 + (0xbf << 4))));
    String_Delete(*((u32*)(r4 + 0x00000BE4)));
    String_Delete(*((u32*)(r4 + 0x00000BEC)));
    String_Delete(*((u32*)(r4 + 0x00000BE8)));
    String_Delete(*((u32*)(r4 + (0xbe << 4))));
}




void ov73_021E8BFC(void) {
    *((u32*)sp) = r1;
}




void ov73_021E8C2C(void) {
    *((u32*)sp) = r0;
}




void ov73_021E8C8C(void) {
    *((u32*)sp) = r1;
}




void ov73_021E8CBC(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    ov00_021EC5B4();
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
    ov00_021EC5B4(0x29);
    ov73_021E844C(r4, 0, 0);
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E8D0C(void) {
}




void ov73_021E8D2C(void) {
    *((u32*)(r4 + r1)) = (sp + 4);
    *((u32*)(r4 + (sp + 4))) = *((u32*)(sp + 4));
    // sub r1, #0x37
    *((u32*)(r4 + (sp + 0))) = r1;
}




void ov73_021E8DB8(void) {
}




void ov73_021E8DC8(void) {
    *((u32*)(r4 + (sp + 0))) = (sp + 4);
    *((u32*)(r4 + (sp + 4))) = *((u32*)(sp + 4));
    // add r1, pc
    // add pc, r1
}




void ov73_021E8E7C(void) {
}




void ov73_021E8EBC(void) {
}




void ov73_021E8ED8(void) {
    *((u32*)(r4 + r1)) = r2;
    // add r2, pc
    // add pc, r2
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r1;
}




void ov73_021E8FB0(void) {
    *((u32*)(r4 + (r4 + (r4 + r1)))) = (r4 + ((r4 + r1) + 0x64));
}




void ov73_021E8FE4(void) {
    *((u32*)(r4 + r0)) = r1;
    // add r1, pc
    // add pc, r1
    // add r1, pc
    // add pc, r1
    // sub r0, #0x6c
    *((u32*)(r4 + r0)) = r5;
    *((u32*)(r4 + r0)) = r5;
    // sub r0, #0x78
    *((u32*)(r4 + r0)) = r5;
    // sub r0, #0x78
    *((u32*)(r4 + r0)) = r5;
    // sub r0, #0x78
    *((u32*)(r4 + r0)) = r5;
    // sub r0, #0x78
    *((u32*)(r4 + r0)) = r5;
    *((u32*)(r4 + r0)) = ((s32)((((s32)((r1 + r1)) >> 0x10) + ((s32)((r1 + r1)) >> 0x10))) >> 0x10);
}




void ov73_021E9120(void) {
    *((u32*)(r4 + (r0 + 0x94))) = r1;
}




void ov73_021E9144(void) {
    *((u32*)(r4 + r1)) = r2;
    // add r2, pc
    // add pc, r2
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r1 + 0x98)) = r0;
    *((u32*)(r4 + r0)) = (r1 + 0x98);
}




void ov73_021E91F4(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9224(void) {
}




void ov73_021E926C(void) {
    *((u32*)((r0 + 0x9c) + 0x9c)) = r1;
    *((u32*)(((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) = r1;
    *((u32*)(((r4 + (((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) + 0x9c) + 0x9c)) = r1;
    *((u32*)((((((r4 + (((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) = r1;
}




void ov73_021E9378(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = r0;
}




void ov73_021E93EC(void) {
    *((u32*)sp) = r1;
}




void ov73_021E941C(void) {
    *((u32*)(r4 + (r0 + 0x90))) = (r1 + 0x9c);
}




void ov73_021E944C(void) {
    *((u32*)(r4 + r1)) = r2;
    // add r2, pc
    // add pc, r2
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    // sub r1, #0x78
    *((u32*)((r4 + 0x9c) + ((sp + 0x10) + 0x94))) = (sp + 0);
    *((u32*)((r4 + 0x9c) + (sp + 0))) = ((sp + 0x10) + 0x94);
}




void ov73_021E955C(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9598(void) {
    *((u32*)sp) = r1;
}




void ov73_021E95CC(void) {
    *((u32*)(r5 + r0)) = (sp + 0);
}




void ov73_021E9618(void) {
    *((u32*)(r4 + r1)) = r2;
    // add r2, pc
    // add pc, r2
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + r1)) = r0;
    *((u32*)(r4 + r0)) = r1;
}




void ov73_021E96EC(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9728(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9758(void) {
    *((u32*)(r0 + 0x94)) = r1;
}




void ov73_021E97A8(void) {
    *((u32*)((r0 + 0x94) + 0x94)) = r1;
    *((u32*)((((r0 + 0x94) + 0x94) + 0x94) + 0x94)) = r1;
    *((u32*)(((r4 + ((((r0 + 0x94) + 0x94) + 0x94) + 0x94)) + 0x94) + 0x94)) = r1;
    *((u32*)(((((r4 + ((((r0 + 0x94) + 0x94) + 0x94) + 0x94)) + 0x94) + 0x94) + 0x94) + 0x94)) = r1;
}




void ov73_021E987C(void) {
    *((u32*)sp) = r1;
}




void ov73_021E98AC(void) {
    *((u32*)(r0 + 0x9c)) = r1;
}




void ov73_021E98FC(void) {
    *((u32*)((r0 + 0x9c) + 0x9c)) = r1;
    *((u32*)(((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) = r1;
    *((u32*)(((r4 + (((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) + 0x9c) + 0x9c)) = r1;
    *((u32*)((((((r4 + (((((r0 + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) + 0x9c) + 0x9c) + 0x9c) + 0x98) + 0x9c)) = r1;
}




void ov73_021E99D4(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r1;
    *((u32*)sp) = r0;
}




void ov73_021E9A3C(void) {
    *((u32*)(r4 + (r0 + 0x94))) = (r1 + 0x9c);
}




void ov73_021E9A6C(void) {
    *((u32*)(r4 + r1)) = r2;
    // add r2, pc
    // add pc, r2
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    // sub r1, #0x78
    *((u32*)(r4 + (r4 + r1))) = r0;
    *((u32*)(r4 + r0)) = (r4 + r1);
}




void ov73_021E9B58(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9B94(void) {
}




void ov73_021E9B9C(void) {
}




void ov73_021E9BB4(void) {
}




void ov73_021E9BD4(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9C04(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0xd;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E9C30(void) {
    *((u32*)sp) = r1;
}




void ov73_021E9C60(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0x1d;
    *((u32*)(r4 + 0x1c)) = 0x29;
    *((u32*)(*((u32*)r4) + 0x20)) = 1;
}




void ov73_021E9C8C(void) {
    *((u32*)sp) = r1;
}




u32 ov73_021E9CBC(void) {
}




void ov73_021E9CD8(void) {
    *((u32*)sp) = r1;
    *((u32*)(r4 + r0)) = r1;
}




u8 ov73_021E9D10(void) {
}




void ov73_021E9D14(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r0;
    *((u32*)(sp + 8)) = r0;
}




void ov73_021E9D44(void) {
    ov73_021E83D4(*((u32*)(r0 + 0x000012C8)));
    *((u32*)(r4 + 0x1c)) = 0;
    *((u32*)(r4 + 0x1c)) = 0x29;
}




void ov73_021E9D6C(void) {
    *((u32*)sp) = ((s32)((r0 + r0)) >> 0x10);
}




void ov73_021E9DE0(void) {
    // ldrsh r2, [r4, r1]
    // add r2, pc
    // add pc, r2
    // sub r1, #0x81
    *((u32*)sp) = r1;
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // sub r1, #0x81
    *((u32*)sp) = r1;
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r1, [r4, r0]
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
}




void ov73_021E9EAC(void) {
}




void ov73_021E9ECC(void) {
    *((u32*)(r4 + r0)) = r1;
}




void ov73_021E9F00(void) {
    *((u32*)(r4 + r1)) = r0;
}




void ov73_021E9F34(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r4;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(r5 + (r1 + 0x10))) = (r5 + (r5 + (r5 + r0)));
}




void ov73_021E9F9C(void) {
    // neg r0, r0
    // neg r2, r2
}




void ov73_021E9FC8(void) {
}




void ov73_021E9FF8(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r4;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(r5 + r1)) = (r5 + (r5 + (r5 + r0)));
}




void ov73_021EA050(void) {
    // sub r1, r1, r0
    // sub r2, r1, r0
}




void ov73_021EA088(void) {
    *((u32*)sp) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x24));
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = r1;
}




void ov73_021EA0BC(void) {
    *((u32*)sp) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 4)) = *((u32*)(sp + 0x24));
    *((u32*)sp) = r4;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = *((u32*)(sp + 0x24));
    *((u32*)(sp + 0xc)) = r1;
}




void ov73_021EA0F0(void) {
    *((u32*)sp) = r0;
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r0;
}




void ov73_021EA12C(void) {
}




void ov73_021EA134(void) {
    Sprite_SetDrawFlag(*((u32*)(r0 + (0xdd << 4))), r2);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x00000DD4)), r4);
}




void ov73_021EA15C(void) {
    *((u32*)(r4 + r1)) = (r4 + r0);
}




void ov73_021EA180(void) {
}




void ov73_021EA19C(void) {
    *((u32*)sp) = r3;
    *((u32*)(sp + 4)) = r3;
    *((u32*)(sp + 8)) = r3;
    *((u32*)(r5 + (r1 + 0x20))) = (r5 + (r5 + (r5 + r0)));
}




void ov73_021EA218(void) {
    *((u32*)sp) = ~(r0);
    *((u32*)(sp + 4)) = ~(r0);
}




void ov73_021EA25C(void) {
}




void ov73_021EA268(void) {
}




void ov73_021EA290(void) {
}




void ov73_021EA2A8(void) {
}




void ov73_021EA2B4(void) {
}




void ov73_021EA2E0(void) {
}




void ov73_021EA2FC(void) {
    *((u32*)sp) = r1;
}




void ov73_021EA31C(void) {
}




void ov73_021EA324(void) {
    *((u32*)sp) = r0;
}




void ov73_021EA348(void) {
}




void ov73_021EA370(void) {
}




void ov73_021EA374(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 8)) = r0;
    // blx r1
    // blx r3
    // sub r6, r6, r4
    *((u32*)(sp + 4)) = (*((u32*)(sp + 4)) + r4);
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
}




void ov73_021EA3D0(void) {
    *((u32*)sp) = r0;
    *((u32*)(sp + 4)) = r1;
    *((u32*)(sp + 0x14)) = r0;
    *((u32*)(sp + 0x50)) = r0;
    *((u32*)(sp + 0x54)) = *((u32*)sp);
    *((u32*)(sp + 0x5c)) = *((u32*)sp);
    *((u32*)(sp + 0x58)) = *((u32*)sp);
    *((u32*)(sp + 0x60)) = (sp + 0x3c);
    *((u32*)(sp + 0x64)) = (sp + 0x28);
    *((u32*)(sp + 0x1c)) = r5;
    *((u32*)(sp + 0x20)) = r5;
    *((u32*)(sp + 0x24)) = r5;
    // blx r1
    *((u32*)(sp + 0x1c)) = (*((u32*)(sp + 0x1c)) + *((u32*)sp));
    // blx r1
    *((u32*)(sp + 0x20)) = (*((u32*)(sp + 0x20)) + *((u32*)sp));
    // blx r1
    *((u32*)(sp + 0x24)) = (*((u32*)(sp + 0x24)) + *((u32*)sp));
    *((u32*)(sp + 8)) = (*((u32*)(sp + 0x24)) + *((u32*)sp));
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x24)) + *((u32*)sp));
    *((u32*)(sp + 0xc)) = (sp + 0x1c);
    // blx r1
    *((u32*)(sp + 0x18)) = *((u32*)sp);
    *((u32*)(*((u32*)(sp + 0x60)) + r5)) = (*((u32*)(sp + 4)) + r7);
    *((u32*)(*((u32*)(sp + 0x60)) + r5)) = *((u32*)(sp + 0x60));
    // sub r0, #0x1c
    *((u32*)(*((u32*)(sp + 0x64)) + r5)) = (*((u32*)(sp + 4)) + *((u32*)(sp + 0xc)));
    *((u32*)(*((u32*)(sp + 0x64)) + r5)) = *((u32*)(sp + 0x64));
    // blx r1
    // sub r0, r1, r0
    *((u32*)(sp + 0x14)) = *((u32*)(sp + 0x18));
    *((u32*)(sp + 0x10)) = (*((u32*)(sp + 0x10)) + 0xc);
    *((u32*)(sp + 0xc)) = *((u32*)(sp + 0xc));
    *((u32*)(sp + 8)) = *((u32*)(sp + 8));
}



