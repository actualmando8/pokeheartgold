/* Decompiled from asm/overlay_93_arm.s */
#include "global.h"

void ov93_0225EE98(void) {
    // stmdb sp!, {r4, r5, r6, lr}
    // add r3, sp, #0
    // smull r1, r0, r5, r5
    // umull ip, r2, r5, r1
    // mla r2, r5, r0, r2
    // umull lr, r0, r5, ip
    // mla r2, r4, r1, r2
    // mla r0, r5, r2, r0
    // mla r0, r4, ip, r0
    // mov r1, lr, lsr #0x18
    // strb r1, [r3, r6]
    // and r6, r0, #0xff
    // mov ip, #0xff
    // add r1, sp, #0
    // strb ip, [r3, #0x7f]
    // ldmia sp!, {r4, r5, r6, pc}
}




void ov93_0225EF0C(void) {
    // stmdb sp!, {r4, lr}
    // mov lr, #0
    // mov r4, lr
    // mov ip, lr
    // add r3, r0, lr, lsl #5
    // str ip, [r3, #0xc]
    // str ip, [r3, #0x14]
    // add lr, lr, #1
    // ldmia sp!, {r4, pc}
}




void ov93_0225EF5C(void) {
    // stmdb sp!, {r4, lr}
    // mov lr, #0
    // mov r4, lr
    // mov ip, lr
    // add r3, r0, lr, lsl #5
    // str ip, [r3, #0x10c]
    // str ip, [r3, #0x114]
    // add lr, lr, #1
    // ldmia sp!, {r4, pc}
}




void ov93_0225EFAC(void) {
    // stmdb sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}
    // mov sb, #0
    // mov sl, r0
    // mov r4, sb
    // add r8, sp, #2
    // add r7, sp, #0
    // mov fp, sb
    // mov r5, sb
    // str r0, [sp, #0x44]
    // add r1, sp, #0x44
    NNS_G3dGeBufferOP_N(0x40, 1);
    // add r1, sl, sb, lsl #5
    ov93_0225F268(*((u32*)(r1 + 0xc)), *((u32*)(r1 + 0x10)), r8, r7);
    // add r1, sl, sb, lsl #5
    // str r0, [sp, #0x40]
    // add r1, sp, #0x40
    NNS_G3dGeBufferOP_N(0x22, *((u32*)(r1 + 0x110)), 1);
    // add r1, sp, #0x3c
    // str r6, [sp, #0x3c]
    NNS_G3dGeBufferOP_N(0x21, 1);
    // ldrh r3, [sp, #2]
    // ldrh r2, [sp]
    // add r1, sp, #0x34
    // str r2, [sp, #0x34]
    // str r5, [sp, #0x38]
    NNS_G3dGeBufferOP_N(0x23, 2);
    // add r1, sl, sb, lsl #5
    ov93_0225F268(*((u32*)(r1 + 0x14)), *((u32*)(r1 + 0x18)), r8, r7);
    // add r1, sl, sb, lsl #5
    // str r0, [sp, #0x30]
    // add r1, sp, #0x30
    NNS_G3dGeBufferOP_N(0x22, *((u32*)(r1 + 0x118)), 1);
    // add r1, sp, #0x2c
    // str r6, [sp, #0x2c]
    NNS_G3dGeBufferOP_N(0x21, 1);
    // ldrh r3, [sp, #2]
    // ldrh r2, [sp]
    // add r1, sp, #0x24
    // str r2, [sp, #0x24]
    // str r4, [sp, #0x28]
    NNS_G3dGeBufferOP_N(0x23, 2);
    // add r1, sl, sb, lsl #5
    ov93_0225F268(*((u32*)(r1 + 0x24)), *((u32*)(r1 + 0x28)), r8, r7);
    // add r1, sl, sb, lsl #5
    // str r0, [sp, #0x20]
    // add r1, sp, #0x20
    NNS_G3dGeBufferOP_N(0x22, *((u32*)(r1 + 0x128)), 1);
    // add r1, sp, #0x1c
    // str r6, [sp, #0x1c]
    NNS_G3dGeBufferOP_N(0x21, 1);
    // ldrh r3, [sp, #2]
    // ldrh r2, [sp]
    // add r1, sp, #0x14
    // str r2, [sp, #0x14]
    // str fp, [sp, #0x18]
    NNS_G3dGeBufferOP_N(0x23, 2);
    // add r1, sl, sb, lsl #5
    ov93_0225F268(*((u32*)(r1 + 0x1c)), *((u32*)(r1 + 0x20)), r8, r7);
    // add r1, sl, sb, lsl #5
    // str r0, [sp, #0x10]
    // add r1, sp, #0x10
    NNS_G3dGeBufferOP_N(0x22, *((u32*)(r1 + 0x120)), 1);
    // add r1, sp, #0xc
    // str r6, [sp, #0xc]
    NNS_G3dGeBufferOP_N(0x21, 1);
    // str r0, [sp, #8]
    // ldrh r3, [sp, #2]
    // ldrh r2, [sp]
    // add r1, sp, #4
    // str r2, [sp, #4]
    NNS_G3dGeBufferOP_N(0x23, 2);
    NNS_G3dGeBufferOP_N(0x41, 0, 0);
    // add sb, sb, #1
    // ldmia sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
}




