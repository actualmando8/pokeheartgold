/* Decompiled from asm/overlay_05.s */
#include "global.h"

void ov05_0221BA00(void) {
    /* Original at 0x0221BA00 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0221BA5C ; =ov05_0221BA70\n    ldr r1, _0221BA60 ; =0x00000BD4\n    ldr r3, [r5, #0x24]\n    mov r2, #0x64\n    bl CreateSysTaskAndEnvironment\n    bl SysTask_GetData\n    ldr r2, _0221BA60 ; =0x00000BD4\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    ldr r0, _0221BA64 ; =0x00000B7F\n    str r5, [r4]\n    mov r1, #0\n    strb r1, [r4, r0]\n    bl sub_020304B4\n    ldr r1, _0221BA68 ; =0x00000BC8\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    cmp r0, #1\n    bne _0221BA58\n    ldr r0, [r4]\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0221BA58\n    mov r0, #7\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    beq _0221BA58\n    bl Save_Bag_Get\n    ldr r1, _0221BA6C ; =0x000001D1\n    ldr r3, [r5, #0x24]\n    mov r2, #1\n    bl Bag_HasItem\n    ldr r1, _0221BA68 ; =0x00000BC8\n    str r0, [r4, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _0221BA5C: .word ov05_0221BA70\n    _0221BA60: .word 0x00000BD4\n    _0221BA64: .word 0x00000B7F\n    _0221BA68: .word 0x00000BC8\n    _0221BA6C: .word 0x000001D1"
    );
    #endif
}

void ov05_0221BA70(void) {
    /* Original at 0x0221BA70 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    ldr r2, _0221BAF8 ; =0x00000B7F\n    add r5, r1, #0\n    ldrb r2, [r5, r2]\n    cmp r2, #0\n    beq _0221BA86\n    cmp r2, #1\n    beq _0221BA92\n    cmp r2, #2\n    beq _0221BAC4\n    b _0221BACC\n    add r0, r5, #0\n    bl ov05_0221BD28\n    ldr r1, _0221BAF8 ; =0x00000B7F\n    strb r0, [r5, r1]\n    b _0221BACC\n    mov r4, #0x2e\n    lsl r4, r4, #6\n    add r6, r4, #0\n    ldrb r1, [r5, r6]\n    ldr r2, [r5, #4]\n    add r0, r5, #0\n    lsl r1, r1, #2\n    ldr r1, [r2, r1]\n    blx r1\n    cmp r0, #0\n    beq _0221BAAE\n    ldrb r1, [r5, r4]\n    add r1, r1, #1\n    strb r1, [r5, r4]\n    cmp r0, #2\n    beq _0221BA98\n    ldr r0, [r5]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #2\n    bne _0221BACC\n    add r0, r5, #0\n    bl ov05_0221BB30\n    b _0221BACC\n    bl ov05_0221CC74\n    cmp r0, #1\n    beq _0221BAF6\n    mov r0, #0x2e\n    lsl r0, r0, #6\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    beq _0221BAE6\n    add r0, r5, #0\n    bl ov05_0221CE50\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl SpriteSystem_DrawSprites\n    ldr r0, [r5]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0221BAF6\n    ldr r0, _0221BAFC ; =0x04000540\n    mov r1, #1\n    str r1, [r0]\n    pop {r4, r5, r6, pc}\n    _0221BAF8: .word 0x00000B7F\n    _0221BAFC: .word 0x04000540"
    );
    #endif
}

void ov05_0221BB00(void) {
    /* Original at 0x0221BB00 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x28\n    ldr r4, _0221BB2C ; =ov05_0221EC00\n    add r3, sp, #0\n    mov r2, #5\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    sub r2, r2, #1\n    bne _0221BB0A\n    add r0, sp, #0\n    bl GfGfx_SetBanks\n    mov r1, #6\n    mov r2, #2\n    mov r0, #0\n    lsl r1, r1, #0x18\n    lsl r2, r2, #0x12\n    bl MIi_CpuClear32\n    add sp, #0x28\n    pop {r4, pc}\n    nop\n    _0221BB2C: .word ov05_0221EC00"
    );
    #endif
}

void ov05_0221BB30(void) {
    /* Original at 0x0221BB30 */
    /* Requires manual decompilation - 217 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov05_0221E9F8\n    cmp r0, #0\n    bne _0221BB40\n    b _0221BD08\n    ldr r2, _0221BD0C ; =0x00000BBC\n    ldr r0, [r4, r2]\n    cmp r0, #8\n    bhi _0221BBBA\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221BB54: ; jump table\n    add r0, r4, #0\n    bl ov05_0221E9C4\n    ldr r2, _0221BD10 ; =0x00000BAC\n    mov r1, #0\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221BD14 ; =0x00000B88\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x2c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221BD18 ; =0x00000BB8\n    str r0, [r4, r1]\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #2\n    add sp, #0xc\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    add r0, r2, #0\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0221BBBA\n    ldr r0, _0221BD1C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _0221BBBC\n    b _0221BD08\n    mov r0, #3\n    add sp, #0xc\n    str r0, [r4, r2]\n    pop {r3, r4, pc}\n    add r0, r2, #0\n    add r0, #0x10\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _0221BBE0\n    add r0, r2, #0\n    sub r0, #0x10\n    sub r2, #8\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    mov r1, #2\n    bl ReadMsgDataIntoString\n    b _0221BBF0\n    add r0, r2, #0\n    sub r0, #0x10\n    sub r2, #8\n    ldr r0, [r4, r0]\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl ReadMsgDataIntoString\n    mov r0, #0xd8\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, _0221BD20 ; =0x00000B98\n    mov r2, #0\n    add r0, r4, r0\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    ldr r0, _0221BD20 ; =0x00000B98\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #1\n    mov r3, #0xf\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221BD20 ; =0x00000B98\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x1c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221BD18 ; =0x00000BB8\n    mov r2, #0x1f\n    str r0, [r4, r1]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4]\n    ldr r1, _0221BD24 ; =ov05_0221EA58\n    ldr r0, [r0, #0x24]\n    mov r3, #0xe\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    bl CreateYesNoMenu\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #4\n    add sp, #0xc\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    ldr r1, [r4]\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r1, #0x24]\n    bl Handle2dMenuInput_DeleteOnFinish\n    cmp r0, #0\n    beq _0221BC78\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _0221BC88\n    add sp, #0xc\n    pop {r3, r4, pc}\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #5\n    str r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #4\n    add sp, #0xc\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r1, #0\n    add r0, r0, #4\n    add sp, #0xc\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    bl ov05_0221E9C4\n    ldr r2, _0221BD10 ; =0x00000BAC\n    mov r1, #5\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221BD14 ; =0x00000B88\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x2c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221BD18 ; =0x00000BB8\n    str r0, [r4, r1]\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #6\n    add sp, #0xc\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0221BCF0\n    ldr r1, [r4]\n    ldr r1, [r1, #0x24]\n    bl Clear2dMenuWindowAndDelete\n    mov r0, #0x2f\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    ldr r0, _0221BD14 ; =0x00000B88\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _0221BD0C ; =0x00000BBC\n    mov r1, #8\n    str r1, [r4, r0]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0221BD0C: .word 0x00000BBC\n    _0221BD10: .word 0x00000BAC\n    _0221BD14: .word 0x00000B88\n    _0221BD18: .word 0x00000BB8\n    _0221BD1C: .word gSystem\n    _0221BD20: .word 0x00000B98\n    _0221BD24: .word ov05_0221EA58"
    );
    #endif
}

void ov05_0221BD28(void) {
    /* Original at 0x0221BD28 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221BDE0 ; =0x04000050\n    add r4, r0, #0\n    mov r0, #0\n    strh r0, [r1]\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r1, #1\n    lsl r1, r1, #0x1a\n    ldr r0, [r1]\n    ldr r2, _0221BDE4 ; =0xFFFFE0FF\n    ldr r5, _0221BDE8 ; =0x04000304\n    and r0, r2\n    str r0, [r1]\n    ldr r0, _0221BDEC ; =0x04001000\n    add r1, #0x50\n    ldr r3, [r0]\n    and r2, r3\n    str r2, [r0]\n    ldrh r3, [r5]\n    lsr r2, r5, #0xb\n    add r0, #0x50\n    orr r2, r3\n    strh r2, [r5]\n    mov r2, #0\n    strh r2, [r1]\n    strh r2, [r0]\n    bl ov05_0221BB00\n    ldr r0, [r4]\n    ldr r0, [r0, #0x24]\n    bl BgConfig_Alloc\n    str r0, [r4, #0xc]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x24]\n    bl PaletteData_Init\n    str r0, [r4, #8]\n    ldr r3, [r4]\n    mov r1, #0\n    ldr r3, [r3, #0x24]\n    lsr r2, r5, #0x11\n    bl PaletteData_AllocBuffers\n    mov r0, #4\n    mov r1, #0\n    bl BG_SetMaskColor\n    ldr r0, _0221BDF0 ; =0x00000B82\n    mov r3, #0\n    strb r3, [r4, r0]\n    sub r1, r0, #1\n    mov r2, #8\n    strb r2, [r4, r1]\n    sub r0, r0, #2\n    strb r3, [r4, r0]\n    ldr r1, [r4]\n    add r0, r1, #0\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0221BDBE\n    cmp r0, #1\n    beq _0221BDC4\n    cmp r0, #2\n    beq _0221BDCA\n    b _0221BDDC\n    ldr r0, _0221BDF4 ; =ov05_0221EAC0\n    str r0, [r4, #4]\n    b _0221BDDC\n    ldr r0, _0221BDF8 ; =ov05_0221EA98\n    str r0, [r4, #4]\n    b _0221BDDC\n    add r1, #0x2a\n    ldrb r0, [r1]\n    cmp r0, #3\n    bne _0221BDD8\n    ldr r0, _0221BDFC ; =ov05_0221EC28\n    str r0, [r4, #4]\n    b _0221BDDC\n    ldr r0, _0221BE00 ; =ov05_0221EC98\n    str r0, [r4, #4]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _0221BDE0: .word 0x04000050\n    _0221BDE4: .word 0xFFFFE0FF\n    _0221BDE8: .word 0x04000304\n    _0221BDEC: .word 0x04001000\n    _0221BDF0: .word 0x00000B82\n    _0221BDF4: .word ov05_0221EAC0\n    _0221BDF8: .word ov05_0221EA98\n    _0221BDFC: .word ov05_0221EC28\n    _0221BE00: .word ov05_0221EC98"
    );
    #endif
}

void ov05_0221BE04(void) {
    /* Original at 0x0221BE04 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0221BE78 ; =0x00000B82\n    add r4, r0, #0\n    ldrb r2, [r4, r1]\n    cmp r2, #0\n    beq _0221BE1A\n    cmp r2, #1\n    beq _0221BE26\n    cmp r2, #2\n    beq _0221BE32\n    b _0221BE6C\n    bl ov05_0221DB94\n    add r0, r4, #0\n    bl ov05_0221DC60\n    b _0221BE6C\n    bl ov05_0221E07C\n    add r0, r4, #0\n    bl ov05_0221E274\n    b _0221BE6C\n    mov r2, #0\n    strb r2, [r4, r1]\n    mov r2, #0x20\n    sub r1, r1, #1\n    strb r2, [r4, r1]\n    bl ov05_0221DD08\n    add r0, r4, #0\n    bl ov05_0221E5E4\n    add r0, r4, #0\n    bl ov05_0221E944\n    add r0, r4, #0\n    bl ov05_0221DE38\n    bl sub_0203A880\n    ldr r1, [r4]\n    mov r0, #0\n    ldr r1, [r1, #0x24]\n    bl sub_020880CC\n    ldr r0, _0221BE7C ; =ov05_0221CE88\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _0221BE78 ; =0x00000B82\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    pop {r4, pc}\n    _0221BE78: .word 0x00000B82\n    _0221BE7C: .word ov05_0221CE88"
    );
    #endif
}

void ov05_0221BE80(void) {
    /* Original at 0x0221BE80 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0221BF00 ; =0x00000B82\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0221BE96\n    cmp r1, #1\n    beq _0221BEAA\n    cmp r1, #2\n    beq _0221BEC4\n    b _0221BEF2\n    mov r1, #1\n    mov r2, #0\n    bl ov05_0221CEB8\n    add r0, r4, #0\n    bl ov05_0221D094\n    bl ov05_0221D228\n    b _0221BEF2\n    mov r1, #0\n    add r2, r1, #0\n    bl ov05_0221D6C4\n    add r0, r4, #0\n    bl ov05_0221D240\n    bl sub_0203A880\n    add r0, r4, #0\n    bl ov05_0221D9F0\n    b _0221BEF2\n    ldr r1, [r4]\n    mov r0, #0\n    ldr r1, [r1, #0x24]\n    bl sub_020880CC\n    ldr r0, _0221BF04 ; =ov05_0221CE88\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    ldr r1, _0221BF00 ; =0x00000B82\n    mov r0, #0\n    strb r0, [r4, r1]\n    mov r2, #8\n    sub r0, r1, #6\n    strb r2, [r4, r0]\n    sub r0, r1, #5\n    mov r2, #4\n    strb r2, [r4, r0]\n    mov r0, #0x10\n    sub r1, #0xe\n    str r0, [r4, r1]\n    mov r0, #1\n    pop {r4, pc}\n    ldr r0, _0221BF00 ; =0x00000B82\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0221BF00: .word 0x00000B82\n    _0221BF04: .word ov05_0221CE88"
    );
    #endif
}

void ov05_0221BF08(void) {
    /* Original at 0x0221BF08 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _0221C000 ; =0x00000B82\n    add r5, r0, #0\n    ldrb r1, [r5, r1]\n    cmp r1, #0\n    beq _0221BF1E\n    cmp r1, #1\n    beq _0221BF7A\n    cmp r1, #2\n    beq _0221BF92\n    b _0221BFF2\n    mov r1, #0\n    mov r2, #1\n    bl ov05_0221CEB8\n    add r0, r5, #0\n    bl ov05_0221D094\n    add r0, r5, #0\n    bl ov05_0221D140\n    bl ov05_0221D228\n    ldr r2, [r5]\n    mov r0, #7\n    ldr r1, [r2]\n    lsl r0, r0, #6\n    ldr r0, [r1, r0]\n    ldr r1, [r2, #0x24]\n    add r2, sp, #0\n    mov r3, #0\n    bl sub_0202FD28\n    ldr r1, [sp]\n    ldr r0, _0221C004 ; =0x00000BCC\n    mov r4, #0\n    str r1, [r5, r0]\n    add r0, r0, #4\n    str r4, [r5, r0]\n    add r0, r4, #0\n    bl sub_02034818\n    cmp r0, #0\n    beq _0221BF72\n    bl PlayerProfile_GetVersion\n    cmp r0, #0\n    bne _0221BF72\n    mov r0, #0xbd\n    mov r1, #1\n    lsl r0, r0, #4\n    str r1, [r5, r0]\n    b _0221BFF2\n    add r4, r4, #1\n    cmp r4, #8\n    blt _0221BF56\n    b _0221BFF2\n    mov r1, #0x1f\n    mvn r1, r1\n    add r2, r1, #0\n    add r2, #0x10\n    bl ov05_0221D6C4\n    add r0, r5, #0\n    bl ov05_0221D7AC\n    bl sub_0203A880\n    b _0221BFF2\n    ldr r1, [r5]\n    mov r0, #0\n    ldr r1, [r1, #0x24]\n    bl sub_020880CC\n    ldr r0, _0221C008 ; =ov05_0221CE88\n    add r1, r5, #0\n    bl Main_SetVBlankIntrCB\n    ldr r2, _0221C000 ; =0x00000B82\n    mov r0, #0\n    strb r0, [r5, r2]\n    mov r3, #4\n    sub r1, r2, #6\n    strb r3, [r5, r1]\n    sub r1, r2, #5\n    mov r3, #2\n    strb r3, [r5, r1]\n    mov r1, #0xc\n    sub r2, #0xe\n    str r1, [r5, r2]\n    ldr r3, [r5]\n    ldr r2, _0221C00C ; =0x0000027E\n    ldr r3, [r3, #0x24]\n    mov r1, #0x1b\n    bl NewMsgDataFromNarc\n    ldr r1, _0221C010 ; =0x00000BAC\n    str r0, [r5, r1]\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl MessageFormat_New\n    mov r1, #0xbb\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r1, [r5]\n    mov r0, #5\n    ldr r1, [r1, #0x24]\n    lsl r0, r0, #6\n    bl String_New\n    ldr r1, _0221C014 ; =0x00000BB4\n    str r0, [r5, r1]\n    mov r0, #1\n    add r1, #8\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0221C000 ; =0x00000B82\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C000: .word 0x00000B82\n    _0221C004: .word 0x00000BCC\n    _0221C008: .word ov05_0221CE88\n    _0221C00C: .word 0x0000027E\n    _0221C010: .word 0x00000BAC\n    _0221C014: .word 0x00000BB4"
    );
    #endif
}

void ov05_0221C018(void) {
    /* Original at 0x0221C018 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0221C028\n    mov r0, #0\n    pop {r4, pc}\n    ldr r1, _0221C04C ; =0x00000B81\n    add r0, r1, #1\n    ldrb r2, [r4, r1]\n    ldrb r0, [r4, r0]\n    cmp r2, r0\n    bne _0221C03E\n    mov r2, #0\n    add r0, r1, #1\n    strb r2, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r1, #1\n    ldrb r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #1\n    strb r2, [r4, r0]\n    mov r0, #0\n    pop {r4, pc}\n    _0221C04C: .word 0x00000B81"
    );
    #endif
}

void ov05_0221C050(void) {
    /* Original at 0x0221C050 */
    /* Requires manual decompilation - 207 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl Bg_GetXpos\n    cmp r0, #0x18\n    bgt _0221C0EC\n    ldr r1, _0221C214 ; =0x00000B82\n    mov r2, #0\n    add r0, r1, #0\n    strb r2, [r4, r1]\n    sub r0, #0xa\n    strh r2, [r4, r0]\n    sub r1, #8\n    strh r2, [r4, r1]\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    mov r3, #0x18\n    bl ScheduleSetBgPosText\n    mov r2, #0\n    add r3, r2, #0\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    sub r3, #0x18\n    bl ScheduleSetBgPosText\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r4, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov05_0221D664\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    ldr r3, _0221C218 ; =0x00000B74\n    ldr r0, [r4, #0xc]\n    ldr r3, [r4, r3]\n    mov r1, #3\n    mov r2, #2\n    bl ScheduleSetBgPosText\n    ldr r3, _0221C218 ; =0x00000B74\n    ldr r0, [r4, #0xc]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    mov r2, #1\n    bl ScheduleSetBgPosText\n    ldr r3, _0221C214 ; =0x00000B82\n    mov r1, #0\n    ldrb r0, [r4, r3]\n    add r2, r3, #0\n    sub r2, #0xe\n    add r0, r0, #1\n    strb r0, [r4, r3]\n    ldr r5, [r4, r2]\n    ldrb r2, [r4, r3]\n    add r3, r5, #0\n    add r0, r4, #0\n    mul r3, r2\n    mov r2, #1\n    lsl r2, r2, #8\n    sub r2, r3, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #1\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #0\n    mul r5, r2\n    add r2, r1, #0\n    add r2, #0xff\n    sub r2, r5, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #2\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #0\n    mul r5, r2\n    add r2, r1, #0\n    add r2, #0xfe\n    sub r2, r2, r5\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #3\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #0\n    mul r5, r2\n    add r2, r1, #0\n    add r2, #0xfd\n    sub r2, r2, r5\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #0\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    mul r5, r2\n    mov r2, #1\n    lsl r2, r2, #8\n    sub r2, r5, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #1\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #0\n    mul r5, r2\n    add r2, r1, #0\n    add r2, #0xff\n    sub r2, r5, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C218 ; =0x00000B74\n    mov r1, #2\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    add r5, r3, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    mov r3, #0\n    mul r5, r2\n    add r2, r1, #0\n    add r2, #0xfe\n    sub r2, r2, r5\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C218 ; =0x00000B74\n    add r0, r4, #0\n    ldr r3, [r4, r2]\n    add r2, #0xe\n    ldrb r2, [r4, r2]\n    add r4, r3, #0\n    mov r1, #3\n    mul r4, r2\n    add r2, r1, #0\n    add r2, #0xfd\n    sub r2, r2, r4\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    mov r3, #0\n    bl ov05_0221D664\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    _0221C214: .word 0x00000B82\n    _0221C218: .word 0x00000B74"
    );
    #endif
}

void ov05_0221C21C(void) {
    /* Original at 0x0221C21C */
    /* Requires manual decompilation - 229 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl ov05_0221DAE0\n    cmp r0, #0\n    bne _0221C238\n    ldr r0, _0221C418 ; =0x00000B82\n    ldrb r1, [r5, r0]\n    cmp r1, #0x18\n    bls _0221C238\n    mov r1, #0\n    strb r1, [r5, r0]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    ldr r0, _0221C418 ; =0x00000B82\n    ldrb r0, [r5, r0]\n    cmp r0, #0\n    bne _0221C258\n    ldr r0, [r5]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221C252\n    ldr r0, _0221C41C ; =0x00000715\n    bl PlaySE\n    b _0221C258\n    ldr r0, _0221C420 ; =0x00000852\n    bl PlaySE\n    ldr r0, _0221C418 ; =0x00000B82\n    ldrb r1, [r5, r0]\n    cmp r1, #0x18\n    bne _0221C2F4\n    ldr r0, [r5, #0xc]\n    mov r1, #3\n    mov r2, #0\n    mov r3, #0x18\n    bl ScheduleSetBgPosText\n    mov r2, #0\n    add r3, r2, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    sub r3, #0x18\n    bl ScheduleSetBgPosText\n    mov r1, #3\n    ldr r0, [r5, #0xc]\n    add r2, r1, #0\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    mov r2, #3\n    mov r3, #0\n    bl ScheduleSetBgPosText\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov05_0221D3AC\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    add r3, r1, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #1\n    add r3, r2, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #2\n    add r3, r2, #0\n    bl ov05_0221D664\n    mov r2, #0\n    add r0, r5, #0\n    mov r1, #3\n    add r3, r2, #0\n    bl ov05_0221D664\n    b _0221C40C\n    blo _0221C2F8\n    b _0221C40C\n    sub r0, r0, #6\n    ldrsb r4, [r5, r0]\n    bl LCRandom\n    add r1, r4, #0\n    bl _s32_div_f\n    lsr r0, r4, #0x1f\n    add r0, r4, r0\n    asr r0, r0, #1\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    ldr r0, _0221C424 ; =0x00000B7D\n    ldrsb r4, [r5, r0]\n    bl LCRandom\n    add r1, r4, #0\n    bl _s32_div_f\n    lsr r0, r4, #0x1f\n    add r0, r4, r0\n    asr r0, r0, #1\n    sub r0, r1, r0\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    cmp r6, #0\n    bge _0221C338\n    ldr r0, _0221C428 ; =0x00000B78\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    blt _0221C344\n    cmp r6, #0\n    ble _0221C34E\n    ldr r0, _0221C428 ; =0x00000B78\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    ble _0221C34E\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r6\n    lsl r0, r0, #0x10\n    asr r6, r0, #0x10\n    cmp r4, #0\n    bge _0221C35A\n    ldr r0, _0221C42C ; =0x00000B7A\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    blt _0221C366\n    cmp r4, #0\n    ble _0221C370\n    ldr r0, _0221C42C ; =0x00000B7A\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    ble _0221C370\n    mov r0, #0\n    mvn r0, r0\n    mul r0, r4\n    lsl r0, r0, #0x10\n    asr r4, r0, #0x10\n    add r3, r6, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #3\n    mov r2, #0\n    add r3, #0x18\n    bl ScheduleSetBgPosText\n    add r3, r6, #0\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    mov r2, #0\n    sub r3, #0x18\n    bl ScheduleSetBgPosText\n    mov r1, #3\n    ldr r0, [r5, #0xc]\n    add r2, r1, #0\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    mov r2, #3\n    add r3, r4, #0\n    bl ScheduleSetBgPosText\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D3AC\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D3AC\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D3AC\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D3AC\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D664\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D664\n    add r0, r5, #0\n    mov r1, #2\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D664\n    add r0, r5, #0\n    mov r1, #3\n    add r2, r6, #0\n    add r3, r4, #0\n    bl ov05_0221D664\n    ldr r0, _0221C428 ; =0x00000B78\n    strh r6, [r5, r0]\n    add r0, r0, #2\n    strh r4, [r5, r0]\n    ldr r0, _0221C418 ; =0x00000B82\n    ldrb r1, [r5, r0]\n    add r1, r1, #1\n    strb r1, [r5, r0]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0221C418: .word 0x00000B82\n    _0221C41C: .word 0x00000715\n    _0221C420: .word 0x00000852\n    _0221C424: .word 0x00000B7D\n    _0221C428: .word 0x00000B78\n    _0221C42C: .word 0x00000B7A"
    );
    #endif
}

void ov05_0221C430(void) {
    /* Original at 0x0221C430 */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0221C548 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #8\n    bne _0221C458\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4]\n    ldr r3, _0221C54C ; =0x00007FFF\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0221C548 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #8\n    blo _0221C474\n    bl IsPaletteFadeFinished\n    cmp r0, #1\n    bne _0221C474\n    ldr r0, _0221C550 ; =0x00000B7F\n    mov r1, #2\n    strb r1, [r4, r0]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    ldr r0, _0221C548 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _0221C482\n    ldr r0, _0221C554 ; =0x00000719\n    bl PlaySE\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    mov r2, #1\n    mov r3, #0x10\n    bl ScheduleSetBgPosText\n    mov r1, #2\n    ldr r0, [r4, #0xc]\n    add r2, r1, #0\n    mov r3, #0x10\n    bl ScheduleSetBgPosText\n    ldr r2, _0221C548 ; =0x00000B82\n    mov r1, #0\n    ldrb r0, [r4, r2]\n    add r3, r1, #0\n    add r0, r0, #1\n    strb r0, [r4, r2]\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    lsl r2, r2, #4\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    mov r3, #0\n    lsl r2, r2, #4\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    mov r3, #0\n    lsl r2, r2, #0x14\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    mov r3, #0\n    lsl r2, r2, #0x14\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C548 ; =0x00000B82\n    mov r1, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    add r3, r1, #0\n    lsl r2, r2, #4\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    mov r3, #0\n    lsl r2, r2, #4\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    mov r3, #0\n    lsl r2, r2, #0x14\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C548 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    mov r3, #0\n    lsl r2, r2, #0x14\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0221C548: .word 0x00000B82\n    _0221C54C: .word 0x00007FFF\n    _0221C550: .word 0x00000B7F\n    _0221C554: .word 0x00000719"
    );
    #endif
}