void ov93_0225F268(void) {
    // stmdb sp!, {r3, r4, r5, r6, r7, lr}
    _ll_sdiv(r0, (r0 | r0), 0x80000, 0);
    _ll_sdiv(r5, (r5 | r5), 0x80000, 0);
    GF_AssertFail(0x00007FFF);
    // rsb r0, r0, #0
    GF_AssertFail(0x8000);
    GF_AssertFail(0x00007FFF);
    // rsb r0, r0, #0
    GF_AssertFail(0x8000);
    GF_AssertFail(0x00007FFF, (r4 - 0x800));
    // rsb r0, r0, #0
    GF_AssertFail(0x8000, (r4 - 0x800));
    GF_AssertFail(0x00007FFF, r5);
    // rsb r0, r0, #0
    GF_AssertFail(0x8000, r5);
    // strh r0, [r7]
    // strh r0, [r6]
    // ldmia sp!, {r3, r4, r5, r6, r7, pc}
}




u8 ov93_0225F370(void) {
    // stmdb sp!, {r3, r4, r5, lr}
    // ldrne r1, [r4, #0x218]
    // cmpne r1, #0
    // moveq r0, #0
    // ldmeqia sp!, {r3, r4, r5, pc}
    // ldrb lr, [r3, r2, lsl #2]
    // ldrb r3, [r1, r2, lsl #2]
    // ldr ip, [r4, #0x20c]
    // add r1, lr, r5, asr #12
    // ldrb r3, [r3, r2, lsl #2]
    // ldr ip, [r4, #0x210]
    // ldrb r2, [r3, r2, lsl #2]
    // ldmia sp!, {r3, r4, r5, pc}
    *((u32*)(r0 + 0x238)) = 1;
    *((u32*)(r0 + 0x224)) = *((u32*)(r0 + 0x20c));
    *((u32*)(r0 + 0x228)) = *((u32*)(r0 + 0x210));
    // sub r1, r2, r1
    *((u32*)(r0 + 0x22c)) = ov93_02262C05;
    // sub r1, r1, r2
    // add r1, r1, r1, lsr #31
    // add r1, r2, r1, asr #1
    // rsb r1, r1, #0
    *((u32*)(r0 + 0x230)) = *((u32*)(r0 + 0x10));
    ov93_0225F9AC(0, *((u32*)(r0 + 0x10)), *((u32*)(r0 + 0x20)), ov93_02262C08);
    *((u32*)(r4 + 0x240)) = r0;
    // ldmia sp!, {r3, r4, r5, pc}
}




u8 ov93_0225F44C(void) {
    // stmdb sp!, {r3, r4, r5, lr}
    // movlt r0, r4
    // strltb r4, [r5, #0x274]
    // ldmltia sp!, {r3, r4, r5, pc}
    // streqb r4, [r5, #0x274]
    // moveq r0, #1
    // ldmeqia sp!, {r3, r4, r5, pc}
    IsSEPlaying(0x0000058F, *((u32*)(r0 + 0x210)), *((u32*)(r0 + 0x23c)));
    PlaySE(0x0000058F);
    *((u8*)(r5 + 0x274)) = 1;
    // ldr ip, [r5, #0x210]
    // ldrb r0, [r0, r1, lsl #2]
    // sub r1, ip, r3
    // str ip, [r5, #0x23c]
    // add r0, r2, r0, lsl #12
    // rsb r2, r0, r1, lsl #12
    // rsb r2, r0, #0
    ov93_0225F548(r5, 1, *((u32*)(r5 + 0x230)), *((u32*)(r5 + 0x22c)));
    // cmpne r0, #2
    ov93_0225EB38(r5);
    // sub r1, r1, r2
    // add r1, r1, r1, lsr #31
    // add r1, r2, r1, asr #1
    // rsb r1, r1, #0
    *((u32*)(r5 + 0x230)) = *((u32*)(r5 + 0x10));
    // ldmia sp!, {r3, r4, r5, pc}
}