void ov05_0221C558(void) {
    /* Original at 0x0221C558 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0221C564 ; =0x00000B81\n    mov r2, #0x10\n    strb r2, [r0, r1]\n    mov r0, #2\n    bx lr\n    nop\n    _0221C564: .word 0x00000B81"
    );
    #endif
}

void ov05_0221C568(void) {
    /* Original at 0x0221C568 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov05_0221CCF4\n    cmp r0, #1\n    ldr r0, [r4]\n    bne _0221C58C\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    ldr r0, _0221C5A4 ; =0x00000B7E\n    bne _0221C586\n    mov r1, #0\n    strb r1, [r4, r0]\n    b _0221C5A0\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0221C5A0\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    ldr r0, _0221C5A4 ; =0x00000B7E\n    bne _0221C59C\n    mov r1, #1\n    strb r1, [r4, r0]\n    b _0221C5A0\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #2\n    pop {r4, pc}\n    _0221C5A4: .word 0x00000B7E"
    );
    #endif
}

void ov05_0221C5A8(void) {
    /* Original at 0x0221C5A8 */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _0221C5C0 ; =0x00000B7E\n    ldrb r1, [r0, r1]\n    cmp r1, #0\n    bne _0221C5B8\n    bl ov05_0221C5C4\n    pop {r3, pc}\n    bl ov05_0221C6C8\n    pop {r3, pc}\n    nop\n    _0221C5C0: .word 0x00000B7E"
    );
    #endif
}

void ov05_0221C5C4(void) {
    /* Original at 0x0221C5C4 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _0221C6B8 ; =0x00000B82\n    add r4, r0, #0\n    ldrb r3, [r4, r3]\n    mov r1, #2\n    ldr r0, [r4, #0xc]\n    lsl r5, r3, #1\n    ldr r3, _0221C6BC ; =ov05_0221EA6C\n    add r2, r1, #0\n    ldrb r3, [r3, r5]\n    bl ScheduleSetBgPosText\n    ldr r3, _0221C6B8 ; =0x00000B82\n    ldr r0, [r4, #0xc]\n    ldrb r3, [r4, r3]\n    mov r1, #3\n    mov r2, #2\n    lsl r5, r3, #1\n    ldr r3, _0221C6BC ; =ov05_0221EA6C\n    ldrb r3, [r3, r5]\n    bl ScheduleSetBgPosText\n    ldr r2, _0221C6B8 ; =0x00000B82\n    mov r1, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D3AC\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D3AC\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D3AC\n    ldr r2, _0221C6B8 ; =0x00000B82\n    mov r1, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    add r3, r1, #0\n    bl ov05_0221D664\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D664\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D664\n    ldr r2, _0221C6B8 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    lsl r3, r2, #1\n    ldr r2, _0221C6C0 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    bl ov05_0221D664\n    ldr r0, _0221C6B8 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _0221C69E\n    ldr r0, _0221C6C4 ; =0x00000853\n    bl PlaySE\n    ldr r0, _0221C6B8 ; =0x00000B82\n    ldrb r1, [r4, r0]\n    cmp r1, #5\n    bne _0221C6AE\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C6B8: .word 0x00000B82\n    _0221C6BC: .word ov05_0221EA6C\n    _0221C6C0: .word ov05_0221EA6D\n    _0221C6C4: .word 0x00000853"
    );
    #endif
}

void ov05_0221C6C8(void) {
    /* Original at 0x0221C6C8 */
    /* Requires manual decompilation - 139 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _0221C7EC ; =0x00000B82\n    add r4, r0, #0\n    ldrb r3, [r4, r3]\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    lsl r5, r3, #1\n    ldr r3, _0221C7F0 ; =ov05_0221EA6C\n    mov r2, #1\n    ldrb r3, [r3, r5]\n    bl ScheduleSetBgPosText\n    ldr r3, _0221C7EC ; =0x00000B82\n    ldr r0, [r4, #0xc]\n    ldrb r3, [r4, r3]\n    mov r1, #3\n    mov r2, #1\n    lsl r5, r3, #1\n    ldr r3, _0221C7F0 ; =ov05_0221EA6C\n    ldrb r3, [r3, r5]\n    bl ScheduleSetBgPosText\n    ldr r2, _0221C7EC ; =0x00000B82\n    mov r1, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    add r3, r1, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D3AC\n    ldr r2, _0221C7EC ; =0x00000B82\n    mov r1, #0\n    ldrb r2, [r4, r2]\n    add r0, r4, #0\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    add r3, r1, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #1\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #2\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r2, _0221C7EC ; =0x00000B82\n    add r0, r4, #0\n    ldrb r2, [r4, r2]\n    mov r1, #3\n    lsl r3, r2, #1\n    ldr r2, _0221C7F4 ; =ov05_0221EA6D\n    ldrb r2, [r2, r3]\n    mov r3, #0\n    neg r2, r2\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ov05_0221D664\n    ldr r0, _0221C7EC ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _0221C7D2\n    ldr r0, _0221C7F8 ; =0x00000853\n    bl PlaySE\n    ldr r0, _0221C7EC ; =0x00000B82\n    ldrb r1, [r4, r0]\n    cmp r1, #5\n    bne _0221C7E2\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    nop\n    _0221C7EC: .word 0x00000B82\n    _0221C7F0: .word ov05_0221EA6C\n    _0221C7F4: .word ov05_0221EA6D\n    _0221C7F8: .word 0x00000853"
    );
    #endif
}

void ov05_0221C7FC(void) {
    /* Original at 0x0221C7FC */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0221C808 ; =0x00000B81\n    mov r2, #0x10\n    strb r2, [r0, r1]\n    mov r0, #2\n    bx lr\n    nop\n    _0221C808: .word 0x00000B81"
    );
    #endif
}

void ov05_0221C80C(void) {
    /* Original at 0x0221C80C */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r0, #0\n    ldr r0, _0221C894 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _0221C850\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    lsl r0, r0, #0x1a\n    add r3, r0, #0\n    ldr r2, [r0]\n    ldr r1, _0221C898 ; =0xFFFF1FFF\n    add r3, #0x48\n    and r2, r1\n    lsr r1, r0, #0xd\n    orr r1, r2\n    str r1, [r0]\n    ldrh r5, [r3]\n    mov r2, #0x3f\n    mov r1, #0x1f\n    bic r5, r2\n    orr r5, r1\n    mov r1, #0x20\n    orr r1, r5\n    strh r1, [r3]\n    add r0, #0x4a\n    ldrh r3, [r0]\n    mov r1, #0x1d\n    bic r3, r2\n    orr r1, r3\n    strh r1, [r0]\n    ldr r3, _0221C894 ; =0x00000B82\n    ldrb r1, [r4, r3]\n    cmp r1, #0x10\n    bne _0221C870\n    mov r0, #0\n    mov r1, #0x20\n    strb r0, [r4, r3]\n    sub r0, r3, #1\n    strb r1, [r4, r0]\n    lsl r2, r1, #0x15\n    ldr r1, [r2]\n    ldr r0, _0221C898 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r2, #0x47\n    sub r2, r2, r1\n    add r1, #0x48\n    lsl r1, r1, #0x18\n    mov r6, #0xff\n    ldr r0, _0221C89C ; =0x04000040\n    lsl r5, r2, #8\n    lsl r2, r6, #8\n    and r2, r5\n    lsr r1, r1, #0x18\n    strh r6, [r0]\n    orr r1, r2\n    strh r1, [r0, #4]\n    ldrb r0, [r4, r3]\n    add r0, r0, #1\n    strb r0, [r4, r3]\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    _0221C894: .word 0x00000B82\n    _0221C898: .word 0xFFFF1FFF\n    _0221C89C: .word 0x04000040"
    );
    #endif
}