u8 ov93_0225F548(void) {
    // stmdb sp!, {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    // rsb r6, r5, #0
    // rsb r7, r3, #0
    // sub r3, r6, r7
    // add r3, r3, r3, lsr #31
    // mov sb, r1
    // add r8, r7, r3, asr #1
    // str r2, [sp, #8]
    ov93_0225F8AC(0, *((u32*)(r0 + 0x20)));
    // add r1, r6, r5
    // add r0, r7, r5
    // str r1, [sp, #0x10]
    // str r0, [sp, #0xc]
    // add r0, sp, #0x10
    // str r0, [sp]
    // add sl, sp, #0xc
    // str sl, [sp, #4]
    ov93_0225F8E4(r4, r5, r6, r7);
    // str r0, [sp, #8]
    // add r0, sp, #0xc
    // str r0, [sp]
    // add sl, sp, #0x10
    // str sl, [sp, #4]
    ov93_0225F8E4(r4, r5, r7, r6);
    // str r0, [sp, #8]
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x10]
    // sub r0, r2, r1
    // add r0, r0, r0, lsr #31
    // add r5, r1, r0, asr #1
    // cmpeq r6, r2
    // cmpeq r7, r1
    // addeq sp, sp, #0x14
    // moveq r0, #0
    // ldmeqia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, pc}
    // movlt r5, #0
    // movlt r0, #0
    // strlt r0, [sp, #0x10]
    // movlt r0, #0
    // strlt r0, [sp, #0xc]
    // movgt r0, #1
    // strgt r0, [sp, #8]
    // ldr r0, [sp, #0x10]
    // movgt r5, #0x64000
    // str r0, [sp, #0x10]
    // str r0, [sp, #8]
    // ldr r0, [sp, #0xc]
    // str r0, [sp, #0xc]
    // str r0, [sp, #8]
    // mov r1, sb
    ov93_0225F8AC(r4);
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    FX_Atan2Idx(0x40000);
    // mov fp, r1, lsr #0x10
    // ldr r0, [sp, #0xc]
    // sub r0, r0, r5
    FX_Atan2Idx(0x40000);
    // mov fp, r1, lsr #0x10
    // ldr r0, [sp, #0x10]
    // sub r0, r0, r5
    // rsb r1, r1, #0
    FX_Atan2Idx(0x40000);
    // mov fp, r0
    // add r0, fp, #0x8000
    // mov r1, fp, asr #4
    // ldrsh r3, [r1, r2]
    *((u32*)(r4 + 0xc)) = r3;
    // ldrsh r7, [r1, r2]
    // add r7, r5, r7, lsl #6
    // rsb r7, r7, #0
    *((u32*)(r4 + 0x10)) = r1;
    // ldrsh r7, [r1, r2]
    // rsb r3, r5, #0x70000
    *((u32*)(r4 + 0x1c)) = r1;
    // ldrsh r6, [r1, r6]
    // smull r1, lr, r2, r3
    // add r1, r5, r6, lsl #6
    // rsb r6, r1, #0
    // add lr, r3, lr
    *((u32*)(r4 + 0x20)) = r0;
    // add lr, r1, lr, asr #2
    // smullls r1, r6, r2, r0
    // addls r6, r0, r6
    // movls r1, r0, lsr #0x1f
    // rsb r1, r0, #0x10000
    // rsb r3, r1, #0
    // smull r1, r6, r2, r3
    // add r6, r3, r6
    // add r6, r1, r6, asr #2
    // mov r8, lr
    // mov ip, #1
    // sub r1, fp, r7
    // add r2, r3, r1, lsl #1
    // ldrsh sb, [r2, #2]
    // sub r2, r0, r7
    // mov sb, sb, lsl #6
    // add sl, sb, #0x40000
    // mov sb, r2, lsl #1
    // add r2, r4, ip, lsl #5
    // str sl, [r2, #0xc]
    // ldrsh r1, [r3, r1]
    // mov sl, sb, lsl #1
    // add sb, r3, sb, lsl #1
    // add r1, r5, r1, lsl #6
    // add r1, r8, r1
    // rsb r1, r1, #0
    *((u32*)(0x92492493 + 0x10)) = r3;
    // ldrsh r1, [sb, #2]
    // add r7, r7, r6
    // add ip, ip, #1
    *((u32*)(0x92492493 + 0x1c)) = r3;
    // ldrsh r1, [r3, sl]
    // add r1, r5, r1, lsl #6
    // add r1, r8, r1
    // rsb r1, r1, #0
    *((u32*)(0x92492493 + 0x20)) = r3;
    // add r8, r8, lr
    // str r1, [r2, #-0xc]
    // str r1, [r2, #-8]
    *((u32*)(0x92492493 + 4)) = *((u32*)(0x92492493 + 0x1c));
    *((u32*)(0x92492493 + 8)) = *((u32*)(0x92492493 + 0x20));
    // ldr r0, [sp, #8]
    // moveq r0, #2
    // movne r0, #0
    // ldmia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, pc}
}