void ov05_0221C8A0(void) {
    /* Original at 0x0221C8A0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221C8D8 ; =0x0000071A\n    bl PlaySE\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, _0221C8DC ; =0x00000B81\n    mov r1, #0x20\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    _0221C8D8: .word 0x0000071A\n    _0221C8DC: .word 0x00000B81"
    );
    #endif
}

void ov05_0221C8E0(void) {
    /* Original at 0x0221C8E0 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221C900 ; =0x0000071A\n    bl PlaySE\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, _0221C904 ; =0x00000B81\n    mov r1, #0x40\n    strb r1, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    _0221C900: .word 0x0000071A\n    _0221C904: .word 0x00000B81"
    );
    #endif
}

void ov05_0221C908(void) {
    /* Original at 0x0221C908 */
    /* Requires manual decompilation - 194 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov05_0221E9F8\n    cmp r0, #0\n    bne _0221C920\n    ldr r1, _0221CA9C ; =0x00000B81\n    mov r0, #1\n    add sp, #0xc\n    strb r0, [r4, r1]\n    pop {r3, r4, pc}\n    mov r0, #0xbd\n    lsl r0, r0, #4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    bne _0221C938\n    sub r0, #0x10\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0221C938\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    ldr r0, _0221CAA0 ; =0x00000BBC\n    ldr r1, [r4, r0]\n    cmp r1, #5\n    bne _0221C946\n    add sp, #0xc\n    mov r0, #0\n    pop {r3, r4, pc}\n    cmp r1, #6\n    beq _0221C960\n    cmp r1, #5\n    beq _0221C960\n    cmp r1, #7\n    beq _0221C960\n    cmp r1, #8\n    beq _0221C960\n    mov r1, #7\n    str r1, [r4, r0]\n    mov r1, #0xff\n    sub r0, #0x3a\n    strb r1, [r4, r0]\n    ldr r0, _0221CAA4 ; =0x00000B82\n    ldrb r1, [r4, r0]\n    cmp r1, #0\n    beq _0221C972\n    cmp r1, #1\n    beq _0221C9B0\n    cmp r1, #2\n    beq _0221CA4A\n    b _0221CA68\n    add r0, r4, #0\n    bl ov05_0221E9C4\n    ldr r2, _0221CAA8 ; =0x00000BAC\n    mov r1, #8\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221CAAC ; =0x00000B88\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x2c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221CAB0 ; =0x00000BB8\n    str r0, [r4, r1]\n    add r0, r4, #0\n    bl ov05_0221EA18\n    ldr r0, _0221CAA4 ; =0x00000B82\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _0221CA8C\n    add r2, r0, #2\n    add r0, r0, #4\n    ldr r1, [r4]\n    add r2, r4, r2\n    str r2, [sp]\n    add r0, r4, r0\n    str r0, [sp, #4]\n    ldr r2, [r1]\n    mov r0, #7\n    add r1, #0x2c\n    lsl r0, r0, #6\n    ldr r0, [r2, r0]\n    mov r2, #0\n    ldrb r1, [r1]\n    add r3, r2, #0\n    bl sub_0202FE14\n    cmp r0, #2\n    bne _0221C9EC\n    ldr r2, _0221CAA8 ; =0x00000BAC\n    mov r1, #6\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    ldr r0, _0221CAB4 ; =0x0000061A\n    bl PlaySE\n    b _0221C9FE\n    cmp r0, #3\n    bne _0221CA8C\n    ldr r2, _0221CAA8 ; =0x00000BAC\n    mov r1, #7\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    add r0, r4, #0\n    bl ov05_0221EA38\n    mov r0, #0xd8\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, _0221CAAC ; =0x00000B88\n    mov r2, #0\n    add r0, r4, r0\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221CAAC ; =0x00000B88\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x2c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221CAB0 ; =0x00000BB8\n    mov r2, #0\n    str r0, [r4, r1]\n    add r0, r1, #0\n    sub r0, #0x37\n    strb r2, [r4, r0]\n    add r0, r1, #0\n    sub r0, #0x36\n    ldrb r0, [r4, r0]\n    sub r1, #0x36\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    b _0221CA8C\n    sub r1, r0, #1\n    ldrb r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #1\n    strb r2, [r4, r1]\n    ldrb r1, [r4, r1]\n    cmp r1, #0x1e\n    bls _0221CA8C\n    mov r2, #0\n    sub r1, r0, #1\n    strb r2, [r4, r1]\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _0221CA8C\n    add r0, r0, #6\n    add r0, r4, r0\n    mov r1, #0\n    bl ClearFrameAndWindow2\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, _0221CAA4 ; =0x00000B82\n    mov r1, #0\n    strb r1, [r4, r0]\n    mov r1, #0x15\n    sub r0, r0, #1\n    strb r1, [r4, r0]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0221CA9C: .word 0x00000B81\n    _0221CAA0: .word 0x00000BBC\n    _0221CAA4: .word 0x00000B82\n    _0221CAA8: .word 0x00000BAC\n    _0221CAAC: .word 0x00000B88\n    _0221CAB0: .word 0x00000BB8\n    _0221CAB4: .word 0x0000061A"
    );
    #endif
}

void ov05_0221CAB8(void) {
    /* Original at 0x0221CAB8 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r1, _0221CB5C ; =0x00000B82\n    add r4, r0, #0\n    ldrb r1, [r4, r1]\n    cmp r1, #0\n    beq _0221CACC\n    cmp r1, #1\n    beq _0221CB34\n    b _0221CB4A\n    bl ov05_0221E9F8\n    cmp r0, #0\n    bne _0221CADC\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    bl ov05_0221E9C4\n    ldr r2, _0221CB60 ; =0x00000BAC\n    mov r1, #9\n    ldr r0, [r4, r2]\n    add r2, #8\n    ldr r2, [r4, r2]\n    bl ReadMsgDataIntoString\n    mov r3, #0\n    str r3, [sp]\n    ldr r2, _0221CB64 ; =0x00000B88\n    str r3, [sp, #4]\n    add r0, r4, r2\n    str r3, [sp, #8]\n    add r2, #0x2c\n    ldr r2, [r4, r2]\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    ldr r1, _0221CB68 ; =0x00000BB8\n    str r0, [r4, r1]\n    mov r0, #0x3e\n    bl sub_02037AC0\n    ldr r0, _0221CB6C ; =0x00000BC8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0221CB2A\n    add r0, r4, #0\n    bl ov05_0221E9F8\n    cmp r0, #1\n    bne _0221CB2A\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0221CB5C ; =0x00000B82\n    ldrb r1, [r4, r0]\n    add r1, r1, #1\n    strb r1, [r4, r0]\n    b _0221CB4E\n    mov r0, #0x3e\n    bl sub_02037B38\n    cmp r0, #0\n    beq _0221CB4E\n    ldr r0, _0221CB5C ; =0x00000B82\n    mov r1, #0\n    strb r1, [r4, r0]\n    add sp, #0xc\n    mov r0, #1\n    pop {r3, r4, pc}\n    bl GF_AssertFail\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl ScheduleBgTilemapBufferTransfer\n    mov r0, #0\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0221CB5C: .word 0x00000B82\n    _0221CB60: .word 0x00000BAC\n    _0221CB64: .word 0x00000B88\n    _0221CB68: .word 0x00000BB8\n    _0221CB6C: .word 0x00000BC8"
    );
    #endif
}

void ov05_0221CB70(void) {
    /* Original at 0x0221CB70 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov05_0221CCF4\n    cmp r0, #1\n    ldr r0, [r4]\n    bne _0221CBB2\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221CB9E\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r4, #8]\n    mov r2, #0x40\n    add r3, r1, #0\n    bl PaletteData_CopyPalette\n    b _0221CBE2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, [r4, #8]\n    mov r2, #0x40\n    add r3, r1, #0\n    bl PaletteData_CopyPalette\n    b _0221CBE2\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221CBCE\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, [r4, #8]\n    mov r2, #0x40\n    add r3, r1, #0\n    bl PaletteData_CopyPalette\n    b _0221CBE2\n    mov r0, #0x30\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r1, #0\n    ldr r0, [r4, #8]\n    mov r2, #0x40\n    add r3, r1, #0\n    bl PaletteData_CopyPalette\n    ldr r0, [r4, #8]\n    mov r1, #1\n    bl PaletteData_SetSelectedBufferAll\n    ldr r0, _0221CBFC ; =0x0000071B\n    bl PlaySE\n    ldr r0, _0221CC00 ; =0x00000B81\n    mov r1, #0x40\n    strb r1, [r4, r0]\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    _0221CBFC: .word 0x0000071B\n    _0221CC00: .word 0x00000B81"
    );
    #endif
}

void ov05_0221CC04(void) {
    /* Original at 0x0221CC04 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221CC50 ; =0x00000B82\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    bne _0221CC16\n    ldr r0, _0221CC54 ; =0x00000719\n    bl PlaySE\n    ldr r1, _0221CC50 ; =0x00000B82\n    ldrb r0, [r4, r1]\n    cmp r0, #0x10\n    bne _0221CC2C\n    mov r0, #0\n    strb r0, [r4, r1]\n    mov r2, #0x40\n    sub r0, r1, #1\n    strb r2, [r4, r0]\n    mov r0, #1\n    pop {r4, pc}\n    add r0, r0, #1\n    strb r0, [r4, r1]\n    ldrb r2, [r4, r1]\n    mov r1, #0x10\n    add r0, r4, #0\n    sub r1, r1, r2\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    bl ov05_0221E564\n    ldr r1, _0221CC50 ; =0x00000B82\n    add r0, r4, #0\n    ldrb r1, [r4, r1]\n    bl ov05_0221DE6C\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _0221CC50: .word 0x00000B82\n    _0221CC54: .word 0x00000719"
    );
    #endif
}

void ov05_0221CC58(void) {
    sub_020880CC(1, 1, 2);
}

void ov05_0221CC74(void) {
    /* Original at 0x0221CC74 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    bne _0221CC86\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    add r0, r4, #0\n    bl ov05_0221EA38\n    ldr r0, [r4]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0221CCBE\n    add r0, r4, #0\n    bl ov05_0221CFF0\n    add r0, r4, #0\n    bl ov05_0221D020\n    add r0, r4, #0\n    bl ov05_0221D054\n    add r0, r4, #0\n    bl ov05_0221DB18\n    add r0, r4, #0\n    bl ov05_0221D690\n    b _0221CCCA\n    add r0, r4, #0\n    bl ov05_0221DC34\n    add r0, r4, #0\n    bl ov05_0221E60C\n    add r0, r4, #0\n    bl ov05_0221CE0C\n    bl GF_DestroyVramTransferManager\n    ldr r0, [r4, #8]\n    mov r1, #0\n    bl PaletteData_FreeBuffers\n    ldr r0, [r4, #8]\n    bl PaletteData_Free\n    ldr r0, [r4]\n    mov r1, #1\n    add r0, #0x2b\n    strb r1, [r0]\n    add r0, r5, #0\n    bl DestroySysTaskAndEnvironment\n    mov r0, #1\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov05_0221CCF4(void) {
    /* Original at 0x0221CCF4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl sub_0203769C\n    bl sub_020378AC\n    cmp r0, #3\n    bhi _0221CD1E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221CD0E: ; jump table\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov05_0221CD24(void) {
    /* Original at 0x0221CD24 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x38\n    add r5, r0, #0\n    str r1, [sp]\n    ldr r1, [r5]\n    mov r0, #0x40\n    ldr r1, [r1, #0x24]\n    add r4, r2, #0\n    bl GF_CreateVramTransferManager\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl SpriteSystem_Alloc\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    bl SpriteManager_New\n    mov r1, #0x65\n    lsl r1, r1, #2\n    add r2, sp, #0x18\n    ldr r3, _0221CDBC ; =ov05_0221EBE0\n    str r0, [r5, r1]\n    ldmia r3!, {r0, r1}\n    add r6, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r3, _0221CDC0 ; =ov05_0221EAAC\n    add r2, sp, #4\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    add r1, r6, #0\n    str r0, [r2]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    str r4, [sp, #4]\n    sub r0, r0, #4\n    ldr r0, [r5, r0]\n    add r2, r7, #0\n    mov r3, #0x10\n    bl SpriteSystem_Init\n    mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl SpriteSystem_InitSprites\n    mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    ldr r2, [sp]\n    bl SpriteSystem_InitManagerWithCapacities\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x38\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221CDBC: .word ov05_0221EBE0\n    _0221CDC0: .word ov05_0221EAAC"
    );
    #endif
}

void ov05_0221CDC4(void) {
    /* Original at 0x0221CDC4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {lr}\n    sub sp, #0x34\n    add r2, r0, #0\n    mov r0, #0\n    add r3, sp, #0\n    strh r0, [r3]\n    strh r0, [r3, #2]\n    strh r0, [r3, #4]\n    strh r0, [r3, #6]\n    ldr r3, [r1, #0x14]\n    str r3, [sp, #8]\n    ldr r3, [r1, #0x18]\n    str r3, [sp, #0xc]\n    mov r3, #1\n    str r3, [sp, #0x10]\n    ldr r3, [r1]\n    str r3, [sp, #0x14]\n    ldr r3, [r1, #4]\n    str r3, [sp, #0x18]\n    ldr r3, [r1, #8]\n    str r3, [sp, #0x1c]\n    ldr r3, [r1, #0xc]\n    str r3, [sp, #0x20]\n    ldr r1, [r1, #0x10]\n    str r1, [sp, #0x2c]\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0x30]\n    ldr r0, [r2, r1]\n    add r1, r1, #4\n    ldr r1, [r2, r1]\n    add r2, sp, #0\n    bl SpriteSystem_NewSprite\n    add sp, #0x34\n    pop {pc}"
    );
    #endif
}

void ov05_0221CE0C(void) {
    /* Original at 0x0221CE0C */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0221CE36\n    mov r7, #0x21\n    add r5, r6, #0\n    lsl r7, r7, #4\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl Sprite_DeleteAndFreeResources\n    ldr r0, [r6, r7]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, r0\n    blo _0221CE22\n    mov r1, #0x19\n    lsl r1, r1, #4\n    ldr r0, [r6, r1]\n    add r1, r1, #4\n    ldr r1, [r6, r1]\n    bl SpriteSystem_FreeResourcesAndManager\n    mov r0, #0x19\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl SpriteSystem_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221CE50(void) {
    /* Original at 0x0221CE50 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0x21\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r4, #0\n    cmp r0, #0\n    bls _0221CE84\n    mov r7, #0x66\n    lsl r7, r7, #2\n    add r6, r7, #0\n    add r6, #0x78\n    lsl r0, r4, #2\n    add r0, r5, r0\n    ldr r0, [r0, r7]\n    mov r1, #1\n    ldr r0, [r0]\n    lsl r1, r1, #0xc\n    bl Sprite_UpdateAnim\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [r5, r6]\n    cmp r4, r0\n    blo _0221CE68\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221CE88(void) {
    /* Original at 0x0221CE88 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    bl DoScheduledBgGpuUpdates\n    ldr r0, [r4, #8]\n    bl PaletteData_PushTransparentBuffers\n    bl GF_RunVramTransferTasks\n    bl SpriteSystem_TransferOam\n    ldr r3, _0221CEB0 ; =0x027E0000\n    ldr r1, _0221CEB4 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    nop\n    _0221CEB0: .word 0x027E0000\n    _0221CEB4: .word 0x00003FF8"
    );
    #endif
}

void ov05_0221CEB8(void) {
    /* Original at 0x0221CEB8 */
    /* Requires manual decompilation - 134 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x80\n    add r5, r0, #0\n    ldr r0, _0221CFD4 ; =0x00000BA8\n    add r4, r1, #0\n    ldr r6, _0221CFD8 ; =ov05_0221EA78\n    str r4, [r5, r0]\n    add r3, sp, #0x70\n    add r7, r2, #0\n    add r2, r3, #0\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    str r4, [sp, #0x7c]\n    bl SetBothScreensModesAndDisable\n    ldr r6, _0221CFDC ; =ov05_0221EB1C\n    add r3, sp, #0x54\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r5, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0xc]\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r1, #3\n    add r3, r1, #0\n    ldr r0, [r5, #0xc]\n    mov r2, #0\n    add r3, #0xfd\n    bl ScheduleSetBgPosText\n    ldr r6, _0221CFE0 ; =ov05_0221EB54\n    add r3, sp, #0x38\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r5, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    mov r3, #0xff\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    mov r2, #0\n    mvn r3, r3\n    bl ScheduleSetBgPosText\n    ldr r6, _0221CFE4 ; =ov05_0221EB70\n    add r3, sp, #0x1c\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r5, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    cmp r7, #1\n    bne _0221CF88\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    mov r2, #3\n    mov r3, #0x18\n    bl BgSetPosTextAndCommit\n    cmp r4, #0\n    bne _0221CFD0\n    ldr r4, _0221CFE8 ; =ov05_0221EBA8\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    mov r1, #0\n    str r0, [r3]\n    ldr r0, [r5, #0xc]\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r0, _0221CFEC ; =0x00000BC8\n    ldr r0, [r5, r0]\n    cmp r0, #1\n    bne _0221CFC8\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x80\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x80\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221CFD4: .word 0x00000BA8\n    _0221CFD8: .word ov05_0221EA78\n    _0221CFDC: .word ov05_0221EB1C\n    _0221CFE0: .word ov05_0221EB54\n    _0221CFE4: .word ov05_0221EB70\n    _0221CFE8: .word ov05_0221EBA8\n    _0221CFEC: .word 0x00000BC8"
    );
    #endif
}

void ov05_0221CFF0(void) {
    /* Original at 0x0221CFF0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221D018 ; =0x00000B94\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0221D004\n    sub r0, #0xc\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0221D01C ; =0x00000BA4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _0221D014\n    sub r0, #0xc\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _0221D018: .word 0x00000B94\n    _0221D01C: .word 0x00000BA4"
    );
    #endif
}

void ov05_0221D020(void) {
    /* Original at 0x0221D020 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0221D04C ; =0x00000BB4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0221D030\n    bl String_Delete\n    mov r0, #0xbb\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0221D03E\n    bl MessageFormat_Delete\n    ldr r0, _0221D050 ; =0x00000BAC\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0221D04A\n    bl DestroyMsgData\n    pop {r4, pc}\n    _0221D04C: .word 0x00000BB4\n    _0221D050: .word 0x00000BAC"
    );
    #endif
}

void ov05_0221D054(void) {
    /* Original at 0x0221D054 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x1f\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, [r4, #0xc]\n    mov r1, #3\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl FreeBgTilemapBuffer\n    ldr r0, _0221D090 ; =0x00000BA8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0221D088\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl FreeBgTilemapBuffer\n    ldr r0, [r4, #0xc]\n    bl Heap_Free\n    pop {r4, pc}\n    _0221D090: .word 0x00000BA8"
    );
    #endif
}

void ov05_0221D094(void) {
    /* Original at 0x0221D094 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x68\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r2, [r5]\n    mov r3, #1\n    ldr r2, [r2, #0x24]\n    add r4, r0, #0\n    str r2, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #4\n    ldr r0, [r0, #0x24]\n    mov r3, #1\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #2\n    ldr r0, [r0, #0x24]\n    add r3, r1, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #3\n    ldr r0, [r0, #0x24]\n    add r3, r1, #0\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r2, #0\n    str r2, [sp]\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0, #0x24]\n    add r3, r2, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0\n    ldr r0, [r5, #8]\n    add r2, r1, #0\n    mov r3, #0xa0\n    bl PaletteData_LoadPaletteSlotFromHardware\n    ldr r1, _0221D13C ; =0x000018C6\n    mov r0, #1\n    bl BG_SetMaskColor\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    _0221D13C: .word 0x000018C6"
    );
    #endif
}

void ov05_0221D140(void) {
    /* Original at 0x0221D140 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    ldr r0, _0221D21C ; =0x00000BA8\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0221D164\n    ldr r0, [r4]\n    cmp r0, #0\n    beq _0221D164\n    ldr r1, [r0]\n    cmp r1, #0\n    beq _0221D164\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    cmp r0, #0\n    bne _0221D168\n    bl GF_AssertFail\n    ldr r0, [r4]\n    ldr r1, [r0]\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r1, r0]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0, #0x24]\n    mov r2, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    mov r3, #0xf\n    bl LoadUserFrameGfx2\n    ldr r0, [r4, #8]\n    mov r1, #0\n    mov r2, #0xf0\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    mov r1, #0\n    str r1, [sp]\n    ldr r0, [r4]\n    mov r2, #0x1f\n    ldr r0, [r0, #0x24]\n    mov r3, #0xe\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    bl LoadUserFrameGfx1\n    ldr r0, [r4, #8]\n    mov r1, #0\n    mov r2, #0xe0\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    ldr r2, [r4]\n    mov r1, #0x1a\n    ldr r2, [r2, #0x24]\n    mov r0, #0\n    lsl r1, r1, #4\n    bl LoadFontPal0\n    ldr r0, [r4, #8]\n    mov r1, #0\n    mov r2, #0xd0\n    mov r3, #0x20\n    bl PaletteData_LoadPaletteSlotFromHardware\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _0221D220 ; =0x00000B88\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0xc]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _0221D224 ; =0x00000B98\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #0xc]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0221D21C: .word 0x00000BA8\n    _0221D220: .word 0x00000B88\n    _0221D224: .word 0x00000B98"
    );
    #endif
}

void ov05_0221D228(void) {
    G2x_SetBlendAlpha_(2, 0x1c, 8);
}

void ov05_0221D240(void) {
    /* Original at 0x0221D240 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r4, _0221D310 ; =ov05_0221EB04\n    add r3, sp, #0\n    add r6, r0, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r1, r2, #0\n    add r0, r6, #0\n    mov r2, #0x15\n    bl ov05_0221CD24\n    add r0, r6, #0\n    bl ov05_0221D318\n    ldr r4, _0221D314 ; =ov05_0221EDA4\n    mov r7, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov05_0221CDC4\n    mov r1, #0x66\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r4, #0x1c\n    add r5, r5, #4\n    cmp r7, #0xc\n    blo _0221D26E\n    mov r1, #0\n    mov r2, #0xff\n    add r0, r6, #0\n    mvn r2, r2\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    mov r2, #0xff\n    add r0, r6, #0\n    mov r1, #1\n    mvn r2, r2\n    mov r3, #0\n    bl ov05_0221D3AC\n    mov r1, #2\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfe\n    mov r3, #0\n    bl ov05_0221D3AC\n    mov r1, #3\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfd\n    mov r3, #0\n    bl ov05_0221D3AC\n    add r0, r6, #0\n    bl ov05_0221D4D0\n    mov r0, #0x21\n    mov r1, #0xc\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    add r0, r6, #0\n    bl ov05_0221D5DC\n    mov r1, #0\n    mov r2, #0xff\n    add r0, r6, #0\n    mvn r2, r2\n    add r3, r1, #0\n    bl ov05_0221D664\n    mov r2, #0xff\n    add r0, r6, #0\n    mov r1, #1\n    mvn r2, r2\n    mov r3, #0\n    bl ov05_0221D664\n    mov r1, #2\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfe\n    mov r3, #0\n    bl ov05_0221D664\n    mov r1, #3\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfd\n    mov r3, #0\n    bl ov05_0221D664\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D310: .word ov05_0221EB04\n    _0221D314: .word ov05_0221EDA4"
    );
    #endif
}

void ov05_0221D318(void) {
    /* Original at 0x0221D318 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #8\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0221D3A8 ; =0x0000B807\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0xd0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _0221D3A8 ; =0x0000B807\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r2, #0x68\n    mov r3, #8\n    bl SpriteSystem_LoadPlttResObj\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0221D3A8 ; =0x0000B807\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0xcf\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0221D3A8 ; =0x0000B807\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0xd1\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0221D3A8: .word 0x0000B807"
    );
    #endif
}

void ov05_0221D3AC(void) {
    /* Original at 0x0221D3AC */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r4, _0221D408 ; =_0221EA54\n    str r2, [sp]\n    ldrb r5, [r4]\n    str r3, [sp, #4]\n    add r3, sp, #8\n    strb r5, [r3]\n    ldrb r5, [r4, #1]\n    add r2, sp, #8\n    mov r7, #0\n    strb r5, [r3, #1]\n    ldrb r5, [r4, #2]\n    ldrb r4, [r4, #3]\n    add r6, r0, r1\n    strb r5, [r3, #2]\n    strb r4, [r3, #3]\n    ldrb r2, [r2, r1]\n    add r4, r7, #0\n    lsl r2, r2, #2\n    add r5, r0, r2\n    ldr r1, _0221D40C ; =0x00000B64\n    mov r0, #0x66\n    ldrb r1, [r6, r1]\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r2, r1, r4\n    ldr r1, [sp]\n    add r1, r1, r2\n    ldr r2, _0221D410 ; =0x00000B68\n    lsl r1, r1, #0x10\n    ldrb r3, [r6, r2]\n    ldr r2, [sp, #4]\n    asr r1, r1, #0x10\n    add r2, r2, r3\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r7, r7, #1\n    add r4, #0x13\n    add r5, r5, #4\n    cmp r7, #3\n    blo _0221D3D6\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221D408: .word _0221EA54\n    _0221D40C: .word 0x00000B64\n    _0221D410: .word 0x00000B68"
    );
    #endif
}

void ov05_0221D414(void) {
    /* Original at 0x0221D414 */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r6, r0, #0\n    add r0, r1, #0\n    str r1, [sp]\n    str r2, [sp, #4]\n    add r7, r3, #0\n    bl Party_GetCount\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r5, #0\n    ldr r0, [sp, #4]\n    add r4, r5, #0\n    cmp r0, #0\n    ble _0221D4CC\n    lsl r0, r7, #2\n    add r6, r6, r0\n    lsl r0, r4, #2\n    add r1, r6, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    ldr r0, [sp, #8]\n    cmp r0, r4\n    bls _0221D4C0\n    ldr r0, [sp]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    mov r1, #5\n    mov r2, #0\n    add r7, r0, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0221D4C0\n    add r0, r7, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _0221D4C0\n    add r0, r7, #0\n    bl Pokemon_GetStatusIconId\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #6\n    bne _0221D494\n    lsl r0, r5, #2\n    add r1, r6, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #3\n    bl ManagedSprite_SetAnim\n    b _0221D4BA\n    cmp r0, #7\n    beq _0221D4AA\n    lsl r0, r5, #2\n    add r1, r6, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    b _0221D4BA\n    lsl r0, r5, #2\n    add r1, r6, r0\n    mov r0, #0x66\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    add r0, r5, #1\n    lsl r0, r0, #0x18\n    lsr r5, r0, #0x18\n    add r0, r4, #1\n    lsl r0, r0, #0x18\n    lsr r4, r0, #0x18\n    ldr r0, [sp, #4]\n    cmp r4, r0\n    blt _0221D43A\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221D4D0(void) {
    /* Original at 0x0221D4D0 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r2, [r4]\n    add r1, r2, #0\n    add r1, #0x29\n    ldrb r1, [r1]\n    cmp r1, #0\n    ldr r1, [r2, #4]\n    bne _0221D4FA\n    mov r2, #6\n    mov r3, #0\n    bl ov05_0221D414\n    ldr r1, [r4]\n    mov r2, #6\n    ldr r1, [r1, #8]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov05_0221D414\n    pop {r4, pc}\n    mov r2, #3\n    mov r3, #0\n    bl ov05_0221D414\n    ldr r1, [r4]\n    mov r2, #3\n    ldr r1, [r1, #0xc]\n    add r0, r4, #0\n    add r3, r2, #0\n    bl ov05_0221D414\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r1, #8]\n    mov r2, #3\n    mov r3, #6\n    bl ov05_0221D414\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r1, #0x10]\n    mov r2, #3\n    mov r3, #9\n    bl ov05_0221D414\n    pop {r4, pc}"
    );
    #endif
}

void ov05_0221D530(void) {
    /* Original at 0x0221D530 */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x40\n    add r4, r0, #0\n    mov r0, #0\n    add r5, r4, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    add r7, r2, #0\n    add r5, #0x10\n    add r6, r1, #0\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    mov r2, #8\n    mov r3, #2\n    bl AddTextWindowTopLeftCorner\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r7, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    ldr r0, _0221D5D0 ; =0x00000B44\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x10]\n    mov r0, #0x65\n    str r5, [sp, #0x14]\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl SpriteManager_GetSpriteList\n    str r0, [sp, #0x18]\n    mov r0, #0x65\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    ldr r1, _0221D5D4 ; =0x0000B807\n    bl SpriteManager_FindPlttResourceProxy\n    mov r1, #0x3e\n    lsl r2, r6, #4\n    lsl r1, r1, #4\n    sub r1, r1, r2\n    lsl r1, r1, #5\n    str r0, [sp, #0x1c]\n    mov r0, #0\n    str r1, [sp, #0x24]\n    mov r1, #2\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x28]\n    str r0, [sp, #0x2c]\n    str r0, [sp, #0x34]\n    mov r0, #1\n    str r1, [sp, #0x30]\n    str r0, [sp, #0x38]\n    ldr r0, [r4]\n    lsl r6, r6, #2\n    ldr r0, [r0, #0x24]\n    str r0, [sp, #0x3c]\n    ldr r0, _0221D5D8 ; =0x00000B48\n    add r4, r4, r0\n    add r0, sp, #0x10\n    bl sub_020135D8\n    str r0, [r4, r6]\n    ldr r0, [r4, r6]\n    mov r1, #0\n    bl TextOBJ_SetPaletteNum\n    add r0, r5, #0\n    bl RemoveWindow\n    add sp, #0x40\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D5D0: .word 0x00000B44\n    _0221D5D4: .word 0x0000B807\n    _0221D5D8: .word 0x00000B48"
    );
    #endif
}

void ov05_0221D5DC(void) {
    /* Original at 0x0221D5DC */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4]\n    mov r0, #8\n    ldr r1, [r1, #0x24]\n    bl FontSystem_NewInit\n    ldr r1, _0221D658 ; =0x00000B44\n    str r0, [r4, r1]\n    ldr r2, [r4]\n    add r0, r4, #0\n    ldr r2, [r2, #0x14]\n    mov r1, #0\n    bl ov05_0221D530\n    ldr r2, [r4]\n    add r0, r4, #0\n    ldr r2, [r2, #0x18]\n    mov r1, #2\n    bl ov05_0221D530\n    ldr r2, [r4]\n    add r0, r2, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221D62A\n    ldr r2, [r2, #0x1c]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov05_0221D530\n    ldr r2, [r4]\n    add r0, r4, #0\n    ldr r2, [r2, #0x20]\n    mov r1, #3\n    bl ov05_0221D530\n    pop {r4, pc}\n    ldr r2, [r2, #0x14]\n    add r0, r4, #0\n    mov r1, #1\n    bl ov05_0221D530\n    ldr r2, [r4]\n    add r0, r4, #0\n    ldr r2, [r2, #0x18]\n    mov r1, #3\n    bl ov05_0221D530\n    ldr r0, _0221D65C ; =0x00000B4C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl TextOBJ_SetSpritesDrawFlag\n    ldr r0, _0221D660 ; =0x00000B54\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl TextOBJ_SetSpritesDrawFlag\n    pop {r4, pc}\n    nop\n    _0221D658: .word 0x00000B44\n    _0221D65C: .word 0x00000B4C\n    _0221D660: .word 0x00000B54"
    );
    #endif
}

void ov05_0221D664(void) {
    /* Original at 0x0221D664 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    add r1, r2, #0\n    add r2, r3, #0\n    add r4, r0, #0\n    lsl r0, r5, #2\n    add r0, r4, r0\n    ldr r3, _0221D68C ; =0x00000B48\n    add r4, r4, r5\n    add r5, r3, #0\n    ldr r0, [r0, r3]\n    add r5, #0x24\n    add r3, #0x28\n    ldrb r5, [r4, r5]\n    ldrb r3, [r4, r3]\n    add r1, r1, r5\n    add r2, r2, r3\n    bl sub_020136B4\n    pop {r3, r4, r5, pc}\n    _0221D68C: .word 0x00000B48"
    );
    #endif
}

void ov05_0221D690(void) {
    /* Original at 0x0221D690 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r0, [r7]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #0\n    beq _0221D6BA\n    ldr r6, _0221D6BC ; =0x00000B48\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl FontOAM_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blo _0221D6A4\n    ldr r0, _0221D6C0 ; =0x00000B44\n    ldr r0, [r7, r0]\n    bl sub_020135AC\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221D6BC: .word 0x00000B48\n    _0221D6C0: .word 0x00000B44"
    );
    #endif
}

void ov05_0221D6C4(void) {
    /* Original at 0x0221D6C4 */
    /* Requires manual decompilation - 115 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6}\n    ldr r3, [r0]\n    add r3, #0x29\n    ldrb r3, [r3]\n    cmp r3, #1\n    ldr r3, _0221D7A8 ; =0x00000B64\n    bne _0221D74E\n    mov r4, #0x14\n    add r5, r1, #0\n    strb r4, [r0, r3]\n    add r5, #0x92\n    add r4, r3, #4\n    strb r5, [r0, r4]\n    mov r5, #0x51\n    add r4, r3, #1\n    strb r5, [r0, r4]\n    add r5, r1, #0\n    add r5, #0xa2\n    add r4, r3, #5\n    strb r5, [r0, r4]\n    mov r5, #0x80\n    add r4, r3, #2\n    strb r5, [r0, r4]\n    add r5, r2, #0\n    add r5, #0x2c\n    add r4, r3, #6\n    strb r5, [r0, r4]\n    mov r5, #0xbd\n    add r4, r3, #3\n    strb r5, [r0, r4]\n    add r5, r2, #0\n    add r5, #0x3c\n    add r4, r3, #7\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    mov r5, #0xb\n    add r4, #8\n    strb r5, [r0, r4]\n    add r5, r1, #0\n    add r4, r3, #0\n    add r5, #0x78\n    add r4, #0xc\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    mov r5, #0x4c\n    add r4, #9\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    add r1, #0x88\n    add r4, #0xd\n    strb r1, [r0, r4]\n    add r1, r3, #0\n    mov r4, #0x77\n    add r1, #0xa\n    strb r4, [r0, r1]\n    add r4, r2, #0\n    add r1, r3, #0\n    add r4, #0x12\n    add r1, #0xe\n    strb r4, [r0, r1]\n    add r1, r3, #0\n    mov r4, #0xb8\n    add r1, #0xb\n    strb r4, [r0, r1]\n    add r2, #0x22\n    add r3, #0xf\n    strb r2, [r0, r3]\n    pop {r3, r4, r5, r6}\n    bx lr\n    mov r4, #0x18\n    strb r4, [r0, r3]\n    add r4, r1, #0\n    add r4, #0xa0\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    add r5, r3, #4\n    strb r4, [r0, r5]\n    mov r6, #0x51\n    add r5, r3, #1\n    strb r6, [r0, r5]\n    add r5, r3, #5\n    strb r4, [r0, r5]\n    mov r5, #0x88\n    add r4, r3, #2\n    strb r5, [r0, r4]\n    add r4, r2, #0\n    add r4, #0x30\n    lsl r4, r4, #0x18\n    lsr r4, r4, #0x18\n    add r5, r3, #6\n    strb r4, [r0, r5]\n    mov r6, #0xc1\n    add r5, r3, #3\n    strb r6, [r0, r5]\n    add r5, r3, #7\n    strb r4, [r0, r5]\n    add r4, r3, #0\n    mov r5, #0xf\n    add r4, #8\n    strb r5, [r0, r4]\n    add r4, r3, #0\n    add r1, #0x86\n    add r4, #0xc\n    strb r1, [r0, r4]\n    add r1, r3, #0\n    mov r4, #0x80\n    add r1, #0xa\n    strb r4, [r0, r1]\n    add r2, #0x16\n    add r3, #0xe\n    strb r2, [r0, r3]\n    pop {r3, r4, r5, r6}\n    bx lr\n    nop\n    _0221D7A8: .word 0x00000B64"
    );
    #endif
}

void ov05_0221D7AC(void) {
    /* Original at 0x0221D7AC */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    ldr r4, _0221D888 ; =ov05_0221EAD4\n    add r3, sp, #0\n    add r6, r0, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r1, r2, #0\n    add r0, r6, #0\n    mov r2, #0x17\n    bl ov05_0221CD24\n    add r0, r6, #0\n    bl ov05_0221D318\n    add r0, r6, #0\n    bl ov05_0221D890\n    ldr r4, _0221D88C ; =ov05_0221EDA4\n    mov r7, #0\n    add r5, r6, #0\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov05_0221CDC4\n    mov r1, #0x66\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    add r7, r7, #1\n    add r4, #0x1c\n    add r5, r5, #4\n    cmp r7, #0xe\n    blo _0221D7E0\n    mov r1, #0\n    mov r2, #0xff\n    add r0, r6, #0\n    mvn r2, r2\n    add r3, r1, #0\n    bl ov05_0221D3AC\n    mov r2, #0xff\n    add r0, r6, #0\n    mov r1, #1\n    mvn r2, r2\n    mov r3, #0\n    bl ov05_0221D3AC\n    mov r1, #2\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfe\n    mov r3, #0\n    bl ov05_0221D3AC\n    mov r1, #3\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfd\n    mov r3, #0\n    bl ov05_0221D3AC\n    add r0, r6, #0\n    bl ov05_0221D4D0\n    add r0, r6, #0\n    bl ov05_0221D904\n    add r0, r6, #0\n    bl ov05_0221D5DC\n    mov r1, #0\n    mov r2, #0xff\n    add r0, r6, #0\n    mvn r2, r2\n    add r3, r1, #0\n    bl ov05_0221D664\n    mov r2, #0xff\n    add r0, r6, #0\n    mov r1, #1\n    mvn r2, r2\n    mov r3, #0\n    bl ov05_0221D664\n    mov r1, #2\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfe\n    mov r3, #0\n    bl ov05_0221D664\n    mov r1, #3\n    add r2, r1, #0\n    add r0, r6, #0\n    add r2, #0xfd\n    mov r3, #0\n    bl ov05_0221D664\n    mov r0, #0x21\n    mov r1, #0xe\n    lsl r0, r0, #4\n    str r1, [r6, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221D888: .word ov05_0221EAD4\n    _0221D88C: .word ov05_0221EDA4"
    );
    #endif
}