void ov93_0225F8AC(void) {
}




void ov93_0225F8E4(void) {
    // stmdb sp!, {r4, lr}
    // ldr lr, [sp, #8]
    // add r4, r2, r1
    // subgt r0, r4, #0x64000
    // subgt r1, r1, r0
    // movgt r0, #1
    // ldr ip, [sp, #0xc]
    // str r2, [lr]
    // str r3, [ip]
    // add r4, r2, r1
    // str r4, [lr]
    // strgt r3, [ip]
    // ldmgtia sp!, {r4, pc}
    // ldr lr, _0225F948 ; =0x51EB851F
    // smull r2, r4, lr, r2
    // add r4, r1, r4, asr #5
    // sub r1, r3, r4
    // str r1, [ip]
    // ldmia sp!, {r4, pc}
}




void ov93_0225F94C(void) {
    // stmdb sp!, {r3, r4, r5, lr}
    // sub r1, r1, r5
    // add r1, r1, r1, lsr #31
    // ldr lr, [r0, #0xc]
    // ldr ip, [r0, #0xe4]
    // add r0, r5, r1, asr #1
    // sub r0, r2, r0
    // sub r2, r4, lr
    // sub r1, ip, r3
    // add r1, r2, r1
    // rsb r0, r0, #0
    // smull r2, r0, r1, r0
    // adds r1, r2, #0x800
    // adc r0, r0, #0
    // add r0, r1, r1, lsr #31
    // ldmia sp!, {r3, r4, r5, pc}
}




void ov93_0225F9AC(void) {
}




void ov93_0225F9D8(void) {
    // stmdb sp!, {r3, r4, r5, lr}
    NARC_New(0xc9, 0x75);
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // str r0, [sp, #0x14]
    SpriteSystem_LoadPaletteBufferFromOpenNarc(*((u32*)(r5 + 0x8c)), 2, *((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)));
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    SpriteSystem_LoadCharResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x37);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadCellResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x39);
    // str r0, [sp]
    // str r0, [sp, #4]
    SpriteSystem_LoadAnimResObjFromOpenNarc(*((u32*)(r5 + 0x24)), *((u32*)(r5 + 0x28)), r4, 0x38);
    NARC_Delete(r4);
    // ldmia sp!, {r3, r4, r5, pc}
}




void ov93_0225FABC(void) {
    // stmdb sp!, {r4, lr}
    SpriteManager_UnloadCharObjById(*((u32*)(r0 + 0x28)), 0x00002713);
    SpriteManager_UnloadCellObjById(*((u32*)(r4 + 0x28)), 0x00002713);
    SpriteManager_UnloadAnimObjById(*((u32*)(r4 + 0x28)), 0x00002713);
    SpriteManager_UnloadPlttObjById(*((u32*)(r4 + 0x28)), 0x00002715);
    // ldmia sp!, {r4, pc}
}




void * ov93_0225FB00(void) {
    // stmdb sp!, {r4, r5, lr}
    // ldr lr, _0225FB68 ; =ov93_02262C38
    // ldmia lr!, {r0, r1, r2, r3}
    // add ip, sp, #0
    // mov r4, ip
    // stmia ip!, {r0, r1, r2, r3}
    // ldmia lr!, {r0, r1, r2, r3}
    // stmia ip!, {r0, r1, r2, r3}
    // ldmia lr!, {r0, r1, r2, r3}
    // stmia ip!, {r0, r1, r2, r3}
    // ldr r0, [lr]
    // str r0, [ip]
    SpriteSystem_NewSprite(*((u32*)(r0 + 0x24)), *((u32*)(r0 + 0x28)), r4);
    ManagedSprite_SetDrawFlag(0);
    Sprite_TickFrame(*((u32*)r4));
    // ldmia sp!, {r4, r5, pc}
}




void ov93_0225FB6C(void) {
    // stmdb sp!, {r4, r5, r6, lr}
    // moveq r4, #0
    ov93_0225F8AC(0, *((u32*)(r0 + 0x238)));
    // ldrb r0, [r0, r1, lsl #2]
    // add r0, r0, r2, asr #12
    ManagedSprite_SetPositionXYWithSubscreenOffset(r5, *((u32*)(r6 + 0x21c)), ov93_02262C07, 0x160000);
    ManagedSprite_SetAnim(r5, r4);
    Sprite_TickFrame(*((u32*)r5));
    // ldmia sp!, {r4, r5, r6, pc}
}




void ov93_0225FBE4(void) {
}