void ov05_0221D890(void) {
    /* Original at 0x0221D890 */
    /* Requires manual decompilation - 52 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x68\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221D900 ; =0x0000B808\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #5\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221D900 ; =0x0000B808\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #6\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221D900 ; =0x0000B808\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #7\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0221D900: .word 0x0000B808"
    );
    #endif
}

void ov05_0221D904(void) {
    /* Original at 0x0221D904 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [r4]\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #3\n    bne _0221D946\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x80\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    pop {r4, pc}\n    bl ov05_0221CCF4\n    cmp r0, #1\n    ldr r0, [r4]\n    bne _0221D994\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221D976\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x30\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xd0\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    b _0221D9D6\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xd0\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x30\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    b _0221D9D6\n    add r0, #0x2a\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221D9BA\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xd0\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x30\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    b _0221D9D6\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0x30\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0xd0\n    mov r2, #0x48\n    bl ManagedSprite_SetPositionXY\n    mov r0, #0x72\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x73\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    pop {r4, pc}"
    );
    #endif
}

void ov05_0221D9F0(void) {
    /* Original at 0x0221D9F0 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0\n    str r0, [sp]\n    str r1, [sp, #4]\n    ldr r0, [r4]\n    mov r2, #4\n    ldr r0, [r0, #0x24]\n    add r3, r1, #0\n    bl GF_3DVramMan_Create\n    ldr r1, _0221DAC8 ; =0x00000B58\n    ldr r2, _0221DACC ; =0x04000060\n    str r0, [r4, r1]\n    ldrh r1, [r2]\n    ldr r0, _0221DAD0 ; =0xFFFFCFFF\n    and r1, r0\n    mov r0, #8\n    orr r0, r1\n    strh r0, [r2]\n    bl sub_02014DA0\n    ldr r0, [r4]\n    mov r1, #0x12\n    ldr r0, [r0, #0x24]\n    lsl r1, r1, #0xa\n    bl Heap_Alloc\n    mov r2, #0xb6\n    lsl r2, r2, #4\n    str r0, [r4, r2]\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4]\n    mov r3, #0x12\n    ldr r0, [r0, #0x24]\n    ldr r1, _0221DAD4 ; =ov05_0221DB70\n    str r0, [sp, #4]\n    ldr r0, _0221DAD8 ; =ov05_0221DB4C\n    ldr r2, [r4, r2]\n    lsl r3, r3, #0xa\n    bl sub_02014DB4\n    ldr r1, _0221DADC ; =0x00000B5C\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    bl sub_02015524\n    add r2, r0, #0\n    mov r0, #1\n    mov r1, #0xe1\n    lsl r0, r0, #0xc\n    lsl r1, r1, #0xe\n    bl Camera_SetPerspectiveClippingPlane\n    ldr r2, [r4]\n    mov r0, #0x3b\n    ldr r2, [r2, #0x24]\n    mov r1, #2\n    bl sub_02015264\n    add r1, r0, #0\n    ldr r0, _0221DADC ; =0x00000B5C\n    mov r2, #0xa\n    ldr r0, [r4, r0]\n    mov r3, #1\n    bl sub_0201526C\n    mov r1, #0\n    ldr r0, _0221DADC ; =0x00000B5C\n    add r2, r1, #0\n    ldr r0, [r4, r0]\n    add r3, r1, #0\n    bl sub_02015494\n    ldr r0, _0221DADC ; =0x00000B5C\n    mov r2, #0\n    ldr r0, [r4, r0]\n    mov r1, #1\n    add r3, r2, #0\n    bl sub_02015494\n    ldr r0, _0221DADC ; =0x00000B5C\n    mov r2, #0\n    ldr r0, [r4, r0]\n    mov r1, #2\n    add r3, r2, #0\n    bl sub_02015494\n    ldr r0, _0221DADC ; =0x00000B5C\n    mov r2, #0\n    ldr r0, [r4, r0]\n    mov r1, #3\n    add r3, r2, #0\n    bl sub_02015494\n    ldr r0, _0221DADC ; =0x00000B5C\n    mov r2, #0\n    ldr r0, [r4, r0]\n    mov r1, #4\n    add r3, r2, #0\n    bl sub_02015494\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0221DAC8: .word 0x00000B58\n    _0221DACC: .word 0x04000060\n    _0221DAD0: .word 0xFFFFCFFF\n    _0221DAD4: .word ov05_0221DB70\n    _0221DAD8: .word ov05_0221DB4C\n    _0221DADC: .word 0x00000B5C"
    );
    #endif
}

void ov05_0221DAE0(void) {
    /* Original at 0x0221DAE0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _0221DAF2\n    mov r0, #0\n    pop {r4, pc}\n    bl Thunk_G3X_Reset\n    ldr r0, _0221DB14 ; =0x00000B5C\n    ldr r0, [r4, r0]\n    bl sub_020154B0\n    cmp r0, #0\n    bne _0221DB06\n    mov r0, #0\n    pop {r4, pc}\n    bl sub_0201543C\n    bl sub_02015460\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0221DB14: .word 0x00000B5C"
    );
    #endif
}

void ov05_0221DB18(void) {
    /* Original at 0x0221DB18 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    add r0, #0x28\n    ldrb r0, [r0]\n    cmp r0, #1\n    bne _0221DB40\n    ldr r0, _0221DB44 ; =0x00000B5C\n    ldr r0, [r4, r0]\n    bl sub_02014EBC\n    mov r0, #0xb6\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _0221DB48 ; =0x00000B58\n    ldr r0, [r4, r0]\n    bl GF_3DVramMan_Delete\n    pop {r4, pc}\n    nop\n    _0221DB44: .word 0x00000B5C\n    _0221DB48: .word 0x00000B58"
    );
    #endif
}

void ov05_0221DB4C(void) {
    /* Original at 0x0221DB4C */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0221DB6C ; =NNS_GfdDefaultFuncAllocTexVram\n    mov r2, #0\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bl sub_02015354\n    cmp r4, #0\n    bne _0221DB64\n    bl GF_AssertFail\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _0221DB6C: .word NNS_GfdDefaultFuncAllocTexVram"
    );
    #endif
}

void ov05_0221DB70(void) {
    /* Original at 0x0221DB70 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0221DB90 ; =NNS_GfdDefaultFuncAllocPlttVram\n    mov r2, #1\n    ldr r3, [r3]\n    blx r3\n    add r4, r0, #0\n    bl sub_02015394\n    cmp r4, #0\n    bne _0221DB88\n    bl GF_AssertFail\n    lsl r0, r4, #0x10\n    lsr r0, r0, #0xd\n    pop {r4, pc}\n    nop\n    _0221DB90: .word NNS_GfdDefaultFuncAllocPlttVram"
    );
    #endif
}

void ov05_0221DB94(void) {
    /* Original at 0x0221DB94 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x64\n    ldr r5, _0221DC24 ; =ov05_0221EA88\n    add r3, sp, #0x54\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0221DC28 ; =ov05_0221EB8C\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    ldr r0, [r4, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0221DC2C ; =ov05_0221EB38\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    ldr r0, [r4, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0221DC30 ; =ov05_0221EBC4\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    ldr r0, [r4, #0xc]\n    mov r3, #0\n    bl InitBgFromTemplate\n    add sp, #0x64\n    pop {r4, r5, pc}\n    nop\n    _0221DC24: .word ov05_0221EA88\n    _0221DC28: .word ov05_0221EB8C\n    _0221DC2C: .word ov05_0221EB38\n    _0221DC30: .word ov05_0221EBC4"
    );
    #endif
}

void ov05_0221DC34(void) {
    GfGfx_EngineATogglePlanes(0x1e, 0);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 3);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 2);
    FreeBgTilemapBuffer(*((u32*)(r4 + 0xc)), 1);
    Heap_Free(*((u32*)(r4 + 0xc)));
}

void ov05_0221DC60(void) {
    /* Original at 0x0221DC60 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x15\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    mov r1, #0\n    str r1, [sp]\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    ldr r1, [r5]\n    mov r3, #3\n    ldr r1, [r1, #0x24]\n    add r4, r0, #0\n    str r1, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    mov r1, #0xf\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, [r5]\n    mov r1, #0x11\n    ldr r0, [r0, #0x24]\n    mov r3, #3\n    str r0, [sp, #0xc]\n    ldr r2, [r5, #0xc]\n    add r0, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    ldr r2, [r5]\n    add r0, r4, #0\n    ldr r2, [r2, #0x24]\n    mov r1, #0x10\n    bl NARC_AllocAndReadWholeMember\n    add r1, sp, #0x10\n    add r6, r0, #0\n    bl NNS_G2dGetUnpackedPaletteData\n    ldr r2, [sp, #0x10]\n    mov r0, #3\n    ldr r1, [r2, #0xc]\n    ldr r2, [r2, #8]\n    mov r3, #0\n    lsl r2, r2, #0x10\n    lsr r2, r2, #0x10\n    bl BG_LoadPlttData\n    ldr r1, [sp, #0x10]\n    ldr r0, _0221DD00 ; =0x000004E4\n    ldr r1, [r1, #0xc]\n    add r0, r5, r0\n    add r1, #0x60\n    mov r2, #0x60\n    bl memcpy\n    add r0, r6, #0\n    bl Heap_Free\n    ldr r0, [r5]\n    mov r2, #0xa9\n    lsl r2, r2, #2\n    ldr r3, _0221DD04 ; =0x00000424\n    add r1, r5, r2\n    add r2, #0xc0\n    ldr r0, [r0, #0x24]\n    add r2, r5, r2\n    add r3, r5, r3\n    bl sub_0207CAAC\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x14\n    pop {r3, r4, r5, r6, pc}\n    _0221DD00: .word 0x000004E4\n    _0221DD04: .word 0x00000424"
    );
    #endif
}

void ov05_0221DD08(void) {
    /* Original at 0x0221DD08 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r6, _0221DDDC ; =ov05_0221EA60\n    mov r4, #0\n    add r7, r5, #0\n    cmp r4, #0\n    beq _0221DD1C\n    cmp r4, #3\n    bne _0221DD24\n    mov r0, #0xa9\n    lsl r0, r0, #2\n    add r1, r5, r0\n    b _0221DD3A\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    bne _0221DD34\n    ldr r0, _0221DDE0 ; =0x00000424\n    add r1, r5, r0\n    b _0221DD3A\n    mov r0, #0xd9\n    lsl r0, r0, #2\n    add r1, r5, r0\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    mov r0, #0x10\n    str r0, [sp, #0x14]\n    mov r0, #6\n    str r0, [sp, #0x18]\n    ldrb r2, [r6]\n    ldrb r3, [r6, #1]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl CopyToBgTilemapRect\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    beq _0221DDC6\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    add r0, r4, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    ldrb r2, [r6]\n    ldrb r3, [r6, #1]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl BgTilemapRectChangePalette\n    cmp r4, #3\n    bhs _0221DD92\n    ldr r0, [r5]\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #1\n    beq _0221DDA0\n    cmp r4, #3\n    blo _0221DDB4\n    ldr r0, [r5]\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0221DDB4\n    ldr r1, _0221DDE4 ; =0x00000504\n    add r3, r4, #3\n    lsl r3, r3, #0x15\n    mov r0, #2\n    add r1, r5, r1\n    mov r2, #0x20\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    b _0221DDC6\n    ldr r1, _0221DDE8 ; =0x000004E4\n    add r3, r4, #3\n    lsl r3, r3, #0x15\n    mov r0, #2\n    add r1, r5, r1\n    mov r2, #0x20\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    add r4, r4, #1\n    add r7, #0x18\n    add r6, r6, #2\n    cmp r4, #6\n    blo _0221DD14\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    _0221DDDC: .word ov05_0221EA60\n    _0221DDE0: .word 0x00000424\n    _0221DDE4: .word 0x00000504\n    _0221DDE8: .word 0x000004E4"
    );
    #endif
}

void ov05_0221DDEC(void) {
    /* Original at 0x0221DDEC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0xc]\n    str r1, [sp]\n    add r1, r2, #0\n    bl GetBgTilemapBuffer\n    add r6, r0, #0\n    ldr r0, [r4]\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0221DE0A\n    mov r7, #0x10\n    b _0221DE0C\n    mov r7, #0\n    mov r5, #0\n    lsl r0, r5, #5\n    add r0, r7, r0\n    lsl r4, r0, #1\n    ldr r0, [sp]\n    lsl r1, r5, #5\n    add r0, r0, r1\n    add r1, r6, r4\n    mov r2, #0x20\n    bl memcpy\n    add r0, r6, r4\n    mov r1, #0\n    mov r2, #0x20\n    bl memset\n    add r0, r5, #1\n    lsl r0, r0, #0x10\n    lsr r5, r0, #0x10\n    cmp r5, #0x18\n    blo _0221DE0E\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221DE38(void) {
    /* Original at 0x0221DE38 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0221DE64 ; =0x00000544\n    add r4, r0, #0\n    add r1, r4, r1\n    mov r2, #1\n    bl ov05_0221DDEC\n    ldr r1, _0221DE68 ; =0x00000844\n    add r0, r4, #0\n    add r1, r4, r1\n    mov r2, #2\n    bl ov05_0221DDEC\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r4, #0xc]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    pop {r4, pc}\n    _0221DE64: .word 0x00000544\n    _0221DE68: .word 0x00000844"
    );
    #endif
}

void ov05_0221DE6C(void) {
    /* Original at 0x0221DE6C */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0221DECC\n    mov r0, #0x20\n    sub r6, r0, r4\n    ldr r1, _0221DF30 ; =0x00000544\n    str r4, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r1, r5, r1\n    str r1, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    lsl r2, r6, #0x18\n    str r3, [sp, #0x10]\n    mov r1, #0x10\n    str r1, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    lsr r2, r2, #0x18\n    bl CopyToBgTilemapRect\n    ldr r0, _0221DF34 ; =0x00000844\n    lsl r2, r6, #0x18\n    str r4, [sp]\n    mov r1, #0x18\n    str r1, [sp, #4]\n    add r0, r5, r0\n    str r0, [sp, #8]\n    mov r3, #0\n    str r3, [sp, #0xc]\n    str r3, [sp, #0x10]\n    mov r0, #0x10\n    str r0, [sp, #0x14]\n    str r1, [sp, #0x18]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    lsr r2, r2, #0x18\n    bl CopyToBgTilemapRect\n    b _0221DF1A\n    ldr r2, _0221DF30 ; =0x00000544\n    mov r0, #0x10\n    str r4, [sp]\n    mov r1, #0x18\n    sub r6, r0, r4\n    str r1, [sp, #4]\n    add r2, r5, r2\n    str r2, [sp, #8]\n    lsl r2, r6, #0x18\n    lsr r2, r2, #0x18\n    str r2, [sp, #0xc]\n    mov r2, #0\n    str r2, [sp, #0x10]\n    str r0, [sp, #0x14]\n    str r1, [sp, #0x18]\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    add r3, r2, #0\n    bl CopyToBgTilemapRect\n    ldr r1, _0221DF34 ; =0x00000844\n    mov r2, #0\n    str r4, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    add r1, r5, r1\n    str r1, [sp, #8]\n    lsl r1, r6, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r1, #0x10\n    str r1, [sp, #0x14]\n    str r0, [sp, #0x18]\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    add r3, r2, #0\n    bl CopyToBgTilemapRect\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl ScheduleBgTilemapBufferTransfer\n    ldr r0, [r5, #0xc]\n    mov r1, #2\n    bl ScheduleBgTilemapBufferTransfer\n    add sp, #0x1c\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0221DF30: .word 0x00000544\n    _0221DF34: .word 0x00000844"
    );
    #endif
}

void ov05_0221DF38(void) {
    /* Original at 0x0221DF38 */
    /* Requires manual decompilation - 141 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r0, r1, #0\n    str r1, [sp]\n    add r5, r2, #0\n    bl Party_GetCount\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x18\n    mul r0, r5\n    add r0, r4, r0\n    mov r6, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    cmp r0, r6\n    bhi _0221DF7A\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    bl GetMonIconNaixEx\n    mov r1, #0x18\n    add r2, r6, #0\n    mul r2, r1\n    ldr r1, [sp, #4]\n    add r2, r1, r2\n    mov r1, #0x85\n    lsl r1, r1, #2\n    str r0, [r2, r1]\n    b _0221E054\n    ldr r0, [sp]\n    add r1, r6, #0\n    bl Party_GetMonByIndex\n    mov r1, #0x18\n    add r2, r6, #0\n    mul r2, r1\n    ldr r1, [sp, #4]\n    add r4, r0, #0\n    add r7, r1, r2\n    bl Pokemon_GetIconNaix\n    mov r1, #0x85\n    lsl r1, r1, #2\n    str r0, [r7, r1]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x86\n    lsl r1, r1, #2\n    strh r0, [r7, r1]\n    add r0, r1, #0\n    ldrh r0, [r7, r0]\n    cmp r0, #0\n    beq _0221E054\n    mov r0, #0x18\n    add r1, r6, #0\n    mul r1, r0\n    ldr r0, [sp, #4]\n    mov r2, #0\n    add r5, r0, r1\n    add r0, r4, #0\n    mov r1, #0x4c\n    bl GetMonData\n    ldr r1, _0221E064 ; =0x00000223\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0xa3\n    bl GetMonData\n    ldr r1, _0221E068 ; =0x0000021A\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0xa4\n    bl GetMonData\n    mov r1, #0x87\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0xa1\n    mov r2, #0\n    bl GetMonData\n    mov r1, #0x22\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221E06C ; =0x0000021E\n    mov r2, #0\n    strh r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0xa2\n    bl GetMonData\n    mov r1, #0x89\n    lsl r1, r1, #2\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0221E070 ; =0x00000225\n    mov r2, #0\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    mov r1, #0xb0\n    bl GetMonData\n    cmp r0, #1\n    bne _0221E034\n    mov r1, #0\n    b _0221E036\n    mov r1, #1\n    ldr r0, _0221E074 ; =0x00000222\n    strb r1, [r7, r0]\n    add r0, r4, #0\n    bl GetMonGender\n    ldr r1, _0221E078 ; =0x00000221\n    strb r0, [r5, r1]\n    add r0, r4, #0\n    bl Pokemon_GetStatusIconId\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x18\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    add r0, r6, #1\n    lsl r0, r0, #0x10\n    lsr r6, r0, #0x10\n    cmp r6, #3\n    bhs _0221E060\n    b _0221DF58\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221E064: .word 0x00000223\n    _0221E068: .word 0x0000021A\n    _0221E06C: .word 0x0000021E\n    _0221E070: .word 0x00000225\n    _0221E074: .word 0x00000222\n    _0221E078: .word 0x00000221"
    );
    #endif
}

void ov05_0221E07C(void) {
    /* Original at 0x0221E07C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x85\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r1, #0\n    mov r2, #0x90\n    bl memset\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r1, #4]\n    mov r2, #0\n    bl ov05_0221DF38\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r1, #0xc]\n    mov r2, #3\n    bl ov05_0221DF38\n    pop {r4, pc}"
    );
    #endif
}

void ov05_0221E0A8(void) {
    /* Original at 0x0221E0A8 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r3, r0, #0\n    add r2, r1, #0\n    mov r0, #0x18\n    mul r2, r0\n    ldr r1, _0221E10C ; =0x0000021A\n    add r4, r3, r2\n    ldrh r0, [r4, r1]\n    cmp r0, #0\n    bne _0221E0C0\n    mov r0, #0\n    pop {r4, pc}\n    add r1, #0xe\n    ldr r1, [r4, r1]\n    cmp r1, #7\n    beq _0221E0D0\n    cmp r1, #0\n    beq _0221E0D0\n    mov r0, #5\n    pop {r4, pc}\n    mov r1, #0x87\n    add r2, r3, r2\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _0221E108\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221E0EE: ; jump table\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #4\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    _0221E10C: .word 0x0000021A"
    );
    #endif
}

void ov05_0221E110(void) {
    /* Original at 0x0221E110 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0\n    str r0, [sp, #8]\n    str r1, [sp]\n    add r0, r1, #0\n    lsl r1, r0, #2\n    ldr r0, [sp]\n    ldr r2, _0221E268 ; =ov05_0221EC5C\n    add r7, r0, r1\n    lsl r0, r7, #2\n    add r4, r5, r0\n    ldr r0, [sp]\n    mov r1, #0xa\n    mul r1, r0\n    str r4, [sp, #4]\n    add r6, r2, r1\n    mov r1, #0x1c\n    add r2, r7, #0\n    mul r2, r1\n    ldr r1, _0221E26C ; =ov05_0221EF2C\n    add r0, r5, #0\n    add r1, r1, r2\n    bl ov05_0221CDC4\n    mov r1, #0x66\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldrb r1, [r6]\n    ldrb r2, [r6, #1]\n    ldr r0, [r4, r0]\n    bl ManagedSprite_SetPositionXY\n    ldr r0, [sp, #8]\n    add r7, r7, #1\n    add r0, r0, #1\n    add r4, r4, #4\n    add r6, r6, #2\n    str r0, [sp, #8]\n    cmp r0, #5\n    blo _0221E134\n    ldr r0, [sp]\n    mov r2, #0x86\n    mov r1, #0x18\n    add r6, r0, #0\n    mul r6, r1\n    add r3, r5, r6\n    lsl r2, r2, #2\n    ldrh r0, [r3, r2]\n    cmp r0, #0\n    bne _0221E19C\n    mov r5, #0\n    add r4, r2, #0\n    add r6, r5, #0\n    sub r4, #0x80\n    ldr r0, [sp, #4]\n    add r1, r6, #0\n    ldr r0, [r0, r4]\n    bl ManagedSprite_SetDrawFlag\n    ldr r0, [sp, #4]\n    add r5, r5, #1\n    add r0, r0, #4\n    str r0, [sp, #4]\n    cmp r5, #5\n    blo _0221E182\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    ldr r1, [sp]\n    mov r4, #0x14\n    mul r4, r1\n    add r1, r2, #0\n    sub r1, #0x80\n    add r7, r5, r1\n    add r1, r2, #0\n    add r1, #0xd\n    add r2, #0xb\n    ldrb r1, [r3, r1]\n    ldrb r2, [r3, r2]\n    bl GetMonIconPaletteEx\n    add r1, r0, #0\n    ldr r0, [r7, r4]\n    bl ManagedSprite_SetPaletteOverride\n    ldr r1, [sp]\n    add r0, r5, #0\n    bl ov05_0221E0A8\n    add r1, r0, #0\n    ldr r0, [r7, r4]\n    bl ManagedSprite_SetAnim\n    ldr r1, _0221E270 ; =0x0000021E\n    add r0, r5, r6\n    ldrh r0, [r0, r1]\n    cmp r0, #0\n    bne _0221E1E6\n    add r0, r5, r4\n    sub r1, #0x82\n    ldr r0, [r0, r1]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    b _0221E20C\n    bl ItemIdIsMail\n    cmp r0, #1\n    bne _0221E1FE\n    mov r0, #0x67\n    add r1, r5, r4\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl ManagedSprite_SetAnim\n    b _0221E20C\n    mov r0, #0x67\n    add r1, r5, r4\n    lsl r0, r0, #2\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetAnim\n    mov r0, #0x89\n    add r1, r5, r6\n    lsl r0, r0, #2\n    ldrb r1, [r1, r0]\n    cmp r1, #0\n    bne _0221E226\n    add r1, r5, r4\n    sub r0, #0x84\n    ldr r0, [r1, r0]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    b _0221E232\n    add r1, r5, r4\n    sub r0, #0x84\n    ldr r0, [r1, r0]\n    mov r1, #2\n    bl ManagedSprite_SetAnim\n    mov r3, #0x8a\n    add r0, r5, r6\n    lsl r3, r3, #2\n    ldr r0, [r0, r3]\n    cmp r0, #7\n    bne _0221E24E\n    add r0, r5, r4\n    sub r3, #0x84\n    ldr r0, [r0, r3]\n    mov r1, #0\n    bl ManagedSprite_SetDrawFlag\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    add r0, r3, #0\n    add r1, r5, r4\n    sub r0, #0x84\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #8]\n    mov r2, #0x18\n    mul r2, r1\n    add r1, r5, r2\n    ldr r1, [r1, r3]\n    bl ManagedSprite_SetAnim\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0221E268: .word ov05_0221EC5C\n    _0221E26C: .word ov05_0221EF2C\n    _0221E270: .word 0x0000021E"
    );
    #endif
}

void ov05_0221E274(void) {
    /* Original at 0x0221E274 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x18\n    ldr r5, _0221E2D4 ; =ov05_0221EAEC\n    add r3, sp, #0\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r1, r2, #0\n    add r0, r4, #0\n    mov r2, #0x1f\n    bl ov05_0221CD24\n    add r0, r4, #0\n    bl ov05_0221E2D8\n    add r0, r4, #0\n    bl ov05_0221E390\n    add r0, r4, #0\n    bl ov05_0221E42C\n    add r0, r4, #0\n    bl ov05_0221E4C8\n    mov r5, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov05_0221E110\n    add r5, r5, #1\n    cmp r5, #6\n    blo _0221E2B0\n    add r0, r4, #0\n    mov r1, #0x10\n    bl ov05_0221E564\n    mov r0, #0x21\n    mov r1, #0x1e\n    lsl r0, r0, #4\n    str r1, [r4, r0]\n    add sp, #0x18\n    pop {r3, r4, r5, pc}\n    nop\n    _0221E2D4: .word ov05_0221EAEC"
    );
    #endif
}

void ov05_0221E2D8(void) {
    /* Original at 0x0221E2D8 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x14\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r7, r0, #0\n    bl sub_02074490\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _0221E388 ; =0x0000B808\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    bl sub_02074498\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E38C ; =0x0000B809\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    bl sub_020744A4\n    add r3, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E38C ; =0x0000B809\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r7, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    mov r4, #0\n    add r6, r5, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E38C ; =0x0000B809\n    mov r1, #0x65\n    add r0, r4, r0\n    str r0, [sp, #8]\n    mov r0, #0x19\n    mov r3, #0x85\n    lsl r0, r0, #4\n    lsl r1, r1, #2\n    lsl r3, r3, #2\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    ldr r3, [r6, r3]\n    add r2, r7, #0\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    add r4, r4, #1\n    add r6, #0x18\n    cmp r4, #6\n    blo _0221E350\n    add r0, r7, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221E388: .word 0x0000B808\n    _0221E38C: .word 0x0000B809"
    );
    #endif
}

void ov05_0221E390(void) {
    /* Original at 0x0221E390 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x15\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E420 ; =0x0000B80F\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x14\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0221E424 ; =0x0000B809\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x15\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E428 ; =0x0000B80A\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x13\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E428 ; =0x0000B80A\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x12\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0221E420: .word 0x0000B80F\n    _0221E424: .word 0x0000B809\n    _0221E428: .word 0x0000B80A"
    );
    #endif
}

void ov05_0221E42C(void) {
    /* Original at 0x0221E42C */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x27\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E4BC ; =0x0000B810\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x40\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _0221E4C0 ; =0x0000B80A\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x41\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E4C4 ; =0x0000B80B\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x3f\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E4C4 ; =0x0000B80B\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #0x3e\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0221E4BC: .word 0x0000B810\n    _0221E4C0: .word 0x0000B80A\n    _0221E4C4: .word 0x0000B80B"
    );
    #endif
}

void ov05_0221E4C8(void) {
    /* Original at 0x0221E4C8 */
    /* Requires manual decompilation - 69 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r1, [r5]\n    mov r0, #0x15\n    ldr r1, [r1, #0x24]\n    bl NARC_New\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _0221E558 ; =0x0000B811\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #2\n    bl SpriteSystem_LoadCharResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _0221E55C ; =0x0000B80B\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #8\n    bl SpriteSystem_LoadPlttResObjFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, _0221E560 ; =0x0000B80C\n    mov r1, #0x19\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    mov r3, #1\n    bl SpriteSystem_LoadCellResObjFromOpenNarc\n    mov r3, #0\n    mov r1, #0x19\n    ldr r0, _0221E560 ; =0x0000B80C\n    str r3, [sp]\n    lsl r1, r1, #4\n    str r0, [sp, #4]\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    add r2, r4, #0\n    bl SpriteSystem_LoadAnimResObjFromOpenNarc\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0221E558: .word 0x0000B811\n    _0221E55C: .word 0x0000B80B\n    _0221E560: .word 0x0000B80C"
    );
    #endif
}

void ov05_0221E564(void) {
    /* Original at 0x0221E564 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r0, [sp]\n    ldr r0, [r0]\n    add r7, r1, #0\n    add r0, #0x29\n    ldrb r0, [r0]\n    cmp r0, #0\n    bne _0221E57E\n    mov r0, #3\n    str r0, [sp, #8]\n    lsl r0, r7, #0x13\n    b _0221E588\n    mov r0, #0\n    str r0, [sp, #8]\n    lsl r0, r7, #3\n    neg r0, r0\n    lsl r0, r0, #0x10\n    asr r7, r0, #0x10\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #8]\n    mov r1, #0xa\n    ldr r2, _0221E5E0 ; =ov05_0221EC5C\n    mul r1, r0\n    add r0, r2, r1\n    str r0, [sp, #4]\n    ldr r1, [sp, #8]\n    ldr r0, [sp, #0xc]\n    ldr r4, [sp, #4]\n    add r1, r1, r0\n    lsl r0, r1, #2\n    add r0, r1, r0\n    lsl r1, r0, #2\n    ldr r0, [sp]\n    mov r6, #0\n    add r5, r0, r1\n    ldrb r1, [r4]\n    mov r0, #0x66\n    lsl r0, r0, #2\n    add r1, r7, r1\n    lsl r1, r1, #0x10\n    ldrb r2, [r4, #1]\n    ldr r0, [r5, r0]\n    asr r1, r1, #0x10\n    bl ManagedSprite_SetPositionXY\n    add r6, r6, #1\n    add r4, r4, #2\n    add r5, r5, #4\n    cmp r6, #5\n    blt _0221E5AE\n    ldr r0, [sp, #4]\n    add r0, #0xa\n    str r0, [sp, #4]\n    ldr r0, [sp, #0xc]\n    add r0, r0, #1\n    str r0, [sp, #0xc]\n    cmp r0, #3\n    blt _0221E59A\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0221E5E0: .word ov05_0221EC5C"
    );
    #endif
}

void ov05_0221E5E4(void) {
    /* Original at 0x0221E5E4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r5, r7, #0\n    ldr r4, _0221E608 ; =ov05_0221ECE4\n    mov r6, #0\n    add r5, #0x10\n    ldr r0, [r7, #0xc]\n    add r1, r5, #0\n    add r2, r4, #0\n    bl AddWindow\n    add r6, r6, #1\n    add r4, #8\n    add r5, #0x10\n    cmp r6, #0x18\n    blo _0221E5F0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0221E608: .word ov05_0221ECE4"
    );
    #endif
}

void ov05_0221E60C(void) {
    RemoveWindow(0);
}

void ov05_0221E624(void) {
    /* Original at 0x0221E624 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    ldr r4, [sp, #0x3c]\n    add r5, r0, #0\n    add r7, r5, #0\n    lsl r0, r4, #6\n    add r7, #0x10\n    str r0, [sp, #0x1c]\n    str r1, [sp, #0x10]\n    str r3, [sp, #0x14]\n    ldr r6, [sp, #0x38]\n    cmp r4, #3\n    ldr r0, [r5]\n    bhs _0221E64C\n    ldr r0, [r0, #4]\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x18]\n    b _0221E656\n    ldr r0, [r0, #0xc]\n    sub r1, r4, #3\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x18]\n    add r1, r4, #0\n    ldr r0, [sp, #0x10]\n    add r1, #8\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x20]\n    ldr r0, [sp, #0x18]\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [sp, #0x14]\n    mov r1, #0\n    bl BufferBoxMonNickname\n    ldr r0, [sp, #0x14]\n    ldr r2, [sp, #0x20]\n    add r1, r6, #0\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E708 ; =0x000F0E00\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    add r3, r1, #0\n    add r0, r7, r0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0x18\n    mul r0, r4\n    add r2, r5, r0\n    ldr r0, _0221E70C ; =0x00000222\n    ldrb r1, [r2, r0]\n    cmp r1, #0\n    bne _0221E704\n    sub r0, r0, #1\n    ldrb r0, [r2, r0]\n    cmp r0, #0\n    bne _0221E6DC\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1b\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    mov r0, #0xc1\n    lsl r0, r0, #0xa\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    add r2, r6, #0\n    add r0, r7, r0\n    mov r3, #0x40\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    cmp r0, #1\n    bne _0221E704\n    ldr r0, [sp, #0x10]\n    mov r1, #0x1c\n    add r2, r6, #0\n    bl ReadMsgDataIntoString\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _0221E710 ; =0x00050600\n    add r2, r6, #0\n    str r0, [sp, #8]\n    ldr r0, [sp, #0x1c]\n    mov r3, #0x40\n    add r0, r7, r0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0221E708: .word 0x000F0E00\n    _0221E70C: .word 0x00000222\n    _0221E710: .word 0x00050600"
    );
    #endif
}

void ov05_0221E714(void) {
    /* Original at 0x0221E714 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    ldr r3, [sp, #0x24]\n    add r4, r0, #0\n    lsl r5, r3, #2\n    add r5, r5, #1\n    mov r1, #0\n    add r0, #0x10\n    lsl r5, r5, #4\n    str r1, [sp]\n    add r0, r0, r5\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #2\n    str r0, [sp, #0xc]\n    add r0, r2, #0\n    mov r2, #0x18\n    mul r2, r3\n    add r3, r4, r2\n    mov r2, #0x22\n    lsl r2, r2, #4\n    ldrb r2, [r3, r2]\n    mov r1, #1\n    mov r3, #3\n    bl sub_0200CE7C\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov05_0221E74C(void) {
    /* Original at 0x0221E74C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r1, [sp, #0x24]\n    add r5, r0, #0\n    lsl r0, r1, #2\n    add r7, r2, #0\n    add r2, r5, #0\n    add r0, r0, #2\n    add r6, r1, #0\n    add r2, #0x10\n    lsl r0, r0, #4\n    add r4, r2, r0\n    mov r0, #0x18\n    mul r6, r0\n    str r4, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    ldr r1, _0221E7B4 ; =0x0000021A\n    add r2, r5, r6\n    ldrh r1, [r2, r1]\n    add r0, r7, #0\n    mov r2, #3\n    mov r3, #1\n    bl PrintUIntOnWindow\n    mov r0, #2\n    str r0, [sp]\n    add r0, r7, #0\n    mov r1, #0\n    add r2, r4, #0\n    mov r3, #0x18\n    bl sub_0200CDAC\n    mov r1, #0x87\n    str r4, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    add r2, r5, r6\n    lsl r1, r1, #2\n    ldrh r1, [r2, r1]\n    add r0, r7, #0\n    mov r2, #3\n    mov r3, #0\n    bl PrintUIntOnWindow\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E7B4: .word 0x0000021A"
    );
    #endif
}

void ov05_0221E7B8(void) {
    /* Original at 0x0221E7B8 */
    /* Requires manual decompilation - 105 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    lsl r0, r1, #2\n    add r2, r5, #0\n    add r0, r0, #3\n    add r2, #0x10\n    lsl r0, r0, #4\n    add r4, r2, r0\n    mov r0, #0x18\n    add r6, r1, #0\n    mul r6, r0\n    mov r0, #0x87\n    lsl r0, r0, #2\n    add r7, r5, r0\n    sub r0, r0, #2\n    add r0, r5, r0\n    str r0, [sp, #8]\n    ldrh r0, [r0, r6]\n    ldrh r1, [r7, r6]\n    mov r2, #0x30\n    bl CalculateHpBarColor\n    cmp r0, #4\n    bhi _0221E846\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0221E7F6: ; jump table\n    ldrb r3, [r4, #9]\n    ldr r1, _0221E89C ; =0x000004F6\n    mov r0, #1\n    lsl r3, r3, #4\n    add r3, #9\n    lsl r3, r3, #0x11\n    add r1, r5, r1\n    mov r2, #4\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    b _0221E846\n    ldrb r3, [r4, #9]\n    ldr r1, _0221E8A0 ; =0x00000516\n    mov r0, #1\n    lsl r3, r3, #4\n    add r3, #9\n    lsl r3, r3, #0x11\n    add r1, r5, r1\n    mov r2, #4\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    b _0221E846\n    ldrb r3, [r4, #9]\n    ldr r1, _0221E8A4 ; =0x00000536\n    mov r0, #1\n    lsl r3, r3, #4\n    add r3, #9\n    lsl r3, r3, #0x11\n    add r1, r5, r1\n    mov r2, #4\n    lsr r3, r3, #0x10\n    bl BG_LoadPlttData\n    ldr r0, [sp, #8]\n    ldrh r1, [r7, r6]\n    ldrh r0, [r0, r6]\n    mov r2, #0x30\n    bl CalculateHpBarPixelsLength\n    add r5, r0, #0\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    mov r3, #2\n    bl FillWindowPixelRect\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0\n    mov r3, #3\n    bl FillWindowPixelRect\n    lsl r0, r5, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0\n    mov r3, #5\n    bl FillWindowPixelRect\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0221E89C: .word 0x000004F6\n    _0221E8A0: .word 0x00000516\n    _0221E8A4: .word 0x00000536"
    );
    #endif
}

void ov05_0221E8A8(void) {
    /* Original at 0x0221E8A8 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    ldr r6, [sp, #0x2c]\n    add r5, r7, #0\n    str r1, [sp, #8]\n    add r5, #0x10\n    lsl r4, r6, #6\n    add r0, r5, r4\n    mov r1, #0\n    str r2, [sp, #0xc]\n    str r3, [sp, #0x10]\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    add r0, #0x10\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    add r0, #0x20\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, r4\n    add r0, #0x30\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r7, #0\n    str r6, [sp, #4]\n    bl ov05_0221E624\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r7, #0\n    str r6, [sp, #4]\n    bl ov05_0221E714\n    ldr r0, [sp, #0x28]\n    ldr r1, [sp, #8]\n    str r0, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #0x10]\n    add r0, r7, #0\n    str r6, [sp, #4]\n    bl ov05_0221E74C\n    add r0, r7, #0\n    add r1, r6, #0\n    bl ov05_0221E7B8\n    add r0, r5, r4\n    bl ScheduleWindowCopyToVram\n    add r0, r5, r4\n    add r0, #0x10\n    bl ScheduleWindowCopyToVram\n    add r0, r5, r4\n    add r0, #0x20\n    bl ScheduleWindowCopyToVram\n    add r0, r5, r4\n    add r0, #0x30\n    bl ScheduleWindowCopyToVram\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221E944(void) {
    /* Original at 0x0221E944 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r6, r0, #0\n    ldr r3, [r6]\n    mov r2, #0x4b\n    ldr r3, [r3, #0x24]\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #2\n    bl NewMsgDataFromNarc\n    ldr r3, [r6]\n    str r0, [sp, #0x10]\n    ldr r3, [r3, #0x24]\n    mov r0, #0xf\n    mov r1, #0xe\n    mov r2, #0\n    bl MessagePrinter_New\n    str r0, [sp, #0xc]\n    ldr r0, [r6]\n    ldr r0, [r0, #0x24]\n    bl MessageFormat_New\n    ldr r1, [r6]\n    str r0, [sp, #8]\n    ldr r1, [r1, #0x24]\n    mov r0, #0x20\n    bl String_New\n    add r7, r0, #0\n    mov r4, #0\n    add r5, r6, #0\n    mov r0, #0x86\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _0221E9A0\n    ldr r1, [sp, #0x10]\n    str r7, [sp]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #8]\n    add r0, r6, #0\n    str r4, [sp, #4]\n    bl ov05_0221E8A8\n    add r4, r4, #1\n    add r5, #0x18\n    cmp r4, #6\n    blo _0221E986\n    add r0, r7, #0\n    bl String_Delete\n    ldr r0, [sp, #0x10]\n    bl DestroyMsgData\n    ldr r0, [sp, #0xc]\n    bl MessagePrinter_Delete\n    ldr r0, [sp, #8]\n    bl MessageFormat_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov05_0221E9C4(void) {
    /* Original at 0x0221E9C4 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0xd8\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    ldr r0, _0221E9F4 ; =0x00000B88\n    mov r2, #0\n    add r0, r4, r0\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    ldr r0, _0221E9F4 ; =0x00000B88\n    mov r1, #0\n    add r0, r4, r0\n    mov r2, #1\n    mov r3, #0xf\n    bl DrawFrameAndWindow2\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0221E9F4: .word 0x00000B88"
    );
    #endif
}

void ov05_0221E9F8(void) {
    sub_0202FC48(0, 1, 7);
}

void ov05_0221EA18(void) {
    WaitingIcon_New(1);
}

void ov05_0221EA38(void) {
    sub_0200F450(0);
}
