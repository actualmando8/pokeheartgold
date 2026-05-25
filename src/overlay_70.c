/* Decompiled from asm/overlay_70.s */
#include "global.h"

void ov70_022378C0(void) {
    /* Original at 0x022378C0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _022378D8 ; =_02246800\n    mov r4, #1\n    str r4, [r3]\n    mov r4, #0\n    str r4, [r3, #4]\n    str r0, [r3, #8]\n    str r1, [r3, #0xc]\n    str r2, [r3, #0x10]\n    pop {r3, r4}\n    bx lr\n    nop\n    _022378D8: .word _02246800"
    );
    #endif
}

void ov70_022378DC(void) {
    /* Original at 0x022378DC */
    /* Requires manual decompilation - 676 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, _02237BC0 ; =_02246800\n    ldr r0, [r1]\n    cmp r0, #0x18\n    bls _022378E8\n    b _02237F24\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022378F4: ; jump table\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237934\n    cmp r0, #7\n    beq _0223794C\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237BC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    ldr r2, _02237BC4 ; =ov70_02246920\n    str r1, [r0]\n    ldrb r2, [r2, #0x1c]\n    cmp r2, #0xe\n    bhi _022379C6\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _02237966: ; jump table\n    mov r1, #0\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x1d\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x1c\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x19\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x1e\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x1f\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x20\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x21\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x22\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x23\n    str r1, [r0, #4]\n    b _022379CE\n    sub r1, #0x1a\n    str r1, [r0, #4]\n    b _022379CE\n    mov r1, #0xc\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _022379E2\n    cmp r0, #7\n    beq _022379FA\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237BC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r2, #0x18\n    ldr r1, _02237BC4 ; =ov70_02246920\n    str r2, [r0]\n    ldrb r1, [r1, #0x1c]\n    cmp r1, #5\n    bgt _02237A24\n    cmp r1, #0\n    blt _02237A4C\n    add r3, r1, r1\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _02237A18: ; jump table\n    cmp r1, #0xe\n    beq _02237A42\n    b _02237A4C\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237A54\n    sub r2, #0x1d\n    str r2, [r0, #4]\n    b _02237A54\n    sub r2, #0x1c\n    str r2, [r0, #4]\n    b _02237A54\n    sub r2, #0x1b\n    str r2, [r0, #4]\n    b _02237A54\n    mov r1, #1\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237A54\n    mov r1, #0xc\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237A68\n    cmp r0, #7\n    beq _02237A80\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237BC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C020\n    mov r1, #0x49\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _02237A9A\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237AD4\n    ldr r0, _02237BC8 ; =ov70_02246900\n    ldr r0, [r0, #0x40]\n    ldrb r0, [r0]\n    cmp r0, #3\n    beq _02237AB8\n    cmp r0, #5\n    beq _02237AAE\n    cmp r0, #0xe\n    beq _02237AC2\n    b _02237ACC\n    mov r1, #2\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237AD4\n    mov r1, #3\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237AD4\n    mov r1, #1\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237AD4\n    mov r1, #0xc\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237AE8\n    cmp r0, #7\n    beq _02237B00\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237BC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C020\n    mov r1, #0x49\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _02237B1A\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #1\n    str r1, [r0, #4]\n    b _02237B68\n    ldr r0, _02237BC8 ; =ov70_02246900\n    ldr r0, [r0, #0x40]\n    ldrb r0, [r0]\n    cmp r0, #5\n    bgt _02237B34\n    cmp r0, #3\n    blt _02237B60\n    beq _02237B44\n    cmp r0, #4\n    beq _02237B4E\n    cmp r0, #5\n    beq _02237B3A\n    b _02237B60\n    cmp r0, #0xe\n    beq _02237B56\n    b _02237B60\n    mov r1, #2\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237B68\n    mov r1, #3\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237B68\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237B68\n    mov r1, #1\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237B68\n    mov r1, #0xc\n    ldr r0, _02237BC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237B7C\n    cmp r0, #7\n    beq _02237B94\n    pop {r3, pc}\n    ldr r0, _02237BC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237BC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r1, _02237BC0 ; =_02246800\n    mov r2, #0x18\n    ldr r0, _02237BC4 ; =ov70_02246920\n    str r2, [r1]\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #5\n    bgt _02237BB2\n    cmp r0, #1\n    blt _02237BDE\n    beq _02237BB8\n    cmp r0, #3\n    beq _02237BD2\n    cmp r0, #5\n    beq _02237BCC\n    b _02237BDE\n    cmp r0, #0xe\n    beq _02237BD8\n    b _02237BDE\n    mov r0, #0\n    str r0, [r1, #4]\n    b _02237BE6\n    nop\n    _02237BC0: .word _02246800\n    _02237BC4: .word ov70_02246920\n    _02237BC8: .word ov70_02246900\n    sub r2, #0x1b\n    str r2, [r1, #4]\n    b _02237BE6\n    sub r2, #0x1c\n    str r2, [r1, #4]\n    b _02237BE6\n    sub r2, #0x1a\n    str r2, [r1, #4]\n    b _02237BE6\n    mov r1, #0xc\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237BFA\n    cmp r0, #7\n    beq _02237C12\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r2, #0x18\n    ldr r1, _02237EC4 ; =ov70_02246920\n    str r2, [r0]\n    ldrb r1, [r1, #0x1c]\n    cmp r1, #5\n    bgt _02237C3C\n    cmp r1, #0\n    blt _02237C64\n    add r3, r1, r1\n    add r3, pc\n    ldrh r3, [r3, #6]\n    lsl r3, r3, #0x10\n    asr r3, r3, #0x10\n    add pc, r3\n    _02237C30: ; jump table\n    cmp r1, #0xe\n    beq _02237C5A\n    b _02237C64\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237C6C\n    sub r2, #0x1b\n    str r2, [r0, #4]\n    b _02237C6C\n    sub r2, #0x1d\n    str r2, [r0, #4]\n    b _02237C6C\n    sub r2, #0x1c\n    str r2, [r0, #4]\n    b _02237C6C\n    mov r1, #1\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237C6C\n    mov r1, #0xc\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237C80\n    cmp r0, #7\n    beq _02237C98\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C020\n    mov r1, #0x49\n    lsl r1, r1, #2\n    cmp r0, r1\n    blo _02237CBC\n    bl ov38_0221C020\n    mov r1, #0x49\n    lsl r1, r1, #2\n    bl _u32_div_f\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    b _02237CE4\n    cmp r0, #0\n    bne _02237CC8\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237CE4\n    ldr r0, _02237EC8 ; =ov70_02246900\n    ldr r0, [r0, #0x40]\n    ldrb r0, [r0]\n    cmp r0, #0xe\n    bne _02237CDC\n    mov r1, #1\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237CE4\n    mov r1, #0xc\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237CF8\n    cmp r0, #7\n    beq _02237D10\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C020\n    mov r1, #0x49\n    lsl r1, r1, #2\n    cmp r0, r1\n    bne _02237D2A\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237DB6\n    ldr r0, _02237EC8 ; =ov70_02246900\n    ldr r0, [r0, #0x40]\n    ldrb r0, [r0]\n    cmp r0, #0xe\n    bhi _02237DAE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02237D40: ; jump table\n    mov r1, #4\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #5\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #6\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #7\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #8\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #9\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #0xa\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #1\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237DB6\n    mov r1, #0xc\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237DCA\n    cmp r0, #7\n    beq _02237DE2\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r1, _02237EC0 ; =_02246800\n    mov r2, #0x18\n    ldr r0, _02237EC4 ; =ov70_02246920\n    str r2, [r1]\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #1\n    beq _02237DFA\n    cmp r0, #2\n    beq _02237E06\n    cmp r0, #0xe\n    beq _02237E00\n    b _02237E0A\n    mov r0, #0\n    str r0, [r1, #4]\n    b _02237E0A\n    sub r2, #0x1a\n    str r2, [r1, #4]\n    b _02237E0A\n    sub r2, #0x1d\n    str r2, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237E1E\n    cmp r0, #7\n    beq _02237E36\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r1, _02237EC0 ; =_02246800\n    mov r2, #0x18\n    ldr r0, _02237EC4 ; =ov70_02246920\n    str r2, [r1]\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #7\n    bgt _02237E54\n    cmp r0, #1\n    blt _02237E72\n    beq _02237E5A\n    cmp r0, #6\n    beq _02237E60\n    cmp r0, #7\n    beq _02237E66\n    b _02237E72\n    cmp r0, #0xe\n    beq _02237E6C\n    b _02237E72\n    mov r0, #0\n    str r0, [r1, #4]\n    b _02237E7A\n    mov r0, #1\n    str r0, [r1, #4]\n    b _02237E7A\n    mov r0, #2\n    str r0, [r1, #4]\n    b _02237E7A\n    sub r2, #0x1a\n    str r2, [r1, #4]\n    b _02237E7A\n    mov r1, #0xc\n    ldr r0, _02237EC0 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    bl ov38_0221BF48\n    cmp r0, #1\n    beq _02237E8E\n    cmp r0, #7\n    beq _02237EA6\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C014\n    bl ov70_02238398\n    ldr r1, _02237EC0 ; =_02246800\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    bl ov38_0221C020\n    cmp r0, #8\n    bne _02237EBC\n    ldr r0, _02237EC0 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237F12\n    ldr r0, _02237EC4 ; =ov70_02246920\n    b _02237ECC\n    _02237EC0: .word _02246800\n    _02237EC4: .word ov70_02246920\n    _02237EC8: .word ov70_02246900\n    ldrb r0, [r0, #0x1c]\n    cmp r0, #7\n    bgt _02237EE2\n    cmp r0, #1\n    blt _02237F0A\n    beq _02237EE8\n    cmp r0, #6\n    beq _02237EF0\n    cmp r0, #7\n    beq _02237EF8\n    b _02237F0A\n    cmp r0, #0xe\n    beq _02237F00\n    b _02237F0A\n    ldr r0, _02237F28 ; =_02246800\n    mov r1, #0\n    str r1, [r0, #4]\n    b _02237F12\n    ldr r0, _02237F28 ; =_02246800\n    mov r1, #1\n    str r1, [r0, #4]\n    b _02237F12\n    ldr r0, _02237F28 ; =_02246800\n    mov r1, #2\n    str r1, [r0, #4]\n    b _02237F12\n    mov r1, #1\n    ldr r0, _02237F28 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    b _02237F12\n    mov r1, #0xc\n    ldr r0, _02237F28 ; =_02246800\n    mvn r1, r1\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    mov r0, #0x18\n    str r0, [r1]\n    sub r0, #0x24\n    str r0, [r1, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _02237F28: .word _02246800"
    );
    #endif
}

void ov70_02237F2C(void) {
    /* Original at 0x02237F2C */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02237F34 ; =_02246800\n    mov r1, #0\n    str r1, [r0]\n    bx lr\n    _02237F34: .word _02246800"
    );
    #endif
}

void ov70_02237F38(void) {
    /* Original at 0x02237F38 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02237F54 ; =_02246800\n    ldr r0, [r1]\n    cmp r0, #1\n    beq _02237F46\n    cmp r0, #0x18\n    beq _02237F4A\n    b _02237F50\n    mov r0, #1\n    bx lr\n    mov r0, #1\n    str r0, [r1]\n    bx lr\n    mov r0, #0\n    bx lr\n    _02237F54: .word _02246800"
    );
    #endif
}

void ov70_02237F58(void) {
    /* Original at 0x02237F58 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02237F60 ; =_02246800\n    ldr r0, [r0, #4]\n    bx lr\n    nop\n    _02237F60: .word _02246800"
    );
    #endif
}

void ov70_02237F64(void) {
    /* Original at 0x02237F64 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    add r1, r0, #0\n    mov r2, #0x49\n    ldr r0, _02237FA4 ; =ov70_02246814\n    lsl r2, r2, #2\n    bl memcpy\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    mov r2, #0x49\n    ldr r0, _02237FA8 ; =ov70_022460A0\n    ldr r1, _02237FA4 ; =ov70_02246814\n    ldr r3, _02237FAC ; =ov70_0224693C\n    lsl r2, r2, #2\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02237F94\n    ldr r0, _02237FB0 ; =_02246800\n    mov r1, #2\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _02237FB0 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    _02237FA4: .word ov70_02246814\n    _02237FA8: .word ov70_022460A0\n    _02237FAC: .word ov70_0224693C\n    _02237FB0: .word _02246800"
    );
    #endif
}

void ov70_02237FB4(void) {
    /* Original at 0x02237FB4 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _02237FF4 ; =ov70_0224680C\n    ldr r2, _02237FF8 ; =ov70_02246814\n    ldr r1, [r0]\n    ldr r0, [r0, #4]\n    str r1, [r2]\n    str r0, [r2, #4]\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02237FFC ; =ov70_022460EC\n    ldr r1, _02237FF8 ; =ov70_02246814\n    ldr r3, _02238000 ; =ov70_0224693C\n    mov r2, #8\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02237FE2\n    ldr r0, _02238004 ; =_02246800\n    mov r1, #4\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _02238004 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _02237FF4: .word ov70_0224680C\n    _02237FF8: .word ov70_02246814\n    _02237FFC: .word ov70_022460EC\n    _02238000: .word ov70_0224693C\n    _02238004: .word _02246800"
    );
    #endif
}

void ov70_02238008(void) {
    /* Original at 0x02238008 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _02238048 ; =ov70_02246900\n    str r4, [r0, #0x40]\n    bl ov38_0221BE84\n    mov r0, #0x49\n    lsl r0, r0, #2\n    str r0, [sp]\n    ldr r0, _0223804C ; =ov70_0224613C\n    ldr r1, _02238050 ; =ov70_02246814\n    mov r2, #0\n    add r3, r4, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02238036\n    ldr r0, _02238054 ; =_02246800\n    mov r1, #6\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _02238054 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, pc}\n    _02238048: .word ov70_02246900\n    _0223804C: .word ov70_0224613C\n    _02238050: .word ov70_02246814\n    _02238054: .word _02246800"
    );
    #endif
}

void ov70_02238058(void) {
    /* Original at 0x02238058 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, _02238098 ; =ov70_02246900\n    str r4, [r0, #0x40]\n    bl ov38_0221BE84\n    mov r0, #0x49\n    lsl r0, r0, #2\n    str r0, [sp]\n    ldr r0, _0223809C ; =ov70_02246184\n    ldr r1, _022380A0 ; =ov70_02246814\n    mov r2, #0\n    add r3, r4, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02238086\n    ldr r0, _022380A4 ; =_02246800\n    mov r1, #8\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _022380A4 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, pc}\n    _02238098: .word ov70_02246900\n    _0223809C: .word ov70_02246184\n    _022380A0: .word ov70_02246814\n    _022380A4: .word _02246800"
    );
    #endif
}

void ov70_022380A8(void) {
    /* Original at 0x022380A8 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _022380DC ; =ov70_022461D0\n    ldr r1, _022380E0 ; =ov70_02246814\n    ldr r3, _022380E4 ; =ov70_0224693C\n    mov r2, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _022380CA\n    ldr r0, _022380E8 ; =_02246800\n    mov r1, #0xa\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _022380E8 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _022380DC: .word ov70_022461D0\n    _022380E0: .word ov70_02246814\n    _022380E4: .word ov70_0224693C\n    _022380E8: .word _02246800"
    );
    #endif
}

void ov70_022380EC(void) {
    /* Original at 0x022380EC */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02238120 ; =ov70_0224621C\n    ldr r1, _02238124 ; =ov70_02246814\n    ldr r3, _02238128 ; =ov70_0224693C\n    mov r2, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _0223810E\n    ldr r0, _0223812C ; =_02246800\n    mov r1, #0xc\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _0223812C ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _02238120: .word ov70_0224621C\n    _02238124: .word ov70_02246814\n    _02238128: .word ov70_0224693C\n    _0223812C: .word _02246800"
    );
    #endif
}

void ov70_02238130(void) {
    /* Original at 0x02238130 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _02238194 ; =ov70_02246900\n    add r6, r2, #0\n    str r6, [r0, #0x40]\n    add r4, r1, #0\n    bl ov38_0221BE84\n    ldrb r0, [r5]\n    ldr r1, _02238198 ; =ov70_02246814\n    mov r2, #7\n    strb r0, [r1]\n    ldrb r0, [r5, #1]\n    add r3, r6, #0\n    strb r0, [r1, #1]\n    ldrb r0, [r5, #2]\n    strb r0, [r1, #2]\n    ldrb r0, [r5, #3]\n    strb r0, [r1, #3]\n    ldrb r0, [r5, #4]\n    strb r0, [r1, #4]\n    ldrb r0, [r5, #5]\n    strb r0, [r1, #5]\n    ldr r0, _0223819C ; =_02246800\n    strb r4, [r0, #0x1a]\n    mov r0, #0x49\n    lsl r0, r0, #2\n    mul r0, r4\n    str r0, [sp]\n    ldr r0, _022381A0 ; =ov70_02246268\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02238180\n    ldr r0, _0223819C ; =_02246800\n    mov r1, #0xe\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _0223819C ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _02238194: .word ov70_02246900\n    _02238198: .word ov70_02246814\n    _0223819C: .word _02246800\n    _022381A0: .word ov70_02246268"
    );
    #endif
}

void ov70_022381A4(void) {
    /* Original at 0x022381A4 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022381F8 ; =ov70_02246900\n    add r4, r1, #0\n    str r4, [r0, #0x40]\n    bl ov38_0221BE84\n    ldr r3, _022381FC ; =ov70_02246814\n    add r2, r5, #0\n    mov r1, #8\n    ldrb r0, [r2]\n    add r2, r2, #1\n    strb r0, [r3]\n    add r3, r3, #1\n    sub r1, r1, #1\n    bne _022381B8\n    mov r0, #6\n    ldrsb r1, [r5, r0]\n    mov r0, #0x49\n    lsl r0, r0, #2\n    mul r0, r1\n    str r0, [sp]\n    ldr r0, _02238200 ; =ov70_02246268\n    ldr r1, _022381FC ; =ov70_02246814\n    mov r2, #8\n    add r3, r4, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _022381E8\n    ldr r0, _02238204 ; =_02246800\n    mov r1, #0xe\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _02238204 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, r4, r5, pc}\n    _022381F8: .word ov70_02246900\n    _022381FC: .word ov70_02246814\n    _02238200: .word ov70_02246268\n    _02238204: .word _02246800"
    );
    #endif
}

void ov70_02238208(void) {
    /* Original at 0x02238208 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, _0223825C ; =ov70_02246900\n    add r6, r2, #0\n    add r4, r1, #0\n    str r6, [r0, #0x40]\n    bl ov38_0221BE84\n    mov r2, #0x49\n    ldr r0, _02238260 ; =ov70_02246814\n    add r1, r4, #0\n    lsl r2, r2, #2\n    bl memcpy\n    ldr r0, _0223825C ; =ov70_02246900\n    mov r2, #0x49\n    str r5, [r0, #0x38]\n    lsl r2, r2, #2\n    str r2, [sp]\n    ldr r0, _02238264 ; =ov70_022462B4\n    ldr r1, _02238260 ; =ov70_02246814\n    add r2, r2, #4\n    add r3, r6, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _0223824A\n    ldr r0, _02238268 ; =_02246800\n    mov r1, #0x10\n    str r1, [r0]\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    ldr r0, _02238268 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}\n    _0223825C: .word ov70_02246900\n    _02238260: .word ov70_02246814\n    _02238264: .word ov70_022462B4\n    _02238268: .word _02246800"
    );
    #endif
}

void ov70_0223826C(void) {
    /* Original at 0x0223826C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r0, _022382AC ; =ov70_0224680C\n    ldr r2, _022382B0 ; =ov70_02246814\n    ldr r1, [r0]\n    ldr r0, [r0, #4]\n    str r1, [r2]\n    str r0, [r2, #4]\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _022382B4 ; =ov70_02246304\n    ldr r1, _022382B0 ; =ov70_02246814\n    ldr r3, _022382B8 ; =ov70_0224693C\n    mov r2, #8\n    bl ov70_02238360\n    cmp r0, #0\n    beq _0223829A\n    ldr r0, _022382BC ; =_02246800\n    mov r1, #0x12\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _022382BC ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _022382AC: .word ov70_0224680C\n    _022382B0: .word ov70_02246814\n    _022382B4: .word ov70_02246304\n    _022382B8: .word ov70_0224693C\n    _022382BC: .word _02246800"
    );
    #endif
}

void ov70_022382C0(void) {
    /* Original at 0x022382C0 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    bl ov38_0221BE84\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _022382F4 ; =ov70_02246358\n    ldr r1, _022382F8 ; =ov70_02246814\n    ldr r3, _022382FC ; =ov70_0224693C\n    mov r2, #0\n    bl ov70_02238360\n    cmp r0, #0\n    beq _022382E2\n    ldr r0, _02238300 ; =_02246800\n    mov r1, #0x14\n    str r1, [r0]\n    pop {r3, pc}\n    ldr r0, _02238300 ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, pc}\n    nop\n    _022382F4: .word ov70_02246358\n    _022382F8: .word ov70_02246814\n    _022382FC: .word ov70_0224693C\n    _02238300: .word _02246800"
    );
    #endif
}

void ov70_02238304(void) {
    /* Original at 0x02238304 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0x1c\n    add r4, r1, #0\n    bl OS_GetMacAddress\n    ldr r0, _02238350 ; =ov70_02246814\n    add r1, r5, #0\n    mov r2, #0x64\n    bl memcpy\n    ldr r0, _02238354 ; =ov70_02246900\n    str r4, [r0, #0x40]\n    bl ov38_0221BE84\n    mov r0, #8\n    str r0, [sp]\n    ldr r3, _02238354 ; =ov70_02246900\n    ldr r0, _02238358 ; =ov70_022463A4\n    ldr r1, _02238350 ; =ov70_02246814\n    ldr r3, [r3, #0x40]\n    mov r2, #0x64\n    bl ov70_02238360\n    cmp r0, #0\n    beq _02238340\n    ldr r0, _0223835C ; =_02246800\n    mov r1, #0x16\n    str r1, [r0]\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223835C ; =_02246800\n    mov r1, #0x18\n    str r1, [r0]\n    sub r1, #0x25\n    str r1, [r0, #4]\n    bl ov38_0221BFEC\n    pop {r3, r4, r5, pc}\n    _02238350: .word ov70_02246814\n    _02238354: .word ov70_02246900\n    _02238358: .word ov70_022463A4\n    _0223835C: .word _02246800"
    );
    #endif
}

void ov70_02238360(void) {
    /* Original at 0x02238360 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    ldr r1, [sp, #0x18]\n    str r3, [sp]\n    str r1, [sp, #4]\n    add r4, r2, #0\n    ldr r1, _02238394 ; =_02246800\n    add r2, r5, #0\n    ldr r1, [r1, #8]\n    add r3, r4, #0\n    bl ov38_0221BEA8\n    cmp r0, #0\n    beq _02238386\n    cmp r0, #1\n    beq _0223838C\n    cmp r0, #2\n    b _0223838C\n    add sp, #8\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _02238394: .word _02246800"
    );
    #endif
}

void ov70_02238398(void) {
    /* Original at 0x02238398 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    cmp r0, #0x20\n    bhi _02238410\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022383AA: ; jump table\n    mov r4, #0xc\n    mvn r4, r4\n    b _02238414\n    mov r4, #0xc\n    mvn r4, r4\n    b _02238414\n    mov r4, #0xe\n    mvn r4, r4\n    b _02238414\n    mov r4, #0xe\n    mvn r4, r4\n    b _02238414\n    mov r4, #1\n    mvn r4, r4\n    b _02238414\n    mov r4, #1\n    mvn r4, r4\n    b _02238414\n    mov r4, #0xc\n    mvn r4, r4\n    mov r0, #0xc\n    mvn r0, r0\n    cmp r4, r0\n    beq _0223842C\n    bl WCM_GetPhase\n    cmp r0, #9\n    beq _02238428\n    mov r4, #0xd\n    mvn r4, r4\n    bl ov00_021EC210\n    add r0, r4, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02238430(void) {
    /* Original at 0x02238430 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r1, #0\n    add r6, r0, #0\n    ldr r0, [r5]\n    cmp r0, #0\n    beq _02238446\n    cmp r0, #1\n    bne _02238444\n    b _0223856E\n    b _02238582\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    bl HBlankInterruptDisable\n    bl GfGfx_DisableEngineAPlanes\n    bl GfGfx_DisableEngineBPlanes\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02238588 ; =0xFFFFE0FF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _0223858C ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    bl ov70_02238880\n    mov r2, #7\n    mov r0, #3\n    mov r1, #0x3d\n    lsl r2, r2, #0x10\n    bl Heap_Create\n    bl LoadDwcOverlay\n    bl LoadOVY38\n    mov r0, #0x3d\n    bl sub_02039FD8\n    ldr r1, _02238590 ; =0x00001608\n    add r0, r6, #0\n    mov r2, #0x3d\n    bl OverlayManager_CreateAndGetData\n    ldr r2, _02238590 ; =0x00001608\n    mov r1, #0\n    add r4, r0, #0\n    bl memset\n    mov r0, #0x3d\n    bl BgConfig_Alloc\n    str r0, [r4, #4]\n    ldr r0, _02238594 ; =ov70_02246944\n    add r2, sp, #0\n    ldr r3, _02238598 ; =ov70_022451F8\n    str r4, [r0, #4]\n    add r7, r2, #0\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    add r0, r7, #0\n    bl SetBothScreensModesAndDisable\n    mov r0, #4\n    mov r1, #0x3d\n    bl FontID_Alloc\n    mov r0, #0xb\n    mov r1, #0x40\n    mov r2, #0x3d\n    bl MessageFormat_New_Custom\n    ldr r1, _0223859C ; =0x00000B9C\n    ldr r2, _022385A0 ; =0x00000307\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x3d\n    bl NewMsgDataFromNarc\n    mov r1, #0xba\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r2, _022385A4 ; =0x0000030A\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x3d\n    bl NewMsgDataFromNarc\n    ldr r1, _022385A8 ; =0x00000BA8\n    mov r2, #0x32\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    lsl r2, r2, #4\n    mov r3, #0x3d\n    bl NewMsgDataFromNarc\n    ldr r1, _022385AC ; =0x00000BAC\n    mov r2, #0xed\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x3d\n    bl NewMsgDataFromNarc\n    ldr r1, _022385B0 ; =0x00000BA4\n    ldr r2, _022385B4 ; =0x0000031E\n    str r0, [r4, r1]\n    mov r0, #0\n    mov r1, #0x1b\n    mov r3, #0x3d\n    bl NewMsgDataFromNarc\n    mov r1, #0xbb\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    mov r0, #4\n    mov r1, #8\n    bl SetKeyRepeatTimers\n    add r0, r4, #0\n    add r1, r6, #0\n    bl ov70_02238818\n    add r0, r4, #0\n    bl ov70_02238E70\n    ldr r1, _022385B8 ; =0x0000047D\n    mov r0, #0xb\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    ldr r1, _022385BC ; =0x00020020\n    mov r0, #0x3d\n    bl Heap_Alloc\n    str r0, [r4, #0x4c]\n    add r0, #0x1f\n    mov r1, #0x1f\n    bic r0, r1\n    mov r1, #2\n    lsl r1, r1, #0x10\n    mov r2, #0\n    bl NNS_FndCreateExpHeapEx\n    str r0, [r4, #0x50]\n    mov r0, #1\n    str r0, [r5]\n    b _02238582\n    bl sub_02034D8C\n    mov r0, #1\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    mov r0, #0\n    str r0, [r5]\n    add sp, #0x10\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02238588: .word 0xFFFFE0FF\n    _0223858C: .word 0x04001000\n    _02238590: .word 0x00001608\n    _02238594: .word ov70_02246944\n    _02238598: .word ov70_022451F8\n    _0223859C: .word 0x00000B9C\n    _022385A0: .word 0x00000307\n    _022385A4: .word 0x0000030A\n    _022385A8: .word 0x00000BA8\n    _022385AC: .word 0x00000BAC\n    _022385B0: .word 0x00000BA4\n    _022385B4: .word 0x0000031E\n    _022385B8: .word 0x0000047D\n    _022385BC: .word 0x00020020"
    );
    #endif
}

void ov70_022385C0(void) {
    /* Original at 0x022385C0 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    bl ov00_021ECB40\n    bl ov70_022378DC\n    ldr r1, [r5]\n    cmp r1, #5\n    bhi _022386BA\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022385E4: ; jump table\n    bl sub_02034DB8\n    cmp r0, #0\n    beq _022386BA\n    ldr r1, [r4, #0x50]\n    ldr r0, _022386D8 ; =ov70_02246944\n    str r1, [r0]\n    ldr r0, _022386DC ; =ov70_02238DF8\n    ldr r1, _022386E0 ; =ov70_02238E20\n    bl ov00_021EC294\n    mov r0, #1\n    str r0, [r5]\n    b _022386BA\n    ldr r3, [r4, #0x14]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _022386E4 ; =ov70_022463EC\n    add r0, r4, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r5]\n    bl ov70_02238880\n    mov r0, #0x45\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022386BA\n    add r0, r4, #0\n    bl ov70_02238E98\n    b _022386BA\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _022386BA\n    mov r0, #3\n    str r0, [r5]\n    b _022386BA\n    ldr r3, [r4, #0x14]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _022386E8 ; =ov70_022463EC + 4\n    add r0, r4, #0\n    ldr r2, [r2, r6]\n    blx r2\n    str r0, [r5]\n    b _022386BA\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _022386BA\n    mov r0, #0x45\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022386A0\n    add r0, r4, #0\n    bl ov70_02238E70\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov70_02240D74\n    mov r1, #0x4a\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov70_02241184\n    add r0, r4, #0\n    bl ov70_02239C6C\n    add r0, r4, #0\n    bl ov70_02239CF8\n    mov r0, #0x45\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    ldr r3, [r4, #0x14]\n    mov r2, #0xc\n    add r6, r3, #0\n    mul r6, r2\n    ldr r2, _022386EC ; =ov70_022463EC + 8\n    ldr r1, [r5]\n    ldr r2, [r2, r6]\n    add r0, r4, #0\n    blx r2\n    str r0, [r5]\n    b _022386BA\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    add r0, r4, #0\n    bl ov70_02238F04\n    add r0, r4, #0\n    bl ov70_02238F24\n    ldr r0, _022386F0 ; =0x00000BF4\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _022386D2\n    bl SpriteList_RenderAndAnimateSprites\n    mov r0, #0\n    pop {r4, r5, r6, pc}\n    nop\n    _022386D8: .word ov70_02246944\n    _022386DC: .word ov70_02238DF8\n    _022386E0: .word ov70_02238E20\n    _022386E4: .word ov70_022463EC\n    _022386E8: .word ov70_022463EC + 4\n    _022386EC: .word ov70_022463EC + 8\n    _022386F0: .word 0x00000BF4"
    );
    #endif
}

void ov70_022386F4(void) {
    /* Original at 0x022386F4 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl OverlayManager_GetData\n    add r4, r0, #0\n    ldr r0, [r4, #0x4c]\n    bl Heap_Free\n    bl UnloadOVY38\n    bl UnloadDwcOverlay\n    add r0, r4, #0\n    bl ov70_02238E98\n    ldr r0, _02238794 ; =0x00000BA4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _02238798 ; =0x00000BAC\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _0223879C ; =0x00000BA8\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    mov r0, #0xbb\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl DestroyMsgData\n    ldr r0, _022387A0 ; =0x00000B9C\n    ldr r0, [r4, r0]\n    bl MessageFormat_Delete\n    add r0, r4, #0\n    bl ov70_0223887C\n    bl sub_02034DE0\n    mov r0, #0\n    bl TextFlags_SetCanTouchSpeedUpPrint\n    ldr r0, [r4, #4]\n    bl Heap_Free\n    ldr r0, [r4]\n    bl Heap_Free\n    add r0, r5, #0\n    bl OverlayManager_FreeData\n    mov r0, #4\n    bl FontID_Release\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _022387A4 ; =0xFFFF1FFF\n    and r1, r0\n    str r1, [r2]\n    ldr r2, _022387A8 ; =0x04001000\n    ldr r1, [r2]\n    and r0, r1\n    str r0, [r2]\n    mov r0, #0\n    add r1, r0, #0\n    bl Main_SetVBlankIntrCB\n    mov r0, #0x3d\n    bl Heap_Destroy\n    mov r0, #1\n    pop {r3, r4, r5, pc}\n    _02238794: .word 0x00000BA4\n    _02238798: .word 0x00000BAC\n    _0223879C: .word 0x00000BA8\n    _022387A0: .word 0x00000B9C\n    _022387A4: .word 0xFFFF1FFF\n    _022387A8: .word 0x04001000"
    );
    #endif
}

void ov70_022387AC(void) {
    /* Original at 0x022387AC */
    /* Requires manual decompilation - 31 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _022387E8 ; =0x00001204\n    add r4, r0, #0\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    beq _022387C0\n    blx r1\n    ldr r0, _022387E8 ; =0x00001204\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, _022387EC ; =0x00001208\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _022387CC\n    add r0, r4, #0\n    blx r1\n    ldr r0, [r4, #4]\n    bl DoScheduledBgGpuUpdates\n    bl GF_RunVramTransferTasks\n    bl OamManager_ApplyAndResetBuffers\n    ldr r3, _022387F0 ; =0x027E0000\n    ldr r1, _022387F4 ; =0x00003FF8\n    mov r0, #1\n    ldr r2, [r3, r1]\n    orr r0, r2\n    str r0, [r3, r1]\n    pop {r4, pc}\n    _022387E8: .word 0x00001204\n    _022387EC: .word 0x00001208\n    _022387F0: .word 0x027E0000\n    _022387F4: .word 0x00003FF8"
    );
    #endif
}

void ov70_022387F8(void) {
    GfGfx_SetBanks(5);
}

void ov70_02238818(void) {
    /* Original at 0x02238818 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl OverlayManager_GetArgs\n    mov r1, #0\n    str r0, [r4]\n    add r0, r4, #0\n    add r2, r1, #0\n    str r1, [r4, #0x14]\n    bl ov70_02238E50\n    mov r1, #0x47\n    mov r0, #0\n    lsl r1, r1, #2\n    strh r0, [r4, r1]\n    ldr r1, _02238874 ; =0x00000B8A\n    mov r3, #3\n    strh r0, [r4, r1]\n    add r2, r1, #2\n    strb r3, [r4, r2]\n    add r2, r1, #3\n    strb r0, [r4, r2]\n    add r2, r1, #4\n    strb r0, [r4, r2]\n    add r1, r1, #6\n    ldr r2, _02238878 ; =0x000011DC\n    strh r0, [r4, r1]\n    mov r3, #0x12\n    strh r0, [r4, r2]\n    lsl r1, r3, #4\n    strh r3, [r4, r1]\n    add r1, r2, #0\n    add r1, #0x1c\n    strh r0, [r4, r1]\n    add r1, r2, #0\n    add r1, #0x1e\n    strh r0, [r4, r1]\n    add r1, r2, #2\n    strh r0, [r4, r1]\n    add r1, r2, #0\n    sub r1, #0x20\n    str r0, [r4, r1]\n    add r2, #0xf0\n    str r0, [r4, r2]\n    pop {r4, pc}\n    _02238874: .word 0x00000B8A\n    _02238878: .word 0x000011DC"
    );
    #endif
}

void ov70_0223887C(void) {
    /* Original at 0x0223887C */
    /* Requires manual decompilation - 1 instructions */
    #ifdef MWERKS
    asm(
        "bx lr"
    );
    #endif
}

void ov70_02238880(void) {
    /* Original at 0x02238880 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _022388C0 ; =0x04001000\n    ldr r0, _022388C4 ; =0xFFFF1FFF\n    ldr r1, [r3]\n    lsl r2, r3, #0xe\n    and r1, r0\n    str r1, [r3]\n    ldr r1, [r2]\n    and r1, r0\n    lsr r0, r3, #0xd\n    orr r0, r1\n    str r0, [r2]\n    ldr r0, _022388C8 ; =0x04000048\n    mov r1, #0x3f\n    ldrh r3, [r0]\n    mov r2, #0x1f\n    bic r3, r1\n    orr r3, r2\n    strh r3, [r0]\n    ldrh r3, [r0, #2]\n    bic r3, r1\n    orr r2, r3\n    mov r1, #0x20\n    orr r1, r2\n    strh r1, [r0, #2]\n    add r1, r0, #0\n    ldr r2, _022388CC ; =0x0000F0FF\n    sub r1, #8\n    strh r2, [r1]\n    mov r1, #0x10\n    sub r0, r0, #4\n    strh r1, [r0]\n    bx lr\n    _022388C0: .word 0x04001000\n    _022388C4: .word 0xFFFF1FFF\n    _022388C8: .word 0x04000048\n    _022388CC: .word 0x0000F0FF"
    );
    #endif
}

void ov70_022388D0(void) {
    /* Original at 0x022388D0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, _022388FC ; =ov70_02245208\n    add r3, sp, #0\n    add r2, r3, #0\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl ObjCharTransfer_Init\n    mov r0, #0x14\n    mov r1, #0x3d\n    bl ObjPlttTransfer_Init\n    bl ObjCharTransfer_ClearBuffers\n    bl ObjPlttTransfer_Reset\n    add sp, #0x10\n    pop {r4, pc}\n    _022388FC: .word ov70_02245208"
    );
    #endif
}

void ov70_02238900(void) {
    /* Original at 0x02238900 */
    /* Requires manual decompilation - 262 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    str r0, [sp, #0x18]\n    bl NNS_G2dInitOamManagerModule\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02238B2C ; =0xFFCFFFEF\n    add r3, r1, #0\n    and r3, r0\n    mov r1, #0x10\n    orr r3, r1\n    str r3, [r2]\n    ldr r3, _02238B30 ; =0x04001000\n    ldr r2, [r3]\n    and r0, r2\n    orr r0, r1\n    str r0, [r3]\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0x7e\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r3, #0x20\n    str r3, [sp, #0xc]\n    mov r1, #0x3d\n    str r1, [sp, #0x10]\n    mov r1, #0x7a\n    add r2, r0, #0\n    bl OamManager_Create\n    ldr r1, _02238B34 ; =0x00000BF8\n    mov r0, #0x54\n    add r1, r5, r1\n    mov r2, #0x3d\n    bl G2dRenderer_Init\n    ldr r1, _02238B38 ; =0x00000BF4\n    mov r2, #1\n    str r0, [r5, r1]\n    add r0, r1, #4\n    add r0, r5, r0\n    mov r1, #0\n    lsl r2, r2, #0x14\n    bl G2dRenderer_SetSubSurfaceCoords\n    mov r7, #0xd2\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #4\n    mov r0, #3\n    add r1, r6, #0\n    mov r2, #0x3d\n    bl Create2DGfxResObjMan\n    str r0, [r4, r7]\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #4\n    blt _02238970\n    mov r0, #0\n    str r0, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0xd2\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x18]\n    mov r2, #0x15\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0xd3\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #3\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    sub r1, #0xc\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r2, #0xa\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _02238B3C ; =0x00000D34\n    mov r2, #0x16\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02238B40 ; =0x00000D38\n    mov r2, #0x17\n    str r0, [r5, r1]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    sub r1, #0xc\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r3, #1\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02238B44 ; =0x00000D3C\n    mov r3, #1\n    str r0, [r5, r1]\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r2, #0x2b\n    bl AddCharResObjFromOpenNarc\n    mov r1, #0x35\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0xa\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    sub r1, #0x1c\n    str r0, [sp, #0xc]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r2, #9\n    mov r3, #0\n    bl AddPlttResObjFromOpenNarc\n    ldr r1, _02238B48 ; =0x00000D44\n    mov r3, #1\n    str r0, [r5, r1]\n    str r3, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r2, #0x2c\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02238B4C ; =0x00000D48\n    mov r3, #1\n    str r0, [r5, r1]\n    str r3, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    sub r1, #0x1c\n    str r0, [sp, #8]\n    ldr r0, [r5, r1]\n    ldr r1, [sp, #0x18]\n    mov r2, #0x2d\n    bl AddCellOrAnimResObjFromOpenNarc\n    ldr r1, _02238B50 ; =0x00000D4C\n    str r0, [r5, r1]\n    sub r1, #0x1c\n    ldr r0, [r5, r1]\n    bl sub_0200ACF0\n    mov r0, #0x35\n    lsl r0, r0, #6\n    ldr r0, [r5, r0]\n    bl sub_0200ACF0\n    ldr r0, _02238B3C ; =0x00000D34\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    ldr r0, _02238B48 ; =0x00000D44\n    ldr r0, [r5, r0]\n    bl sub_0200AF94\n    bl sub_02074490\n    add r1, r0, #0\n    mov r0, #0x14\n    add r2, sp, #0x1c\n    mov r3, #0x3d\n    bl GfGfxLoader_GetPlttData\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x60\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x60\n    ldr r0, [r0, #0xc]\n    add r2, r1, #0\n    bl GX_LoadOBJPltt\n    ldr r0, [sp, #0x1c]\n    mov r7, #0x1f\n    ldr r4, [r0, #0xc]\n    mov r3, #0\n    add r5, r7, #0\n    ldrh r2, [r4]\n    mov r0, #0x1f\n    add r3, r3, #1\n    add r1, r2, #0\n    and r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r1, r0, #1\n    asr r0, r2, #0xa\n    add r6, r0, #0\n    and r6, r7\n    lsr r0, r6, #0x1f\n    add r0, r6, r0\n    asr r2, r2, #5\n    add r6, r2, #0\n    and r6, r5\n    lsr r2, r6, #0x1f\n    add r2, r6, r2\n    asr r0, r0, #1\n    asr r2, r2, #1\n    lsl r0, r0, #0xa\n    lsl r2, r2, #5\n    orr r0, r2\n    orr r0, r1\n    strh r0, [r4]\n    add r4, r4, #2\n    cmp r3, #0x30\n    blt _02238ACC\n    ldr r0, [sp, #0x1c]\n    mov r1, #0x60\n    ldr r0, [r0, #0xc]\n    bl DC_FlushRange\n    ldr r0, [sp, #0x1c]\n    mov r1, #0xc0\n    ldr r0, [r0, #0xc]\n    mov r2, #0x60\n    bl GX_LoadOBJPltt\n    ldr r0, [sp, #0x14]\n    bl Heap_Free\n    ldr r0, [sp, #0x18]\n    bl NARC_Delete\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238B2C: .word 0xFFCFFFEF\n    _02238B30: .word 0x04001000\n    _02238B34: .word 0x00000BF8\n    _02238B38: .word 0x00000BF4\n    _02238B3C: .word 0x00000D34\n    _02238B40: .word 0x00000D38\n    _02238B44: .word 0x00000D3C\n    _02238B48: .word 0x00000D44\n    _02238B4C: .word 0x00000D48\n    _02238B50: .word 0x00000D4C"
    );
    #endif
}

void ov70_02238B54(void) {
    /* Original at 0x02238B54 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r4, _02238B7C ; =0x00000BF4\n    ldr r1, [r1, r4]\n    str r1, [r0]\n    str r2, [r0, #4]\n    mov r2, #0\n    mov r1, #1\n    str r2, [r0, #0x10]\n    lsl r1, r1, #0xc\n    str r1, [r0, #0x14]\n    str r1, [r0, #0x18]\n    str r1, [r0, #0x1c]\n    strh r2, [r0, #0x20]\n    mov r1, #1\n    str r1, [r0, #0x24]\n    str r3, [r0, #0x28]\n    mov r1, #0x3d\n    str r1, [r0, #0x2c]\n    pop {r3, r4}\n    bx lr\n    _02238B7C: .word 0x00000BF4"
    );
    #endif
}

void ov70_02238B80(void) {
    /* Original at 0x02238B80 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    mov r2, #0xd2\n    str r1, [sp, #0x10]\n    lsl r2, r2, #4\n    ldr r0, [r4, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x1c]\n    add r0, r2, #0\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    add r2, #0x40\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, r4, r2\n    add r2, r1, #0\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    mov r1, #1\n    mov r3, #0xd2\n    str r1, [sp]\n    sub r0, r1, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    lsl r3, r3, #4\n    ldr r2, [r4, r3]\n    str r2, [sp, #0x14]\n    add r2, r3, #4\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    add r2, #8\n    ldr r2, [r4, r2]\n    str r2, [sp, #0x1c]\n    add r2, r3, #0\n    add r2, #0xc\n    ldr r2, [r4, r2]\n    add r3, #0x64\n    str r2, [sp, #0x20]\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, r4, r3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl CreateSpriteResourcesHeader\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x2c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_02238C14(void) {
    ov70_02238C2C(0);
}

void ov70_02238C2C(void) {
    /* Original at 0x02238C2C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r5, r0, #0\n    mov r0, #0x3d\n    add r4, r1, #0\n    add r6, r2, #0\n    add r7, r3, #0\n    bl YesNoPrompt_Create\n    str r0, [sp]\n    add r0, sp, #0x20\n    ldrb r0, [r0, #0x14]\n    cmp r0, #0\n    beq _02238C56\n    ldr r1, [sp, #0x30]\n    mov r0, #0\n    cmp r1, #3\n    bgt _02238C52\n    mov r0, #1\n    bl ov70_02238FB4\n    ldr r0, [sp, #0x30]\n    str r5, [sp, #4]\n    str r0, [sp, #8]\n    str r6, [sp, #0xc]\n    str r7, [sp, #0x10]\n    mov r0, #0x18\n    add r1, sp, #4\n    strb r0, [r1, #0x10]\n    strb r4, [r1, #0x11]\n    ldrb r2, [r1, #0x12]\n    mov r0, #0xf\n    bic r2, r0\n    strb r2, [r1, #0x12]\n    ldrb r2, [r1, #0x12]\n    mov r0, #0xf0\n    bic r2, r0\n    strb r2, [r1, #0x12]\n    mov r0, #0\n    strb r0, [r1, #0x13]\n    ldr r0, [sp]\n    add r1, sp, #4\n    bl YesNoPrompt_InitFromTemplate\n    ldr r0, [sp]\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_02238C8C(void) {
    /* Original at 0x02238C8C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _02238CA8 ; =0x000011C8\n    ldr r0, [r0, r1]\n    bl YesNoPrompt_HandleInput\n    add r4, r0, #0\n    sub r0, r4, #1\n    cmp r0, #1\n    bhi _02238CA2\n    bl ov70_02238FE0\n    add r0, r4, #0\n    pop {r4, pc}\n    nop\n    _02238CA8: .word 0x000011C8"
    );
    #endif
}

void ov70_02238CAC(void) {
    /* Original at 0x02238CAC */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    add r5, r0, #0\n    add r4, r1, #0\n    mov r0, #0x3d\n    mov r1, #0\n    add r6, r2, #0\n    bl TouchscreenListMenuSpawner_Create\n    ldr r1, _02238D28 ; =0x000011CC\n    mov r2, #0x18\n    str r0, [r5, r1]\n    add r0, sp, #0x18\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r2, _02238D2C ; =_022451EC\n    add r0, sp, #0x18\n    ldrh r3, [r2]\n    add r1, sp, #0x18\n    strh r3, [r0]\n    ldrh r3, [r2, #2]\n    strh r3, [r0, #2]\n    ldrh r3, [r2, #4]\n    strh r3, [r0, #4]\n    ldrh r3, [r2, #6]\n    strh r3, [r0, #6]\n    ldrh r3, [r2, #8]\n    ldrh r2, [r2, #0xa]\n    strh r3, [r0, #8]\n    ldr r3, _02238D30 ; =0x000011AC\n    strh r2, [r0, #0xa]\n    ldr r2, [r5, r3]\n    add r3, #0x20\n    str r2, [sp, #0x24]\n    ldr r2, [r5, #4]\n    str r2, [sp, #0x28]\n    strb r4, [r0, #0x14]\n    lsl r0, r6, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r2, #0\n    ldr r0, _02238D34 ; =ov70_02238D38\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    str r2, [sp, #0x10]\n    mov r0, #1\n    str r0, [sp, #0x14]\n    ldr r0, [r5, r3]\n    mov r3, #0x14\n    bl TouchscreenListMenu_CreateWithCallback\n    add r4, r0, #0\n    mov r0, #1\n    bl ov70_02238FB4\n    add r0, r4, #0\n    add sp, #0x30\n    pop {r4, r5, r6, pc}\n    nop\n    _02238D28: .word 0x000011CC\n    _02238D2C: .word _022451EC\n    _02238D30: .word 0x000011AC\n    _02238D34: .word ov70_02238D38"
    );
    #endif
}

void ov70_02238D38(void) {
    PlaySE();
}

void ov70_02238D60(void) {
    /* Original at 0x02238D60 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02238D7C ; =0x000011D0\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenu_Destroy\n    ldr r0, _02238D80 ; =0x000011CC\n    ldr r0, [r4, r0]\n    bl TouchscreenListMenuSpawner_Destroy\n    bl ov70_02238FE0\n    pop {r4, pc}\n    nop\n    _02238D7C: .word 0x000011D0\n    _02238D80: .word 0x000011CC"
    );
    #endif
}

void ov70_02238D84(void) {
    ((u32*)r0)[0x2c] = r1;
    ((u32*)r0)[0x30] = r2;
}

void ov70_02238D8C(void) {
    /* Original at 0x02238D8C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r5, r2, #0\n    cmp r1, #0\n    ble _02238DAA\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02238DB8\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp]\n    cmp r5, #0\n    ble _02238DD4\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02238DE2\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov70_02238DF8(void) {
    /* Original at 0x02238DF8 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r1, #0\n    add r4, r2, #0\n    bl OS_DisableInterrupts\n    add r6, r0, #0\n    ldr r0, _02238E1C ; =ov70_02246944\n    add r1, r5, #0\n    ldr r0, [r0]\n    add r2, r4, #0\n    bl NNS_FndAllocFromExpHeapEx\n    add r4, r0, #0\n    add r0, r6, #0\n    bl OS_RestoreInterrupts\n    add r0, r4, #0\n    pop {r4, r5, r6, pc}\n    _02238E1C: .word ov70_02246944"
    );
    #endif
}

void ov70_02238E20(void) {
    /* Original at 0x02238E20 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r1, #0\n    beq _02238E3C\n    bl OS_DisableInterrupts\n    add r4, r0, #0\n    ldr r0, _02238E40 ; =ov70_02246944\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl NNS_FndFreeToExpHeap\n    add r0, r4, #0\n    bl OS_RestoreInterrupts\n    pop {r3, r4, r5, pc}\n    nop\n    _02238E40: .word ov70_02246944"
    );
    #endif
}

void ov70_02238E44(void) {
    ov00_021EC9D4();
}

void ov70_02238E50(void) {
    ((u32*)r0)[0x18] = r1;
    ((u32*)r0)[0x24] = r2;
}

void ov70_02238E58(void) {
    /* Original at 0x02238E58 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, [r0, #0x14]\n    str r1, [r0, #0x20]\n    ldr r1, [r0, #0x18]\n    str r1, [r0, #0x14]\n    bx lr"
    );
    #endif
}

void ov70_02238E64(void) {
    Options_GetTextFrameDelay();
}

void ov70_02238E70(void) {
    /* Original at 0x02238E70 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_022387F8\n    bl ov70_022388D0\n    add r0, r4, #0\n    bl ov70_02238900\n    add r0, r4, #0\n    bl ov70_02238B80\n    ldr r0, _02238E94 ; =ov70_022387AC\n    add r1, r4, #0\n    bl Main_SetVBlankIntrCB\n    pop {r4, pc}\n    nop\n    _02238E94: .word ov70_022387AC"
    );
    #endif
}

void ov70_02238E98(void) {
    /* Original at 0x02238E98 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    bl ov70_02241308\n    mov r0, #0xd3\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    mov r0, #0x35\n    lsl r0, r0, #6\n    ldr r0, [r6, r0]\n    bl sub_0200AEB0\n    ldr r0, _02238EF8 ; =0x00000D34\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    ldr r0, _02238EFC ; =0x00000D44\n    ldr r0, [r6, r0]\n    bl sub_0200B0A8\n    mov r7, #0xd2\n    mov r4, #0\n    add r5, r6, #0\n    lsl r7, r7, #4\n    ldr r0, [r5, r7]\n    bl Destroy2DGfxResObjMan\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #4\n    blt _02238ECC\n    ldr r0, _02238F00 ; =0x00000BF4\n    ldr r0, [r6, r0]\n    bl SpriteList_Delete\n    ldr r0, _02238F00 ; =0x00000BF4\n    mov r1, #0\n    str r1, [r6, r0]\n    bl OamManager_Free\n    bl ObjCharTransfer_Destroy\n    bl ObjPlttTransfer_Destroy\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02238EF8: .word 0x00000D34\n    _02238EFC: .word 0x00000D44\n    _02238F00: .word 0x00000BF4"
    );
    #endif
}

void ov70_02238F04(void) {
    /* Original at 0x02238F04 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldrh r1, [r0, #0x3a]\n    cmp r1, #0\n    beq _02238F0E\n    sub r1, r1, #1\n    strh r1, [r0, #0x3a]\n    bx lr"
    );
    #endif
}

void ov70_02238F10(void) {
    /* Original at 0x02238F10 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _02238F20 ; =0x000011FA\n    mov r2, #1\n    strh r2, [r0, r1]\n    mov r2, #0\n    sub r1, r1, #2\n    strh r2, [r0, r1]\n    bx lr\n    nop\n    _02238F20: .word 0x000011FA"
    );
    #endif
}

void ov70_02238F24(void) {
    /* Original at 0x02238F24 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02238F5C ; =0x000011FA\n    ldrh r1, [r4, r0]\n    cmp r1, #0\n    beq _02238F58\n    ldr r0, [r4]\n    sub r1, r1, #1\n    ldr r0, [r0, #0xc]\n    bl PCStorage_CountMonsAndEggsInBox\n    ldr r1, _02238F60 ; =0x000011F8\n    ldrh r2, [r4, r1]\n    add r0, r2, r0\n    strh r0, [r4, r1]\n    add r0, r1, #2\n    ldrh r0, [r4, r0]\n    add r2, r0, #1\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    ldrh r0, [r4, r0]\n    cmp r0, #0x13\n    bne _02238F58\n    mov r2, #0\n    add r0, r1, #2\n    strh r2, [r4, r0]\n    pop {r4, pc}\n    nop\n    _02238F5C: .word 0x000011FA\n    _02238F60: .word 0x000011F8"
    );
    #endif
}

void ov70_02238F64(void) {
    WaitingIcon_New(1);
}

void ov70_02238F80(void) {
    sub_0200F450(0);
}

void ov70_02238F9C(void) {
    Sprite_SetMatrix();
}

void ov70_02238FB4(void) {
    /* Original at 0x02238FB4 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r0, #0\n    beq _02238FC8\n    mov r1, #0x1e\n    add r2, r1, #0\n    ldr r0, _02238FD8 ; =0x04000050\n    sub r2, #0x25\n    bl G2x_SetBlendBrightness_\n    pop {r3, pc}\n    mov r1, #0x1e\n    add r2, r1, #0\n    ldr r0, _02238FDC ; =0x04001050\n    sub r2, #0x25\n    bl G2x_SetBlendBrightness_\n    pop {r3, pc}\n    nop\n    _02238FD8: .word 0x04000050\n    _02238FDC: .word 0x04001050"
    );
    #endif
}

void ov70_02238FE0(void) {
    /* Original at 0x02238FE0 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "ldr r0, _02238FEC ; =0x04000050\n    mov r1, #0\n    strh r1, [r0]\n    ldr r0, _02238FF0 ; =0x04001050\n    strh r1, [r0]\n    bx lr\n    _02238FEC: .word 0x04000050\n    _02238FF0: .word 0x04001050"
    );
    #endif
}

void ov70_02238FF4(void) {
    /* Original at 0x02238FF4 */
    /* Requires manual decompilation - 95 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_02239614\n    ldr r2, _022390C8 ; =0x04000304\n    ldr r0, _022390CC ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, [r4, #4]\n    bl ov70_02239134\n    add r0, r4, #0\n    bl ov70_02239330\n    add r0, r4, #0\n    bl ov70_022394B8\n    add r0, r4, #0\n    bl ov70_02239414\n    add r0, r4, #0\n    bl ov70_02245124\n    add r0, r4, #0\n    bl ov70_02239B00\n    ldr r1, _022390D0 ; =0x00000484\n    mov r0, #0x17\n    mov r2, #1\n    bl Sound_SetSceneAndPlayBGM\n    ldrh r0, [r4, #0x34]\n    cmp r0, #0\n    bne _02239072\n    add r0, r4, #0\n    bl ov70_02239304\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #1\n    strh r0, [r4, #0x34]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov70_02240EF4\n    b _022390BC\n    ldr r0, _022390D4 ; =0x000011FC\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _022390A2\n    ldr r0, _022390D8 ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    cmp r0, #0\n    beq _022390A2\n    add r0, r4, #0\n    bl ov70_02241358\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _022390B8\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #5\n    str r0, [r4, #0x2c]\n    ldr r0, _022390D4 ; =0x000011FC\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _022390C8: .word 0x04000304\n    _022390CC: .word 0xFFFF7FFF\n    _022390D0: .word 0x00000484\n    _022390D4: .word 0x000011FC\n    _022390D8: .word 0x0400106C"
    );
    #endif
}

void ov70_022390DC(void) {
    /* Original at 0x022390DC */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238E44\n    bl sub_0203A930\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _022390F8 ; =ov70_02246464\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    nop\n    _022390F8: .word ov70_02246464"
    );
    #endif
}

void ov70_022390FC(void) {
    /* Original at 0x022390FC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0203A914\n    add r0, r4, #0\n    bl ov70_022394A8\n    add r0, r4, #0\n    bl ov70_0223963C\n    add r0, r4, #0\n    bl ov70_022395C4\n    ldr r0, [r4, #4]\n    bl ov70_022392E0\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02239134(void) {
    /* Original at 0x02239134 */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x64\n    ldr r5, _022391E0 ; =ov70_0224525C\n    add r3, sp, #0x54\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _022391E4 ; =ov70_022452F4\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _022391E8 ; =ov70_022452D8\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _022391EC ; =ov70_02245310\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_022391F0\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x64\n    pop {r4, r5, pc}\n    _022391E0: .word ov70_0224525C\n    _022391E4: .word ov70_022452F4\n    _022391E8: .word ov70_022452D8\n    _022391EC: .word ov70_02245310"
    );
    #endif
}

void ov70_022391F0(void) {
    /* Original at 0x022391F0 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x70\n    ldr r3, _022392AC ; =ov70_022452A0\n    add r6, r2, #0\n    add r5, r0, #0\n    add r4, r1, #0\n    add r2, sp, #0x54\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #4\n    str r0, [r2]\n    add r0, r5, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r3, _022392B0 ; =ov70_02245284\n    add r2, sp, #0x38\n    ldmia r3!, {r0, r1}\n    add r7, r2, #0\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldmia r3!, {r0, r1}\n    stmia r2!, {r0, r1}\n    ldr r0, [r3]\n    mov r1, #6\n    str r0, [r2]\n    add r0, r5, #0\n    add r2, r7, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    cmp r6, #0\n    bne _02239252\n    add r0, r5, #0\n    mov r1, #6\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _022392B4 ; =ov70_022452BC\n    add r3, sp, #0x1c\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r5, #0\n    mov r3, #0\n    str r4, [sp, #0x20]\n    bl InitBgFromTemplate\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    ldr r4, _022392B8 ; =ov70_0224532C\n    add r3, sp, #0\n    ldmia r4!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r4!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r4]\n    mov r1, #7\n    str r0, [r3]\n    add r0, r5, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #7\n    bl BgClearTilemapBufferAndCommit\n    add sp, #0x70\n    pop {r3, r4, r5, r6, r7, pc}\n    _022392AC: .word ov70_022452A0\n    _022392B0: .word ov70_02245284\n    _022392B4: .word ov70_022452BC\n    _022392B8: .word ov70_0224532C"
    );
    #endif
}

void ov70_022392BC(void) {
    FreeBgTilemapBuffer(6);
    FreeBgTilemapBuffer(r4, 5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 7);
}

void ov70_022392E0(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
}

void ov70_02239304(void) {
    /* Original at 0x02239304 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r0, _0223932C ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    pop {r4, pc}\n    _0223932C: .word 0x00000DCC"
    );
    #endif
}

void ov70_02239330(void) {
    /* Original at 0x02239330 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5, #4]\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    mov r1, #0x60\n    str r1, [sp]\n    mov r1, #0x3d\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #4\n    add r3, r2, #0\n    add r6, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0x10\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0x27\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0x26\n    add r2, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r5, #0\n    bl ov70_02239C6C\n    ldrh r0, [r5, #0x34]\n    cmp r0, #0\n    beq _02239402\n    add r0, r5, #0\n    bl ov70_02239CF8\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    b _0223940A\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02239414(void) {
    /* Original at 0x02239414 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x80\n    mov r1, #0\n    add r4, r0, #0\n    str r1, [sp]\n    sub r0, r1, #1\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r2, #0xd2\n    str r1, [sp, #0xc]\n    mov r0, #1\n    lsl r2, r2, #4\n    str r0, [sp, #0x10]\n    ldr r0, [r4, r2]\n    add r3, r1, #0\n    str r0, [sp, #0x14]\n    add r0, r2, #4\n    ldr r0, [r4, r0]\n    str r0, [sp, #0x18]\n    add r0, r2, #0\n    add r0, #8\n    ldr r0, [r4, r0]\n    add r2, #0xc\n    str r0, [sp, #0x1c]\n    ldr r0, [r4, r2]\n    add r2, r1, #0\n    str r0, [sp, #0x20]\n    str r1, [sp, #0x24]\n    add r0, sp, #0x2c\n    str r1, [sp, #0x28]\n    bl CreateSpriteResourcesHeader\n    add r0, sp, #0x50\n    add r1, r4, #0\n    add r2, sp, #0x2c\n    mov r3, #1\n    bl ov70_02238B54\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldrh r1, [r4, r0]\n    lsl r2, r1, #2\n    ldr r1, _0223949C ; =ov70_02245240\n    ldrh r1, [r1, r2]\n    lsl r1, r1, #0xc\n    str r1, [sp, #0x58]\n    ldrh r0, [r4, r0]\n    lsl r1, r0, #2\n    ldr r0, _022394A0 ; =ov70_02245242\n    ldrh r0, [r0, r1]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0x5c]\n    add r0, sp, #0x50\n    bl Sprite_CreateAffine\n    ldr r1, _022394A4 ; =0x00000DCC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _022394A4 ; =0x00000DCC\n    mov r1, #0x2b\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x80\n    pop {r4, pc}\n    _0223949C: .word ov70_02245240\n    _022394A0: .word ov70_02245242\n    _022394A4: .word 0x00000DCC"
    );
    #endif
}

void ov70_022394A8(void) {
    /* Original at 0x022394A8 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _022394B0 ; =0x00000DCC\n    ldr r3, _022394B4 ; =Sprite_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    _022394B0: .word 0x00000DCC\n    _022394B4: .word Sprite_Delete"
    );
    #endif
}

void ov70_022394B8(void) {
    /* Original at 0x022394B8 */
    /* Requires manual decompilation - 119 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    mov r2, #1\n    add r7, r0, #0\n    str r2, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r3, #2\n    ldr r1, _022395B0 ; =0x00000F38\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r7, r1\n    bl AddWindowParameterized\n    ldr r0, _022395B0 ; =0x00000F38\n    mov r1, #0\n    add r0, r7, r0\n    bl FillWindowPixelBuffer\n    mov r0, #2\n    str r0, [sp]\n    mov r3, #0\n    mov r2, #0x2f\n    ldr r0, _022395B4 ; =0x000F0600\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    ldr r0, _022395B0 ; =0x00000F38\n    str r3, [sp, #0xc]\n    lsl r2, r2, #6\n    ldr r2, [r7, r2]\n    add r0, r7, r0\n    mov r1, #1\n    bl AddTextPrinterParameterizedWithColor\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, _022395B8 ; =0x00000F58\n    mov r6, #0x61\n    mov r4, #6\n    add r5, r7, r0\n    lsl r0, r4, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r5, #0\n    mov r2, #1\n    mov r3, #9\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    add r6, #0x1e\n    add r0, r0, #1\n    add r4, r4, #5\n    add r5, #0x10\n    str r0, [sp, #0x14]\n    cmp r0, #3\n    blt _02239510\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    ldr r1, _022395BC ; =0x00000F18\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x60\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r7, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _022395BC ; =0x00000F18\n    mov r1, #0xf\n    add r0, r7, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x96\n    ldr r1, _022395C0 ; =0x00001158\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r7, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _022395C0 ; =0x00001158\n    mov r1, #0xf\n    add r0, r7, r0\n    bl FillWindowPixelBuffer\n    add r0, r7, #0\n    mov r1, #0\n    bl ov70_02239D44\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022395B0: .word 0x00000F38\n    _022395B4: .word 0x000F0600\n    _022395B8: .word 0x00000F58\n    _022395BC: .word 0x00000F18\n    _022395C0: .word 0x00001158"
    );
    #endif
}

void ov70_022395C4(void) {
    /* Original at 0x022395C4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _02239600 ; =0x00001198\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _02239604 ; =0x00001158\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _02239608 ; =0x00000F18\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _0223960C ; =0x00000F58\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _022395E6\n    ldr r0, _02239610 ; =0x00000F38\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r4, r5, r6, pc}\n    nop\n    _02239600: .word 0x00001198\n    _02239604: .word 0x00001158\n    _02239608: .word 0x00000F18\n    _0223960C: .word 0x00000F58\n    _02239610: .word 0x00000F38"
    );
    #endif
}

void ov70_02239614(void) {
    /* Original at 0x02239614 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _02239638 ; =0x00000BBC\n    str r0, [r4, r1]\n    sub r1, #0x1c\n    ldr r0, [r4, r1]\n    mov r1, #0x27\n    bl NewString_ReadMsgData\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    pop {r4, pc}\n    nop\n    _02239638: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223963C(void) {
    /* Original at 0x0223963C */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02239654 ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    _02239654: .word 0x00000BBC"
    );
    #endif
}

void ov70_02239658(void) {
    /* Original at 0x02239658 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02239694 ; =0x000011DC\n    ldrh r0, [r4, r0]\n    cmp r0, #0\n    beq _0223968E\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0xb\n    bl ov70_02238E50\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02239694: .word 0x000011DC"
    );
    #endif
}

void ov70_02239698(void) {
    ov70_02238D84();
}

void ov70_022396A8(void) {
    /* Original at 0x022396A8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #3\n    str r0, [r4, #0x2c]\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_022396CC(void) {
    IsPaletteFadeFinished(3, 5);
}

void ov70_022396E0(void) {
    IsPaletteFadeFinished(3, 5);
}

void ov70_022396F4(void) {
    /* Original at 0x022396F4 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02239728 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #4\n    mov r2, #1\n    mov r3, #0\n    bl ov70_02239B84\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #6\n    bl ov70_02238D84\n    ldr r0, _0223972C ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimActiveFlag\n    add r0, r4, #0\n    bl ov70_02238F10\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _02239728: .word 0x00000F0F\n    _0223972C: .word 0x00000DCC"
    );
    #endif
}

void ov70_02239730(void) {
    /* Original at 0x02239730 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02239738 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0223973C ; =ov70_0224524C\n    bx r3\n    nop\n    _02239738: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0223973C: .word ov70_0224524C"
    );
    #endif
}

void ov70_02239740(void) {
    /* Original at 0x02239740 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    cmp r1, #0\n    beq _02239756\n    cmp r1, #1\n    beq _022397CC\n    cmp r1, #2\n    beq _022397E8\n    add sp, #4\n    pop {r3, r4, pc}\n    ldrh r1, [r4, #0x36]\n    cmp r1, #0\n    bne _02239772\n    mov r1, #5\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    ldr r0, _0223981C ; =0x000005DC\n    bl PlaySE\n    add sp, #4\n    pop {r3, r4, pc}\n    ldrh r1, [r4, #0x3a]\n    cmp r1, #0\n    bne _02239796\n    mov r1, #7\n    mov r2, #0xb\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x1c]\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    ldr r0, _02239820 ; =0x00000708\n    strh r0, [r4, #0x3a]\n    ldr r0, _0223981C ; =0x000005DC\n    bl PlaySE\n    add sp, #4\n    pop {r3, r4, pc}\n    ldr r0, _02239824 ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02239828 ; =0x00000F0F\n    mov r1, #0x22\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_02239B84\n    add r0, r4, #0\n    mov r1, #0xb\n    mov r2, #5\n    bl ov70_02238D84\n    ldr r0, _0223982C ; =0x000005F3\n    bl PlaySE\n    mov r0, #0x47\n    mov r1, #0\n    lsl r0, r0, #6\n    add sp, #4\n    str r1, [r4, r0]\n    pop {r3, r4, pc}\n    ldr r1, _02239830 ; =0x000011DE\n    mov r2, #0\n    strh r2, [r4, r1]\n    mov r1, #4\n    mov r2, #0xd\n    bl ov70_02238E50\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    ldr r0, _0223981C ; =0x000005DC\n    bl PlaySE\n    add sp, #4\n    pop {r3, r4, pc}\n    bl ov70_02238E64\n    add r2, r0, #0\n    ldr r0, _02239828 ; =0x00000F0F\n    mov r1, #7\n    str r0, [sp]\n    add r0, r4, #0\n    mov r3, #0\n    bl ov70_02239BDC\n    add r0, r4, #0\n    mov r1, #0xa\n    mov r2, #0xc\n    bl ov70_02238D84\n    ldr r0, _02239824 ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223981C ; =0x000005DC\n    bl PlaySE\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223981C: .word 0x000005DC\n    _02239820: .word 0x00000708\n    _02239824: .word 0x00000DCC\n    _02239828: .word 0x00000F0F\n    _0223982C: .word 0x000005F3\n    _02239830: .word 0x000011DE"
    );
    #endif
}

void ov70_02239834(void) {
    /* Original at 0x02239834 */
    /* Requires manual decompilation - 125 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_02239730\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _02239876\n    mov r0, #0x47\n    lsl r0, r0, #2\n    strh r4, [r5, r0]\n    ldr r0, _0223993C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    ldr r1, _02239940 ; =ov70_02245240\n    ldr r3, _02239944 ; =ov70_02245242\n    lsl r2, r0, #2\n    ldr r0, _02239948 ; =0x00000DCC\n    ldrh r1, [r1, r2]\n    ldrh r2, [r3, r2]\n    ldr r0, [r5, r0]\n    bl ov70_02238D8C\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_02239740\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223994C ; =gSystem\n    mov r1, #2\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _022398AC\n    add r0, r5, #0\n    bl ov70_02238E64\n    add r2, r0, #0\n    ldr r0, _02239950 ; =0x00000F0F\n    mov r1, #7\n    str r0, [sp]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov70_02239BDC\n    add r0, r5, #0\n    mov r1, #0xa\n    mov r2, #0xc\n    bl ov70_02238D84\n    ldr r0, _02239948 ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimActiveFlag\n    b _02239938\n    mov r1, #1\n    tst r1, r0\n    beq _022398C0\n    mov r1, #0x47\n    lsl r1, r1, #2\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    bl ov70_02239740\n    b _02239938\n    mov r1, #0x40\n    add r2, r0, #0\n    tst r2, r1\n    beq _022398FE\n    add r0, r1, #0\n    add r0, #0xdc\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _02239938\n    add r0, r1, #0\n    add r0, #0xdc\n    ldrh r0, [r5, r0]\n    add r1, #0xdc\n    sub r0, r0, #1\n    strh r0, [r5, r1]\n    ldr r0, _0223993C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    ldr r1, _02239940 ; =ov70_02245240\n    ldr r2, _02239944 ; =ov70_02245242\n    lsl r3, r0, #2\n    ldr r0, _02239948 ; =0x00000DCC\n    ldrh r1, [r1, r3]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, r0]\n    bl ov70_02238D8C\n    b _02239938\n    mov r1, #0x80\n    tst r0, r1\n    beq _02239938\n    add r0, r1, #0\n    add r0, #0x9c\n    ldrh r0, [r5, r0]\n    cmp r0, #2\n    bhs _02239938\n    add r0, r1, #0\n    add r0, #0x9c\n    ldrh r0, [r5, r0]\n    add r1, #0x9c\n    add r0, r0, #1\n    strh r0, [r5, r1]\n    ldr r0, _0223993C ; =0x000005DC\n    bl PlaySE\n    mov r0, #0x47\n    lsl r0, r0, #2\n    ldrh r0, [r5, r0]\n    ldr r1, _02239940 ; =ov70_02245240\n    ldr r2, _02239944 ; =ov70_02245242\n    lsl r3, r0, #2\n    ldr r0, _02239948 ; =0x00000DCC\n    ldrh r1, [r1, r3]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, r0]\n    bl ov70_02238D8C\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _0223993C: .word 0x000005DC\n    _02239940: .word ov70_02245240\n    _02239944: .word ov70_02245242\n    _02239948: .word 0x00000DCC\n    _0223994C: .word gSystem\n    _02239950: .word 0x00000F0F"
    );
    #endif
}

void ov70_02239954(void) {
    /* Original at 0x02239954 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r0, #0\n    add r0, r4, #0\n    bl ov70_02241004\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    ldr r0, _02239978 ; =0x000011DC\n    mov r1, #0\n    strh r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02239978: .word 0x000011DC"
    );
    #endif
}

void ov70_0223997C(void) {
    /* Original at 0x0223997C */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223998C ; =0x000011DC\n    ldrh r1, [r0, r1]\n    cmp r1, #0\n    beq _02239988\n    mov r1, #9\n    str r1, [r0, #0x2c]\n    mov r0, #3\n    bx lr\n    _0223998C: .word 0x000011DC"
    );
    #endif
}

void ov70_02239990(void) {
    /* Original at 0x02239990 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _022399B6\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _022399CE\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_022399D8(void) {
    /* Original at 0x022399D8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    mov r1, #0xa\n    str r0, [sp]\n    add r2, r1, #0\n    ldr r0, [r4, #4]\n    add r2, #0xf8\n    mov r3, #3\n    bl ov70_02238C14\n    ldr r1, _02239A08 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #0xd\n    str r0, [r4, #0x2c]\n    ldr r0, _02239A0C ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _02239A08: .word 0x000011C8\n    _02239A0C: .word 0x00000DCC"
    );
    #endif
}

void ov70_02239A10(void) {
    /* Original at 0x02239A10 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _02239A62\n    ldr r0, _02239A9C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _02239AA0 ; =0x00001158\n    mov r1, #1\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    ldr r0, _02239AA0 ; =0x00001158\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _02239AA4 ; =0x00001198\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    mov r0, #6\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #7\n    str r0, [r4, #0x2c]\n    b _02239A98\n    cmp r0, #2\n    bne _02239A98\n    ldr r0, _02239A9C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _02239AA0 ; =0x00001158\n    mov r1, #1\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    ldr r0, _02239AA0 ; =0x00001158\n    add r0, r4, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _02239AA8 ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #5\n    str r0, [r4, #0x2c]\n    ldr r0, _02239AA8 ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    pop {r4, pc}\n    _02239A9C: .word 0x000011C8\n    _02239AA0: .word 0x00001158\n    _02239AA4: .word 0x00001198\n    _02239AA8: .word 0x00000DCC"
    );
    #endif
}

void ov70_02239AAC(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_02239ACC(void) {
    /* Original at 0x02239ACC */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02239AFA\n    mov r0, #0x47\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0x2d\n    ble _02239AFA\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02239B00(void) {
    /* Original at 0x02239B00 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r7, r0, #0\n    ldr r0, _02239B7C ; =0x00000F58\n    ldrh r1, [r7, #0x36]\n    add r4, r7, r0\n    mov r0, #0xc\n    ldr r2, _02239B80 ; =ov70_0224526C\n    mul r0, r1\n    mov r6, #0\n    add r5, r2, r0\n    mov r0, #0x78\n    str r0, [sp]\n    mov r0, #8\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xf\n    add r3, r2, #0\n    bl FillWindowPixelRect\n    mov r0, #0x78\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0\n    mov r3, #8\n    bl FillWindowPixelRect\n    mov r0, #0x78\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0\n    mov r3, #0xa\n    bl FillWindowPixelRect\n    mov r0, #0\n    str r0, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r7, r1]\n    ldr r3, [r5]\n    add r0, r4, #0\n    mov r2, #4\n    bl ov70_02239C34\n    add r0, r4, #0\n    bl CopyWindowToVram\n    add r6, r6, #1\n    add r4, #0x10\n    add r5, r5, #4\n    cmp r6, #3\n    blt _02239B16\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02239B7C: .word 0x00000F58\n    _02239B80: .word ov70_0224526C"
    );
    #endif
}

void ov70_02239B84(void) {
    /* Original at 0x02239B84 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    mov r2, #0xba\n    add r5, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x1c\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    ldr r0, _02239BD4 ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _02239BD4 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _02239BD4 ; =0x00000F18\n    ldr r2, _02239BD8 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02239BD4: .word 0x00000F18\n    _02239BD8: .word 0x00000BBC"
    );
    #endif
}

void ov70_02239BDC(void) {
    /* Original at 0x02239BDC */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    mov r2, #0xba\n    add r5, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x1c\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    ldr r0, _02239C2C ; =0x00001158\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _02239C2C ; =0x00001158\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _02239C2C ; =0x00001158\n    ldr r2, _02239C30 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _02239C2C: .word 0x00001158\n    _02239C30: .word 0x00000BBC"
    );
    #endif
}

void ov70_02239C34(void) {
    /* Original at 0x02239C34 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r6, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    ldr r0, _02239C68 ; =0x000A0900\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    nop\n    _02239C68: .word 0x000A0900"
    );
    #endif
}

void ov70_02239C6C(void) {
    /* Original at 0x02239C6C */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    ldr r4, [r0, #4]\n    mov r0, #2\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    mov r0, #0x64\n    mov r1, #5\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0x2a\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x11\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x28\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0x18\n    str r0, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #8\n    str r0, [sp, #8]\n    mov r0, #0x11\n    mov r2, #0\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #5\n    add r3, r2, #0\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #5\n    bl BgCommitTilemapBufferToVram\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0x3d\n    bl LoadFontPal1\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02239CF8(void) {
    /* Original at 0x02239CF8 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x64\n    mov r1, #0x12\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x64\n    mov r1, #0x29\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    add sp, #0x10\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02239D44(void) {
    /* Original at 0x02239D44 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x14\n    add r5, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x10\n    str r0, [sp, #4]\n    mov r2, #4\n    add r4, r1, #0\n    ldr r1, _02239D88 ; =0x00001198\n    str r2, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    str r0, [sp, #0x10]\n    ldr r0, [r5, #4]\n    add r1, r5, r1\n    mov r3, #0xd\n    bl AddWindowParameterized\n    ldr r0, _02239D88 ; =0x00001198\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r1, #0xba\n    ldr r0, _02239D88 ; =0x00001198\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov70_022450EC\n    add sp, #0x14\n    pop {r4, r5, pc}\n    _02239D88: .word 0x00001198"
    );
    #endif
}

void ov70_02239D8C(void) {
    /* Original at 0x02239D8C */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_0223A1E4\n    ldr r0, [r4, #4]\n    bl ov70_02239EAC\n    add r0, r4, #0\n    bl ov70_02239FA4\n    add r0, r4, #0\n    bl ov70_0223A0D4\n    add r0, r4, #0\n    bl ov70_0223A06C\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Mon_GetBoxMon\n    str r0, [sp]\n    mov r0, #0x8a\n    lsl r0, r0, #2\n    mov r2, #0xba\n    add r0, r4, r0\n    lsl r2, r2, #4\n    str r0, [sp, #4]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, r2, #4\n    ldr r3, _02239E58 ; =0x00001058\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    bl ov70_0223A578\n    ldr r1, _02239E5C ; =0x00001118\n    mov r2, #0x92\n    add r0, r4, r1\n    str r0, [sp]\n    mov r0, #0xba\n    lsl r0, r0, #4\n    mov r3, #0x4f\n    sub r1, #0x50\n    lsl r2, r2, #2\n    lsl r3, r3, #2\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    add r2, r4, r2\n    add r3, r4, r3\n    bl ov70_0223A72C\n    ldr r1, _02239E60 ; =0x0000022F\n    mov r2, #0\n    ldrsb r0, [r4, r1]\n    add r1, r1, #1\n    ldrsb r1, [r4, r1]\n    bl ov70_0223F864\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldrsh r2, [r4, r1]\n    ldr r3, _02239E64 ; =0x000010E8\n    add r1, r1, #2\n    str r2, [sp]\n    ldrsb r1, [r4, r1]\n    mov r2, #0xba\n    lsl r2, r2, #4\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, r2, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    bl ov70_0223F470\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_0223A7E4\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02239E58: .word 0x00001058\n    _02239E5C: .word 0x00001118\n    _02239E60: .word 0x0000022F\n    _02239E64: .word 0x000010E8"
    );
    #endif
}

void ov70_02239E68(void) {
    /* Original at 0x02239E68 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x2c]\n    lsl r2, r1, #2\n    ldr r1, _02239E78 ; =ov70_022464A8\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r3, pc}\n    nop\n    _02239E78: .word ov70_022464A8"
    );
    #endif
}

void ov70_02239E7C(void) {
    /* Original at 0x02239E7C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_0223A0C4\n    add r0, r4, #0\n    bl ov70_0223A224\n    add r0, r4, #0\n    bl ov70_0223A1A0\n    ldr r0, [r4, #4]\n    bl ov70_02239F78\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02239EAC(void) {
    /* Original at 0x02239EAC */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x70\n    ldr r5, _02239F68 ; =ov70_0224539C\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x54\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02239F6C ; =ov70_02245380\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _02239F70 ; =ov70_02245364\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _02239F74 ; =ov70_02245348\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_022391F0\n    add sp, #0x70\n    pop {r3, r4, r5, pc}\n    _02239F68: .word ov70_0224539C\n    _02239F6C: .word ov70_02245380\n    _02239F70: .word ov70_02245364\n    _02239F74: .word ov70_02245348"
    );
    #endif
}

void ov70_02239F78(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 3);
}

void ov70_02239FA4(void) {
    /* Original at 0x02239FA4 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r5, [r6, #4]\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    mov r1, #0x60\n    str r1, [sp]\n    mov r1, #0x3d\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #8\n    add r3, r2, #0\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r6]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x14\n    add r2, r5, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x1c\n    add r2, r5, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0x3d\n    bl LoadFontPal1\n    add r0, r6, #0\n    bl ov70_02239CF8\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223A06C(void) {
    /* Original at 0x0223A06C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    mov r2, #0xd6\n    add r4, r0, #0\n    lsl r2, r2, #4\n    add r0, sp, #0\n    add r1, r4, #0\n    add r2, r4, r2\n    mov r3, #1\n    bl ov70_02238B54\n    mov r0, #0xd\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x3a\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0xee\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xee\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x25\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xee\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    bl sub_0203A880\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223A0C4(void) {
    /* Original at 0x0223A0C4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xee\n    lsl r1, r1, #4\n    ldr r3, _0223A0D0 ; =Sprite_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _0223A0D0: .word Sprite_Delete"
    );
    #endif
}

void ov70_0223A0D4(void) {
    /* Original at 0x0223A0D4 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    add r7, r0, #0\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    ldr r1, _0223A190 ; =0x00000F18\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r7, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _0223A190 ; =0x00000F18\n    mov r1, #0\n    add r0, r7, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0xf\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x5e\n    ldr r1, _0223A194 ; =0x00000F58\n    str r0, [sp, #0x10]\n    ldr r0, [r7, #4]\n    add r1, r7, r1\n    mov r2, #0\n    mov r3, #0x15\n    bl AddWindowParameterized\n    mov r0, #0\n    str r0, [sp, #0x14]\n    ldr r0, _0223A198 ; =0x00001058\n    ldr r4, _0223A19C ; =ov70_022453B8\n    mov r6, #0x86\n    add r5, r7, r0\n    ldr r0, [r4, #4]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    mov r2, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r3, [r4]\n    ldr r0, [r7, #4]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add r4, #0x10\n    mul r0, r1\n    add r6, r6, r0\n    ldr r0, [sp, #0x14]\n    add r5, #0x10\n    add r0, r0, #1\n    str r0, [sp, #0x14]\n    cmp r0, #0xe\n    blt _0223A132\n    add r0, r7, #0\n    mov r1, #2\n    bl ov70_02239D44\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223A190: .word 0x00000F18\n    _0223A194: .word 0x00000F58\n    _0223A198: .word 0x00001058\n    _0223A19C: .word ov70_022453B8"
    );
    #endif
}

void ov70_0223A1A0(void) {
    /* Original at 0x0223A1A0 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0223A1D4 ; =0x00001198\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223A1D8 ; =0x00000F18\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223A1DC ; =0x00000F58\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223A1E0 ; =0x00001058\n    mov r4, #0\n    add r5, r5, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0xe\n    blt _0223A1C2\n    pop {r3, r4, r5, pc}\n    nop\n    _0223A1D4: .word 0x00001198\n    _0223A1D8: .word 0x00000F18\n    _0223A1DC: .word 0x00000F58\n    _0223A1E0: .word 0x00001058"
    );
    #endif
}

void ov70_0223A1E4(void) {
    /* Original at 0x0223A1E4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223A220 ; =0x00000BBC\n    str r0, [r5, r1]\n    sub r1, #0x1c\n    ldr r0, [r5, r1]\n    mov r1, #0x27\n    bl NewString_ReadMsgData\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    str r0, [r5, r1]\n    mov r4, #0\n    mov r7, #0x14\n    add r6, r1, #4\n    add r0, r7, #0\n    mov r1, #0x3d\n    bl String_New\n    str r0, [r5, r6]\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xa\n    blt _0223A20A\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223A220: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223A224(void) {
    /* Original at 0x0223A224 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    ldr r6, _0223A250 ; =0x00000BC4\n    mov r4, #0\n    add r5, r7, #0\n    ldr r0, [r5, r6]\n    bl String_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #0xa\n    blt _0223A22E\n    ldr r0, _0223A254 ; =0x00000BBC\n    ldr r0, [r7, r0]\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    ldr r0, [r7, r0]\n    bl String_Delete\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223A250: .word 0x00000BC4\n    _0223A254: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223A258(void) {
    ((u32*)r0)[0x2c] = 1;
}

void ov70_0223A260(void) {
    /* Original at 0x0223A260 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _0223A2C0 ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    add r3, r2, #0\n    tst r3, r1\n    bne _0223A27A\n    ldr r3, _0223A2C4 ; =gSystem + 0x40\n    ldrh r3, [r3, #0x24]\n    cmp r3, #0\n    beq _0223A2A4\n    ldr r0, _0223A2C8 ; =0x00000F0F\n    mov r1, #5\n    str r0, [sp]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223A4F4\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #7\n    bl ov70_02238D84\n    ldr r0, _0223A2CC ; =0x000005DC\n    bl PlaySE\n    b _0223A2B8\n    mov r3, #2\n    tst r2, r3\n    beq _0223A2B8\n    mov r2, #0\n    str r3, [r4, #0x2c]\n    bl ov70_02238E50\n    ldr r0, _0223A2CC ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0223A2C0: .word gSystem\n    _0223A2C4: .word gSystem + 0x40\n    _0223A2C8: .word 0x00000F0F\n    _0223A2CC: .word 0x000005DC"
    );
    #endif
}

void ov70_0223A2D0(void) {
    /* Original at 0x0223A2D0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #6\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_0223A2F8(void) {
    /* Original at 0x0223A2F8 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _0223A31C ; =0x0000016A\n    mov r1, #0xc\n    mov r3, #8\n    bl ov70_02238C14\n    ldr r1, _0223A320 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #6\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223A31C: .word 0x0000016A\n    _0223A320: .word 0x000011C8"
    );
    #endif
}

void ov70_0223A324(void) {
    /* Original at 0x0223A324 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223A354\n    ldr r0, _0223A378 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223A37C ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #8\n    bl ov70_02238E50\n    add r0, r4, #0\n    bl ov70_0223A874\n    b _0223A372\n    cmp r0, #2\n    bne _0223A372\n    ldr r0, _0223A378 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0223A380 ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    str r1, [r4, #0x2c]\n    bl ClearFrameAndWindow2\n    add r0, r4, #0\n    bl ov70_0223A874\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223A378: .word 0x000011C8\n    _0223A37C: .word 0x000011FC\n    _0223A380: .word 0x00000F18"
    );
    #endif
}

void ov70_0223A384(void) {
    /* Original at 0x0223A384 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #2\n    mov r1, #0x3d\n    bl ListMenuItems_New\n    ldr r1, _0223A3D4 ; =0x000011AC\n    mov r2, #0x37\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _0223A3D4 ; =0x000011AC\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x38\n    mov r3, #2\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #0\n    mov r1, #2\n    mov r2, #0xd\n    bl ov70_02238CAC\n    ldr r1, _0223A3D8 ; =0x000011D0\n    str r0, [r4, r1]\n    mov r0, #1\n    bl ov70_02238FB4\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223A3D4: .word 0x000011AC\n    _0223A3D8: .word 0x000011D0"
    );
    #endif
}

void ov70_0223A3DC(void) {
    /* Original at 0x0223A3DC */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0223A494 ; =0x000011D0\n    ldr r0, [r5, r0]\n    bl TouchscreenListMenu_HandleInput\n    cmp r0, #1\n    bne _0223A45E\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223A498 ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r4, r5, r0\n    add r0, r4, #0\n    bl ov70_0223E76C\n    cmp r0, #0\n    beq _0223A43A\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _0223A43A\n    ldr r0, _0223A49C ; =0x00000F0F\n    mov r1, #0x24\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0\n    str r4, [sp, #4]\n    bl ov70_0223A4F4\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #1\n    bl ov70_02238D84\n    add sp, #8\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223A49C ; =0x00000F0F\n    mov r1, #6\n    str r0, [sp]\n    add r0, r5, #0\n    mov r2, #1\n    mov r3, #0\n    str r4, [sp, #4]\n    bl ov70_0223A4F4\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #5\n    bl ov70_02238D84\n    add r0, r5, #0\n    bl ov70_0223A874\n    b _0223A48C\n    cmp r0, #2\n    beq _0223A46A\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223A48C\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223A498 ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    add r0, r5, #0\n    bl ov70_0223A874\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223A494: .word 0x000011D0\n    _0223A498: .word 0x000011AC\n    _0223A49C: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223A4A0(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_0223A4C0(void) {
    /* Original at 0x0223A4C0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223A4EE\n    mov r0, #0x47\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0x2d\n    ble _0223A4EE\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223A4F4(void) {
    /* Original at 0x0223A4F4 */
    /* Requires manual decompilation - 55 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, [sp, #0x24]\n    add r6, r1, #0\n    add r4, r2, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _0223A56C ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl BufferBoxMonSpeciesName\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r1, r6, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, _0223A56C ; =0x00000B9C\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r0, _0223A570 ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223A570 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _0223A570 ; =0x00000F18\n    ldr r2, _0223A574 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0223A56C: .word 0x00000B9C\n    _0223A570: .word 0x00000F18\n    _0223A574: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223A578(void) {
    /* Original at 0x0223A578 */
    /* Requires manual decompilation - 185 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    add r5, r0, #0\n    str r1, [sp, #8]\n    mov r0, #0x16\n    mov r1, #0x3d\n    add r7, r2, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x54]\n    bl String_New\n    str r0, [sp, #0x1c]\n    mov r0, #0x12\n    mov r1, #0x3d\n    bl String_New\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x50]\n    ldr r2, [sp, #0x1c]\n    mov r1, #0x77\n    bl GetBoxMonData\n    mov r2, #0\n    ldrsh r0, [r4, r2]\n    mov r1, #6\n    str r0, [sp, #0x10]\n    mov r0, #2\n    ldrsb r0, [r4, r0]\n    str r0, [sp, #0x14]\n    mov r0, #3\n    ldrsb r4, [r4, r0]\n    ldr r0, [sp, #0x50]\n    bl GetBoxMonData\n    str r0, [sp, #0x38]\n    add r0, r5, #0\n    mov r1, #0x49\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x14]\n    ldr r2, _0223A71C ; =ov70_02245910\n    lsl r0, r0, #2\n    str r0, [sp, #0xc]\n    ldr r1, [sp, #0xc]\n    add r0, r5, #0\n    ldr r1, [r2, r1]\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x30]\n    add r0, r5, #0\n    mov r1, #0x6a\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x2c]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #3\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r2, r4, #0\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    add r0, r7, #0\n    add r1, r5, #0\n    mov r2, #0x6b\n    mov r3, #0x3d\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x28]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x10]\n    bl NewString_ReadMsgData\n    ldr r1, [sp, #0x38]\n    str r0, [sp, #0x34]\n    lsl r1, r1, #0x10\n    ldr r0, [sp, #0x18]\n    lsr r1, r1, #0x10\n    mov r2, #0x3d\n    bl GetItemNameIntoString\n    add r0, r5, #0\n    mov r1, #0x3b\n    bl NewString_ReadMsgData\n    mov r4, #0\n    str r0, [sp, #0x20]\n    add r5, r6, #0\n    add r7, r4, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #6\n    blt _0223A630\n    mov r2, #0\n    ldr r0, _0223A720 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x1c]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    ldr r0, [sp, #0x14]\n    cmp r0, #3\n    beq _0223A66E\n    mov r3, #0\n    ldr r1, _0223A724 ; =ov70_0224649C\n    ldr r0, [sp, #0xc]\n    str r3, [sp]\n    ldr r0, [r1, r0]\n    ldr r1, [sp, #0x30]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    mov r2, #0x40\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A720 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x34]\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A720 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x2c]\n    add r0, #0x20\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A720 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x28]\n    add r0, #0x30\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A728 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x24]\n    add r0, #0x40\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A720 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x18]\n    add r0, #0x50\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A728 ; =0x000F0200\n    str r2, [sp]\n    add r6, #0x60\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x20]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    ldr r0, [sp, #0x24]\n    bl String_Delete\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x2c]\n    bl String_Delete\n    ldr r0, [sp, #0x28]\n    bl String_Delete\n    ldr r0, [sp, #0x30]\n    bl String_Delete\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x34]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223A71C: .word ov70_02245910\n    _0223A720: .word 0x00010200\n    _0223A724: .word ov70_0224649C\n    _0223A728: .word 0x000F0200"
    );
    #endif
}

void ov70_0223A72C(void) {
    /* Original at 0x0223A72C */
    /* Requires manual decompilation - 76 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r7, r0, #0\n    add r5, r1, #0\n    mov r0, #0x10\n    mov r1, #0x3d\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    bl String_New\n    add r4, r0, #0\n    mov r0, #0x10\n    mov r1, #0x3d\n    bl String_New\n    add r6, r0, #0\n    add r0, r7, #0\n    mov r1, #0x31\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x10]\n    ldr r1, [sp, #8]\n    add r0, r4, #0\n    bl CopyU16ArrayToString\n    add r0, r7, #0\n    mov r1, #0xb4\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, [sp, #0xc]\n    mov r1, #0x91\n    add r2, r6, #0\n    bl GetMonData\n    mov r2, #0\n    ldr r0, _0223A7DC ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x10]\n    add r0, r5, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A7E0 ; =0x00010200\n    str r2, [sp]\n    add r5, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A7DC ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    add r1, r7, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223A7E0 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x28]\n    add r1, r6, #0\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov70_02245084\n    ldr r0, [sp, #0x10]\n    bl String_Delete\n    add r0, r4, #0\n    bl String_Delete\n    add r0, r7, #0\n    bl String_Delete\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223A7DC: .word 0x000F0200\n    _0223A7E0: .word 0x00010200"
    );
    #endif
}

void ov70_0223A7E4(void) {
    /* Original at 0x0223A7E4 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x30\n    mov r1, #0x32\n    add r5, r0, #0\n    mov r0, #0x3d\n    lsl r1, r1, #6\n    bl Heap_Alloc\n    add r4, r0, #0\n    add r0, sp, #0x20\n    add r1, r5, #0\n    mov r2, #2\n    bl GetPokemonSpriteCharAndPlttNarcIds\n    mov r1, #0\n    add r0, r5, #0\n    add r2, r1, #0\n    bl GetMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    mov r3, #0\n    str r3, [sp]\n    mov r1, #0xa\n    str r1, [sp, #4]\n    str r1, [sp, #8]\n    str r4, [sp, #0xc]\n    str r6, [sp, #0x10]\n    str r3, [sp, #0x14]\n    mov r1, #2\n    str r1, [sp, #0x18]\n    str r0, [sp, #0x1c]\n    add r1, sp, #0x20\n    ldrh r0, [r1]\n    ldrh r1, [r1, #2]\n    mov r2, #0x3d\n    bl sub_02014494\n    mov r1, #0x32\n    add r0, r4, #0\n    lsl r1, r1, #6\n    bl DC_FlushRange\n    mov r1, #0x4a\n    mov r2, #0x32\n    add r0, r4, #0\n    lsl r1, r1, #8\n    lsl r2, r2, #6\n    bl GX_LoadOBJ\n    mov r0, #0x20\n    str r0, [sp]\n    mov r0, #0x3d\n    mov r3, #0x1a\n    str r0, [sp, #4]\n    add r1, sp, #0x20\n    ldrh r0, [r1]\n    ldrh r1, [r1, #4]\n    mov r2, #1\n    lsl r3, r3, #4\n    bl GfGfxLoader_GXLoadPal\n    add r0, r4, #0\n    bl Heap_Free\n    add sp, #0x30\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223A874(void) {
    /* Original at 0x0223A874 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    ldr r1, _0223A8B4 ; =0x0000022F\n    add r4, r0, #0\n    ldrsb r0, [r4, r1]\n    add r1, r1, #1\n    ldrsb r1, [r4, r1]\n    mov r2, #0\n    bl ov70_0223F864\n    mov r1, #0x8b\n    lsl r1, r1, #2\n    ldrsh r2, [r4, r1]\n    add r1, r1, #2\n    ldr r3, _0223A8B8 ; =0x000010E8\n    str r2, [sp]\n    ldrsb r1, [r4, r1]\n    mov r2, #0xba\n    lsl r2, r2, #4\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, r2, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    bl ov70_0223F470\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223A8B4: .word 0x0000022F\n    _0223A8B8: .word 0x000010E8"
    );
    #endif
}

void ov70_0223A8BC(void) {
    /* Original at 0x0223A8BC */
    /* Requires manual decompilation - 200 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_0223AE98\n    ldr r1, _0223AA60 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r2, [r4, r1]\n    mov r1, #0x1f\n    mvn r1, r1\n    sub r1, r1, r2\n    bl ov70_0223AB3C\n    add r0, r4, #0\n    bl ov70_0223ABF4\n    add r0, r4, #0\n    bl ov70_0223ACF4\n    add r0, r4, #0\n    bl ov70_0223AC98\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    add r5, r1, #0\n    mul r5, r0\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r0, r4, r0\n    add r0, r0, r5\n    bl Mon_GetBoxMon\n    str r0, [sp]\n    mov r0, #0xd3\n    lsl r0, r0, #2\n    add r0, r4, r0\n    mov r2, #0xba\n    add r0, r0, r5\n    lsl r2, r2, #4\n    str r0, [sp, #4]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, r2, #4\n    ldr r3, _0223AA64 ; =0x00001058\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    bl ov70_0223A578\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    mov r2, #0xdb\n    add r3, r1, #0\n    sub r0, #8\n    mov r5, #0x26\n    lsl r2, r2, #2\n    lsl r5, r5, #4\n    ldr r1, _0223AA68 ; =0x00001118\n    mul r3, r0\n    add r0, r4, r1\n    str r0, [sp]\n    mov r0, #0xba\n    lsl r0, r0, #4\n    sub r1, #0x50\n    add r2, r4, r2\n    ldr r0, [r4, r0]\n    add r5, r4, r5\n    add r2, r2, r3\n    add r1, r4, r1\n    add r3, r5, r3\n    bl ov70_0223A72C\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r4, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    mul r0, r1\n    add r0, r2, r0\n    bl ov70_0223A7E4\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223AA6C ; =0x00001138\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x4d\n    bl ov70_0223B3BC\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223AA70 ; =0x000010E8\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x51\n    bl ov70_0223B3BC\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223AA74 ; =0x00000F58\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x58\n    bl ov70_0223B3EC\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223AA78 ; =0x00000F68\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x6d\n    bl ov70_0223B3EC\n    add r0, r4, #0\n    bl ov70_0223B258\n    ldr r2, _0223AA60 ; =0x00000F14\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    ldr r2, [r4, r2]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    neg r2, r2\n    bl ov70_02241330\n    ldr r1, _0223AA7C ; =ov70_0223B4D4\n    ldr r0, _0223AA80 ; =0x00001208\n    ldr r2, _0223AA84 ; =0x04000304\n    str r1, [r4, r0]\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    ldr r0, [r4, #0x24]\n    cmp r0, #0x11\n    bne _0223AA54\n    ldr r0, _0223AA88 ; =0x0400006C\n    bl GXx_GetMasterBrightness_\n    mov r1, #0xf\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223AA0A\n    ldr r0, _0223AA8C ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    mov r1, #0xf\n    mvn r1, r1\n    cmp r0, r1\n    beq _0223AA0A\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    b _0223AA54\n    ldr r0, _0223AA88 ; =0x0400006C\n    bl GXx_GetMasterBrightness_\n    mov r1, #0xf\n    mvn r1, r1\n    cmp r0, r1\n    beq _0223AA3E\n    ldr r0, _0223AA8C ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    mov r1, #0xf\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223AA3E\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #4\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    b _0223AA54\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223AA60: .word 0x00000F14\n    _0223AA64: .word 0x00001058\n    _0223AA68: .word 0x00001118\n    _0223AA6C: .word 0x00001138\n    _0223AA70: .word 0x000010E8\n    _0223AA74: .word 0x00000F58\n    _0223AA78: .word 0x00000F68\n    _0223AA7C: .word ov70_0223B4D4\n    _0223AA80: .word 0x00001208\n    _0223AA84: .word 0x04000304\n    _0223AA88: .word 0x0400006C\n    _0223AA8C: .word 0x0400106C"
    );
    #endif
}

void ov70_0223AA90(void) {
    /* Original at 0x0223AA90 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r0, #0\n    ldr r1, [r6, #0x2c]\n    lsl r2, r1, #2\n    ldr r1, _0223AAEC ; =ov70_022464CC\n    ldr r1, [r1, r2]\n    blx r1\n    ldr r7, _0223AAF0 ; =0x0000120E\n    str r0, [sp]\n    mov r4, #0\n    add r5, r6, #0\n    ldr r2, _0223AAF4 ; =0x00000F14\n    ldr r1, _0223AAF8 ; =0x0000120C\n    ldr r3, [r6, r2]\n    ldrsh r2, [r5, r7]\n    ldr r0, _0223AAFC ; =0x00000EE4\n    ldrsh r1, [r5, r1]\n    add r2, r3, r2\n    ldr r0, [r5, r0]\n    add r2, #0x20\n    bl ov70_02238F9C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _0223AAA6\n    mov r2, #0xee\n    lsl r2, r2, #4\n    ldr r0, [r6, r2]\n    add r2, #0x34\n    ldr r3, [r6, r2]\n    mov r2, #0x3a\n    mov r1, #0xd0\n    sub r2, r2, r3\n    bl ov70_02238F9C\n    mov r1, #0x4b\n    ldr r2, _0223AAF4 ; =0x00000F14\n    lsl r1, r1, #2\n    ldr r1, [r6, r1]\n    ldr r2, [r6, r2]\n    add r0, r6, #0\n    bl ov70_02241330\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223AAEC: .word ov70_022464CC\n    _0223AAF0: .word 0x0000120E\n    _0223AAF4: .word 0x00000F14\n    _0223AAF8: .word 0x0000120C\n    _0223AAFC: .word 0x00000EE4"
    );
    #endif
}

void ov70_0223AB00(void) {
    /* Original at 0x0223AB00 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223AB38 ; =0x00001208\n    add r4, r0, #0\n    mov r2, #0\n    str r2, [r4, r1]\n    bl ov70_0223ACE4\n    add r0, r4, #0\n    bl ov70_0223AF30\n    add r0, r4, #0\n    bl ov70_0223AE40\n    ldr r0, [r4, #4]\n    bl ov70_0223ABD8\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223AB38: .word 0x00001208"
    );
    #endif
}

void ov70_0223AB3C(void) {
    /* Original at 0x0223AB3C */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x38\n    ldr r6, _0223ABCC ; =ov70_022454D0\n    add r3, sp, #0x1c\n    add r5, r0, #0\n    add r4, r1, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r5, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r5, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r6, _0223ABD0 ; =ov70_022454B4\n    add r3, sp, #0\n    ldmia r6!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r6!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r6]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r5, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    ldr r0, _0223ABD4 ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    cmp r0, #0\n    bne _0223ABAE\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    bl ov70_022391F0\n    b _0223ABB8\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov70_022391F0\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add sp, #0x38\n    pop {r4, r5, r6, pc}\n    _0223ABCC: .word ov70_022454D0\n    _0223ABD0: .word ov70_022454B4\n    _0223ABD4: .word 0x0400106C"
    );
    #endif
}

void ov70_0223ABD8(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
}

void ov70_0223ABF4(void) {
    /* Original at 0x0223ABF4 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    mov r1, #0x1a\n    add r5, r0, #0\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    ldr r4, [r5, #4]\n    bl LoadFontPal1\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    mov r3, #2\n    bl LoadUserFrameGfx2\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    lsl r0, r0, #0xa\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x14\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0x60\n    str r0, [sp]\n    mov r0, #0x3d\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x64\n    mov r1, #8\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x12\n    add r2, r4, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x2a\n    add r2, r4, #0\n    mov r3, #6\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0x3d\n    bl LoadFontPal1\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0223AC98(void) {
    /* Original at 0x0223AC98 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    mov r2, #0xd6\n    add r4, r0, #0\n    lsl r2, r2, #4\n    add r0, sp, #0\n    add r1, r4, #0\n    add r2, r4, r2\n    mov r3, #1\n    bl ov70_02238B54\n    mov r0, #0xd\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0x3a\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0xee\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xee\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0x25\n    bl Sprite_SetAnimCtrlSeq\n    bl sub_0203A880\n    add sp, #0x30\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223ACE4(void) {
    /* Original at 0x0223ACE4 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0xee\n    lsl r1, r1, #4\n    ldr r3, _0223ACF0 ; =Sprite_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    nop\n    _0223ACF0: .word Sprite_Delete"
    );
    #endif
}

void ov70_0223ACF4(void) {
    /* Original at 0x0223ACF4 */
    /* Requires manual decompilation - 152 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    add r6, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r2, #4\n    ldr r1, _0223AE2C ; =0x00000F18\n    str r2, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #4]\n    add r1, r6, r1\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _0223AE2C ; =0x00000F18\n    mov r1, #0\n    add r0, r6, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0xd\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r3, #1\n    ldr r1, _0223AE30 ; =0x00000F58\n    str r3, [sp, #0xc]\n    mov r0, #0x94\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #4]\n    add r1, r6, r1\n    mov r2, #4\n    bl AddWindowParameterized\n    ldr r0, _0223AE30 ; =0x00000F58\n    mov r1, #0\n    add r0, r6, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0xd\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xae\n    ldr r1, _0223AE34 ; =0x00000F68\n    str r0, [sp, #0x10]\n    ldr r0, [r6, #4]\n    add r1, r6, r1\n    mov r2, #4\n    mov r3, #0x11\n    bl AddWindowParameterized\n    ldr r0, _0223AE34 ; =0x00000F68\n    mov r1, #0\n    add r0, r6, r0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x18]\n    ldr r0, _0223AE38 ; =0x00001058\n    ldr r4, _0223AE3C ; =ov70_022454EC\n    mov r7, #0xc8\n    add r5, r6, r0\n    ldr r2, [r4, #0x10]\n    ldr r0, [r4, #4]\n    cmp r2, #0\n    bne _0223ADD6\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x14]\n    lsr r2, r2, #0x18\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r3, [r4]\n    ldr r0, [r6, #4]\n    lsl r3, r3, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    add r2, r1, #0\n    mul r2, r0\n    ldr r0, [sp, #0x14]\n    add r0, r0, r2\n    str r0, [sp, #0x14]\n    b _0223AE10\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    ldr r0, [r4, #8]\n    lsl r2, r2, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #4]\n    ldr r0, [r4, #0xc]\n    add r1, r5, #0\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r3, [r4]\n    ldr r0, [r6, #4]\n    lsl r3, r3, #0x18\n    lsr r2, r2, #0x18\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r1, [r4, #8]\n    ldr r0, [r4, #0xc]\n    mul r0, r1\n    add r7, r7, r0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x18]\n    add r4, #0x14\n    add r0, r0, #1\n    add r5, #0x10\n    str r0, [sp, #0x18]\n    cmp r0, #0x10\n    blt _0223AD8A\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223AE2C: .word 0x00000F18\n    _0223AE30: .word 0x00000F58\n    _0223AE34: .word 0x00000F68\n    _0223AE38: .word 0x00001058\n    _0223AE3C: .word ov70_022454EC"
    );
    #endif
}

void ov70_0223AE40(void) {
    /* Original at 0x0223AE40 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _0223AE88 ; =0x00000F18\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223AE8C ; =0x00000F68\n    add r0, r5, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0223AE90 ; =0x00000F58\n    add r0, r5, r0\n    bl ClearWindowTilemapAndCopyToVram\n    ldr r0, _0223AE8C ; =0x00000F68\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223AE90 ; =0x00000F58\n    add r0, r5, r0\n    bl RemoveWindow\n    ldr r0, _0223AE94 ; =0x00001058\n    mov r4, #0\n    add r5, r5, r0\n    add r0, r5, #0\n    bl ClearWindowTilemapAndCopyToVram\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #0x10\n    blt _0223AE72\n    pop {r3, r4, r5, pc}\n    _0223AE88: .word 0x00000F18\n    _0223AE8C: .word 0x00000F68\n    _0223AE90: .word 0x00000F58\n    _0223AE94: .word 0x00001058"
    );
    #endif
}

void ov70_0223AE98(void) {
    /* Original at 0x0223AE98 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r5, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    sub r0, #8\n    mul r0, r1\n    add r4, r2, r0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223AF18 ; =0x00000BBC\n    str r0, [r5, r1]\n    sub r1, #0x20\n    ldr r0, [r5, r1]\n    bl MessageFormat_ResetBuffers\n    ldr r0, _0223AF1C ; =0x0000011E\n    ldrb r2, [r4, r0]\n    cmp r2, #0\n    beq _0223AED4\n    ldr r0, _0223AF20 ; =0x00000B9C\n    mov r1, #8\n    ldr r0, [r5, r0]\n    bl BufferCountryName\n    ldr r2, _0223AF24 ; =0x0000011F\n    ldrb r3, [r4, r2]\n    cmp r3, #0\n    beq _0223AEEA\n    ldr r0, _0223AF20 ; =0x00000B9C\n    sub r2, r2, #1\n    ldrb r2, [r4, r2]\n    ldr r0, [r5, r0]\n    mov r1, #9\n    bl BufferCityName\n    ldr r1, _0223AF20 ; =0x00000B9C\n    mov r2, #0x52\n    ldr r0, [r5, r1]\n    add r1, r1, #4\n    ldr r1, [r5, r1]\n    mov r3, #0x3d\n    bl ReadMsgData_ExpandPlaceholders\n    ldr r1, _0223AF28 ; =0x00000BC4\n    mov r2, #0x53\n    str r0, [r5, r1]\n    add r0, r1, #0\n    sub r0, #0x28\n    sub r1, #0x24\n    ldr r0, [r5, r0]\n    ldr r1, [r5, r1]\n    mov r3, #0x3d\n    bl ReadMsgData_ExpandPlaceholders\n    ldr r1, _0223AF2C ; =0x00000BC8\n    str r0, [r5, r1]\n    pop {r3, r4, r5, pc}\n    nop\n    _0223AF18: .word 0x00000BBC\n    _0223AF1C: .word 0x0000011E\n    _0223AF20: .word 0x00000B9C\n    _0223AF24: .word 0x0000011F\n    _0223AF28: .word 0x00000BC4\n    _0223AF2C: .word 0x00000BC8"
    );
    #endif
}

void ov70_0223AF30(void) {
    /* Original at 0x0223AF30 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223AF50 ; =0x00000BC4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _0223AF54 ; =0x00000BC8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _0223AF58 ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _0223AF50: .word 0x00000BC4\n    _0223AF54: .word 0x00000BC8\n    _0223AF58: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223AF5C(void) {
    /* Original at 0x0223AF5C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x24]\n    cmp r0, #0x10\n    bne _0223AF90\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #7\n    str r0, [r4, #0x2c]\n    b _0223AF9C\n    mov r1, #1\n    ldr r0, _0223AFA4 ; =0x00000F0C\n    str r1, [r4, #0x2c]\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223AFA4: .word 0x00000F0C"
    );
    #endif
}

void ov70_0223AFA8(void) {
    /* Original at 0x0223AFA8 */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    add r4, r1, #0\n    cmp r4, r0\n    beq _0223AFF2\n    cmp r4, #0\n    blt _0223AFF2\n    add r0, r4, #1\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _0223AFF4 ; =0x00000EE4\n    ldr r0, [r1, r0]\n    lsl r1, r4, #2\n    add r1, #0x10\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0x11\n    bl ov70_02238E50\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov70_02241330\n    ldr r0, _0223AFF8 ; =0x000005DC\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    _0223AFF4: .word 0x00000EE4\n    _0223AFF8: .word 0x000005DC"
    );
    #endif
}

void ov70_0223AFFC(void) {
    /* Original at 0x0223AFFC */
    /* Requires manual decompilation - 131 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    ldr r1, _0223B114 ; =gSystem\n    mov r2, #1\n    ldr r1, [r1, #0x48]\n    add r4, r0, #0\n    add r3, r1, #0\n    tst r3, r2\n    beq _0223B02C\n    ldr r1, _0223B118 ; =0x00000F0F\n    mov r3, #0\n    str r1, [sp]\n    mov r1, #0x10\n    bl ov70_0223B364\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #4\n    bl ov70_02238D84\n    ldr r0, _0223B11C ; =0x000005DC\n    bl PlaySE\n    b _0223B10C\n    mov r3, #2\n    tst r3, r1\n    beq _0223B054\n    mov r0, #0x10\n    str r0, [sp]\n    str r2, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    ldr r0, _0223B11C ; =0x000005DC\n    bl PlaySE\n    b _0223B10C\n    mov r2, #0x20\n    tst r2, r1\n    beq _0223B07A\n    mov r2, #0x4b\n    lsl r2, r2, #2\n    ldr r5, [r4, r2]\n    ldr r1, _0223B120 ; =ov70_022454A4\n    lsl r3, r5, #1\n    ldrb r1, [r1, r3]\n    cmp r5, r1\n    beq _0223B10C\n    sub r2, r2, #4\n    ldr r3, [r4, r2]\n    add r2, r1, #1\n    cmp r3, r2\n    blt _0223B10C\n    bl ov70_0223AFA8\n    b _0223B10C\n    mov r2, #0x10\n    tst r1, r2\n    beq _0223B0A0\n    mov r2, #0x4b\n    lsl r2, r2, #2\n    ldr r5, [r4, r2]\n    ldr r1, _0223B124 ; =ov70_022454A5\n    lsl r3, r5, #1\n    ldrb r1, [r1, r3]\n    cmp r5, r1\n    beq _0223B10C\n    sub r2, r2, #4\n    ldr r3, [r4, r2]\n    add r2, r1, #1\n    cmp r3, r2\n    blt _0223B10C\n    bl ov70_0223AFA8\n    b _0223B10C\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    bl ov70_02241164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _0223B0BA\n    add r0, r4, #0\n    bl ov70_0223AFA8\n    ldr r0, _0223B128 ; =ov70_02245498\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    cmp r0, #0\n    bne _0223B0E6\n    ldr r0, _0223B118 ; =0x00000F0F\n    mov r1, #0x10\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223B364\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #4\n    bl ov70_02238D84\n    ldr r0, _0223B11C ; =0x000005DC\n    bl PlaySE\n    b _0223B10C\n    cmp r0, #1\n    bne _0223B10C\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    ldr r0, _0223B11C ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223B114: .word gSystem\n    _0223B118: .word 0x00000F0F\n    _0223B11C: .word 0x000005DC\n    _0223B120: .word ov70_022454A4\n    _0223B124: .word ov70_022454A5\n    _0223B128: .word ov70_02245498"
    );
    #endif
}

void ov70_0223B12C(void) {
    /* Original at 0x0223B12C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223B184 ; =0x00000F0C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x24]\n    cmp r0, #0xf\n    beq _0223B178\n    cmp r0, #6\n    bne _0223B160\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _0223B178\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223B184: .word 0x00000F0C"
    );
    #endif
}

void ov70_0223B188(void) {
    /* Original at 0x0223B188 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #4\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, [r4, #4]\n    ldr r2, _0223B1B0 ; =0x0000012E\n    mov r1, #0xa\n    mov r3, #3\n    bl ov70_02238C2C\n    ldr r1, _0223B1B4 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #5\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    _0223B1B0: .word 0x0000012E\n    _0223B1B4: .word 0x000011C8"
    );
    #endif
}

void ov70_0223B1B8(void) {
    /* Original at 0x0223B1B8 */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223B202\n    ldr r0, _0223B240 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #6\n    bl ov70_02238E50\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223B244 ; =0x00001138\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x4d\n    bl ov70_0223B3BC\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223B248 ; =0x000010E8\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x51\n    bl ov70_0223B3BC\n    add r0, r4, #0\n    bl ov70_0223B258\n    b _0223B23C\n    cmp r0, #2\n    bne _0223B23C\n    ldr r0, _0223B240 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0223B24C ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223B250 ; =0x00000F58\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x58\n    bl ov70_0223B3EC\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r1, _0223B254 ; =0x00000F68\n    ldr r0, [r4, r0]\n    add r1, r4, r1\n    mov r2, #0x6d\n    bl ov70_0223B3EC\n    mov r0, #3\n    pop {r4, pc}\n    _0223B240: .word 0x000011C8\n    _0223B244: .word 0x00001138\n    _0223B248: .word 0x000010E8\n    _0223B24C: .word 0x00000F18\n    _0223B250: .word 0x00000F58\n    _0223B254: .word 0x00000F68"
    );
    #endif
}

void ov70_0223B258(void) {
    /* Original at 0x0223B258 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r2, [r4, #4]\n    mov r0, #0x64\n    mov r1, #0x24\n    bl GfGfxLoader_LoadScrnData\n    ldr r2, _0223B2B4 ; =0x00000BC4\n    ldr r0, _0223B2B8 ; =0x000010F8\n    ldr r1, [r4, r2]\n    add r2, r2, #4\n    ldr r2, [r4, r2]\n    add r0, r4, r0\n    bl ov70_0223B484\n    mov r2, #0xba\n    ldr r0, _0223B2BC ; =0x00001148\n    lsl r2, r2, #4\n    mov r3, #0x35\n    mov r5, #0x4b\n    ldr r1, [r4, r2]\n    add r2, r2, #4\n    lsl r3, r3, #4\n    lsl r5, r5, #2\n    add r0, r4, r0\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    ldr r4, [r4, r5]\n    sub r5, #8\n    mul r5, r4\n    add r3, r3, r5\n    bl ov70_0223B41C\n    add sp, #0x10\n    pop {r3, r4, r5, pc}\n    nop\n    _0223B2B4: .word 0x00000BC4\n    _0223B2B8: .word 0x000010F8\n    _0223B2BC: .word 0x00001148"
    );
    #endif
}

void ov70_0223B2C0(void) {
    ov70_0223B258();
}

void ov70_0223B2D0(void) {
    /* Original at 0x0223B2D0 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223B2FC ; =0x00000F14\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223B2F6\n    ldr r0, _0223B2FC ; =0x00000F14\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r1, #1\n    str r1, [r4, #0x2c]\n    sub r0, #8\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223B2FC: .word 0x00000F14"
    );
    #endif
}

void ov70_0223B300(void) {
    /* Original at 0x0223B300 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223B338 ; =0x00000F14\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223B332\n    ldr r2, _0223B33C ; =0x04000304\n    ldr r0, _0223B340 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #0xf\n    bl ov70_02238E50\n    ldr r0, _0223B338 ; =0x00000F14\n    mov r1, #0x10\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223B338: .word 0x00000F14\n    _0223B33C: .word 0x04000304\n    _0223B340: .word 0xFFFF7FFF"
    );
    #endif
}

void ov70_0223B344(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_0223B364(void) {
    /* Original at 0x0223B364 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    mov r2, #0xba\n    add r5, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x1c\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    ldr r0, _0223B3B4 ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223B3B4 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #2\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _0223B3B4 ; =0x00000F18\n    ldr r2, _0223B3B8 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223B3B4: .word 0x00000F18\n    _0223B3B8: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223B3BC(void) {
    /* Original at 0x0223B3BC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, _0223B3E8 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223B3E8: .word 0x000F0200"
    );
    #endif
}

void ov70_0223B3EC(void) {
    /* Original at 0x0223B3EC */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0223B418 ; =0x000F0200\n    mov r2, #0\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_022450B8\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0223B418: .word 0x000F0200"
    );
    #endif
}

void ov70_0223B41C(void) {
    /* Original at 0x0223B41C */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r6, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223B480 ; =0x00010200\n    mov r3, #0\n    str r0, [sp]\n    ldrsh r2, [r4, r3]\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov70_0223F20C\n    mov r0, #0x49\n    str r0, [sp]\n    mov r3, #0\n    ldr r0, _0223B480 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    mov r2, #2\n    ldrsb r2, [r4, r2]\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ov70_0223F324\n    mov r0, #3\n    mov r1, #4\n    ldrsb r0, [r4, r0]\n    ldrsb r1, [r4, r1]\n    mov r2, #0\n    bl ov70_0223F864\n    add r2, r0, #0\n    mov r0, #0x68\n    str r0, [sp]\n    mov r3, #0\n    ldr r0, _0223B480 ; =0x00010200\n    str r3, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r1, r6, #0\n    str r3, [sp, #0xc]\n    bl ov70_0223F38C\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223B480: .word 0x00010200"
    );
    #endif
}

void ov70_0223B484(void) {
    /* Original at 0x0223B484 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    mov r1, #0\n    add r6, r2, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    add r0, #0x10\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    cmp r4, #0\n    beq _0223B4B4\n    mov r2, #0\n    ldr r0, _0223B4D0 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    cmp r6, #0\n    beq _0223B4CC\n    mov r2, #0\n    ldr r0, _0223B4D0 ; =0x00010200\n    str r2, [sp]\n    add r5, #0x10\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0223B4D0: .word 0x00010200"
    );
    #endif
}

void ov70_0223B4D4(void) {
    /* Original at 0x0223B4D4 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r3, _0223B558 ; =0x00000F14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #0\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #1\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    mov r1, #3\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    add r2, r1, #0\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #4\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    mov r2, #3\n    ldr r5, [r4, r3]\n    add r3, r2, #0\n    sub r3, #0x23\n    ldr r0, [r4, #4]\n    mov r1, #5\n    sub r3, r3, r5\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #6\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223B558 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #7\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    pop {r3, r4, r5, pc}\n    nop\n    _0223B558: .word 0x00000F14"
    );
    #endif
}

void ov70_0223B55C(void) {
    /* Original at 0x0223B55C */
    /* Requires manual decompilation - 170 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x3c\n    add r4, r0, #0\n    bl ov70_0223BC7C\n    ldr r0, [r4, #4]\n    bl ov70_0223B7CC\n    add r0, r4, #0\n    bl ov70_0223B8E0\n    add r0, r4, #0\n    bl ov70_0223BAE0\n    add r0, r4, #0\n    bl ov70_0223B9C8\n    ldr r0, [r4, #4]\n    ldr r3, _0223B6AC ; =0x00000F58\n    str r0, [sp, #0xc]\n    add r0, r4, r3\n    str r0, [sp, #0x10]\n    ldr r0, _0223B6B0 ; =0x00001168\n    add r1, r4, r0\n    str r1, [sp, #0x14]\n    mov r1, #0xdd\n    lsl r1, r1, #4\n    ldr r2, [r4, r1]\n    sub r1, r1, #4\n    str r2, [sp, #0x18]\n    add r2, r3, #0\n    sub r2, #0x54\n    ldr r2, [r4, r2]\n    sub r3, #0x50\n    str r2, [sp, #0x1c]\n    ldr r2, [r4, r3]\n    add r0, #0x5c\n    str r2, [sp, #0x20]\n    ldr r1, [r4, r1]\n    mov r2, #0xba\n    lsl r2, r2, #4\n    str r1, [sp, #0x24]\n    ldr r1, [r4, r2]\n    str r1, [sp, #0x28]\n    add r1, r2, #4\n    ldr r1, [r4, r1]\n    add r2, #0x10\n    str r1, [sp, #0x2c]\n    ldr r1, [r4, r2]\n    mov r2, #1\n    str r1, [sp, #0x30]\n    ldr r1, [r4]\n    ldr r1, [r1, #0x10]\n    str r1, [sp, #0x34]\n    ldr r0, [r4, r0]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    str r0, [sp, #0x38]\n    add r0, sp, #0xc\n    bl ov70_02242014\n    ldr r1, _0223B6B4 ; =0x000011A8\n    mov r2, #0xba\n    str r0, [r4, r1]\n    ldr r0, _0223B6B8 ; =0x00001058\n    lsl r2, r2, #4\n    sub r1, #0x30\n    ldr r2, [r4, r2]\n    add r0, r4, r0\n    add r1, r4, r1\n    bl ov70_0223CB1C\n    ldr r3, _0223B6BC ; =0x000011DE\n    mov r2, #0xba\n    ldr r1, _0223B6C0 ; =0x000010D8\n    lsl r2, r2, #4\n    ldrh r3, [r4, r3]\n    ldr r0, [r4, #4]\n    ldr r2, [r4, r2]\n    add r1, r4, r1\n    bl ov70_0223CC04\n    mov r3, #0\n    ldr r0, _0223B6C4 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r2, _0223B6C8 ; =0x00000BA4\n    ldr r0, _0223B6CC ; =0x00001068\n    ldr r1, [r4, r2]\n    sub r2, #0x1a\n    ldrsh r2, [r4, r2]\n    add r0, r4, r0\n    bl ov70_0223F1D8\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223B6C4 ; =0x00010200\n    mov r2, #0xba\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    ldr r1, [r4, r2]\n    sub r2, #0x14\n    ldr r0, _0223B6D0 ; =0x00001088\n    ldrsb r2, [r4, r2]\n    add r0, r4, r0\n    mov r3, #1\n    bl ov70_0223F2BC\n    ldr r1, _0223B6D4 ; =0x00000B8D\n    mov r2, #1\n    ldrsb r0, [r4, r1]\n    add r1, r1, #1\n    ldrsb r1, [r4, r1]\n    bl ov70_0223F864\n    add r2, r0, #0\n    mov r3, #0\n    ldr r0, _0223B6C4 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    mov r1, #0xba\n    str r0, [sp, #8]\n    ldr r0, _0223B6D8 ; =0x000010A8\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    bl ov70_0223F370\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223B6C4 ; =0x00010200\n    mov r2, #0xbb\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    ldr r3, _0223B6DC ; =0x000012CC\n    ldr r0, _0223B6E0 ; =0x00001188\n    ldr r1, [r4, r2]\n    sub r2, #0x10\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    add r0, r4, r0\n    bl ov70_0223F244\n    ldr r1, _0223B6E4 ; =ov70_0223CCA4\n    ldr r0, _0223B6E8 ; =0x00001208\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x24]\n    cmp r0, #0xd\n    bne _0223B6A2\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0x3c\n    pop {r3, r4, pc}\n    _0223B6AC: .word 0x00000F58\n    _0223B6B0: .word 0x00001168\n    _0223B6B4: .word 0x000011A8\n    _0223B6B8: .word 0x00001058\n    _0223B6BC: .word 0x000011DE\n    _0223B6C0: .word 0x000010D8\n    _0223B6C4: .word 0x00010200\n    _0223B6C8: .word 0x00000BA4\n    _0223B6CC: .word 0x00001068\n    _0223B6D0: .word 0x00001088\n    _0223B6D4: .word 0x00000B8D\n    _0223B6D8: .word 0x000010A8\n    _0223B6DC: .word 0x000012CC\n    _0223B6E0: .word 0x00001188\n    _0223B6E4: .word ov70_0223CCA4\n    _0223B6E8: .word 0x00001208"
    );
    #endif
}

void ov70_0223B6EC(void) {
    /* Original at 0x0223B6EC */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r1, [r5, #0x2c]\n    lsl r2, r1, #2\n    ldr r1, _0223B768 ; =ov70_02246528\n    ldr r1, [r1, r2]\n    blx r1\n    mov r7, #0x6a\n    str r0, [sp]\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #2\n    ldr r3, _0223B76C ; =0x0000120E\n    ldr r1, _0223B770 ; =0x0000120C\n    ldr r2, _0223B774 ; =0x00000F14\n    ldr r0, _0223B778 ; =0x00000EE4\n    ldrsh r3, [r4, r3]\n    ldr r2, [r5, r2]\n    ldrsh r1, [r4, r1]\n    ldr r0, [r4, r0]\n    add r2, r2, r3\n    bl ov70_02238F9C\n    ldr r2, _0223B774 ; =0x00000F14\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r2, [r5, r2]\n    ldr r0, [r5, r0]\n    mov r1, #0x37\n    add r2, r2, r7\n    bl ov70_02238F9C\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #8\n    blt _0223B704\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r2, r0, #0\n    ldr r0, _0223B77C ; =0x00000DCC\n    mov r3, #6\n    add r6, r4, #0\n    mul r6, r3\n    mul r3, r2\n    ldr r2, _0223B780 ; =ov70_02246500\n    ldr r1, _0223B784 ; =ov70_022464FE\n    ldrh r3, [r2, r3]\n    ldr r2, _0223B774 ; =0x00000F14\n    ldrh r1, [r1, r6]\n    ldr r2, [r5, r2]\n    ldr r0, [r5, r0]\n    sub r2, r3, r2\n    bl ov70_02238F9C\n    ldr r0, [sp]\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223B768: .word ov70_02246528\n    _0223B76C: .word 0x0000120E\n    _0223B770: .word 0x0000120C\n    _0223B774: .word 0x00000F14\n    _0223B778: .word 0x00000EE4\n    _0223B77C: .word 0x00000DCC\n    _0223B780: .word ov70_02246500\n    _0223B784: .word ov70_022464FE"
    );
    #endif
}

void ov70_0223B788(void) {
    /* Original at 0x0223B788 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223B7C8 ; =0x00001208\n    mov r1, #0\n    str r1, [r4, r0]\n    sub r0, #0x60\n    ldr r0, [r4, r0]\n    bl ov70_0224212C\n    add r0, r4, #0\n    bl ov70_0223BAAC\n    add r0, r4, #0\n    bl ov70_0223BCD0\n    add r0, r4, #0\n    bl ov70_0223BC2C\n    ldr r0, [r4, #4]\n    bl ov70_0223B8B4\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    _0223B7C8: .word 0x00001208"
    );
    #endif
}

void ov70_0223B7CC(void) {
    /* Original at 0x0223B7CC */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x70\n    ldr r5, _0223B8A4 ; =ov70_02245690\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x54\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223B8A8 ; =ov70_022456AC\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223B8AC ; =ov70_02245674\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223B8B0 ; =ov70_02245658\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_022391F0\n    mov r0, #2\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    add sp, #0x70\n    pop {r3, r4, r5, pc}\n    _0223B8A4: .word ov70_02245690\n    _0223B8A8: .word ov70_022456AC\n    _0223B8AC: .word ov70_02245674\n    _0223B8B0: .word ov70_02245658"
    );
    #endif
}

void ov70_0223B8B4(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 3);
}

void ov70_0223B8E0(void) {
    /* Original at 0x0223B8E0 */
    /* Requires manual decompilation - 102 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r5, [r6, #4]\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    mov r1, #0x60\n    str r1, [sp]\n    mov r1, #0x3d\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #3\n    add r3, r2, #0\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r6]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xe\n    add r2, r5, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x1d\n    add r2, r5, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xf\n    add r2, r5, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0x3d\n    bl LoadFontPal1\n    add r0, r6, #0\n    bl ov70_02239CF8\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223B9C8(void) {
    /* Original at 0x0223B9C8 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    mov r2, #0xd6\n    add r4, r0, #0\n    lsl r2, r2, #4\n    add r0, sp, #0\n    add r1, r4, #0\n    add r2, r4, r2\n    mov r3, #1\n    bl ov70_02238B54\n    ldr r0, _0223BA9C ; =ov70_022464F0\n    ldrh r1, [r0, #0xe]\n    ldrh r0, [r0, #0x10]\n    lsl r1, r1, #0xc\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    str r1, [sp, #8]\n    bl Sprite_CreateAffine\n    ldr r1, _0223BAA0 ; =0x00000DCC\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223BAA0 ; =0x00000DCC\n    mov r1, #0x2d\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223BAA0 ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, _0223BAA0 ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl Sprite_SetOamMode\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r0, r0, #0x10\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0xdd\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x39\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0x75\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223BAA4 ; =0x00000F04\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223BAA4 ; =0x00000F04\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x23\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223BAA8 ; =0x00000F08\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223BAA8 ; =0x00000F08\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    bl sub_0203A880\n    add sp, #0x30\n    pop {r4, pc}\n    nop\n    _0223BA9C: .word ov70_022464F0\n    _0223BAA0: .word 0x00000DCC\n    _0223BAA4: .word 0x00000F04\n    _0223BAA8: .word 0x00000F08"
    );
    #endif
}

void ov70_0223BAAC(void) {
    /* Original at 0x0223BAAC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223BAD4 ; =0x00000DCC\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    ldr r0, _0223BAD8 ; =0x00000F04\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    ldr r0, _0223BADC ; =0x00000F08\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    pop {r4, pc}\n    _0223BAD4: .word 0x00000DCC\n    _0223BAD8: .word 0x00000F04\n    _0223BADC: .word 0x00000F08"
    );
    #endif
}

void ov70_0223BAE0(void) {
    /* Original at 0x0223BAE0 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x1c\n    str r0, [sp, #0x14]\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x60\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r2, _0223BC10 ; =0x00000F18\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0, #4]\n    add r1, r1, r2\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r1, _0223BC10 ; =0x00000F18\n    ldr r0, [sp, #0x14]\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _0223BC14 ; =0x00001058\n    ldr r0, [sp, #0x14]\n    ldr r4, _0223BC18 ; =ov70_02245640\n    mov r7, #0\n    mov r6, #1\n    add r5, r0, r1\n    ldrh r0, [r4, #2]\n    add r1, r5, #0\n    mov r2, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrh r3, [r4]\n    ldr r0, [sp, #0x14]\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r7, r7, #1\n    add r6, #0x16\n    add r4, r4, #4\n    add r5, #0x10\n    cmp r7, #6\n    blt _0223BB22\n    ldr r1, _0223BC1C ; =0x00001178\n    ldr r0, [sp, #0x14]\n    ldr r4, _0223BC20 ; =ov70_0224562C\n    mov r7, #0\n    mov r6, #0x85\n    add r5, r0, r1\n    ldrh r0, [r4, #2]\n    add r1, r5, #0\n    mov r2, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x1c\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrh r3, [r4]\n    ldr r0, [sp, #0x14]\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r7, r7, #1\n    add r6, #0x38\n    add r4, r4, #4\n    add r5, #0x10\n    cmp r7, #2\n    blt _0223BB6E\n    ldr r1, _0223BC14 ; =0x00001058\n    ldr r0, [sp, #0x14]\n    ldr r6, _0223BC24 ; =0x0000011D\n    add r0, r0, r1\n    ldr r4, _0223BC28 ; =ov70_02245634\n    mov r5, #0\n    str r0, [sp, #0x18]\n    add r0, r5, #6\n    lsl r7, r0, #4\n    ldrh r0, [r4, #2]\n    ldr r1, [sp, #0x18]\n    mov r2, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xa\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrh r3, [r4]\n    ldr r0, [sp, #0x14]\n    add r1, r1, r7\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, [sp, #0x18]\n    mov r1, #0\n    add r0, r0, r7\n    bl FillWindowPixelBuffer\n    add r5, r5, #1\n    add r6, #0x14\n    add r4, r4, #4\n    cmp r5, #3\n    blt _0223BBBC\n    ldr r0, [sp, #0x14]\n    mov r1, #4\n    bl ov70_02239D44\n    add sp, #0x1c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223BC10: .word 0x00000F18\n    _0223BC14: .word 0x00001058\n    _0223BC18: .word ov70_02245640\n    _0223BC1C: .word 0x00001178\n    _0223BC20: .word ov70_0224562C\n    _0223BC24: .word 0x0000011D\n    _0223BC28: .word ov70_02245634"
    );
    #endif
}

void ov70_0223BC2C(void) {
    /* Original at 0x0223BC2C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0223BC6C ; =0x00001198\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _0223BC70 ; =0x00000F18\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _0223BC74 ; =0x00001058\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #9\n    blt _0223BC46\n    ldr r0, _0223BC78 ; =0x00001178\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #2\n    blt _0223BC5A\n    pop {r4, r5, r6, pc}\n    nop\n    _0223BC6C: .word 0x00001198\n    _0223BC70: .word 0x00000F18\n    _0223BC74: .word 0x00001058\n    _0223BC78: .word 0x00001178"
    );
    #endif
}

void ov70_0223BC7C(void) {
    /* Original at 0x0223BC7C */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223BCC8 ; =0x00000BBC\n    str r0, [r4, r1]\n    sub r1, #0x1c\n    ldr r0, [r4, r1]\n    mov r1, #0x2a\n    bl NewString_ReadMsgData\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    mov r0, #0x3d\n    mov r1, #0x30\n    bl Heap_Alloc\n    ldr r1, _0223BCCC ; =0x000011C4\n    mov r2, #0x30\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    mov r0, #0\n    bl MIi_CpuClearFast\n    mov r0, #0x3d\n    bl ov70_0223F684\n    ldr r1, _0223BCCC ; =0x000011C4\n    ldr r2, [r4, r1]\n    add r1, #0x70\n    str r0, [r2, #0x14]\n    add r0, r4, r1\n    bl ov70_0223F948\n    pop {r4, pc}\n    _0223BCC8: .word 0x00000BBC\n    _0223BCCC: .word 0x000011C4"
    );
    #endif
}

void ov70_0223BCD0(void) {
    /* Original at 0x0223BCD0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223BCFC ; =0x000011C4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x14]\n    bl Heap_Free\n    ldr r0, _0223BCFC ; =0x000011C4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _0223BD00 ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _0223BCFC: .word 0x000011C4\n    _0223BD00: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223BD04(void) {
    /* Original at 0x0223BD04 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r1, [r4, #0x24]\n    cmp r1, #0xf\n    ldr r1, _0223BD78 ; =0x00000F0F\n    bne _0223BD4E\n    mov r2, #0\n    str r1, [sp]\n    mov r1, #0x20\n    add r3, r2, #0\n    bl ov70_0223CAC4\n    ldr r0, _0223BD7C ; =0x0400006C\n    bl GXx_GetMasterBrightness_\n    mov r1, #0xf\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223BD48\n    mov r0, #0x10\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0x1e\n    str r0, [r4, #0x2c]\n    b _0223BD64\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    b _0223BD64\n    str r1, [sp]\n    mov r1, #8\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223BD78: .word 0x00000F0F\n    _0223BD7C: .word 0x0400006C"
    );
    #endif
}

void ov70_0223BD80(void) {
    /* Original at 0x0223BD80 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0223BD88 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0223BD8C ; =ov70_022456C8\n    bx r3\n    nop\n    _0223BD88: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0223BD8C: .word ov70_022456C8"
    );
    #endif
}

void ov70_0223BD90(void) {
    /* Original at 0x0223BD90 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    cmp r1, #6\n    bhi _0223BE70\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223BDA6: ; jump table\n    mov r0, #3\n    str r0, [r4, #0x2c]\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    ldr r0, _0223BE78 ; =0x00000B8A\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    beq _0223BDF0\n    mov r1, #0x12\n    bl GetMonBaseStat\n    ldr r1, _0223BE7C ; =0x000011C4\n    ldr r2, [r4, r1]\n    str r0, [r2, #0x20]\n    ldr r1, [r4, r1]\n    ldr r0, _0223BE78 ; =0x00000B8A\n    ldr r1, [r1, #0x20]\n    add r0, r4, r0\n    bl ov70_0223EDE4\n    cmp r0, #0\n    beq _0223BDF0\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #6\n    str r0, [r4, #0x2c]\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #0xc\n    str r0, [r4, #0x2c]\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0223BE70\n    mov r0, #0x1d\n    str r0, [r4, #0x2c]\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    mov r0, #0xf\n    add sp, #0xc\n    str r0, [r4, #0x2c]\n    pop {r3, r4, pc}\n    ldr r1, _0223BE80 ; =0x00000F0F\n    mov r2, #1\n    str r1, [sp]\n    mov r1, #0xf\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #0x17\n    bl ov70_02238D84\n    ldr r0, _0223BE74 ; =0x000005DC\n    bl PlaySE\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223BE74: .word 0x000005DC\n    _0223BE78: .word 0x00000B8A\n    _0223BE7C: .word 0x000011C4\n    _0223BE80: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223BE84(void) {
    /* Original at 0x0223BE84 */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_0223BD80\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _0223BEA8\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_0223C420\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_0223BD90\n    b _0223BEEE\n    add r0, r5, #0\n    bl ov70_0223C304\n    ldr r0, _0223BEF4 ; =gSystem\n    mov r2, #1\n    ldr r1, [r0, #0x48]\n    add r0, r1, #0\n    tst r0, r2\n    beq _0223BECA\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r1, r0, #0\n    add r0, r5, #0\n    bl ov70_0223BD90\n    b _0223BEEE\n    mov r0, #2\n    tst r0, r1\n    beq _0223BEEE\n    ldr r0, _0223BEF8 ; =0x00000F0F\n    mov r1, #0xf\n    str r0, [sp]\n    add r0, r5, #0\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r5, #0\n    mov r1, #0x15\n    mov r2, #0x17\n    bl ov70_02238D84\n    ldr r0, _0223BEFC ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    nop\n    _0223BEF4: .word gSystem\n    _0223BEF8: .word 0x00000F0F\n    _0223BEFC: .word 0x000005DC"
    );
    #endif
}

void ov70_0223BF00(void) {
    /* Original at 0x0223BF00 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r3, _0223BF94 ; =0x00000B8A\n    add r4, r0, #0\n    ldrsh r1, [r4, r3]\n    cmp r1, #0\n    bne _0223BF2E\n    ldr r1, _0223BF98 ; =0x00000F0F\n    mov r2, #1\n    str r1, [sp]\n    mov r1, #0xc\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _0223BF9C ; =0x000005F3\n    bl PlaySE\n    b _0223BF8C\n    ldr r2, _0223BFA0 ; =0x000012CC\n    add r1, r3, #6\n    add r0, r4, r3\n    add r3, #0xe\n    ldr r2, [r4, r2]\n    ldr r3, [r4, r3]\n    add r1, r4, r1\n    bl ov70_0223CC68\n    cmp r0, #0\n    beq _0223BF66\n    ldr r0, _0223BF98 ; =0x00000F0F\n    mov r1, #0x21\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _0223BF9C ; =0x000005F3\n    bl PlaySE\n    b _0223BF8C\n    ldr r0, _0223BFA4 ; =0x000005FE\n    bl PlaySE\n    ldr r0, _0223BF98 ; =0x00000F0F\n    mov r1, #0xd\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #0x10\n    bl ov70_02238D84\n    add r0, r4, #0\n    bl ov70_02241234\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223BF94: .word 0x00000B8A\n    _0223BF98: .word 0x00000F0F\n    _0223BF9C: .word 0x000005F3\n    _0223BFA0: .word 0x000012CC\n    _0223BFA4: .word 0x000005FE"
    );
    #endif
}

void ov70_0223BFA8(void) {
    /* Original at 0x0223BFA8 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x2c\n    cmp r1, #1\n    ldr r0, [r0]\n    bne _0223BFBA\n    ldr r0, [r0]\n    bl sub_0202DB90\n    b _0223BFC0\n    ldr r0, [r0]\n    bl sub_0202DB80\n    lsr r1, r0, #0x18\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x1c]\n    lsr r1, r0, #0x10\n    lsl r1, r1, #0x18\n    lsr r1, r1, #0x18\n    str r1, [sp, #0x20]\n    lsr r1, r0, #8\n    lsl r1, r1, #0x18\n    lsl r0, r0, #0x18\n    lsr r1, r1, #0x18\n    lsr r0, r0, #0x18\n    str r1, [sp, #0x24]\n    str r0, [sp, #0x28]\n    add r0, sp, #0xc\n    add r1, sp, #0\n    bl ov00_021ECB94\n    add r0, sp, #0xc\n    bl RTC_ConvertDateToDay\n    add r4, r0, #0\n    add r0, sp, #0x1c\n    bl RTC_ConvertDateToDay\n    sub r0, r4, r0\n    bmi _0223C002\n    cmp r0, #3\n    bge _0223C002\n    add sp, #0x2c\n    mov r0, #1\n    pop {r3, r4, pc}\n    mov r0, #0\n    add sp, #0x2c\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_0223C008(void) {
    /* Original at 0x0223C008 */
    /* Requires manual decompilation - 88 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    mov r1, #1\n    add r5, r0, #0\n    mov r4, #3\n    bl ov70_0223BFA8\n    cmp r0, #0\n    beq _0223C01C\n    add r4, r4, #2\n    add r0, r5, #0\n    mov r1, #0\n    bl ov70_0223BFA8\n    cmp r0, #0\n    beq _0223C02A\n    add r4, r4, #2\n    ldr r0, _0223C0BC ; =0x000012CC\n    ldr r0, [r5, r0]\n    cmp r0, #0\n    bne _0223C044\n    ldr r0, _0223C0C0 ; =0x00000B8A\n    mov r2, #0x26\n    lsl r2, r2, #4\n    add r0, r5, r0\n    add r1, r4, #0\n    add r2, r5, r2\n    bl ov70_02238130\n    b _0223C082\n    add r0, sp, #0\n    mov r1, #0\n    mov r2, #8\n    bl MI_CpuFill8\n    ldr r1, _0223C0C0 ; =0x00000B8A\n    add r0, sp, #0\n    ldrsh r2, [r5, r1]\n    strh r2, [r0]\n    add r2, r1, #2\n    ldrsb r2, [r5, r2]\n    strb r2, [r0, #2]\n    add r2, r1, #3\n    ldrsb r2, [r5, r2]\n    strb r2, [r0, #3]\n    add r2, r1, #4\n    ldrsb r2, [r5, r2]\n    add r1, r1, #5\n    strb r2, [r0, #4]\n    ldrsb r1, [r5, r1]\n    strb r1, [r0, #5]\n    ldr r1, _0223C0BC ; =0x000012CC\n    strb r4, [r0, #6]\n    ldr r1, [r5, r1]\n    strb r1, [r0, #7]\n    mov r1, #0x26\n    lsl r1, r1, #4\n    add r0, sp, #0\n    add r1, r5, r1\n    bl ov70_022381A4\n    ldr r1, _0223C0C0 ; =0x00000B8A\n    ldrh r2, [r5, r1]\n    add r0, r1, #6\n    strh r2, [r5, r0]\n    add r0, r1, #2\n    ldrh r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #8\n    strh r2, [r5, r0]\n    add r0, r1, #4\n    ldrh r2, [r5, r0]\n    add r0, r1, #0\n    add r0, #0xa\n    strh r2, [r5, r0]\n    ldr r2, _0223C0BC ; =0x000012CC\n    add r1, #0xe\n    ldr r0, [r5, r2]\n    sub r2, #0xee\n    str r0, [r5, r1]\n    ldr r0, _0223C0C4 ; =0x00001604\n    mov r1, #0\n    str r1, [r5, r0]\n    mov r0, #0x11\n    str r0, [r5, #0x2c]\n    strh r1, [r5, r2]\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223C0BC: .word 0x000012CC\n    _0223C0C0: .word 0x00000B8A\n    _0223C0C4: .word 0x00001604"
    );
    #endif
}

void ov70_0223C0C8(void) {
    /* Original at 0x0223C0C8 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0223C176\n    bl ov70_02237F58\n    add r5, r0, #0\n    ldr r0, _0223C190 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r5, #0\n    add r0, #0xf\n    cmp r0, #0x16\n    bhi _0223C18C\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0223C0F4: ; jump table\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    str r5, [r4, r0]\n    ldr r0, _0223C194 ; =0x000005FE\n    bl StopSE\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r2, #1\n    bl ov70_02241184\n    cmp r5, #0\n    ldr r0, [r4, #4]\n    ldr r1, _0223C198 ; =0x000010D8\n    bne _0223C150\n    mov r2, #0xba\n    lsl r2, r2, #4\n    ldr r2, [r4, r2]\n    add r1, r4, r1\n    mov r3, #0\n    bl ov70_0223CC04\n    b _0223C15E\n    mov r2, #0xba\n    lsl r2, r2, #4\n    ldr r2, [r4, r2]\n    add r1, r4, r1\n    mov r3, #1\n    bl ov70_0223CC04\n    mov r0, #0x12\n    str r0, [r4, #0x2c]\n    b _0223C18C\n    mov r0, #0x1b\n    str r0, [r4, #0x2c]\n    b _0223C18C\n    bl sub_020399EC\n    b _0223C18C\n    mov r0, #0x14\n    str r0, [r4, #0x2c]\n    b _0223C18C\n    ldr r0, _0223C190 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _0223C18C\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _0223C190: .word 0x00001604\n    _0223C194: .word 0x000005FE\n    _0223C198: .word 0x000010D8"
    );
    #endif
}

void ov70_0223C19C(void) {
    /* Original at 0x0223C19C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0x4a\n    add r4, r0, #0\n    lsl r1, r1, #2\n    ldr r1, [r4, r1]\n    cmp r1, #0\n    ldr r1, _0223C1F0 ; =0x00000F0F\n    bne _0223C1CC\n    str r1, [sp]\n    mov r1, #0xe\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _0223C1F4 ; =0x000005F3\n    bl PlaySE\n    b _0223C1EA\n    str r1, [sp]\n    mov r1, #0x1e\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #0x13\n    bl ov70_02238D84\n    mov r0, #0x47\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C1F0: .word 0x00000F0F\n    _0223C1F4: .word 0x000005F3"
    );
    #endif
}

void ov70_0223C1F8(void) {
    /* Original at 0x0223C1F8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0x47\n    add r4, r0, #0\n    lsl r1, r1, #6\n    ldr r2, [r4, r1]\n    add r2, r2, #1\n    str r2, [r4, r1]\n    ldr r1, [r4, r1]\n    cmp r1, #0x2d\n    ble _0223C22C\n    ldr r1, _0223C234 ; =0x00000F0F\n    mov r2, #1\n    str r1, [sp]\n    mov r1, #0x20\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _0223C238 ; =0x000011DE\n    mov r1, #1\n    strh r1, [r4, r0]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223C234: .word 0x00000F0F\n    _0223C238: .word 0x000011DE"
    );
    #endif
}

void ov70_0223C23C(void) {
    /* Original at 0x0223C23C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0xb9\n    add r4, r0, #0\n    mov r3, #0\n    lsl r1, r1, #4\n    strh r3, [r4, r1]\n    ldr r1, _0223C26C ; =0x00000F0F\n    mov r2, #1\n    str r1, [sp]\n    mov r1, #0x26\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _0223C270 ; =0x000005F3\n    bl PlaySE\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C26C: .word 0x00000F0F\n    _0223C270: .word 0x000005F3"
    );
    #endif
}

void ov70_0223C274(void) {
    /* Original at 0x0223C274 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C2A8 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0x99\n    mov r2, #4\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x16\n    mov r2, #0x1c\n    bl ov70_02238D84\n    mov r0, #0x47\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    ldr r0, _0223C2AC ; =0x000005F3\n    bl PlaySE\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223C2A8: .word 0x00000F0F\n    _0223C2AC: .word 0x000005F3"
    );
    #endif
}

void ov70_0223C2B0(void) {
    /* Original at 0x0223C2B0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C2E4 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0x9e\n    mov r2, #4\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x16\n    mov r2, #2\n    bl ov70_02238D84\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    ldr r0, _0223C2E8 ; =0x000005F3\n    bl PlaySE\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C2E4: .word 0x00000F0F\n    _0223C2E8: .word 0x000005F3"
    );
    #endif
}

void ov70_0223C2EC(void) {
    /* Original at 0x0223C2EC */
    /* Requires manual decompilation - 11 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223C300 ; =0x000011C4\n    ldr r1, [r0, r1]\n    ldr r0, [r1, #0x24]\n    cmp r0, #0\n    bne _0223C2FA\n    ldr r0, [r1, #0x28]\n    bx lr\n    ldr r0, [r1, #0x2c]\n    add r0, r0, #4\n    bx lr\n    _0223C300: .word 0x000011C4"
    );
    #endif
}

void ov70_0223C304(void) {
    /* Original at 0x0223C304 */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, _0223C404 ; =gSystem\n    mov r1, #0x40\n    ldr r0, [r0, #0x48]\n    tst r1, r0\n    beq _0223C346\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r1, [r5, r0]\n    ldr r0, [r1, #0x24]\n    cmp r0, #0\n    bne _0223C32E\n    ldr r0, [r1, #0x28]\n    cmp r0, #0\n    ble _0223C3BE\n    sub r0, r0, #1\n    str r0, [r1, #0x28]\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    b _0223C3BE\n    ldr r0, [r1, #0x2c]\n    cmp r0, #0\n    ble _0223C3BE\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r1, [r5, r0]\n    ldr r0, [r1, #0x2c]\n    sub r0, r0, #1\n    str r0, [r1, #0x2c]\n    b _0223C3BE\n    mov r1, #0x80\n    tst r1, r0\n    beq _0223C380\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r1, [r5, r0]\n    ldr r0, [r1, #0x24]\n    cmp r0, #0\n    bne _0223C368\n    ldr r0, [r1, #0x28]\n    cmp r0, #3\n    bge _0223C3BE\n    add r0, r0, #1\n    str r0, [r1, #0x28]\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    b _0223C3BE\n    ldr r0, [r1, #0x2c]\n    cmp r0, #2\n    bge _0223C3BE\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r1, [r5, r0]\n    ldr r0, [r1, #0x2c]\n    add r0, r0, #1\n    str r0, [r1, #0x2c]\n    b _0223C3BE\n    mov r1, #0x10\n    tst r1, r0\n    beq _0223C3A0\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r0, [r5, r0]\n    ldr r0, [r0, #0x24]\n    cmp r0, #1\n    beq _0223C396\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223C408 ; =0x000011C4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    str r1, [r0, #0x24]\n    b _0223C3BE\n    mov r1, #0x20\n    tst r0, r1\n    beq _0223C3BE\n    ldr r0, _0223C408 ; =0x000011C4\n    ldr r0, [r5, r0]\n    ldr r0, [r0, #0x24]\n    cmp r0, #0\n    beq _0223C3B6\n    ldr r0, _0223C40C ; =0x000005DC\n    bl PlaySE\n    ldr r0, _0223C408 ; =0x000011C4\n    mov r1, #0\n    ldr r0, [r5, r0]\n    str r1, [r0, #0x24]\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r2, r0, #0\n    ldr r0, _0223C410 ; =0x00000DCC\n    mov r3, #6\n    add r6, r4, #0\n    mul r6, r3\n    ldr r1, _0223C414 ; =ov70_022464FE\n    mul r3, r2\n    ldr r2, _0223C418 ; =ov70_02246500\n    ldrh r1, [r1, r6]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, r0]\n    bl ov70_02238F9C\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r3, r0, #0\n    ldr r0, _0223C410 ; =0x00000DCC\n    mov r1, #6\n    add r2, r3, #0\n    mul r2, r1\n    ldr r1, _0223C41C ; =ov70_02246502\n    ldr r0, [r5, r0]\n    ldrh r1, [r1, r2]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}\n    nop\n    _0223C404: .word gSystem\n    _0223C408: .word 0x000011C4\n    _0223C40C: .word 0x000005DC\n    _0223C410: .word 0x00000DCC\n    _0223C414: .word ov70_022464FE\n    _0223C418: .word ov70_02246500\n    _0223C41C: .word ov70_02246502"
    );
    #endif
}

void ov70_0223C420(void) {
    /* Original at 0x0223C420 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    lsl r0, r1, #1\n    ldr r1, _0223C494 ; =ov70_022464F0\n    ldrb r1, [r1, r0]\n    cmp r1, #0\n    ldr r1, _0223C498 ; =0x000011C4\n    bne _0223C440\n    ldr r2, [r5, r1]\n    mov r3, #0\n    str r3, [r2, #0x24]\n    ldr r2, _0223C49C ; =ov70_022464F1\n    ldrb r2, [r2, r0]\n    ldr r0, [r5, r1]\n    str r2, [r0, #0x28]\n    b _0223C44E\n    ldr r2, [r5, r1]\n    mov r3, #1\n    str r3, [r2, #0x24]\n    ldr r2, _0223C49C ; =ov70_022464F1\n    ldrb r2, [r2, r0]\n    ldr r0, [r5, r1]\n    str r2, [r0, #0x2c]\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r4, r0, #0\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r2, r0, #0\n    ldr r0, _0223C4A0 ; =0x00000DCC\n    mov r3, #6\n    add r6, r4, #0\n    mul r6, r3\n    ldr r1, _0223C4A4 ; =ov70_022464FE\n    mul r3, r2\n    ldr r2, _0223C4A8 ; =ov70_02246500\n    ldrh r1, [r1, r6]\n    ldrh r2, [r2, r3]\n    ldr r0, [r5, r0]\n    bl ov70_02238F9C\n    add r0, r5, #0\n    bl ov70_0223C2EC\n    add r3, r0, #0\n    ldr r0, _0223C4A0 ; =0x00000DCC\n    mov r1, #6\n    add r2, r3, #0\n    mul r2, r1\n    ldr r1, _0223C4AC ; =ov70_02246502\n    ldr r0, [r5, r0]\n    ldrh r1, [r1, r2]\n    bl Sprite_SetAnimCtrlSeq\n    pop {r4, r5, r6, pc}\n    nop\n    _0223C494: .word ov70_022464F0\n    _0223C498: .word 0x000011C4\n    _0223C49C: .word ov70_022464F1\n    _0223C4A0: .word 0x00000DCC\n    _0223C4A4: .word ov70_022464FE\n    _0223C4A8: .word ov70_02246500\n    _0223C4AC: .word ov70_02246502"
    );
    #endif
}

void ov70_0223C4B0(void) {
    /* Original at 0x0223C4B0 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223C4E0 ; =0x00000F14\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    bne _0223C4D6\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223C4E0: .word 0x00000F14"
    );
    #endif
}

void ov70_0223C4E4(void) {
    /* Original at 0x0223C4E4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C508 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #9\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #4\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C508: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223C50C(void) {
    /* Original at 0x0223C50C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223C528 ; =0x000011A8\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #9\n    bl ov70_0223CD28\n    mov r0, #5\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223C528: .word 0x000011A8"
    );
    #endif
}

void ov70_0223C52C(void) {
    /* Original at 0x0223C52C */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223C5FC ; =0x000011A8\n    ldr r0, [r4, r0]\n    bl ov70_02242144\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _0223C54C\n    add r0, r0, #1\n    cmp r5, r0\n    beq _0223C5F6\n    b _0223C56E\n    mov r0, #0\n    bl ov70_0223CD28\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r0, _0223C600 ; =0x000011C4\n    ldr r3, [r4, r0]\n    add r0, #0x70\n    ldrh r2, [r3, #6]\n    ldrh r1, [r3, #4]\n    add r0, r4, r0\n    add r1, r2, r1\n    ldrh r2, [r3, #0xa]\n    ldrh r3, [r3, #8]\n    bl ov70_0223F960\n    b _0223C5F6\n    mov r0, #0\n    bl ov70_0223CD28\n    ldr r0, _0223C604 ; =0x00000B8A\n    mov r1, #0\n    strh r5, [r4, r0]\n    ldr r0, _0223C608 ; =0x00001068\n    str r1, [r4, #0x2c]\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    ldr r0, _0223C60C ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r1, _0223C610 ; =0x00000BA4\n    ldr r0, _0223C608 ; =0x00001068\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    add r2, r5, #0\n    bl ov70_0223F1D8\n    add r0, r5, #0\n    mov r1, #0x12\n    bl GetMonBaseStat\n    ldr r1, _0223C600 ; =0x000011C4\n    ldr r2, [r4, r1]\n    str r0, [r2, #0x20]\n    ldr r3, [r4, r1]\n    add r1, #0x70\n    add r0, r4, r1\n    ldrh r2, [r3, #6]\n    ldrh r1, [r3, #4]\n    add r1, r2, r1\n    ldrh r2, [r3, #0xa]\n    ldrh r3, [r3, #8]\n    bl ov70_0223F960\n    ldr r1, _0223C600 ; =0x000011C4\n    ldr r0, _0223C604 ; =0x00000B8A\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    ldr r1, [r1, #0x20]\n    bl ov70_0223EDE4\n    cmp r0, #0\n    beq _0223C5F6\n    ldr r0, _0223C614 ; =0x00001088\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223C60C ; =0x00010200\n    mov r2, #0xba\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    ldr r1, [r4, r2]\n    sub r2, #0x14\n    ldr r0, _0223C614 ; =0x00001088\n    ldrsb r2, [r4, r2]\n    add r0, r4, r0\n    mov r3, #1\n    bl ov70_0223F2BC\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223C5FC: .word 0x000011A8\n    _0223C600: .word 0x000011C4\n    _0223C604: .word 0x00000B8A\n    _0223C608: .word 0x00001068\n    _0223C60C: .word 0x00010200\n    _0223C610: .word 0x00000BA4\n    _0223C614: .word 0x00001088"
    );
    #endif
}

void ov70_0223C618(void) {
    /* Original at 0x0223C618 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C63C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #7\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C63C: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223C640(void) {
    /* Original at 0x0223C640 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223C65C ; =0x000011A8\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #9\n    bl ov70_0223CD28\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223C65C: .word 0x000011A8"
    );
    #endif
}

void ov70_0223C660(void) {
    /* Original at 0x0223C660 */
    /* Requires manual decompilation - 61 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223C6DC ; =0x000011A8\n    ldr r0, [r5, r0]\n    bl ov70_02242144\n    add r4, r0, #0\n    cmp r4, #2\n    bhi _0223C682\n    cmp r4, #0\n    beq _0223C6A0\n    cmp r4, #1\n    beq _0223C6A0\n    cmp r4, #2\n    beq _0223C6A0\n    b _0223C6D6\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    bne _0223C6D6\n    mov r0, #0\n    bl ov70_0223CD28\n    ldr r0, _0223C6E0 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    b _0223C6D6\n    mov r0, #0\n    bl ov70_0223CD28\n    ldr r0, _0223C6E4 ; =0x00000B8C\n    add r1, r4, #1\n    strb r1, [r5, r0]\n    ldr r0, _0223C6E8 ; =0x00001088\n    mov r1, #0\n    add r0, r5, r0\n    str r1, [r5, #0x2c]\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223C6EC ; =0x00010200\n    mov r2, #0xba\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    ldr r1, [r5, r2]\n    sub r2, #0x14\n    ldr r0, _0223C6E8 ; =0x00001088\n    ldrsb r2, [r5, r2]\n    add r0, r5, r0\n    mov r3, #1\n    bl ov70_0223F2BC\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223C6DC: .word 0x000011A8\n    _0223C6E0: .word 0x00000F18\n    _0223C6E4: .word 0x00000B8C\n    _0223C6E8: .word 0x00001088\n    _0223C6EC: .word 0x00010200"
    );
    #endif
}

void ov70_0223C6F0(void) {
    /* Original at 0x0223C6F0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C714 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xb\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #0xa\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C714: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223C718(void) {
    /* Original at 0x0223C718 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x46\n    ldr r1, _0223C73C ; =0x0000FFFF\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, _0223C740 ; =0x000011A8\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #9\n    bl ov70_0223CD28\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223C73C: .word 0x0000FFFF\n    _0223C740: .word 0x000011A8"
    );
    #endif
}

void ov70_0223C744(void) {
    /* Original at 0x0223C744 */
    /* Requires manual decompilation - 54 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223C7B4 ; =0x000011A8\n    ldr r0, [r5, r0]\n    bl ov70_02242144\n    add r4, r0, #0\n    cmp r4, #0xb\n    beq _0223C768\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _0223C768\n    add r0, r0, #1\n    cmp r4, r0\n    beq _0223C7AE\n    b _0223C774\n    mov r0, #0\n    bl ov70_0223CD28\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    b _0223C7AE\n    mov r0, #0\n    bl ov70_0223CD28\n    ldr r0, _0223C7B8 ; =0x00000B8A\n    add r1, r4, #0\n    add r0, r5, r0\n    mov r2, #1\n    bl ov70_0223F828\n    ldr r0, _0223C7BC ; =0x000010A8\n    mov r1, #0\n    add r0, r5, r0\n    str r1, [r5, #0x2c]\n    bl FillWindowPixelBuffer\n    mov r3, #0\n    mov r1, #0xba\n    ldr r0, _0223C7C0 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    ldr r0, _0223C7BC ; =0x000010A8\n    lsl r1, r1, #4\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    add r2, r4, #0\n    bl ov70_0223F370\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    _0223C7B4: .word 0x000011A8\n    _0223C7B8: .word 0x00000B8A\n    _0223C7BC: .word 0x000010A8\n    _0223C7C0: .word 0x00010200"
    );
    #endif
}

void ov70_0223C7C4(void) {
    /* Original at 0x0223C7C4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C7E8 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xb0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #0xd\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C7E8: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223C7EC(void) {
    /* Original at 0x0223C7EC */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x46\n    ldr r1, _0223C810 ; =0x0000FFFF\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, _0223C814 ; =0x000011A8\n    mov r1, #3\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #9\n    bl ov70_0223CD28\n    mov r0, #0xe\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223C810: .word 0x0000FFFF\n    _0223C814: .word 0x000011A8"
    );
    #endif
}

void ov70_0223C818(void) {
    /* Original at 0x0223C818 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223C898 ; =0x000011A8\n    ldr r0, [r5, r0]\n    bl ov70_02242144\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _0223C890\n    sub r0, r0, #1\n    cmp r4, r0\n    beq _0223C840\n    ldr r0, _0223C89C ; =ov70_0224590C\n    ldr r0, [r0]\n    add r0, r0, #1\n    cmp r4, r0\n    bne _0223C856\n    mov r0, #0\n    bl ov70_0223CD28\n    ldr r0, _0223C8A0 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    b _0223C890\n    mov r0, #0\n    bl ov70_0223CD28\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_0223F8A8\n    ldr r0, _0223C8A4 ; =0x00001188\n    mov r1, #0\n    add r0, r5, r0\n    str r1, [r5, #0x2c]\n    bl FillWindowPixelBuffer\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223C8A8 ; =0x00010200\n    mov r2, #0xbb\n    str r0, [sp, #8]\n    lsl r2, r2, #4\n    ldr r3, _0223C8AC ; =0x000012CC\n    ldr r0, _0223C8A4 ; =0x00001188\n    ldr r1, [r5, r2]\n    sub r2, #0x10\n    ldr r2, [r5, r2]\n    ldr r3, [r5, r3]\n    add r0, r5, r0\n    bl ov70_0223F244\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223C898: .word 0x000011A8\n    _0223C89C: .word ov70_0224590C\n    _0223C8A0: .word 0x00000F18\n    _0223C8A4: .word 0x00001188\n    _0223C8A8: .word 0x00010200\n    _0223C8AC: .word 0x000012CC"
    );
    #endif
}

void ov70_0223C8B0(void) {
    /* Original at 0x0223C8B0 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    mov r2, #0x12\n    ldr r0, [r4, #4]\n    mov r1, #0xc\n    lsl r2, r2, #4\n    mov r3, #3\n    bl ov70_02238C14\n    ldr r1, _0223C8D8 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #0x18\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223C8D8: .word 0x000011C8"
    );
    #endif
}

void ov70_0223C8DC(void) {
    /* Original at 0x0223C8DC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223C90E\n    ldr r0, _0223C924 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    add r0, r4, #0\n    bl ov70_02241234\n    mov r0, #0x4a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    b _0223C91E\n    cmp r0, #2\n    bne _0223C91E\n    ldr r0, _0223C924 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223C924: .word 0x000011C8"
    );
    #endif
}

void ov70_0223C928(void) {
    ((u32*)r0)[0x2c] = 1;
}

void ov70_0223C930(void) {
    /* Original at 0x0223C930 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223C954 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0x98\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223CAC4\n    add r0, r4, #0\n    mov r1, #0x15\n    mov r2, #1\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223C954: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223C958(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_0223C978(void) {
    /* Original at 0x0223C978 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223C9A6\n    mov r0, #0x47\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    cmp r1, #0x2d\n    ble _0223C9A6\n    mov r1, #0\n    str r1, [r4, r0]\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223C9AC(void) {
    /* Original at 0x0223C9AC */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223CA0C ; =0x00000F14\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223CA06\n    ldr r2, _0223CA10 ; =0x04000304\n    ldrh r1, [r2]\n    lsr r0, r2, #0xb\n    orr r0, r1\n    strh r0, [r2]\n    mov r1, #0xf\n    ldr r0, _0223CA0C ; =0x00000F14\n    mvn r1, r1\n    str r1, [r4, r0]\n    ldr r1, _0223CA14 ; =0x000011DE\n    ldrh r1, [r4, r1]\n    cmp r1, #0\n    beq _0223C9FA\n    sub r0, #0x2c\n    ldr r0, [r4, r0]\n    mov r1, #0x10\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0x10\n    bl ov70_02238E50\n    mov r0, #0x4b\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223CA0C: .word 0x00000F14\n    _0223CA10: .word 0x04000304\n    _0223CA14: .word 0x000011DE"
    );
    #endif
}

void ov70_0223CA18(void) {
    /* Original at 0x0223CA18 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223CA3C ; =0x00000F14\n    ldr r1, [r4, r0]\n    sub r1, r1, #1\n    str r1, [r4, r0]\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223CA36\n    ldr r0, _0223CA3C ; =0x00000F14\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223CA3C: .word 0x00000F14"
    );
    #endif
}

void ov70_0223CA40(void) {
    /* Original at 0x0223CA40 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    ldr r0, _0223CAB4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r1, r0\n    beq _0223CA68\n    mov r1, #0x10\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _0223CAAC\n    mov r0, #0x4a\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl ov70_02241164\n    add r4, r0, #0\n    ldr r0, _0223CAB8 ; =0x000011DE\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    beq _0223CAAC\n    cmp r4, #0\n    blt _0223CAAC\n    add r0, r4, #1\n    lsl r0, r0, #2\n    add r1, r5, r0\n    ldr r0, _0223CABC ; =0x00000EE4\n    ldr r0, [r1, r0]\n    lsl r1, r4, #2\n    add r1, #0x10\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #0\n    bl ov70_02238E50\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    str r4, [r5, r0]\n    ldr r0, _0223CAC0 ; =0x000005DC\n    bl PlaySE\n    mov r0, #3\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223CAB4: .word gSystem\n    _0223CAB8: .word 0x000011DE\n    _0223CABC: .word 0x00000EE4\n    _0223CAC0: .word 0x000005DC"
    );
    #endif
}

void ov70_0223CAC4(void) {
    /* Original at 0x0223CAC4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    mov r2, #0xba\n    add r5, r0, #0\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x1c\n    ldr r2, [r5, r2]\n    bl ReadMsgDataIntoString\n    ldr r0, _0223CB14 ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223CB14 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _0223CB14 ; =0x00000F18\n    ldr r2, _0223CB18 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add sp, #0xc\n    pop {r4, r5, pc}\n    nop\n    _0223CB14: .word 0x00000F18\n    _0223CB18: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223CB1C(void) {
    /* Original at 0x0223CB1C */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r4, r2, #0\n    add r5, r0, #0\n    add r7, r1, #0\n    add r0, r4, #0\n    mov r1, #0x3d\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0x3f\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x20\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0x41\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x40\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0xab\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r7, #0\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0x43\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r0, #0x60\n    add r1, r6, #0\n    add r3, r2, #0\n    bl ov70_022450B8\n    add r0, r6, #0\n    bl String_Delete\n    add r0, r4, #0\n    mov r1, #0xee\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, _0223CC00 ; =0x000F0200\n    str r2, [sp]\n    add r5, #0x70\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_022450B8\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223CC00: .word 0x000F0200"
    );
    #endif
}

void ov70_0223CC04(void) {
    /* Original at 0x0223CC04 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r7, r1, #0\n    add r6, r2, #0\n    ldr r4, _0223CC60 ; =0x00010200\n    cmp r3, #0\n    beq _0223CC1A\n    ldr r4, _0223CC64 ; =0x000F0200\n    mov r1, #0\n    b _0223CC1C\n    mov r1, #2\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #4\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0x12\n    mov r3, #2\n    bl BgTilemapRectChangePalette\n    add r0, r5, #0\n    mov r1, #1\n    bl BgCommitTilemapBufferToVram\n    add r0, r6, #0\n    mov r1, #0x45\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    mov r2, #0\n    str r2, [sp]\n    add r0, r7, #0\n    add r1, r5, #0\n    add r3, r2, #0\n    str r4, [sp, #4]\n    bl ov70_022450B8\n    add r0, r5, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _0223CC60: .word 0x00010200\n    _0223CC64: .word 0x000F0200"
    );
    #endif
}

void ov70_0223CC68(void) {
    /* Original at 0x0223CC68 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5}\n    mov r4, #0\n    ldrsh r5, [r0, r4]\n    ldrsh r4, [r1, r4]\n    cmp r5, r4\n    bne _0223CC9C\n    mov r4, #2\n    ldrsb r5, [r0, r4]\n    ldrsb r4, [r1, r4]\n    cmp r5, r4\n    bne _0223CC9C\n    mov r4, #3\n    ldrsb r5, [r0, r4]\n    ldrsb r4, [r1, r4]\n    cmp r5, r4\n    bne _0223CC9C\n    mov r4, #4\n    ldrsb r5, [r0, r4]\n    ldrsb r0, [r1, r4]\n    cmp r5, r0\n    bne _0223CC9C\n    cmp r2, r3\n    bne _0223CC9C\n    mov r0, #1\n    pop {r4, r5}\n    bx lr\n    mov r0, #0\n    pop {r4, r5}\n    bx lr"
    );
    #endif
}

void ov70_0223CCA4(void) {
    /* Original at 0x0223CCA4 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r3, _0223CD24 ; =0x00000F14\n    add r4, r0, #0\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #0\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #1\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #2\n    mov r2, #3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    mov r1, #3\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    add r2, r1, #0\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #4\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #5\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #6\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    ldr r3, _0223CD24 ; =0x00000F14\n    ldr r0, [r4, #4]\n    ldr r3, [r4, r3]\n    mov r1, #7\n    mov r2, #3\n    neg r3, r3\n    bl BgSetPosTextAndCommit\n    pop {r4, pc}\n    nop\n    _0223CD24: .word 0x00000F14"
    );
    #endif
}

void ov70_0223CD28(void) {
    G2x_SetBlendBrightness_(0, 0xa);
}

void ov70_0223CD44(void) {
    /* Original at 0x0223CD44 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_0223D3BC\n    ldr r2, _0223CDCC ; =0x04000304\n    ldr r0, _0223CDD0 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    ldr r0, [r4, #4]\n    bl ov70_0223CE44\n    add r0, r4, #0\n    bl ov70_0223CF74\n    add r0, r4, #0\n    bl ov70_0223D26C\n    add r0, r4, #0\n    bl ov70_0223D058\n    add r0, r4, #0\n    bl ov70_02241358\n    ldr r0, _0223CDD4 ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    cmp r0, #0\n    bne _0223CD98\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    b _0223CDAE\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r1, #0x12\n    lsl r1, r1, #4\n    ldrh r1, [r4, r1]\n    add r0, r4, #0\n    bl ov70_0223E264\n    add r0, r4, #0\n    bl ov70_02245124\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223CDCC: .word 0x04000304\n    _0223CDD0: .word 0xFFFF7FFF\n    _0223CDD4: .word 0x0400106C"
    );
    #endif
}

void ov70_0223CDD8(void) {
    /* Original at 0x0223CDD8 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238E44\n    bl sub_0203A930\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _0223CDF4 ; =ov70_022465A8\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    nop\n    _0223CDF4: .word ov70_022465A8"
    );
    #endif
}

void ov70_0223CDF8(void) {
    /* Original at 0x0223CDF8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0203A914\n    ldr r0, _0223CE40 ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    cmp r0, #0\n    beq _0223CE10\n    add r0, r4, #0\n    bl ov70_02241380\n    add r0, r4, #0\n    bl ov70_0223D208\n    add r0, r4, #0\n    bl ov70_0223D414\n    add r0, r4, #0\n    bl ov70_0223D378\n    ldr r0, [r4, #4]\n    bl ov70_0223CF48\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223CE40: .word 0x0400106C"
    );
    #endif
}

void ov70_0223CE44(void) {
    /* Original at 0x0223CE44 */
    /* Requires manual decompilation - 111 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _0223CF34 ; =ov70_022456F0\n    add r3, sp, #0x70\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    mov r0, #0x16\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    ldr r5, _0223CF38 ; =ov70_02245768\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223CF3C ; =ov70_02245730\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _0223CF40 ; =ov70_0224574C\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223CF44 ; =ov70_02245714\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_022391F0\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    _0223CF34: .word ov70_022456F0\n    _0223CF38: .word ov70_02245768\n    _0223CF3C: .word ov70_02245730\n    _0223CF40: .word ov70_0224574C\n    _0223CF44: .word ov70_02245714"
    );
    #endif
}

void ov70_0223CF48(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 3);
}

void ov70_0223CF74(void) {
    /* Original at 0x0223CF74 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    ldr r5, [r6, #4]\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    mov r1, #0x60\n    str r1, [sp]\n    mov r1, #0x3d\n    mov r2, #0\n    str r1, [sp, #4]\n    mov r1, #2\n    add r3, r2, #0\n    add r4, r0, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r0, #1\n    lsl r0, r0, #8\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #4\n    mov r3, #0\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r6]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r5, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0xd\n    add r2, r5, #0\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x1b\n    add r2, r5, #0\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r4, #0\n    mov r1, #0x26\n    add r2, r5, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    add r0, r6, #0\n    bl ov70_02239C6C\n    add r0, r6, #0\n    bl ov70_02239CF8\n    add r0, r4, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223D058(void) {
    /* Original at 0x0223D058 */
    /* Requires manual decompilation - 188 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x30\n    mov r2, #0xd6\n    add r7, r0, #0\n    lsl r2, r2, #4\n    add r0, sp, #0\n    add r1, r7, #0\n    add r2, r7, r2\n    mov r3, #1\n    bl ov70_02238B54\n    ldr r0, _0223D1E8 ; =0x00000122\n    ldrh r1, [r7, r0]\n    lsl r2, r1, #2\n    ldr r1, _0223D1EC ; =ov70_02245784\n    ldrh r1, [r1, r2]\n    lsl r1, r1, #0xc\n    str r1, [sp, #8]\n    ldrh r0, [r7, r0]\n    lsl r1, r0, #2\n    ldr r0, _0223D1F0 ; =ov70_02245786\n    ldrh r0, [r0, r1]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223D1F4 ; =0x00000DCC\n    str r0, [r7, r1]\n    ldr r0, [r7, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223D1F4 ; =0x00000DCC\n    mov r1, #4\n    ldr r0, [r7, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223D1E8 ; =0x00000122\n    ldrh r0, [r7, r0]\n    cmp r0, #0x1f\n    beq _0223D0B0\n    cmp r0, #5\n    bhi _0223D0BC\n    ldr r0, _0223D1F4 ; =0x00000DCC\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl Sprite_SetPriority\n    b _0223D0C6\n    ldr r0, _0223D1F4 ; =0x00000DCC\n    mov r1, #1\n    ldr r0, [r7, r0]\n    bl Sprite_SetPriority\n    ldr r4, _0223D1EC ; =ov70_02245784\n    mov r6, #0\n    add r5, r7, #0\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0x14\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223D1F8 ; =0x00000DD8\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    add r1, r6, #6\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223D1F8 ; =0x00000DD8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #0x1e\n    blt _0223D0CC\n    ldr r4, _0223D1EC ; =ov70_02245784\n    mov r6, #0\n    add r5, r7, #0\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    ldrh r0, [r4, #2]\n    add r0, r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0xe5\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0x28\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xe5\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #1\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #0x1e\n    blt _0223D10A\n    ldr r4, _0223D1EC ; =ov70_02245784\n    mov r6, #0\n    add r5, r7, #0\n    ldrh r0, [r4]\n    add r0, #8\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    ldrh r0, [r4, #2]\n    add r0, r0, #6\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    mov r0, #0xa\n    str r0, [sp, #0x24]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223D1FC ; =0x00000EC8\n    str r0, [r5, r1]\n    add r0, r1, #0\n    ldr r0, [r5, r0]\n    mov r1, #0x2a\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223D1FC ; =0x00000EC8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #6\n    blt _0223D14E\n    ldr r4, _0223D200 ; =ov70_022456E8\n    mov r6, #0\n    add r5, r7, #0\n    ldrh r0, [r4]\n    lsl r0, r0, #0xc\n    str r0, [sp, #8]\n    ldrh r0, [r4, #2]\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223D204 ; =0x00000F04\n    str r0, [r5, r1]\n    add r0, r1, #0\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223D204 ; =0x00000F04\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    add r6, r6, #1\n    add r4, r4, #4\n    add r5, r5, #4\n    cmp r6, #2\n    blt _0223D190\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    mov r2, #0x6a\n    ldr r0, [r7, r0]\n    mov r1, #0x37\n    lsl r2, r2, #2\n    bl ov70_02238F9C\n    add sp, #0x30\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223D1E8: .word 0x00000122\n    _0223D1EC: .word ov70_02245784\n    _0223D1F0: .word ov70_02245786\n    _0223D1F4: .word 0x00000DCC\n    _0223D1F8: .word 0x00000DD8\n    _0223D1FC: .word 0x00000EC8\n    _0223D200: .word ov70_022456E8\n    _0223D204: .word 0x00000F04"
    );
    #endif
}

void ov70_0223D208(void) {
    /* Original at 0x0223D208 */
    /* Requires manual decompilation - 41 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    ldr r7, _0223D25C ; =0x00000F04\n    mov r6, #0\n    add r4, r5, #0\n    ldr r0, [r4, r7]\n    bl Sprite_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #2\n    blt _0223D212\n    ldr r0, _0223D260 ; =0x00000DCC\n    ldr r0, [r5, r0]\n    bl Sprite_Delete\n    mov r7, #0xe5\n    mov r6, #0\n    add r4, r5, #0\n    lsl r7, r7, #4\n    ldr r0, _0223D264 ; =0x00000DD8\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    ldr r0, [r4, r7]\n    bl Sprite_Delete\n    add r6, r6, #1\n    add r4, r4, #4\n    cmp r6, #0x1e\n    blt _0223D230\n    ldr r6, _0223D268 ; =0x00000EC8\n    mov r4, #0\n    ldr r0, [r5, r6]\n    bl Sprite_Delete\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #6\n    blt _0223D24A\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223D25C: .word 0x00000F04\n    _0223D260: .word 0x00000DCC\n    _0223D264: .word 0x00000DD8\n    _0223D268: .word 0x00000EC8"
    );
    #endif
}

void ov70_0223D26C(void) {
    /* Original at 0x0223D26C */
    /* Requires manual decompilation - 114 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xd\n    ldr r1, _0223D358 ; =0x00000F48\n    str r0, [sp, #4]\n    mov r2, #3\n    str r2, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x60\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r3, #4\n    bl AddWindowParameterized\n    ldr r0, _0223D358 ; =0x00000F48\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223D358 ; =0x00000F48\n    add r0, r4, r0\n    bl CopyWindowToVram\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    ldr r1, _0223D35C ; =0x00000F18\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    add r0, #0xfc\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _0223D35C ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    ldr r0, _0223D360 ; =0x0000013F\n    ldr r1, _0223D364 ; =0x00001158\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _0223D364 ; =0x00001158\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0\n    str r0, [sp, #0xc]\n    ldr r0, _0223D368 ; =0x00000165\n    ldr r1, _0223D36C ; =0x00000F68\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #1\n    mov r3, #0x18\n    bl AddWindowParameterized\n    ldr r0, _0223D36C ; =0x00000F68\n    mov r1, #6\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    ldr r0, _0223D370 ; =0x00010306\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r1, _0223D374 ; =0x00000BB8\n    ldr r0, _0223D36C ; =0x00000F68\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov70_02245084\n    ldr r0, [r4, #0x24]\n    cmp r0, #5\n    bne _0223D34C\n    add r0, r4, #0\n    mov r1, #3\n    bl ov70_02239D44\n    add sp, #0x14\n    pop {r3, r4, pc}\n    add r0, r4, #0\n    mov r1, #1\n    bl ov70_02239D44\n    add sp, #0x14\n    pop {r3, r4, pc}\n    _0223D358: .word 0x00000F48\n    _0223D35C: .word 0x00000F18\n    _0223D360: .word 0x0000013F\n    _0223D364: .word 0x00001158\n    _0223D368: .word 0x00000165\n    _0223D36C: .word 0x00000F68\n    _0223D370: .word 0x00010306\n    _0223D374: .word 0x00000BB8"
    );
    #endif
}

void ov70_0223D378(void) {
    /* Original at 0x0223D378 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223D3A8 ; =0x00001198\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0223D3AC ; =0x00001158\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0223D3B0 ; =0x00000F68\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0223D3B4 ; =0x00000F18\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0223D3B8 ; =0x00000F48\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _0223D3A8: .word 0x00001198\n    _0223D3AC: .word 0x00001158\n    _0223D3B0: .word 0x00000F68\n    _0223D3B4: .word 0x00000F18\n    _0223D3B8: .word 0x00000F48"
    );
    #endif
}

void ov70_0223D3BC(void) {
    /* Original at 0x0223D3BC */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x12\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223D400 ; =0x00000BB4\n    str r0, [r4, r1]\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223D404 ; =0x00000BBC\n    str r0, [r4, r1]\n    sub r1, #0x1c\n    ldr r0, [r4, r1]\n    mov r1, #0x6d\n    bl NewString_ReadMsgData\n    ldr r1, _0223D408 ; =0x00000BB8\n    str r0, [r4, r1]\n    ldr r0, _0223D40C ; =0x00000122\n    ldrh r1, [r4, r0]\n    cmp r1, #0x1e\n    bne _0223D3F2\n    mov r1, #0\n    strh r1, [r4, r0]\n    mov r0, #0x3d\n    mov r1, #0x78\n    bl Heap_Alloc\n    ldr r1, _0223D410 ; =0x000011F4\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _0223D400: .word 0x00000BB4\n    _0223D404: .word 0x00000BBC\n    _0223D408: .word 0x00000BB8\n    _0223D40C: .word 0x00000122\n    _0223D410: .word 0x000011F4"
    );
    #endif
}

void ov70_0223D414(void) {
    /* Original at 0x0223D414 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223D43C ; =0x000011F4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _0223D440 ; =0x00000BB4\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _0223D444 ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _0223D448 ; =0x00000BB8\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _0223D43C: .word 0x000011F4\n    _0223D440: .word 0x00000BB4\n    _0223D444: .word 0x00000BBC\n    _0223D448: .word 0x00000BB8"
    );
    #endif
}

void ov70_0223D44C(void) {
    /* Original at 0x0223D44C */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223D486\n    ldr r0, [r5, #0x24]\n    cmp r0, #5\n    bne _0223D464\n    mov r4, #0x15\n    b _0223D46A\n    cmp r0, #6\n    bne _0223D46A\n    mov r4, #0x11\n    ldr r0, _0223D48C ; =0x00000F0F\n    mov r3, #0\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #1\n    str r3, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #1\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0223D48C: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223D490(void) {
    /* Original at 0x0223D490 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _0223D578 ; =0x00000122\n    add r4, r0, #0\n    ldrh r1, [r4, r1]\n    cmp r1, #0x1e\n    bne _0223D4B4\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223D57C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    pop {r4, pc}\n    cmp r1, #0x1f\n    beq _0223D572\n    ldr r0, _0223D57C ; =0x000005DC\n    bl PlaySE\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E5C8\n    cmp r0, #1\n    beq _0223D4DE\n    cmp r0, #2\n    beq _0223D556\n    add sp, #8\n    pop {r4, pc}\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E4DC\n    cmp r0, #0\n    beq _0223D536\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    add r2, r0, #0\n    ldr r0, _0223D580 ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl BufferBoxMonNickname\n    ldr r0, _0223D584 ; =0x00000F0F\n    mov r3, #0\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x16\n    mov r2, #1\n    str r3, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #7\n    bl ov70_02238D84\n    add sp, #8\n    pop {r4, pc}\n    ldr r0, _0223D584 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x1a\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    add sp, #8\n    pop {r4, pc}\n    ldr r0, _0223D584 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x1b\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0223D578: .word 0x00000122\n    _0223D57C: .word 0x000005DC\n    _0223D580: .word 0x00000B9C\n    _0223D584: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223D588(void) {
    /* Original at 0x0223D588 */
    /* Requires manual decompilation - 107 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    ldr r2, _0223D670 ; =0x00000122\n    add r5, r0, #0\n    ldrh r3, [r5, r2]\n    cmp r3, #0x1e\n    bne _0223D5A0\n    mov r1, #6\n    bl ov70_0223D690\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    cmp r3, #0x1f\n    beq _0223D66C\n    ldr r1, [r5]\n    sub r2, r2, #2\n    ldr r0, [r1, #8]\n    ldrh r2, [r5, r2]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E5C8\n    cmp r0, #0\n    beq _0223D666\n    cmp r0, #1\n    beq _0223D5C2\n    cmp r0, #2\n    beq _0223D666\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r5]\n    ldrh r2, [r5, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r5, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    mov r1, #0x35\n    lsl r1, r1, #4\n    add r3, r5, r1\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    ldr r2, [r5, r1]\n    sub r1, #8\n    mul r1, r2\n    add r1, r3, r1\n    add r4, r0, #0\n    bl ov70_0223E658\n    cmp r0, #0\n    beq _0223D65C\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r5]\n    ldrh r2, [r5, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r5, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E4DC\n    cmp r0, #0\n    beq _0223D63C\n    ldr r0, _0223D674 ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl BufferBoxMonNickname\n    ldr r0, _0223D678 ; =0x00000F0F\n    mov r3, #0\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x12\n    mov r2, #1\n    str r3, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #3\n    mov r2, #9\n    bl ov70_02238D84\n    ldr r0, _0223D67C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223D678 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x1a\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223D67C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    ldr r0, _0223D67C ; =0x000005DC\n    bl PlaySE\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0223D670: .word 0x00000122\n    _0223D674: .word 0x00000B9C\n    _0223D678: .word 0x00000F0F\n    _0223D67C: .word 0x000005DC"
    );
    #endif
}

void ov70_0223D680(void) {
    /* Original at 0x0223D680 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _0223D688 ; =TouchscreenHitbox_FindRectAtTouchNew\n    ldr r0, _0223D68C ; =ov70_02245884\n    bx r3\n    nop\n    _0223D688: .word TouchscreenHitbox_FindRectAtTouchNew\n    _0223D68C: .word ov70_02245884"
    );
    #endif
}

void ov70_0223D690(void) {
    /* Original at 0x0223D690 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r1, #5\n    bne _0223D6AC\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223D6C4 ; =0x000005DC\n    bl PlaySE\n    pop {r4, pc}\n    cmp r1, #6\n    bne _0223D6C2\n    mov r1, #3\n    mov r2, #0x11\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223D6C4 ; =0x000005DC\n    bl PlaySE\n    pop {r4, pc}\n    _0223D6C4: .word 0x000005DC"
    );
    #endif
}

void ov70_0223D6C8(void) {
    /* Original at 0x0223D6C8 */
    /* Requires manual decompilation - 133 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_0223D680\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _0223D79A\n    cmp r4, #0x1e\n    beq _0223D75A\n    cmp r4, #0x1f\n    beq _0223D6E8\n    cmp r4, #0x20\n    beq _0223D720\n    b _0223D772\n    ldr r0, _0223D7F0 ; =0x00000F04\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223D7F0 ; =0x00000F04\n    mov r1, #0x26\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    mov r1, #0x13\n    mov r2, #1\n    bl ov70_0223D924\n    mov r1, #0x12\n    lsl r1, r1, #4\n    strh r0, [r5, r1]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    bl ov70_0223E264\n    ldr r0, _0223D7F4 ; =0x000005DC\n    bl PlaySE\n    b _0223D7EC\n    ldr r0, _0223D7F8 ; =0x00000F08\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _0223D7F8 ; =0x00000F08\n    mov r1, #0x27\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x12\n    lsl r0, r0, #4\n    mov r1, #0x13\n    add r2, r1, #0\n    ldrh r0, [r5, r0]\n    sub r2, #0x14\n    bl ov70_0223D924\n    mov r1, #0x12\n    lsl r1, r1, #4\n    strh r0, [r5, r1]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    bl ov70_0223E264\n    ldr r0, _0223D7F4 ; =0x000005DC\n    bl PlaySE\n    b _0223D7EC\n    ldr r1, [r5, #0x24]\n    add r0, r5, #0\n    bl ov70_0223D690\n    ldr r1, _0223D7FC ; =0x00000122\n    ldr r0, _0223D800 ; =0x00000DCC\n    strh r4, [r5, r1]\n    ldrh r1, [r5, r1]\n    ldr r0, [r5, r0]\n    bl ov70_0223D8E8\n    b _0223D7EC\n    ldr r1, _0223D7FC ; =0x00000122\n    ldr r0, _0223D800 ; =0x00000DCC\n    strh r4, [r5, r1]\n    ldrh r1, [r5, r1]\n    ldr r0, [r5, r0]\n    bl ov70_0223D8E8\n    ldr r0, [r5, #0x24]\n    cmp r0, #5\n    bne _0223D78E\n    add r0, r5, #0\n    bl ov70_0223D490\n    b _0223D7EC\n    cmp r0, #6\n    bne _0223D7EC\n    add r0, r5, #0\n    bl ov70_0223D588\n    b _0223D7EC\n    add r0, r5, #0\n    bl ov70_0223D808\n    ldr r0, [r5, #0x24]\n    cmp r0, #5\n    bne _0223D7C8\n    ldr r0, _0223D804 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0223D7BA\n    add r0, r5, #0\n    mov r1, #5\n    bl ov70_0223D690\n    b _0223D7EC\n    mov r0, #1\n    tst r0, r1\n    beq _0223D7EC\n    add r0, r5, #0\n    bl ov70_0223D490\n    b _0223D7EC\n    cmp r0, #6\n    bne _0223D7EC\n    ldr r0, _0223D804 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #2\n    tst r0, r1\n    beq _0223D7E0\n    add r0, r5, #0\n    mov r1, #6\n    bl ov70_0223D690\n    b _0223D7EC\n    mov r0, #1\n    tst r0, r1\n    beq _0223D7EC\n    add r0, r5, #0\n    bl ov70_0223D588\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _0223D7F0: .word 0x00000F04\n    _0223D7F4: .word 0x000005DC\n    _0223D7F8: .word 0x00000F08\n    _0223D7FC: .word 0x00000122\n    _0223D800: .word 0x00000DCC\n    _0223D804: .word gSystem"
    );
    #endif
}

void ov70_0223D808(void) {
    /* Original at 0x0223D808 */
    /* Requires manual decompilation - 99 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0223D8D0 ; =gSystem\n    mov r7, #0\n    ldr r0, [r0, #0x48]\n    mov r1, #0x40\n    add r4, r7, #0\n    tst r1, r0\n    beq _0223D820\n    mov r4, #1\n    b _0223D83C\n    mov r1, #0x80\n    tst r1, r0\n    beq _0223D82A\n    mov r4, #2\n    b _0223D83C\n    mov r1, #0x20\n    tst r1, r0\n    beq _0223D834\n    mov r4, #3\n    b _0223D83C\n    mov r1, #0x10\n    tst r0, r1\n    beq _0223D83C\n    mov r4, #4\n    cmp r4, #0\n    beq _0223D8B4\n    ldr r0, _0223D8D4 ; =0x00000122\n    ldr r1, _0223D8D8 ; =ov70_02245804\n    ldrh r3, [r5, r0]\n    sub r4, r4, #1\n    lsl r2, r3, #2\n    add r1, r1, r2\n    ldrb r4, [r4, r1]\n    cmp r4, r3\n    beq _0223D8B4\n    cmp r4, #0x63\n    beq _0223D85A\n    cmp r4, #0x65\n    bne _0223D8B0\n    cmp r4, #0x65\n    beq _0223D862\n    mov r0, #1\n    b _0223D864\n    mov r0, #0\n    lsl r0, r0, #0x18\n    lsr r6, r0, #0x18\n    ldr r0, _0223D8DC ; =0x00000F04\n    add r0, r5, r0\n    str r0, [sp]\n    lsl r0, r6, #2\n    ldr r1, [sp]\n    str r0, [sp, #4]\n    ldr r0, [r1, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r1, [sp]\n    ldr r0, [sp, #4]\n    add r6, #0x26\n    ldr r0, [r1, r0]\n    add r1, r6, #0\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x12\n    lsl r0, r0, #4\n    sub r4, #0x64\n    ldrh r0, [r5, r0]\n    mov r1, #0x13\n    add r2, r4, #0\n    bl ov70_0223D924\n    mov r1, #0x12\n    lsl r1, r1, #4\n    strh r0, [r5, r1]\n    ldrh r1, [r5, r1]\n    add r0, r5, #0\n    bl ov70_0223E264\n    ldr r0, _0223D8E0 ; =0x000005DC\n    bl PlaySE\n    b _0223D8B4\n    mov r7, #1\n    strh r4, [r5, r0]\n    cmp r7, #0\n    beq _0223D8BE\n    ldr r0, _0223D8E0 ; =0x000005DC\n    bl PlaySE\n    ldr r1, _0223D8D4 ; =0x00000122\n    ldr r0, _0223D8E4 ; =0x00000DCC\n    ldrh r1, [r5, r1]\n    ldr r0, [r5, r0]\n    bl ov70_0223D8E8\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223D8D0: .word gSystem\n    _0223D8D4: .word 0x00000122\n    _0223D8D8: .word ov70_02245804\n    _0223D8DC: .word 0x00000F04\n    _0223D8E0: .word 0x000005DC\n    _0223D8E4: .word 0x00000DCC"
    );
    #endif
}

void ov70_0223D8E8(void) {
    /* Original at 0x0223D8E8 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, _0223D91C ; =ov70_02245784\n    lsl r3, r4, #2\n    ldr r2, _0223D920 ; =ov70_02245786\n    ldrh r1, [r1, r3]\n    ldrh r2, [r2, r3]\n    add r5, r0, #0\n    bl ov70_02238D8C\n    cmp r4, #0x1f\n    beq _0223D908\n    cmp r4, #0\n    blt _0223D912\n    cmp r4, #5\n    bgt _0223D912\n    add r0, r5, #0\n    mov r1, #0\n    bl Sprite_SetPriority\n    pop {r3, r4, r5, pc}\n    add r0, r5, #0\n    mov r1, #1\n    bl Sprite_SetPriority\n    pop {r3, r4, r5, pc}\n    _0223D91C: .word ov70_02245784\n    _0223D920: .word ov70_02245786"
    );
    #endif
}

void ov70_0223D924(void) {
    /* Original at 0x0223D924 */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "add r0, r0, r2\n    bpl _0223D92C\n    sub r0, r1, #1\n    bx lr\n    cmp r0, r1\n    bne _0223D932\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov70_0223D934(void) {
    /* Original at 0x0223D934 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0x3d\n    bl ListMenuItems_New\n    ldr r1, _0223D990 ; =0x000011AC\n    mov r2, #0x62\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _0223D990 ; =0x000011AC\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x63\n    mov r3, #2\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _0223D990 ; =0x000011AC\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x64\n    mov r3, #3\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0xa\n    bl ov70_02238CAC\n    ldr r1, _0223D994 ; =0x000011D0\n    str r0, [r4, r1]\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223D990: .word 0x000011AC\n    _0223D994: .word 0x000011D0"
    );
    #endif
}

void ov70_0223D998(void) {
    /* Original at 0x0223D998 */
    /* Requires manual decompilation - 173 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0223DB1C ; =0x000011D0\n    ldr r0, [r5, r0]\n    bl TouchscreenListMenu_HandleInput\n    cmp r0, #3\n    bhi _0223D9BA\n    cmp r0, #1\n    blo _0223D9B8\n    beq _0223D9C6\n    cmp r0, #2\n    beq _0223D9EE\n    cmp r0, #3\n    beq _0223D9C2\n    b _0223DB16\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223D9C4\n    b _0223DAFA\n    b _0223DB16\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DB20 ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _0223DB24 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #5\n    bl ov70_02238E50\n    b _0223DB16\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DB20 ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r5]\n    ldrh r2, [r5, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r5, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    add r4, r0, #0\n    bl ov70_0223E4FC\n    cmp r0, #0\n    beq _0223DA38\n    ldr r0, _0223DB28 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x25\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DB16\n    add r0, r4, #0\n    bl ov70_0223E538\n    cmp r0, #0\n    beq _0223DA76\n    cmp r0, #1\n    ldr r0, _0223DB28 ; =0x00000F0F\n    bne _0223DA5A\n    str r0, [sp]\n    mov r2, #1\n    add r0, r5, #0\n    mov r1, #0xb1\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    b _0223DA6A\n    str r0, [sp]\n    mov r2, #1\n    add r0, r5, #0\n    mov r1, #0xb2\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DB16\n    add r0, r4, #0\n    bl ov70_0223E59C\n    cmp r0, #0\n    beq _0223DA9E\n    ldr r0, _0223DB28 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xb3\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DB16\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    mov r4, #0\n    bl ov70_0223E490\n    cmp r0, #0\n    beq _0223DACC\n    ldr r1, _0223DB2C ; =0x00000122\n    ldr r0, [r5]\n    ldrh r1, [r5, r1]\n    ldr r0, [r0, #8]\n    bl Party_GetMonByIndex\n    mov r1, #0xa2\n    add r2, r4, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0223DACC\n    mov r0, #0xe\n    mov r4, #1\n    str r0, [r5, #0x2c]\n    cmp r4, #0\n    bne _0223DB16\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r5]\n    ldrh r2, [r5, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r5, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    mov r1, #0x49\n    lsl r1, r1, #2\n    str r0, [r5, r1]\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl ov70_02238E50\n    b _0223DB16\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DB20 ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _0223DB24 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0223DB1C: .word 0x000011D0\n    _0223DB20: .word 0x000011AC\n    _0223DB24: .word 0x00000F18\n    _0223DB28: .word 0x00000F0F\n    _0223DB2C: .word 0x00000122"
    );
    #endif
}

void ov70_0223DB30(void) {
    /* Original at 0x0223DB30 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #3\n    mov r1, #0x3d\n    bl ListMenuItems_New\n    ldr r1, _0223DB8C ; =0x000011AC\n    mov r2, #0x57\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _0223DB8C ; =0x000011AC\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x58\n    mov r3, #2\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, _0223DB8C ; =0x000011AC\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    mov r2, #0x59\n    mov r3, #3\n    bl ListMenuItems_AppendFromMsgData\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0xa\n    bl ov70_02238CAC\n    ldr r1, _0223DB90 ; =0x000011D0\n    str r0, [r4, r1]\n    mov r0, #0xa\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223DB8C: .word 0x000011AC\n    _0223DB90: .word 0x000011D0"
    );
    #endif
}

void ov70_0223DB94(void) {
    /* Original at 0x0223DB94 */
    /* Requires manual decompilation - 158 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, _0223DCF8 ; =0x000011D0\n    ldr r0, [r5, r0]\n    bl TouchscreenListMenu_HandleInput\n    cmp r0, #3\n    bhi _0223DBB6\n    cmp r0, #1\n    blo _0223DBB4\n    beq _0223DBC2\n    cmp r0, #2\n    beq _0223DBE0\n    cmp r0, #3\n    beq _0223DBBE\n    b _0223DCF0\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223DBC0\n    b _0223DCD4\n    b _0223DCF0\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DCFC ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    mov r0, #2\n    str r0, [r5, #0x2c]\n    add r0, r5, #0\n    mov r1, #8\n    mov r2, #6\n    bl ov70_02238E50\n    b _0223DCF0\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DCFC ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _0223DD00 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r5]\n    ldrh r2, [r5, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r5, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    add r4, r0, #0\n    bl ov70_0223E4FC\n    cmp r0, #0\n    beq _0223DC34\n    ldr r0, _0223DD04 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0x25\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DCF0\n    add r0, r4, #0\n    bl ov70_0223E538\n    cmp r0, #0\n    beq _0223DC72\n    cmp r0, #1\n    ldr r0, _0223DD04 ; =0x00000F0F\n    bne _0223DC56\n    str r0, [sp]\n    mov r2, #1\n    add r0, r5, #0\n    mov r1, #0xb1\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    b _0223DC66\n    str r0, [sp]\n    mov r2, #1\n    add r0, r5, #0\n    mov r1, #0xb2\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DCF0\n    add r0, r4, #0\n    bl ov70_0223E59C\n    cmp r0, #0\n    beq _0223DC9A\n    ldr r0, _0223DD04 ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    mov r1, #0xb3\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r5, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    b _0223DCF0\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldrh r0, [r5, r0]\n    mov r4, #0\n    bl ov70_0223E490\n    cmp r0, #0\n    beq _0223DCC8\n    ldr r1, _0223DD08 ; =0x00000122\n    ldr r0, [r5]\n    ldrh r1, [r5, r1]\n    ldr r0, [r0, #8]\n    bl Party_GetMonByIndex\n    mov r1, #0xa2\n    add r2, r4, #0\n    bl GetMonData\n    cmp r0, #0\n    beq _0223DCC8\n    mov r0, #0xb\n    mov r4, #1\n    str r0, [r5, #0x2c]\n    cmp r4, #0\n    bne _0223DCF0\n    add r0, r5, #0\n    bl ov70_0223DE6C\n    b _0223DCF0\n    add r0, r5, #0\n    bl ov70_02238D60\n    ldr r0, _0223DCFC ; =0x000011AC\n    ldr r0, [r5, r0]\n    bl ListMenuItems_Delete\n    ldr r0, _0223DD00 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r5, #0x2c]\n    mov r0, #3\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223DCF8: .word 0x000011D0\n    _0223DCFC: .word 0x000011AC\n    _0223DD00: .word 0x00000F18\n    _0223DD04: .word 0x00000F0F\n    _0223DD08: .word 0x00000122"
    );
    #endif
}

void ov70_0223DD0C(void) {
    /* Original at 0x0223DD0C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _0223DD20\n    cmp r0, #8\n    beq _0223DD20\n    cmp r0, #3\n    bne _0223DD40\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223DD64 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    b _0223DD58\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223DD64: .word 0x000011FC"
    );
    #endif
}

void ov70_0223DD68(void) {
    /* Original at 0x0223DD68 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _0223DD8C ; =0x000001AD\n    mov r1, #0xc\n    mov r3, #8\n    bl ov70_02238C14\n    ldr r1, _0223DD90 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #6\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223DD8C: .word 0x000001AD\n    _0223DD90: .word 0x000011C8"
    );
    #endif
}

void ov70_0223DD94(void) {
    /* Original at 0x0223DD94 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223DDB8\n    ldr r0, _0223DDCC ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #2\n    mov r1, #0\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    b _0223DDC8\n    cmp r0, #2\n    bne _0223DDC8\n    ldr r0, _0223DDCC ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223DDCC: .word 0x000011C8"
    );
    #endif
}

void ov70_0223DDD0(void) {
    /* Original at 0x0223DDD0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _0223DDF8 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #1\n    mov r1, #0x19\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0xc\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0223DDF8: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223DDFC(void) {
    /* Original at 0x0223DDFC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _0223DE20 ; =0x000001AD\n    mov r1, #0xa\n    mov r3, #8\n    bl ov70_02238C14\n    ldr r1, _0223DE24 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #0xd\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223DE20: .word 0x000001AD\n    _0223DE24: .word 0x000011C8"
    );
    #endif
}

void ov70_0223DE28(void) {
    /* Original at 0x0223DE28 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223DE44\n    ldr r0, _0223DE64 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    add r0, r4, #0\n    bl ov70_0223DE6C\n    b _0223DE5E\n    cmp r0, #2\n    bne _0223DE5E\n    ldr r0, _0223DE64 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0223DE68 ; =0x00001158\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223DE64: .word 0x000011C8\n    _0223DE68: .word 0x00001158"
    );
    #endif
}

void ov70_0223DE6C(void) {
    /* Original at 0x0223DE6C */
    /* Requires manual decompilation - 75 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r4, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    mul r0, r1\n    add r0, r2, r0\n    bl ov70_0223E76C\n    cmp r0, #0\n    beq _0223DEC4\n    mov r0, #0x12\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    cmp r0, #0x12\n    beq _0223DEC4\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _0223DEC4\n    ldr r0, _0223DF0C ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    add r0, r4, #0\n    mov r1, #0x1c\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #1\n    bl ov70_02238D84\n    add sp, #8\n    mov r0, #0\n    pop {r4, pc}\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    mov r1, #0x49\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223DF10 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #9\n    bl ov70_02238E50\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, #0\n    bl ov70_0223E690\n    mov r0, #0x4a\n    mov r1, #0\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #1\n    add sp, #8\n    pop {r4, pc}\n    _0223DF0C: .word 0x00000F0F\n    _0223DF10: .word 0x000011FC"
    );
    #endif
}

void ov70_0223DF14(void) {
    /* Original at 0x0223DF14 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    ldr r1, _0223DF3C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r2, #1\n    mov r1, #0x19\n    mov r3, #0\n    str r2, [sp, #4]\n    bl ov70_0223E01C\n    add r0, r4, #0\n    mov r1, #3\n    mov r2, #0xf\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0223DF3C: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223DF40(void) {
    /* Original at 0x0223DF40 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _0223DF64 ; =0x000001AD\n    mov r1, #0xa\n    mov r3, #8\n    bl ov70_02238C14\n    ldr r1, _0223DF68 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #0x10\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223DF64: .word 0x000001AD\n    _0223DF68: .word 0x000011C8"
    );
    #endif
}

void ov70_0223DF6C(void) {
    /* Original at 0x0223DF6C */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223DFAA\n    ldr r0, _0223DFC8 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r3, #0x12\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    mov r1, #0x49\n    lsl r1, r1, #2\n    str r0, [r4, r1]\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    bl ov70_02238E50\n    b _0223DFC4\n    cmp r0, #2\n    bne _0223DFC4\n    ldr r0, _0223DFC8 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0223DFCC ; =0x00001158\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    mov r0, #1\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223DFC8: .word 0x000011C8\n    _0223DFCC: .word 0x00001158"
    );
    #endif
}

void ov70_0223DFD0(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_0223DFF0(void) {
    /* Original at 0x0223DFF0 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _0223E014\n    ldr r0, _0223E018 ; =0x00001158\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223E018: .word 0x00001158"
    );
    #endif
}

void ov70_0223E01C(void) {
    /* Original at 0x0223E01C */
    /* Requires manual decompilation - 50 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r6, r2, #0\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r1, _0223E084 ; =0x00000B9C\n    add r2, r7, #0\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    bne _0223E048\n    ldr r0, _0223E088 ; =0x00000F18\n    b _0223E04A\n    ldr r0, _0223E08C ; =0x00001158\n    add r4, r5, r0\n    add r0, r4, #0\n    mov r1, #0xf\n    bl FillWindowPixelBuffer\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r6, [sp, #4]\n    ldr r2, _0223E090 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r4, #0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r7, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0223E084: .word 0x00000B9C\n    _0223E088: .word 0x00000F18\n    _0223E08C: .word 0x00001158\n    _0223E090: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223E094(void) {
    /* Original at 0x0223E094 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r2, #0\n    add r2, r3, #0\n    bl NARC_AllocAndReadWholeMember\n    add r4, r0, #0\n    beq _0223E0B6\n    add r1, r5, #0\n    bl NNS_G2dGetUnpackedBGCharacterData\n    cmp r0, #0\n    bne _0223E0B6\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    pop {r3, r4, r5, pc}\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0223E0BC(void) {
    /* Original at 0x0223E0BC */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r1, #0\n    add r6, r2, #0\n    add r1, r6, #0\n    add r2, r5, #0\n    str r0, [sp]\n    add r7, r3, #0\n    ldr r4, [sp, #0x28]\n    bl GetMonIconNaixEx\n    add r1, r0, #0\n    ldr r0, [sp, #0x24]\n    add r2, sp, #8\n    mov r3, #0x3d\n    bl ov70_0223E094\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    add r1, r4, #0\n    mov r2, #2\n    ldr r0, [r0, #0x14]\n    add r1, #0xc\n    lsl r2, r2, #8\n    bl MIi_CpuCopyFast\n    lsl r0, r7, #4\n    add r0, #0xc\n    lsl r0, r0, #5\n    str r0, [r4]\n    ldr r0, [sp, #0x20]\n    add r1, r5, #0\n    str r0, [r4, #8]\n    ldr r0, [sp]\n    add r2, r6, #0\n    bl GetMonIconPaletteEx\n    add r0, r0, #3\n    str r0, [r4, #4]\n    ldr r0, [sp, #4]\n    bl Heap_Free\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_0223E114(void) {
    CalcBoxMonLevel();
}

void ov70_0223E120(void) {
    /* Original at 0x0223E120 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r1, #0x12\n    mov r6, #2\n    lsl r1, r1, #8\n    lsl r6, r6, #8\n    add r7, r6, #0\n    ldr r5, [r0, r1]\n    str r0, [sp]\n    mov r4, #0\n    add r7, #0xc\n    ldr r0, [r5, #8]\n    cmp r0, #0\n    beq _0223E158\n    add r0, r5, #0\n    add r0, #0xc\n    add r1, r6, #0\n    bl DC_FlushRange\n    add r0, r5, #0\n    ldr r1, [r5]\n    add r0, #0xc\n    add r2, r6, #0\n    bl GX_LoadOBJ\n    ldr r0, [r5, #8]\n    ldr r1, [r5, #4]\n    bl Sprite_SetPaletteOverride\n    add r4, r4, #1\n    add r5, r5, r7\n    cmp r4, #0x1e\n    blt _0223E134\n    mov r1, #0x12\n    ldr r0, [sp]\n    lsl r1, r1, #8\n    ldr r0, [r0, r1]\n    bl Heap_Free\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_0223E170(void) {
    /* Original at 0x0223E170 */
    /* Requires manual decompilation - 104 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x20\n    add r5, r0, #0\n    str r1, [sp, #0xc]\n    add r7, r2, #0\n    add r6, r3, #0\n    ldr r4, [sp, #0x40]\n    bl AcquireBoxMonLock\n    add r0, r5, #0\n    mov r1, #0xac\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [sp, #0x1c]\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r6]\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [sp, #0x10]\n    add r0, r5, #0\n    mov r1, #0x4c\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [sp, #0x14]\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetBoxMonData\n    str r0, [sp, #0x18]\n    ldrh r0, [r6]\n    mov r1, #0x6f\n    mov r2, #0\n    strh r0, [r4]\n    add r0, r5, #0\n    bl GetBoxMonData\n    add r0, r0, #1\n    strb r0, [r4, #2]\n    ldr r0, [sp, #0x14]\n    cmp r0, #0\n    beq _0223E1DA\n    mov r0, #0\n    strb r0, [r4, #3]\n    add r0, r5, #0\n    mov r1, #1\n    bl ReleaseBoxMonLock\n    ldr r0, [sp, #0x1c]\n    cmp r0, #0\n    beq _0223E248\n    ldr r0, [sp, #0xc]\n    ldr r1, [sp, #0x10]\n    str r0, [sp]\n    ldr r0, [sp, #0x3c]\n    ldr r2, [sp, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x44]\n    ldr r3, [sp, #0x38]\n    str r0, [sp, #8]\n    ldrh r0, [r6]\n    bl ov70_0223E0BC\n    ldr r0, [sp, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #0x18]\n    cmp r0, #0\n    beq _0223E23C\n    add r0, r7, #0\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #0x18]\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #0\n    beq _0223E230\n    add r0, r7, #0\n    mov r1, #0x29\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #0x28\n    bl Sprite_SetAnimCtrlSeq\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [sp, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r7, #0\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [sp, #0x44]\n    mov r1, #0\n    str r1, [r0, #8]\n    add sp, #0x20\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_0223E264(void) {
    /* Original at 0x0223E264 */
    /* Requires manual decompilation - 245 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x68\n    add r5, r0, #0\n    ldr r0, [r5]\n    str r1, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    ldr r1, _0223E46C ; =0x00003D68\n    str r0, [sp, #0x20]\n    mov r0, #3\n    bl Heap_AllocAtEnd\n    mov r1, #0x12\n    lsl r1, r1, #8\n    str r0, [r5, r1]\n    str r0, [sp, #0x18]\n    mov r0, #0x14\n    mov r1, #0x3d\n    bl NARC_New\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x10]\n    cmp r0, #0\n    blt _0223E326\n    cmp r0, #0x12\n    bge _0223E326\n    ldr r6, _0223E470 ; =0x000011F4\n    mov r4, #0\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x10]\n    add r2, r4, #0\n    bl PCStorage_GetMonByIndexPair\n    ldr r2, [r5, r6]\n    lsl r1, r4, #2\n    add r1, r2, r1\n    bl ov70_0223E114\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _0223E29A\n    mov r4, #0\n    ldr r0, _0223E470 ; =0x000011F4\n    lsl r6, r4, #2\n    ldr r1, [r5, r0]\n    mov r0, #0\n    strh r0, [r1, r6]\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x10]\n    add r2, r4, #0\n    add r7, r5, r6\n    bl PCStorage_GetMonByIndexPair\n    ldr r1, [sp, #0x1c]\n    str r4, [sp]\n    str r1, [sp, #4]\n    ldr r1, _0223E470 ; =0x000011F4\n    add r2, r4, #0\n    ldr r1, [r5, r1]\n    add r3, sp, #0x2c\n    add r1, r1, r6\n    str r1, [sp, #8]\n    mov r1, #0x83\n    lsl r1, r1, #2\n    mul r2, r1\n    ldr r1, [sp, #0x18]\n    lsl r6, r4, #1\n    add r1, r1, r2\n    str r1, [sp, #0xc]\n    ldr r1, _0223E474 ; =0x00000DD8\n    mov r2, #0xe5\n    lsl r2, r2, #4\n    ldr r1, [r7, r1]\n    ldr r2, [r7, r2]\n    add r3, r3, r6\n    bl ov70_0223E170\n    cmp r4, #6\n    bhs _0223E30E\n    ldr r0, _0223E478 ; =0x00000EC8\n    mov r1, #0\n    ldr r0, [r7, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _0223E2BA\n    ldr r2, _0223E47C ; =0x00000BB4\n    ldr r0, [sp, #0x20]\n    ldr r1, [sp, #0x10]\n    ldr r2, [r5, r2]\n    bl PCStorage_GetBoxName\n    b _0223E414\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    mov r4, #0\n    str r0, [sp, #0x14]\n    cmp r0, #0\n    ble _0223E3B6\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    bl Party_GetMonByIndex\n    str r0, [sp, #0x24]\n    bl Mon_GetBoxMon\n    ldr r1, _0223E470 ; =0x000011F4\n    lsl r6, r4, #2\n    ldr r1, [r5, r1]\n    str r0, [sp, #0x28]\n    add r1, r1, r6\n    bl ov70_0223E114\n    mov r2, #0xe5\n    ldr r0, [sp, #0x1c]\n    str r4, [sp]\n    str r0, [sp, #4]\n    ldr r0, _0223E470 ; =0x000011F4\n    add r1, r4, #0\n    ldr r0, [r5, r0]\n    add r7, r5, r6\n    add r0, r0, r6\n    str r0, [sp, #8]\n    mov r0, #0x83\n    lsl r0, r0, #2\n    mul r1, r0\n    ldr r0, [sp, #0x18]\n    lsl r2, r2, #4\n    add r0, r0, r1\n    str r0, [sp, #0xc]\n    ldr r1, _0223E474 ; =0x00000DD8\n    ldr r0, [sp, #0x28]\n    ldr r1, [r7, r1]\n    ldr r2, [r7, r2]\n    lsl r6, r4, #1\n    add r3, sp, #0x2c\n    add r3, r3, r6\n    bl ov70_0223E170\n    ldr r0, [sp, #0x24]\n    mov r1, #0xa2\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    ldr r0, _0223E478 ; =0x00000EC8\n    beq _0223E3A2\n    ldr r0, [r7, r0]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    b _0223E3AA\n    ldr r0, [r7, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    ldr r0, [sp, #0x14]\n    cmp r4, r0\n    blt _0223E336\n    cmp r4, #0x1e\n    bhs _0223E404\n    mov r7, #0\n    ldr r0, _0223E470 ; =0x000011F4\n    lsl r1, r4, #2\n    ldr r0, [r5, r0]\n    add r6, r5, r1\n    strh r7, [r0, r1]\n    ldr r0, _0223E474 ; =0x00000DD8\n    add r1, r7, #0\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0xe5\n    lsl r0, r0, #4\n    ldr r0, [r6, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x83\n    lsl r0, r0, #2\n    add r1, r4, #0\n    mul r1, r0\n    ldr r0, [sp, #0x18]\n    add r1, r0, r1\n    mov r0, #0\n    str r0, [r1, #8]\n    cmp r4, #6\n    bhs _0223E3FA\n    ldr r0, _0223E478 ; =0x00000EC8\n    mov r1, #0\n    ldr r0, [r6, r0]\n    bl Sprite_SetDrawFlag\n    add r0, r4, #1\n    lsl r0, r0, #0x10\n    lsr r4, r0, #0x10\n    cmp r4, #0x1e\n    blo _0223E3BC\n    mov r2, #0xba\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, #0x14\n    ldr r2, [r5, r2]\n    mov r1, #0x5c\n    bl ReadMsgDataIntoString\n    ldr r0, [sp, #0x1c]\n    bl NARC_Delete\n    ldr r0, _0223E480 ; =0x00000F48\n    mov r1, #0\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, _0223E484 ; =0x00010200\n    ldr r1, _0223E47C ; =0x00000BB4\n    str r0, [sp, #4]\n    ldr r0, _0223E480 ; =0x00000F48\n    ldr r1, [r5, r1]\n    add r0, r5, r0\n    mov r2, #0\n    mov r3, #5\n    bl ov70_02245084\n    ldr r0, [r5, #0x24]\n    cmp r0, #6\n    bne _0223E462\n    mov r2, #0x35\n    lsl r2, r2, #4\n    add r4, r5, r2\n    mov r2, #0x4b\n    lsl r2, r2, #2\n    ldr r0, _0223E470 ; =0x000011F4\n    ldr r3, [r5, r2]\n    ldr r1, _0223E474 ; =0x00000DD8\n    sub r2, #8\n    mul r2, r3\n    ldr r0, [r5, r0]\n    ldr r3, [sp, #0x18]\n    add r1, r5, r1\n    add r2, r4, r2\n    bl ov70_0223E738\n    ldr r1, _0223E488 ; =ov70_0223E120\n    ldr r0, _0223E48C ; =0x00001204\n    str r1, [r5, r0]\n    add sp, #0x68\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223E46C: .word 0x00003D68\n    _0223E470: .word 0x000011F4\n    _0223E474: .word 0x00000DD8\n    _0223E478: .word 0x00000EC8\n    _0223E47C: .word 0x00000BB4\n    _0223E480: .word 0x00000F48\n    _0223E484: .word 0x00010200\n    _0223E488: .word ov70_0223E120\n    _0223E48C: .word 0x00001204"
    );
    #endif
}

void ov70_0223E490(void) {
    /* Original at 0x0223E490 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #0x12\n    bne _0223E498\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov70_0223E49C(void) {
    /* Original at 0x0223E49C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r6, r2, #0\n    add r5, r0, #0\n    add r0, r6, #0\n    add r7, r1, #0\n    add r4, r3, #0\n    bl ov70_0223E490\n    cmp r0, #0\n    beq _0223E4CE\n    add r0, r5, #0\n    bl Party_GetCount\n    sub r0, r0, #1\n    cmp r4, r0\n    ble _0223E4C0\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r5, #0\n    add r1, r4, #0\n    bl Party_GetMonByIndex\n    bl Mon_GetBoxMon\n    pop {r3, r4, r5, r6, r7, pc}\n    add r0, r7, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl PCStorage_GetMonByIndexPair\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_0223E4DC(void) {
    /* Original at 0x0223E4DC */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r2, #0\n    bl ov70_0223E490\n    cmp r0, #0\n    beq _0223E4F8\n    add r0, r4, #0\n    bl Party_GetCount\n    cmp r0, #2\n    bge _0223E4F8\n    mov r0, #0\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223E4FC(void) {
    /* Original at 0x0223E4FC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    mov r4, #0\n    bl AcquireBoxMonLock\n    ldr r5, _0223E534 ; =ov70_02245700\n    str r0, [sp]\n    add r6, r4, #0\n    ldrh r1, [r5]\n    add r0, r7, #0\n    mov r2, #0\n    bl GetBoxMonData\n    add r6, r6, #1\n    add r4, r4, r0\n    add r5, r5, #2\n    cmp r6, #0xa\n    blt _0223E50C\n    ldr r1, [sp]\n    add r0, r7, #0\n    bl ReleaseBoxMonLock\n    cmp r4, #0\n    beq _0223E530\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223E534: .word ov70_02245700"
    );
    #endif
}

void ov70_0223E538(void) {
    /* Original at 0x0223E538 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    bl AcquireBoxMonLock\n    add r7, r0, #0\n    add r0, r5, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    add r4, r0, #0\n    add r0, r5, #0\n    mov r1, #0x70\n    mov r2, #0\n    bl GetBoxMonData\n    add r6, r0, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ReleaseBoxMonLock\n    cmp r6, #0\n    ble _0223E592\n    ldr r1, _0223E598 ; =0x000001DF\n    cmp r4, r1\n    bgt _0223E574\n    bge _0223E58A\n    cmp r4, #0xac\n    beq _0223E58E\n    b _0223E592\n    add r0, r1, #0\n    add r0, #8\n    cmp r4, r0\n    bgt _0223E584\n    add r1, #8\n    cmp r4, r1\n    beq _0223E58A\n    b _0223E592\n    add r1, #0xd\n    cmp r4, r1\n    bne _0223E592\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #2\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223E598: .word 0x000001DF"
    );
    #endif
}

void ov70_0223E59C(void) {
    /* Original at 0x0223E59C */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    bl AcquireBoxMonLock\n    add r6, r0, #0\n    add r0, r5, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetBoxMonData\n    add r4, r0, #0\n    add r0, r5, #0\n    add r1, r6, #0\n    bl ReleaseBoxMonLock\n    cmp r4, #0x70\n    bne _0223E5C2\n    mov r0, #1\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223E5C8(void) {
    /* Original at 0x0223E5C8 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    bl ov70_0223E49C\n    add r4, r0, #0\n    bne _0223E5D6\n    mov r0, #0\n    pop {r4, pc}\n    mov r1, #0xac\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    bne _0223E5E6\n    mov r0, #0\n    pop {r4, pc}\n    add r0, r4, #0\n    mov r1, #0xad\n    mov r2, #0\n    bl GetBoxMonData\n    cmp r0, #0\n    beq _0223E5F8\n    mov r0, #2\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0223E5FC(void) {
    /* Original at 0x0223E5FC */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    mov r4, #0\n    ldrsh r3, [r0, r4]\n    ldrsh r2, [r1, r4]\n    cmp r3, r2\n    beq _0223E60E\n    add r0, r4, #0\n    pop {r3, r4}\n    bx lr\n    mov r2, #2\n    ldrsb r3, [r1, r2]\n    cmp r3, #3\n    beq _0223E622\n    ldrsb r2, [r0, r2]\n    cmp r3, r2\n    beq _0223E622\n    add r0, r4, #0\n    pop {r3, r4}\n    bx lr\n    mov r2, #3\n    ldrsb r3, [r0, r2]\n    cmp r3, #0\n    bne _0223E630\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    ldrsb r0, [r1, r2]\n    cmp r0, #0\n    beq _0223E640\n    cmp r0, r3\n    ble _0223E640\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    mov r0, #4\n    ldrsb r0, [r1, r0]\n    cmp r0, #0\n    beq _0223E652\n    cmp r0, r3\n    bge _0223E652\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    mov r0, #1\n    pop {r3, r4}\n    bx lr"
    );
    #endif
}

void ov70_0223E658(void) {
    /* Original at 0x0223E658 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    mov r1, #5\n    mov r2, #0\n    add r5, r0, #0\n    bl GetBoxMonData\n    add r1, sp, #0\n    strh r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, r0, #1\n    add r0, sp, #0\n    strb r1, [r0, #2]\n    add r0, r5, #0\n    bl CalcBoxMonLevel\n    add r1, sp, #0\n    strb r0, [r1, #3]\n    add r0, sp, #0\n    add r1, r4, #0\n    bl ov70_0223E5FC\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0223E690(void) {
    /* Original at 0x0223E690 */
    /* Requires manual decompilation - 77 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    mov r0, #0x49\n    add r5, r1, #0\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, sp, #0\n    strh r0, [r1, #6]\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetBoxMonData\n    add r1, r0, #1\n    add r0, sp, #0\n    strb r1, [r0, #8]\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r5, r0]\n    bl CalcBoxMonLevel\n    add r1, sp, #0\n    strb r0, [r1, #9]\n    add r0, r4, #0\n    ldrh r2, [r1, #6]\n    add r0, #0xec\n    strh r2, [r0]\n    add r0, r4, #0\n    ldrh r1, [r1, #8]\n    add r0, #0xee\n    strh r1, [r0]\n    add r0, r4, #0\n    add r1, r5, #0\n    bl ov70_0223F6E4\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r5, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r5, r0]\n    sub r0, #8\n    mul r0, r1\n    add r0, r2, r0\n    bl Mon_GetBoxMon\n    mov r1, #5\n    mov r2, #0\n    add r5, r0, #0\n    bl GetBoxMonData\n    add r1, sp, #0\n    strh r0, [r1]\n    add r0, r5, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetBoxMonData\n    add r0, r0, #1\n    add r1, sp, #0\n    strb r0, [r1, #2]\n    mov r0, #0\n    strb r0, [r1, #3]\n    strb r0, [r1, #4]\n    add r0, r4, #0\n    ldrh r2, [r1]\n    add r0, #0xf0\n    strh r2, [r0]\n    add r0, r4, #0\n    ldrh r2, [r1, #2]\n    add r0, #0xf2\n    add r4, #0xf4\n    strh r2, [r0]\n    ldrh r0, [r1, #4]\n    strh r0, [r4]\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov70_0223E738(void) {
    /* Original at 0x0223E738 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r7, r2, #0\n    add r4, r3, #0\n    mov r6, #0\n    mov r0, #0\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    beq _0223E75C\n    add r0, r5, #0\n    add r1, r7, #0\n    bl ov70_0223E5FC\n    cmp r0, #0\n    bne _0223E75C\n    ldr r0, [r4, #4]\n    add r0, r0, #3\n    str r0, [r4, #4]\n    mov r0, #0x83\n    lsl r0, r0, #2\n    add r6, r6, #1\n    add r5, r5, #4\n    add r4, r4, r0\n    cmp r6, #0x1e\n    blt _0223E742\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_0223E76C(void) {
    /* Original at 0x0223E76C */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    bl ItemIdIsMail\n    cmp r0, #0\n    beq _0223E786\n    mov r0, #1\n    pop {r3, pc}\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov70_0223E78C(void) {
    /* Original at 0x0223E78C */
    /* Requires manual decompilation - 109 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x3c\n    add r4, r0, #0\n    bl ov70_0223ECCC\n    ldr r0, [r4, #4]\n    bl ov70_0223E954\n    add r0, r4, #0\n    bl ov70_0223EA6C\n    add r0, r4, #0\n    bl ov70_0223EB34\n    add r0, r4, #0\n    bl ov70_0223EC0C\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    bl ov70_02245124\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #3\n    mov r2, #0xba\n    str r0, [sp, #4]\n    sub r0, r0, #4\n    lsl r2, r2, #4\n    str r0, [sp, #8]\n    add r1, r2, #4\n    ldr r0, [r4, r2]\n    sub r2, r2, #4\n    ldr r3, _0223E870 ; =0x00001058\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    add r3, r4, r3\n    bl ov70_0223F3D8\n    mov r1, #0x2e\n    lsl r1, r1, #6\n    add r0, r4, r1\n    str r0, [sp]\n    add r0, r1, #0\n    mov r3, #0x49\n    add r0, #0x20\n    add r1, #0x1c\n    ldr r2, _0223E874 ; =0x00001088\n    lsl r3, r3, #2\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r3, [r4, r3]\n    add r2, r4, r2\n    bl ov70_0223F508\n    ldr r0, [r4, #4]\n    mov r3, #0xba\n    ldr r2, _0223E878 ; =0x00000F58\n    str r0, [sp, #0xc]\n    add r0, r4, r2\n    str r0, [sp, #0x10]\n    ldr r0, _0223E87C ; =0x00001168\n    lsl r3, r3, #4\n    add r1, r4, r0\n    str r1, [sp, #0x14]\n    mov r1, #0xdd\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, #0x5c\n    str r1, [sp, #0x18]\n    add r1, r2, #0\n    sub r1, #0x54\n    ldr r1, [r4, r1]\n    sub r2, #0x50\n    str r1, [sp, #0x1c]\n    ldr r1, [r4, r2]\n    mov r2, #0\n    str r2, [sp, #0x24]\n    str r1, [sp, #0x20]\n    ldr r1, [r4, r3]\n    str r1, [sp, #0x28]\n    add r1, r3, #4\n    ldr r1, [r4, r1]\n    add r3, #0x10\n    str r1, [sp, #0x2c]\n    ldr r1, [r4, r3]\n    str r1, [sp, #0x30]\n    ldr r1, [r4]\n    ldr r1, [r1, #0x10]\n    str r1, [sp, #0x34]\n    ldr r0, [r4, r0]\n    mov r1, #2\n    ldr r0, [r0, #0x14]\n    str r0, [sp, #0x38]\n    add r0, sp, #0xc\n    bl ov70_02242014\n    ldr r1, _0223E880 ; =0x000011A8\n    str r0, [r4, r1]\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0x3c\n    pop {r3, r4, pc}\n    nop\n    _0223E870: .word 0x00001058\n    _0223E874: .word 0x00001088\n    _0223E878: .word 0x00000F58\n    _0223E87C: .word 0x00001168\n    _0223E880: .word 0x000011A8"
    );
    #endif
}

void ov70_0223E884(void) {
    /* Original at 0x0223E884 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238E44\n    bl sub_0203A930\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _0223E8A0 ; =ov70_02246614\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    nop\n    _0223E8A0: .word ov70_02246614"
    );
    #endif
}

void ov70_0223E8A4(void) {
    /* Original at 0x0223E8A4 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl sub_0203A914\n    add r0, r4, #0\n    bl ov70_0223ECA4\n    ldr r0, _0223E8E4 ; =0x000011A8\n    ldr r0, [r4, r0]\n    bl ov70_0224212C\n    add r0, r4, #0\n    bl ov70_0223ED24\n    add r0, r4, #0\n    bl ov70_0223EBD4\n    ldr r0, [r4, #4]\n    bl ov70_0223EA40\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0223E8E4: .word 0x000011A8"
    );
    #endif
}

void ov70_0223E8E8(void) {
    /* Original at 0x0223E8E8 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #0xba\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    add r4, r2, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, _0223E948 ; =0x00000B9C\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r0, _0223E94C ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _0223E94C ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _0223E94C ; =0x00000F18\n    ldr r2, _0223E950 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r6, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _0223E948: .word 0x00000B9C\n    _0223E94C: .word 0x00000F18\n    _0223E950: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223E954(void) {
    /* Original at 0x0223E954 */
    /* Requires manual decompilation - 103 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x80\n    ldr r5, _0223EA30 ; =ov70_02245970\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x64\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223EA34 ; =ov70_0224598C\n    add r3, sp, #0x48\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    ldr r5, _0223EA38 ; =ov70_02245954\n    add r3, sp, #0x2c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r2, #0\n    str r2, [sp]\n    mov r0, #0x20\n    str r0, [sp, #4]\n    mov r0, #0x18\n    str r0, [sp, #8]\n    add r0, r4, #0\n    mov r1, #2\n    add r3, r2, #0\n    str r2, [sp, #0xc]\n    bl FillBgTilemapRect\n    add r0, r4, #0\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r5, _0223EA3C ; =ov70_02245938\n    add r3, sp, #0x10\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #3\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #3\n    bl BgClearTilemapBufferAndCommit\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #3\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_022391F0\n    add sp, #0x80\n    pop {r3, r4, r5, pc}\n    _0223EA30: .word ov70_02245970\n    _0223EA34: .word ov70_0224598C\n    _0223EA38: .word ov70_02245954\n    _0223EA3C: .word ov70_02245938"
    );
    #endif
}

void ov70_0223EA40(void) {
    ov70_022392BC();
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
    FreeBgTilemapBuffer(r4, 3);
}

void ov70_0223EA6C(void) {
    /* Original at 0x0223EA6C */
    /* Requires manual decompilation - 89 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    ldr r4, [r5, #4]\n    mov r0, #0x64\n    mov r1, #0x3d\n    bl NARC_New\n    add r6, r0, #0\n    mov r0, #0x40\n    str r0, [sp]\n    mov r0, #0x3d\n    mov r2, #0\n    str r0, [sp, #4]\n    mov r0, #0x64\n    mov r1, #1\n    add r3, r2, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #0xa\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0xc\n    add r2, r4, #0\n    bl GfGfxLoader_LoadCharData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r3, #1\n    str r3, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    mov r0, #0x64\n    mov r1, #0x1a\n    add r2, r4, #0\n    bl GfGfxLoader_LoadScrnData\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #6\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    add r0, r6, #0\n    mov r1, #0xf\n    add r2, r4, #0\n    mov r3, #2\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    add r0, r5, #0\n    bl ov70_02239CF8\n    add r0, r6, #0\n    bl NARC_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223EB34(void) {
    /* Original at 0x0223EB34 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r0, [sp, #0x14]\n    mov r0, #0x15\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r3, #2\n    str r3, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x60\n    str r0, [sp, #0x10]\n    ldr r0, [sp, #0x14]\n    ldr r2, _0223EBC8 ; =0x00000F18\n    ldr r1, [sp, #0x14]\n    ldr r0, [r0, #4]\n    add r1, r1, r2\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r1, _0223EBC8 ; =0x00000F18\n    ldr r0, [sp, #0x14]\n    add r0, r0, r1\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    ldr r1, _0223EBCC ; =0x00001058\n    ldr r0, [sp, #0x14]\n    ldr r4, _0223EBD0 ; =ov70_02245920\n    mov r7, #0\n    mov r6, #0x96\n    add r5, r0, r1\n    ldrh r0, [r4, #2]\n    add r1, r5, #0\n    mov r2, #3\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    lsl r0, r6, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldrh r3, [r4]\n    ldr r0, [sp, #0x14]\n    lsl r3, r3, #0x18\n    ldr r0, [r0, #4]\n    lsr r3, r3, #0x18\n    bl AddWindowParameterized\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r0, r5, #0\n    bl CopyWindowToVram\n    add r7, r7, #1\n    add r6, #0x16\n    add r4, r4, #4\n    add r5, #0x10\n    cmp r7, #6\n    blt _0223EB76\n    ldr r0, [sp, #0x14]\n    mov r1, #3\n    bl ov70_02239D44\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223EBC8: .word 0x00000F18\n    _0223EBCC: .word 0x00001058\n    _0223EBD0: .word ov70_02245920"
    );
    #endif
}

void ov70_0223EBD4(void) {
    /* Original at 0x0223EBD4 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r0, #0\n    ldr r0, _0223EC00 ; =0x00001198\n    add r0, r6, r0\n    bl RemoveWindow\n    ldr r0, _0223EC04 ; =0x00001058\n    mov r4, #0\n    add r5, r6, r0\n    add r0, r5, #0\n    bl RemoveWindow\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #6\n    blt _0223EBE6\n    ldr r0, _0223EC08 ; =0x00000F18\n    add r0, r6, r0\n    bl RemoveWindow\n    pop {r4, r5, r6, pc}\n    nop\n    _0223EC00: .word 0x00001198\n    _0223EC04: .word 0x00001058\n    _0223EC08: .word 0x00000F18"
    );
    #endif
}

void ov70_0223EC0C(void) {
    /* Original at 0x0223EC0C */
    /* Requires manual decompilation - 64 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x30\n    mov r2, #0xd6\n    add r4, r0, #0\n    lsl r2, r2, #4\n    add r0, sp, #0\n    add r1, r4, #0\n    add r2, r4, r2\n    mov r3, #1\n    bl ov70_02238B54\n    mov r0, #0xa\n    lsl r0, r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #2\n    lsl r0, r0, #0x10\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    mov r1, #0xdd\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x39\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    mov r0, #0x75\n    lsl r0, r0, #0xc\n    str r0, [sp, #0xc]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223EC9C ; =0x00000F04\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223EC9C ; =0x00000F04\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x23\n    lsl r0, r0, #0xe\n    str r0, [sp, #8]\n    add r0, sp, #0\n    bl Sprite_CreateAffine\n    ldr r1, _0223ECA0 ; =0x00000F08\n    str r0, [r4, r1]\n    ldr r0, [r4, r1]\n    mov r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _0223ECA0 ; =0x00000F08\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    add sp, #0x30\n    pop {r4, pc}\n    _0223EC9C: .word 0x00000F04\n    _0223ECA0: .word 0x00000F08"
    );
    #endif
}

void ov70_0223ECA4(void) {
    /* Original at 0x0223ECA4 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xdd\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    ldr r0, _0223ECC4 ; =0x00000F04\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    ldr r0, _0223ECC8 ; =0x00000F08\n    ldr r0, [r4, r0]\n    bl Sprite_Delete\n    pop {r4, pc}\n    _0223ECC4: .word 0x00000F04\n    _0223ECC8: .word 0x00000F08"
    );
    #endif
}

void ov70_0223ECCC(void) {
    /* Original at 0x0223ECCC */
    /* Requires manual decompilation - 36 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _0223ED1C ; =0x00000BBC\n    str r0, [r4, r1]\n    mov r0, #0x3d\n    mov r1, #0x30\n    bl Heap_Alloc\n    ldr r1, _0223ED20 ; =0x000011C4\n    mov r2, #0x30\n    str r0, [r4, r1]\n    ldr r1, [r4, r1]\n    mov r0, #0\n    bl MIi_CpuClearFast\n    ldr r2, _0223ED20 ; =0x000011C4\n    mov r0, #0x3d\n    ldr r2, [r4, r2]\n    mov r1, #0\n    add r2, #0x1c\n    bl ov70_0223F634\n    ldr r1, _0223ED20 ; =0x000011C4\n    ldr r1, [r4, r1]\n    str r0, [r1, #0x18]\n    mov r0, #0x3d\n    bl ov70_0223F684\n    ldr r1, _0223ED20 ; =0x000011C4\n    ldr r2, [r4, r1]\n    add r1, #0x70\n    str r0, [r2, #0x14]\n    add r0, r4, r1\n    bl ov70_0223F948\n    pop {r4, pc}\n    _0223ED1C: .word 0x00000BBC\n    _0223ED20: .word 0x000011C4"
    );
    #endif
}

void ov70_0223ED24(void) {
    /* Original at 0x0223ED24 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223ED50 ; =0x000011C4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x14]\n    bl Heap_Free\n    ldr r0, _0223ED50 ; =0x000011C4\n    ldr r0, [r4, r0]\n    ldr r0, [r0, #0x18]\n    bl Heap_Free\n    ldr r0, _0223ED50 ; =0x000011C4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _0223ED54 ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    nop\n    _0223ED50: .word 0x000011C4\n    _0223ED54: .word 0x00000BBC"
    );
    #endif
}

void ov70_0223ED58(void) {
    /* Original at 0x0223ED58 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl IsPaletteFadeFinished\n    cmp r0, #0\n    beq _0223ED80\n    ldr r0, _0223ED88 ; =0x00000F0F\n    mov r1, #9\n    str r0, [sp]\n    add r0, r4, #0\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223E8E8\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #1\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0223ED88: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223ED8C(void) {
    /* Original at 0x0223ED8C */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    ldr r1, _0223EDAC ; =gSystem\n    add r4, r0, #0\n    ldr r2, [r1, #0x48]\n    mov r1, #2\n    tst r1, r2\n    beq _0223EDA6\n    mov r1, #5\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    _0223EDAC: .word gSystem"
    );
    #endif
}

void ov70_0223EDB0(void) {
    ov70_022420C4(3, 6, 0);
}

void ov70_0223EDCC(void) {
    GF_AssertFail();
}

void ov70_0223EDD8(void) {
    GF_AssertFail();
}

void ov70_0223EDE4(void) {
    /* Original at 0x0223EDE4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    beq _0223EDF2\n    cmp r1, #0xfe\n    beq _0223EDFA\n    cmp r1, #0xff\n    beq _0223EE02\n    b _0223EE0A\n    mov r1, #1\n    strb r1, [r0, #2]\n    add r0, r1, #0\n    bx lr\n    mov r1, #2\n    strb r1, [r0, #2]\n    mov r0, #1\n    bx lr\n    mov r1, #3\n    strb r1, [r0, #2]\n    mov r0, #1\n    bx lr\n    mov r0, #0\n    bx lr"
    );
    #endif
}

void ov70_0223EE10(void) {
    /* Original at 0x0223EE10 */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223EED0 ; =0x000011A8\n    ldr r0, [r4, r0]\n    bl ov70_02242144\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    beq _0223EE2E\n    add r1, r1, #1\n    cmp r0, r1\n    beq _0223EECA\n    b _0223EE5E\n    ldr r0, _0223EED4 ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    mov r1, #5\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223EED8 ; =0x000011C4\n    ldr r3, [r4, r0]\n    add r0, #0x70\n    ldrh r2, [r3, #6]\n    ldrh r1, [r3, #4]\n    add r0, r4, r0\n    add r1, r2, r1\n    ldrh r2, [r3, #0xa]\n    ldrh r3, [r3, #8]\n    bl ov70_0223F960\n    b _0223EECA\n    ldr r1, _0223EEDC ; =0x00000B84\n    strh r0, [r4, r1]\n    mov r1, #0x12\n    bl GetMonBaseStat\n    ldr r1, _0223EED8 ; =0x000011C4\n    ldr r2, [r4, r1]\n    str r0, [r2, #0x20]\n    ldr r1, [r4, r1]\n    ldr r0, _0223EEDC ; =0x00000B84\n    ldr r1, [r1, #0x20]\n    add r0, r4, r0\n    bl ov70_0223EDE4\n    cmp r0, #0\n    beq _0223EE88\n    mov r0, #0xa\n    str r0, [r4, #0x2c]\n    ldr r0, _0223EEE0 ; =0x00000B86\n    ldrsb r1, [r4, r0]\n    b _0223EE8E\n    mov r0, #7\n    str r0, [r4, #0x2c]\n    mov r1, #3\n    ldr r2, _0223EEDC ; =0x00000B84\n    ldr r3, _0223EEE4 ; =0x00001058\n    ldrsh r0, [r4, r2]\n    add r3, r4, r3\n    str r0, [sp]\n    mov r0, #0\n    str r1, [sp, #4]\n    mvn r0, r0\n    str r0, [sp, #8]\n    add r0, r2, #0\n    add r1, r2, #0\n    add r0, #0x1c\n    add r1, #0x20\n    add r2, #0x18\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl ov70_0223F3D8\n    ldr r0, _0223EED8 ; =0x000011C4\n    ldr r3, [r4, r0]\n    add r0, #0x70\n    ldrh r2, [r3, #6]\n    ldrh r1, [r3, #4]\n    add r0, r4, r0\n    add r1, r2, r1\n    ldrh r2, [r3, #0xa]\n    ldrh r3, [r3, #8]\n    bl ov70_0223F960\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223EED0: .word 0x000011A8\n    _0223EED4: .word 0x00000F18\n    _0223EED8: .word 0x000011C4\n    _0223EEDC: .word 0x00000B84\n    _0223EEE0: .word 0x00000B86\n    _0223EEE4: .word 0x00001058"
    );
    #endif
}

void ov70_0223EEE8(void) {
    /* Original at 0x0223EEE8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223EF0C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xa\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223E8E8\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #8\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223EF0C: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223EF10(void) {
    /* Original at 0x0223EF10 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x46\n    ldr r1, _0223EF30 ; =0x0000FFFF\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    ldr r0, _0223EF34 ; =0x000011A8\n    mov r1, #1\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223EF30: .word 0x0000FFFF\n    _0223EF34: .word 0x000011A8"
    );
    #endif
}

void ov70_0223EF38(void) {
    /* Original at 0x0223EF38 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223EFA8 ; =0x000011A8\n    ldr r0, [r4, r0]\n    bl ov70_02242144\n    cmp r0, #2\n    bhi _0223EF58\n    cmp r0, #0\n    beq _0223EF70\n    cmp r0, #1\n    beq _0223EF70\n    cmp r0, #2\n    beq _0223EF70\n    b _0223EFA0\n    mov r1, #1\n    mvn r1, r1\n    cmp r0, r1\n    bne _0223EFA0\n    ldr r0, _0223EFAC ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    b _0223EFA0\n    ldr r2, _0223EFB0 ; =0x00000B86\n    add r0, r0, #1\n    strb r0, [r4, r2]\n    mov r1, #0xa\n    str r1, [r4, #0x2c]\n    sub r0, r2, #2\n    ldrsh r0, [r4, r0]\n    ldr r3, _0223EFB4 ; =0x00001058\n    sub r1, #0xb\n    str r0, [sp]\n    ldrsb r0, [r4, r2]\n    add r3, r4, r3\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r0, r2, #0\n    add r1, r2, #0\n    add r0, #0x1a\n    add r1, #0x1e\n    add r2, #0x16\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl ov70_0223F3D8\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223EFA8: .word 0x000011A8\n    _0223EFAC: .word 0x00000F18\n    _0223EFB0: .word 0x00000B86\n    _0223EFB4: .word 0x00001058"
    );
    #endif
}

void ov70_0223EFB8(void) {
    /* Original at 0x0223EFB8 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223EFDC ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xb\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223E8E8\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0xb\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223EFDC: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223EFE0(void) {
    /* Original at 0x0223EFE0 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223F000 ; =0x000011A8\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl ov70_022420C4\n    mov r0, #0x46\n    ldr r1, _0223F004 ; =0x0000FFFF\n    lsl r0, r0, #2\n    strh r1, [r4, r0]\n    mov r0, #0xc\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223F000: .word 0x000011A8\n    _0223F004: .word 0x0000FFFF"
    );
    #endif
}

void ov70_0223F008(void) {
    /* Original at 0x0223F008 */
    /* Requires manual decompilation - 74 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, _0223F09C ; =0x000011A8\n    ldr r0, [r4, r0]\n    bl ov70_02242144\n    add r1, r0, #0\n    cmp r1, #0xc\n    beq _0223F02C\n    mov r0, #1\n    mvn r0, r0\n    cmp r1, r0\n    beq _0223F02C\n    add r0, r0, #1\n    cmp r1, r0\n    beq _0223F096\n    b _0223F054\n    ldr r0, _0223F0A0 ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl ClearFrameAndWindow2\n    ldr r1, _0223F0A4 ; =0x000011C4\n    ldr r0, _0223F0A8 ; =0x00000B84\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    ldr r1, [r1, #0x20]\n    bl ov70_0223EDE4\n    cmp r0, #0\n    beq _0223F04E\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    b _0223F096\n    mov r0, #7\n    str r0, [r4, #0x2c]\n    b _0223F096\n    ldr r0, _0223F0A8 ; =0x00000B84\n    mov r2, #0\n    add r0, r4, r0\n    bl ov70_0223F828\n    mov r0, #0xd\n    ldr r1, _0223F0AC ; =0x00000B87\n    str r0, [r4, #0x2c]\n    ldrsb r0, [r4, r1]\n    add r1, r1, #1\n    ldrsb r1, [r4, r1]\n    mov r2, #0\n    bl ov70_0223F864\n    ldr r2, _0223F0A8 ; =0x00000B84\n    ldr r3, _0223F0B0 ; =0x00001058\n    ldrsh r1, [r4, r2]\n    add r3, r4, r3\n    str r1, [sp]\n    add r1, r2, #2\n    ldrsb r1, [r4, r1]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r2, #0\n    add r1, r2, #0\n    add r0, #0x1c\n    add r1, #0x20\n    add r2, #0x18\n    ldr r0, [r4, r0]\n    ldr r1, [r4, r1]\n    ldr r2, [r4, r2]\n    bl ov70_0223F3D8\n    mov r0, #3\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223F09C: .word 0x000011A8\n    _0223F0A0: .word 0x00000F18\n    _0223F0A4: .word 0x000011C4\n    _0223F0A8: .word 0x00000B84\n    _0223F0AC: .word 0x00000B87\n    _0223F0B0: .word 0x00001058"
    );
    #endif
}

void ov70_0223F0B4(void) {
    /* Original at 0x0223F0B4 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0223F0D8 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0x17\n    mov r2, #1\n    mov r3, #0\n    bl ov70_0223E8E8\n    add r0, r4, #0\n    mov r1, #0x10\n    mov r2, #0xe\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223F0D8: .word 0x00000F0F"
    );
    #endif
}

void ov70_0223F0DC(void) {
    /* Original at 0x0223F0DC */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0\n    str r0, [sp]\n    ldr r0, [r4, #4]\n    ldr r2, _0223F100 ; =0x0000011A\n    mov r1, #0xc\n    mov r3, #3\n    bl ov70_02238C14\n    ldr r1, _0223F104 ; =0x000011C8\n    str r0, [r4, r1]\n    mov r0, #0xf\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223F100: .word 0x0000011A\n    _0223F104: .word 0x000011C8"
    );
    #endif
}

void ov70_0223F108(void) {
    /* Original at 0x0223F108 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _0223F13E\n    ldr r0, _0223F15C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r1, #7\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    ldr r0, _0223F160 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    add r1, r4, #0\n    bl ov70_0223F7A4\n    b _0223F158\n    cmp r0, #2\n    bne _0223F158\n    ldr r0, _0223F15C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r1, #5\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #2\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _0223F15C: .word 0x000011C8\n    _0223F160: .word 0x000011FC"
    );
    #endif
}

void ov70_0223F164(void) {
    /* Original at 0x0223F164 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    bne _0223F190\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, _0223F1B4 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    b _0223F1A8\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0223F1B4: .word 0x000011FC"
    );
    #endif
}

void ov70_0223F1B8(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_0223F1D8(void) {
    /* Original at 0x0223F1D8 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r5, r3, #0\n    cmp r2, #0\n    beq _0223F206\n    add r0, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r3, [sp, #0x18]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov70_02245084\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223F20C(void) {
    /* Original at 0x0223F20C */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r3, #0\n    cmp r2, #0\n    beq _0223F240\n    add r0, r1, #0\n    add r1, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r1, #0\n    str r5, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    add r2, r4, #0\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r3, r1, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0223F244(void) {
    /* Original at 0x0223F244 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r4, r0, #0\n    cmp r3, #0\n    beq _0223F276\n    add r0, r1, #0\n    add r1, r3, #0\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov70_02245084\n    add r0, r5, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    add r0, r2, #0\n    mov r1, #0xad\n    bl NewString_ReadMsgData\n    add r5, r0, #0\n    ldr r0, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    str r0, [sp]\n    ldr r0, [sp, #0x20]\n    add r1, r5, #0\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0\n    bl ov70_02245084\n    add r0, r5, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0223F2A0(void) {
    /* Original at 0x0223F2A0 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "cmp r0, #1\n    bne _0223F2AA\n    ldr r0, _0223F2B8 ; =ov70_022465EC\n    ldr r0, [r0]\n    bx lr\n    cmp r0, #2\n    bne _0223F2B2\n    ldr r0, _0223F2B8 ; =ov70_022465EC\n    ldr r1, [r0, #4]\n    add r0, r1, #0\n    bx lr\n    nop\n    _0223F2B8: .word ov70_022465EC"
    );
    #endif
}

void ov70_0223F2BC(void) {
    /* Original at 0x0223F2BC */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r3, #0\n    bne _0223F2CC\n    cmp r5, #3\n    beq _0223F31C\n    add r0, r1, #0\n    ldr r1, _0223F320 ; =ov70_02245910\n    lsl r2, r5, #2\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    cmp r0, #3\n    ble _0223F2FC\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov70_0223F2A0\n    mov r1, #0\n    str r1, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov70_02245084\n    b _0223F316\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    bl ov70_0223F2A0\n    ldr r1, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    str r1, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    add r1, r4, #0\n    mov r2, #0\n    bl ov70_02245084\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0223F320: .word ov70_02245910"
    );
    #endif
}

void ov70_0223F324(void) {
    /* Original at 0x0223F324 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r5, r2, #0\n    cmp r3, #0\n    bne _0223F334\n    cmp r5, #3\n    beq _0223F368\n    add r0, r1, #0\n    ldr r1, _0223F36C ; =ov70_02245910\n    lsl r2, r5, #2\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r1, [sp, #0x28]\n    add r0, r5, #0\n    bl ov70_0223F2A0\n    ldr r1, [sp, #0x24]\n    ldr r3, [sp, #0x20]\n    str r1, [sp]\n    mov r1, #0xff\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r4, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _0223F36C: .word ov70_02245910"
    );
    #endif
}

void ov70_0223F370(void) {
    ov70_0223F38C(0);
}

void ov70_0223F38C(void) {
    /* Original at 0x0223F38C */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #8\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    add r5, r3, #0\n    cmp r2, r0\n    beq _0223F3CC\n    ldr r0, [sp, #0x24]\n    cmp r0, #0\n    bne _0223F3A6\n    ldr r3, _0223F3D0 ; =ov70_02245A4C\n    b _0223F3A8\n    ldr r3, _0223F3D4 ; =ov70_022459F4\n    add r0, r1, #0\n    lsl r1, r2, #3\n    ldr r1, [r3, r1]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x20]\n    str r5, [sp]\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x18]\n    ldr r3, [sp, #0x1c]\n    add r0, r6, #0\n    add r1, r4, #0\n    bl ov70_02245084\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r4, r5, r6, pc}\n    _0223F3D0: .word ov70_02245A4C\n    _0223F3D4: .word ov70_022459F4"
    );
    #endif
}

void ov70_0223F3D8(void) {
    /* Original at 0x0223F3D8 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp, #0x10]\n    mov r1, #0x65\n    str r0, [sp, #0xc]\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, _0223F468 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r5, r6, #0\n    mov r4, #1\n    add r5, #0x10\n    mov r7, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0223F404\n    mov r3, #0\n    ldr r0, _0223F46C ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x30]\n    add r0, #0x10\n    bl ov70_0223F1D8\n    ldr r2, [sp, #0x34]\n    sub r0, r2, #1\n    cmp r0, #1\n    bhi _0223F446\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x46\n    str r0, [sp, #4]\n    ldr r0, _0223F46C ; =0x00010200\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x10\n    bl ov70_0223F2BC\n    mov r1, #0\n    ldr r0, _0223F46C ; =0x00010200\n    str r1, [sp]\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    add r6, #0x20\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x38]\n    add r0, r6, #0\n    mov r3, #2\n    bl ov70_0223F370\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223F468: .word 0x000F0200\n    _0223F46C: .word 0x00010200"
    );
    #endif
}

void ov70_0223F470(void) {
    /* Original at 0x0223F470 */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x18\n    str r1, [sp, #0x10]\n    mov r1, #0x65\n    str r0, [sp, #0xc]\n    add r6, r3, #0\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x14]\n    mov r2, #0\n    ldr r0, _0223F500 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r1, [sp, #0x14]\n    add r0, r6, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r5, r6, #0\n    mov r4, #1\n    add r5, #0x10\n    mov r7, #0\n    add r0, r5, #0\n    add r1, r7, #0\n    bl FillWindowPixelBuffer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0223F49C\n    mov r3, #0\n    ldr r0, _0223F504 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r0, r6, #0\n    ldr r1, [sp, #0x10]\n    ldr r2, [sp, #0x30]\n    add r0, #0x10\n    bl ov70_0223F1D8\n    ldr r2, [sp, #0x34]\n    sub r0, r2, #1\n    cmp r0, #1\n    bhi _0223F4DE\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x46\n    str r0, [sp, #4]\n    ldr r0, _0223F504 ; =0x00010200\n    ldr r1, [sp, #0xc]\n    str r0, [sp, #8]\n    add r0, r6, #0\n    add r0, #0x10\n    bl ov70_0223F2BC\n    mov r3, #0\n    ldr r0, _0223F504 ; =0x00010200\n    str r3, [sp]\n    str r0, [sp, #4]\n    add r6, #0x20\n    ldr r1, [sp, #0xc]\n    ldr r2, [sp, #0x38]\n    add r0, r6, #0\n    str r3, [sp, #8]\n    bl ov70_0223F370\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    add sp, #0x18\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223F500: .word 0x000F0200\n    _0223F504: .word 0x00010200"
    );
    #endif
}

void ov70_0223F508(void) {
    /* Original at 0x0223F508 */
    /* Requires manual decompilation - 127 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x24\n    add r4, r0, #0\n    add r5, r1, #0\n    mov r0, #0xb\n    mov r1, #0x3d\n    str r2, [sp, #8]\n    str r3, [sp, #0xc]\n    ldr r7, [sp, #0x38]\n    bl String_New\n    str r0, [sp, #0x18]\n    mov r0, #0xb\n    mov r1, #0x3d\n    bl String_New\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0xc]\n    ldr r2, [sp, #0x18]\n    mov r1, #0x77\n    bl GetBoxMonData\n    ldr r0, [sp, #0xc]\n    mov r1, #0x6f\n    mov r2, #0\n    bl GetBoxMonData\n    add r6, r0, #1\n    ldr r0, [sp, #0xc]\n    bl CalcBoxMonLevel\n    str r0, [sp, #0x10]\n    add r0, r4, #0\n    mov r1, #0x68\n    bl NewString_ReadMsgData\n    str r0, [sp, #0x20]\n    mov r0, #0\n    str r0, [sp]\n    mov r0, #1\n    mov r1, #3\n    str r0, [sp, #4]\n    ldr r2, [sp, #0x10]\n    add r0, r5, #0\n    add r3, r1, #0\n    bl BufferIntegerAsString\n    add r0, r5, #0\n    add r1, r4, #0\n    mov r2, #0x6c\n    mov r3, #0x3d\n    bl ReadMsgData_ExpandPlaceholders\n    str r0, [sp, #0x1c]\n    cmp r6, #3\n    beq _0223F586\n    ldr r1, _0223F624 ; =ov70_02245910\n    lsl r2, r6, #2\n    ldr r1, [r1, r2]\n    ldr r2, [sp, #0x14]\n    add r0, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r5, [sp, #8]\n    mov r4, #0\n    add r0, r5, #0\n    mov r1, #0\n    bl FillWindowPixelBuffer\n    add r4, r4, #1\n    add r5, #0x10\n    cmp r4, #3\n    blt _0223F58A\n    mov r2, #0\n    ldr r0, _0223F628 ; =0x000F0200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x20]\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r2, #0\n    ldr r0, _0223F62C ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x18]\n    add r0, #0x10\n    add r3, r2, #0\n    bl ov70_02245084\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _0223F62C ; =0x00010200\n    mov r2, #0\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    ldr r1, [sp, #0x1c]\n    add r0, #0x20\n    add r3, r2, #0\n    bl ov70_02245084\n    cmp r6, #3\n    beq _0223F5F6\n    sub r0, r6, #1\n    mov r3, #0\n    lsl r1, r0, #2\n    ldr r0, _0223F630 ; =ov70_022465EC\n    str r3, [sp]\n    ldr r0, [r0, r1]\n    ldr r1, [sp, #0x14]\n    str r0, [sp, #4]\n    ldr r0, [sp, #8]\n    mov r2, #0x46\n    add r0, #0x10\n    str r0, [sp, #8]\n    bl ov70_02245084\n    ldr r0, [sp, #0xc]\n    mov r1, #5\n    mov r2, #0\n    bl GetBoxMonData\n    strh r0, [r7]\n    ldr r0, [sp, #0x10]\n    strb r6, [r7, #2]\n    strb r0, [r7, #3]\n    ldr r0, [sp, #0x1c]\n    bl String_Delete\n    ldr r0, [sp, #0x14]\n    bl String_Delete\n    ldr r0, [sp, #0x18]\n    bl String_Delete\n    ldr r0, [sp, #0x20]\n    bl String_Delete\n    add sp, #0x24\n    pop {r4, r5, r6, r7, pc}\n    _0223F624: .word ov70_02245910\n    _0223F628: .word 0x000F0200\n    _0223F62C: .word 0x00010200\n    _0223F630: .word ov70_022465EC"
    );
    #endif
}

void ov70_0223F634(void) {
    GfGfxLoader_LoadFromNarc_GetSizeOut(0x4a, 0xd, 0);
}

void ov70_0223F658(void) {
    /* Original at 0x0223F658 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    lsl r2, r1, #2\n    ldr r1, _0223F680 ; =ov70_02245AAC\n    add r3, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    add r0, sp, #8\n    ldr r1, [r1, r2]\n    str r0, [sp, #4]\n    mov r0, #0x4a\n    mov r2, #0\n    bl GfGfxLoader_LoadFromNarc_GetSizeOut\n    ldr r1, [sp, #8]\n    lsr r1, r1, #1\n    str r1, [r4]\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _0223F680: .word ov70_02245AAC"
    );
    #endif
}

void ov70_0223F684(void) {
    /* Original at 0x0223F684 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    ldr r1, _0223F6DC ; =0x000001EE\n    add r5, r0, #0\n    mov r0, #0x3d\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r2, _0223F6DC ; =0x000001EE\n    mov r0, #0\n    add r1, r4, #0\n    bl MIi_CpuClearFast\n    mov r2, #0\n    str r2, [sp]\n    add r0, sp, #8\n    str r0, [sp, #4]\n    mov r0, #0x4a\n    mov r1, #0xc\n    add r3, r5, #0\n    bl GfGfxLoader_LoadFromNarc_GetSizeOut\n    add r7, r0, #0\n    ldr r0, [sp, #8]\n    ldr r5, _0223F6E0 ; =0x00000000\n    lsr r3, r0, #1\n    beq _0223F6D0\n    ldr r0, _0223F6DC ; =0x000001EE\n    add r6, r7, #0\n    mov r1, #1\n    ldrh r2, [r6]\n    cmp r2, r0\n    bhs _0223F6C8\n    strb r1, [r4, r2]\n    add r5, r5, #1\n    add r6, r6, #2\n    cmp r5, r3\n    blo _0223F6C0\n    add r0, r7, #0\n    bl Heap_Free\n    add r0, r4, #0\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _0223F6DC: .word 0x000001EE\n    _0223F6E0: .word 0x00000000"
    );
    #endif
}

void ov70_0223F6E4(void) {
    /* Original at 0x0223F6E4 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x12\n    add r4, r1, #0\n    lsl r0, r0, #4\n    ldrh r0, [r4, r0]\n    bl ov70_0223E490\n    cmp r0, #0\n    beq _0223F718\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl Mon_UpdateShayminForm\n    bl SizeOfStructPokemon\n    add r2, r0, #0\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl MIi_CpuCopyFast\n    b _0223F730\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    mov r1, #0\n    bl BoxMon_UpdateShayminForm\n    mov r0, #0x49\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    add r1, r5, #0\n    bl CopyBoxPokemonToPokemon\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetNamePtr\n    add r1, r0, #0\n    mov r0, #0x43\n    lsl r0, r0, #2\n    add r0, r5, r0\n    mov r2, #8\n    bl CopyU16StringArrayN\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetTrainerID_VisibleHalf\n    mov r1, #0x47\n    lsl r1, r1, #2\n    strh r0, [r5, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    bl WifiHistory_GetPlayerCountry\n    ldr r1, _0223F798 ; =0x0000011E\n    strb r0, [r5, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x18]\n    bl WiFiHistory_GetPlayerRegion\n    ldr r1, _0223F79C ; =0x0000011F\n    strb r0, [r5, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetAvatar\n    mov r1, #0x12\n    lsl r1, r1, #4\n    strb r0, [r5, r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x1c]\n    bl PlayerProfile_GetTrainerGender\n    add r1, r5, #0\n    add r1, #0xf6\n    strb r0, [r1]\n    ldr r0, _0223F7A0 ; =0x00000122\n    mov r1, #GAME_VERSION\n    strb r1, [r5, r0]\n    mov r1, #2\n    add r0, r0, #1\n    strb r1, [r5, r0]\n    pop {r3, r4, r5, pc}\n    nop\n    _0223F798: .word 0x0000011E\n    _0223F79C: .word 0x0000011F\n    _0223F7A0: .word 0x00000122"
    );
    #endif
}

void ov70_0223F7A4(void) {
    /* Original at 0x0223F7A4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov70_0223F6E4\n    mov r0, #0x2e\n    lsl r0, r0, #6\n    add r1, r5, #0\n    ldrh r2, [r4, r0]\n    add r1, #0xec\n    strh r2, [r1]\n    add r1, r0, #2\n    ldrh r2, [r4, r1]\n    add r1, r5, #0\n    add r1, #0xee\n    strh r2, [r1]\n    add r1, r0, #4\n    ldrh r2, [r4, r1]\n    add r1, r5, #0\n    add r1, #0xf0\n    strh r2, [r1]\n    add r1, r0, #6\n    ldrh r2, [r4, r1]\n    add r1, r5, #0\n    add r1, #0xf2\n    strh r2, [r1]\n    add r0, #8\n    ldrh r0, [r4, r0]\n    add r5, #0xf4\n    strh r0, [r5]\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0223F7E4(void) {
    /* Original at 0x0223F7E4 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    str r1, [sp]\n    cmp r2, #0\n    bne _0223F7F4\n    ldr r5, _0223F820 ; =ov70_02245A4C\n    mov r6, #0xc\n    b _0223F7F8\n    ldr r5, _0223F824 ; =ov70_022459F4\n    mov r6, #0xb\n    add r0, r6, #0\n    mov r1, #0x3d\n    bl ListMenuItems_New\n    mov r4, #0\n    str r0, [r7]\n    cmp r6, #0\n    ble _0223F81C\n    ldr r0, [r7]\n    ldr r1, [sp]\n    ldr r2, [r5]\n    add r3, r4, #0\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    add r5, #8\n    cmp r4, r6\n    blt _0223F808\n    add r0, r6, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    _0223F820: .word ov70_02245A4C\n    _0223F824: .word ov70_022459F4"
    );
    #endif
}

void ov70_0223F828(void) {
    /* Original at 0x0223F828 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    cmp r2, #0\n    bne _0223F83E\n    ldr r6, _0223F85C ; =ov70_02245A4C\n    cmp r4, #0xc\n    blt _0223F848\n    bl GF_AssertFail\n    b _0223F848\n    ldr r6, _0223F860 ; =ov70_022459F4\n    cmp r4, #0xb\n    blt _0223F848\n    bl GF_AssertFail\n    lsl r0, r4, #3\n    add r1, r6, r0\n    mov r0, #4\n    ldrsh r0, [r1, r0]\n    strb r0, [r5, #3]\n    mov r0, #6\n    ldrsh r0, [r1, r0]\n    strb r0, [r5, #4]\n    pop {r4, r5, r6, pc}\n    nop\n    _0223F85C: .word ov70_02245A4C\n    _0223F860: .word ov70_022459F4"
    );
    #endif
}

void ov70_0223F864(void) {
    /* Original at 0x0223F864 */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7}\n    cmp r2, #0\n    bne _0223F870\n    ldr r4, _0223F8A0 ; =ov70_02245A4C\n    mov r3, #0xc\n    b _0223F874\n    ldr r4, _0223F8A4 ; =ov70_022459F4\n    mov r3, #0xb\n    mov r2, #0\n    cmp r3, #0\n    ble _0223F898\n    mov r5, #6\n    mov r6, #4\n    ldrsh r7, [r4, r6]\n    cmp r0, r7\n    bne _0223F890\n    ldrsh r7, [r4, r5]\n    cmp r1, r7\n    bne _0223F890\n    add r0, r2, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    add r2, r2, #1\n    add r4, #8\n    cmp r2, r3\n    blt _0223F87E\n    mov r0, #0\n    pop {r4, r5, r6, r7}\n    bx lr\n    nop\n    _0223F8A0: .word ov70_02245A4C\n    _0223F8A4: .word ov70_022459F4"
    );
    #endif
}

void ov70_0223F8A8(void) {
    /* Original at 0x0223F8A8 */
    /* Requires manual decompilation - 18 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #0\n    bne _0223F8B4\n    ldr r1, _0223F8C8 ; =0x000012CC\n    mov r2, #0\n    str r2, [r0, r1]\n    bx lr\n    sub r1, r1, #1\n    cmp r1, #0x82\n    bhs _0223F8C4\n    lsl r2, r1, #1\n    ldr r1, _0223F8CC ; =ov70_02245B5C\n    ldrh r2, [r1, r2]\n    ldr r1, _0223F8C8 ; =0x000012CC\n    str r2, [r0, r1]\n    bx lr\n    nop\n    _0223F8C8: .word 0x000012CC\n    _0223F8CC: .word ov70_02245B5C"
    );
    #endif
}

void ov70_0223F8D0(void) {
    /* Original at 0x0223F8D0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4}\n    ldr r3, _0223F900 ; =ov70_022459C8\n    mov r4, #0\n    ldrb r2, [r3, #1]\n    cmp r0, r2\n    bne _0223F8F0\n    ldr r3, _0223F900 ; =ov70_022459C8\n    lsl r0, r4, #1\n    ldrb r2, [r3, r0]\n    add r0, r4, #1\n    lsl r0, r0, #1\n    str r2, [r1]\n    ldrb r0, [r3, r0]\n    sub r0, r0, r2\n    pop {r3, r4}\n    bx lr\n    add r4, r4, #1\n    add r3, r3, #2\n    cmp r4, #0x16\n    blo _0223F8D6\n    mov r0, #0\n    pop {r3, r4}\n    bx lr\n    nop\n    _0223F900: .word ov70_022459C8"
    );
    #endif
}

void ov70_0223F904(void) {
    /* Original at 0x0223F904 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    str r1, [sp]\n    add r0, r2, #0\n    add r1, sp, #4\n    bl ov70_0223F8D0\n    mov r1, #0x3d\n    add r7, r0, #0\n    bl ListMenuItems_New\n    str r0, [r5]\n    mov r4, #0\n    b _0223F938\n    ldr r2, [sp, #4]\n    ldr r0, [r5]\n    add r3, r2, r4\n    lsl r6, r3, #1\n    ldr r2, _0223F944 ; =ov70_02245B5C\n    ldr r1, [sp]\n    ldrh r2, [r2, r6]\n    add r3, r3, #1\n    bl ListMenuItems_AppendFromMsgData\n    add r4, r4, #1\n    cmp r4, r7\n    blt _0223F922\n    add r0, r7, #0\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0223F944: .word ov70_02245B5C"
    );
    #endif
}

void ov70_0223F948(void) {
    /* Original at 0x0223F948 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r2, #0\n    add r3, r0, #0\n    add r1, r2, #0\n    strh r1, [r3, #4]\n    strh r1, [r3, #0x18]\n    add r2, r2, #1\n    add r3, r3, #2\n    cmp r2, #0xa\n    blt _0223F94E\n    strh r1, [r0]\n    strh r1, [r0, #2]\n    bx lr"
    );
    #endif
}

void ov70_0223F960(void) {
    /* Original at 0x0223F960 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "lsl r1, r1, #1\n    add r0, r0, r1\n    strh r2, [r0, #4]\n    strh r3, [r0, #0x18]\n    bx lr"
    );
    #endif
}

void ov70_0223F96C(void) {
    /* Original at 0x0223F96C */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_0223FC40\n    ldr r0, [r4, #4]\n    bl ov70_0223FA08\n    add r0, r4, #0\n    bl ov70_0223FB60\n    add r0, r4, #0\n    bl ov70_0223FBF4\n    add r0, r4, #0\n    bl ov70_02241358\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    mov r3, #0\n    bl BeginNormalPaletteFade\n    add r0, r4, #0\n    bl ov70_02245124\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_0223F9B4(void) {
    /* Original at 0x0223F9B4 */
    /* Requires manual decompilation - 13 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238E44\n    bl sub_0203A930\n    ldr r1, [r4, #0x2c]\n    add r0, r4, #0\n    lsl r2, r1, #2\n    ldr r1, _0223F9D0 ; =ov70_02246658\n    ldr r1, [r1, r2]\n    blx r1\n    pop {r4, pc}\n    nop\n    _0223F9D0: .word ov70_02246658"
    );
    #endif
}

void ov70_0223F9D4(void) {
    /* Original at 0x0223F9D4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0223FA04 ; =0x0400106C\n    bl GXx_GetMasterBrightness_\n    cmp r0, #0\n    beq _0223F9E8\n    add r0, r4, #0\n    bl ov70_02241380\n    add r0, r4, #0\n    bl ov70_0223FC58\n    add r0, r4, #0\n    bl ov70_0223FC30\n    ldr r0, [r4, #4]\n    bl ov70_0223FB34\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    _0223FA04: .word 0x0400106C"
    );
    #endif
}

void ov70_0223FA08(void) {
    /* Original at 0x0223FA08 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x9c\n    ldr r5, _0223FB1C ; =ov70_02245C60\n    add r3, sp, #0x8c\n    add r4, r0, #0\n    add r2, r3, #0\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    add r0, r2, #0\n    bl SetBothScreensModesAndDisable\n    ldr r5, _0223FB20 ; =ov70_02245CA8\n    add r3, sp, #0x70\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223FB24 ; =ov70_02245C8C\n    add r3, sp, #0x54\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #1\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223FB28 ; =ov70_02245CE0\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #2\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #2\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223FB2C ; =ov70_02245CC4\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0223FB30 ; =ov70_02245C70\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #1\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #0x10\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x9c\n    pop {r4, r5, pc}\n    nop\n    _0223FB1C: .word ov70_02245C60\n    _0223FB20: .word ov70_02245CA8\n    _0223FB24: .word ov70_02245C8C\n    _0223FB28: .word ov70_02245CE0\n    _0223FB2C: .word ov70_02245CC4\n    _0223FB30: .word ov70_02245C70"
    );
    #endif
}

void ov70_0223FB34(void) {
    FreeBgTilemapBuffer(5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 2);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
}

void ov70_0223FB60(void) {
    /* Original at 0x0223FB60 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r4, [r5, #4]\n    mov r0, #0x60\n    mov r1, #0\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    mov r0, #0x64\n    add r2, r1, #0\n    add r3, r1, #0\n    bl GfGfxLoader_GXLoadPal\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [r5]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    ldr r0, _0223FBF0 ; =0x000011DC\n    ldrh r0, [r5, r0]\n    cmp r0, #0\n    bne _0223FBD8\n    mov r0, #4\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #5\n    mov r1, #0\n    bl ToggleBgLayer\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    ldr r0, [r5, #0x20]\n    cmp r0, #9\n    bne _0223FBEA\n    add r0, r5, #0\n    bl ov70_02239C6C\n    add r0, r5, #0\n    bl ov70_02239CF8\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    nop\n    _0223FBF0: .word 0x000011DC"
    );
    #endif
}

void ov70_0223FBF4(void) {
    /* Original at 0x0223FBF4 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _0223FC2C ; =0x00000F18\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _0223FC2C ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _0223FC2C: .word 0x00000F18"
    );
    #endif
}

void ov70_0223FC30(void) {
    /* Original at 0x0223FC30 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223FC38 ; =0x00000F18\n    ldr r3, _0223FC3C ; =RemoveWindow\n    add r0, r0, r1\n    bx r3\n    _0223FC38: .word 0x00000F18\n    _0223FC3C: .word RemoveWindow"
    );
    #endif
}

void ov70_0223FC40(void) {
    String_New(0xb4, 0x3d);
}

void ov70_0223FC58(void) {
    /* Original at 0x0223FC58 */
    /* Requires manual decompilation - 6 instructions */
    #ifdef MWERKS
    asm(
        "ldr r1, _0223FC60 ; =0x00000BBC\n    ldr r3, _0223FC64 ; =String_Delete\n    ldr r0, [r0, r1]\n    bx r3\n    _0223FC60: .word 0x00000BBC\n    _0223FC64: .word String_Delete"
    );
    #endif
}

void ov70_0223FC68(void) {
    /* Original at 0x0223FC68 */
    /* Requires manual decompilation - 100 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r1, [r4, #0x24]\n    cmp r1, #0xc\n    bhi _0223FD4C\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223FC80: ; jump table\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x18\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #2\n    bl ov70_02238D84\n    b _0223FD50\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x18\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #7\n    bl ov70_02238D84\n    b _0223FD50\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x18\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0xc\n    bl ov70_02238D84\n    b _0223FD50\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x18\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0x12\n    bl ov70_02238D84\n    ldr r0, _0223FD60 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    b _0223FD50\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x18\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #0\n    bl ov70_02244FA4\n    mov r0, #0x18\n    str r0, [r4, #0x2c]\n    b _0223FD50\n    ldr r1, _0223FD5C ; =0x00000F0F\n    mov r2, #0x94\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    mov r0, #1\n    str r0, [r4, #0x18]\n    mov r0, #0x1d\n    str r0, [r4, #0x2c]\n    b _0223FD50\n    bl GF_AssertFail\n    add r0, r4, #0\n    bl ov70_02238F64\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0223FD5C: .word 0x00000F0F\n    _0223FD60: .word 0x000011FC"
    );
    #endif
}

void ov70_0223FD64(void) {
    /* Original at 0x0223FD64 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Pokemon_RemoveCapsule\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_02237F64\n    mov r0, #3\n    str r0, [r4, #0x2c]\n    ldr r0, _0223FD94 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #4\n    mov r2, #6\n    bl ov70_02240D44\n    mov r0, #3\n    pop {r4, pc}\n    _0223FD94: .word 0x00001604"
    );
    #endif
}

void ov70_0223FD98(void) {
    /* Original at 0x0223FD98 */
    /* Requires manual decompilation - 62 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0223FE20\n    bl ov70_02237F58\n    ldr r1, _0223FE3C ; =0x00001604\n    mov r2, #0\n    str r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf\n    cmp r1, #0xf\n    bhi _0223FE36\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223FDC2: ; jump table\n    add r0, r4, #0\n    mov r1, #1\n    bl ov70_022409C0\n    ldr r0, [r4]\n    mov r1, #0x2d\n    ldr r0, [r0, #0x28]\n    bl GameStats_Inc\n    mov r0, #0x1e\n    str r0, [r4, #0x2c]\n    b _0223FE36\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _0223FE36\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _0223FE36\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _0223FE36\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _0223FE36\n    bl sub_020399EC\n    b _0223FE36\n    ldr r0, _0223FE3C ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _0223FE36\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223FE3C: .word 0x00001604"
    );
    #endif
}

void ov70_0223FE40(void) {
    ov70_02237FB4(1, 3, 5, 0);
}

void ov70_0223FE60(void) {
    /* Original at 0x0223FE60 */
    /* Requires manual decompilation - 45 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0223FEC6\n    bl ov70_02237F58\n    ldr r1, _0223FEE0 ; =0x00001604\n    mov r2, #0\n    str r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf\n    cmp r1, #0xf\n    bhi _0223FEDC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223FE8A: ; jump table\n    mov r0, #0x21\n    str r0, [r4, #0x2c]\n    b _0223FEDC\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _0223FEDC\n    mov r0, #4\n    bl sub_02039AD8\n    b _0223FEDC\n    bl sub_020399EC\n    b _0223FEDC\n    ldr r0, _0223FEE0 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _0223FEDC\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    _0223FEE0: .word 0x00001604"
    );
    #endif
}

void ov70_0223FEE4(void) {
    /* Original at 0x0223FEE4 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_02238008\n    mov r0, #8\n    str r0, [r4, #0x2c]\n    ldr r0, _0223FF0C ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    mov r1, #9\n    mov r2, #0xb\n    bl ov70_02240D44\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0223FF0C: .word 0x00001604"
    );
    #endif
}

void ov70_0223FF10(void) {
    /* Original at 0x0223FF10 */
    /* Requires manual decompilation - 71 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0223FFA8\n    bl ov70_02237F58\n    ldr r1, _0223FFC4 ; =0x00001604\n    mov r2, #0\n    str r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf\n    cmp r1, #0xf\n    bhi _0223FFBE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0223FF3A: ; jump table\n    ldr r0, _0223FFC8 ; =0x0000025D\n    ldrsb r5, [r4, r0]\n    cmp r5, #0\n    beq _0223FF68\n    mov r0, #0x18\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0202DBA0\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r4, r1\n    add r3, r5, #0\n    bl ov70_02240A7C\n    mov r0, #0x1e\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _0223FFBE\n    bl sub_020399EC\n    b _0223FFBE\n    ldr r0, _0223FFC4 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _0223FFBE\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    nop\n    _0223FFC4: .word 0x00001604\n    _0223FFC8: .word 0x0000025D"
    );
    #endif
}

void ov70_0223FFCC(void) {
    ov70_022380EC(0xa, 3, 0);
}

void ov70_0223FFE8(void) {
    /* Original at 0x0223FFE8 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0224004C\n    bl ov70_02237F58\n    ldr r1, _02240068 ; =0x00001604\n    mov r2, #0\n    add r0, #0xf\n    str r2, [r4, r1]\n    cmp r0, #0xf\n    bhi _02240062\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02240010: ; jump table\n    mov r0, #0x21\n    str r0, [r4, #0x2c]\n    b _02240062\n    mov r0, #3\n    bl sub_02039AD8\n    b _02240062\n    mov r0, #4\n    bl sub_02039AD8\n    b _02240062\n    bl sub_020399EC\n    b _02240062\n    ldr r0, _02240068 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02240062\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02240068: .word 0x00001604"
    );
    #endif
}

void ov70_0224006C(void) {
    /* Original at 0x0224006C */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Pokemon_RemoveCapsule\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #8\n    mul r0, r2\n    add r2, r4, r0\n    mov r0, #0xda\n    lsl r0, r0, #2\n    ldr r0, [r2, r0]\n    ldr r2, _022400B4 ; =0x00000A5C\n    add r1, #0x10\n    add r1, r4, r1\n    add r2, r4, r2\n    bl ov70_02238208\n    add r0, r4, #0\n    mov r1, #0xe\n    mov r2, #0x10\n    bl ov70_02240D44\n    mov r0, #0xd\n    str r0, [r4, #0x2c]\n    ldr r0, _022400B8 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _022400B4: .word 0x00000A5C\n    _022400B8: .word 0x00001604"
    );
    #endif
}

void ov70_022400BC(void) {
    /* Original at 0x022400BC */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0224015E\n    bl ov70_02237F58\n    ldr r2, _02240178 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0xf\n    cmp r2, #0xf\n    bhi _02240174\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _022400E6: ; jump table\n    mov r0, #0x1e\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    bl ov70_022409C0\n    mov r2, #0x12\n    lsl r2, r2, #4\n    ldr r1, _0224017C ; =0x00000A5C\n    ldrh r2, [r4, r2]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov70_02240B9C\n    ldr r0, [r4]\n    ldr r1, _0224017C ; =0x00000A5C\n    ldr r0, [r0, #0x18]\n    add r1, r4, r1\n    bl ov70_02240CE4\n    ldr r1, _0224017C ; =0x00000A5C\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov70_02240500\n    b _02240174\n    str r0, [r4, #0x3c]\n    mov r0, #0x11\n    str r0, [r4, #0x2c]\n    b _02240174\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _02240174\n    str r0, [r4, #0x3c]\n    mov r0, #0x27\n    str r0, [r4, #0x2c]\n    b _02240174\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _02240174\n    bl sub_020399EC\n    b _02240174\n    ldr r0, _02240178 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02240174\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    _02240178: .word 0x00001604\n    _0224017C: .word 0x00000A5C"
    );
    #endif
}

void ov70_02240180(void) {
    ov70_0223826C(0xf, 3, 0);
}

void ov70_0224019C(void) {
    /* Original at 0x0224019C */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _02240200\n    bl ov70_02237F58\n    ldr r1, _0224021C ; =0x00001604\n    mov r2, #0\n    add r0, #0xf\n    str r2, [r4, r1]\n    cmp r0, #0xf\n    bhi _02240216\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022401C4: ; jump table\n    mov r0, #0x21\n    str r0, [r4, #0x2c]\n    b _02240216\n    mov r0, #3\n    bl sub_02039AD8\n    b _02240216\n    mov r0, #4\n    bl sub_02039AD8\n    b _02240216\n    bl sub_020399EC\n    b _02240216\n    ldr r0, _0224021C ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02240216\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _0224021C: .word 0x00001604"
    );
    #endif
}

void ov70_02240220(void) {
    ov70_02238058(0x19, 0x4f, 3, 0);
}

void ov70_02240240(void) {
    /* Original at 0x02240240 */
    /* Requires manual decompilation - 174 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    bne _0224024E\n    b _022403D0\n    bl ov70_02237F58\n    ldr r1, _022403EC ; =0x00001604\n    mov r2, #0\n    str r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf\n    cmp r1, #0x10\n    bhi _022402B0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _0224026C: ; jump table\n    mov r0, #0x1a\n    str r0, [r4, #0x2c]\n    b _022403E6\n    mov r1, #0x4f\n    mov r0, #1\n    lsl r1, r1, #2\n    strh r0, [r4, #0x36]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov70_02240D00\n    cmp r0, #0\n    beq _022402FE\n    cmp r0, #1\n    beq _022402B2\n    cmp r0, #2\n    beq _022402D8\n    b _022403E6\n    add r0, r4, #0\n    bl ov70_02238F80\n    ldr r0, _022403F0 ; =0x00000F0F\n    mov r1, #0xba\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0x1d\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0x1c\n    bl ov70_02238D84\n    b _022403E6\n    add r0, r4, #0\n    bl ov70_02238F80\n    ldr r0, _022403F0 ; =0x00000F0F\n    mov r1, #0xba\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0x23\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0x1c\n    bl ov70_02238D84\n    b _022403E6\n    mov r0, #0x12\n    str r0, [r4, #0x2c]\n    ldr r0, _022403F4 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    b _022403E6\n    strh r2, [r4, #0x36]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0202DB54\n    cmp r0, #0\n    beq _0224036A\n    mov r0, #0x3d\n    bl AllocMonZeroed\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl sub_0202DB64\n    add r0, r5, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _022403F8 ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl BufferBoxMonNickname\n    mov r0, #2\n    str r0, [r4, #0x28]\n    mov r0, #0x22\n    str r0, [r4, #0x2c]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0202DBA0\n    add r2, r0, #0\n    add r0, r4, #0\n    add r1, r5, #0\n    mov r3, #0\n    bl ov70_02240A7C\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202DB5C\n    add r0, r5, #0\n    bl Heap_Free\n    b _022403E6\n    add r0, r4, #0\n    bl ov70_022404D4\n    b _022403E6\n    strh r2, [r4, #0x36]\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0202DB54\n    cmp r0, #0\n    beq _022403E6\n    mov r0, #0x3d\n    bl AllocMonZeroed\n    add r5, r0, #0\n    ldr r0, [r4]\n    add r1, r5, #0\n    ldr r0, [r0]\n    bl sub_0202DB64\n    add r0, r5, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, _022403F8 ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl BufferBoxMonNickname\n    mov r0, #3\n    str r0, [r4, #0x28]\n    mov r0, #0x22\n    str r0, [r4, #0x2c]\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202DB5C\n    add r0, r5, #0\n    bl Heap_Free\n    b _022403E6\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    b _022403E6\n    mov r0, #3\n    mov r1, #1\n    bl ShowCommunicationError\n    b _022403CE\n    ldr r0, _022403EC ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _022403E6\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    nop\n    _022403EC: .word 0x00001604\n    _022403F0: .word 0x00000F0F\n    _022403F4: .word 0x000011FC\n    _022403F8: .word 0x00000B9C"
    );
    #endif
}

void ov70_022403FC(void) {
    ov70_02238E50(0x24, 3, 1, 0);
}

void ov70_02240410(void) {
    ov70_02238008(0x1b, 0x4f, 3, 0);
}

void ov70_02240430(void) {
    /* Original at 0x02240430 */
    /* Requires manual decompilation - 60 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _022404B4\n    bl ov70_02237F58\n    ldr r2, _022404D0 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r2]\n    add r2, r0, #0\n    add r2, #0xf\n    cmp r2, #0xf\n    bhi _022404AC\n    add r2, r2, r2\n    add r2, pc\n    ldrh r2, [r2, #6]\n    lsl r2, r2, #0x10\n    asr r2, r2, #0x10\n    add pc, r2\n    _0224045A: ; jump table\n    add r0, r4, #0\n    bl ov70_02240D54\n    cmp r0, #0\n    beq _02240490\n    mov r0, #0x16\n    str r0, [r4, #0x2c]\n    mov r0, #0\n    strh r0, [r4, #0x36]\n    mov r0, #3\n    pop {r4, pc}\n    mov r0, #1\n    strh r0, [r4, #0x36]\n    b _022404AC\n    strh r1, [r4, #0x36]\n    b _022404AC\n    str r0, [r4, #0x3c]\n    mov r0, #0x26\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    add r0, r4, #0\n    bl ov70_022404D4\n    b _022404CA\n    ldr r0, _022404D0 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _022404CA\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _022404D0: .word 0x00001604"
    );
    #endif
}

void ov70_022404D4(void) {
    /* Original at 0x022404D4 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r1, [r4, #0x1c]\n    cmp r1, #1\n    beq _022404E4\n    cmp r1, #2\n    beq _022404F2\n    pop {r4, pc}\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r0, #0x24\n    str r0, [r4, #0x2c]\n    pop {r4, pc}\n    mov r1, #2\n    mov r2, #3\n    bl ov70_02238E50\n    mov r0, #0x24\n    str r0, [r4, #0x2c]\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02240500(void) {
    /* Original at 0x02240500 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0, #0x28]\n    mov r1, #0x18\n    bl GameStats_AddScore\n    ldr r0, [r5]\n    mov r1, #0x19\n    ldr r0, [r0, #0x28]\n    bl GameStats_Inc\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _0224053C ; =gGameLanguage\n    ldrb r1, [r1]\n    cmp r1, r0\n    beq _0224053A\n    ldr r0, [r5]\n    ldr r0, [r0, #0x20]\n    bl Save_Pokewalker_Get\n    mov r1, #0x14\n    bl Pokewalker_UnlockCourse\n    pop {r3, r4, r5, pc}\n    _0224053C: .word gGameLanguage"
    );
    #endif
}

void ov70_02240540(void) {
    /* Original at 0x02240540 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0]\n    bl sub_0202DBA0\n    ldr r3, _02240594 ; =0x0000025D\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    add r2, r0, #0\n    ldrsb r3, [r4, r3]\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov70_02240A7C\n    ldr r0, [r4]\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    ldr r0, [r0, #0x18]\n    add r1, r4, r1\n    bl ov70_02240CE4\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r4, r1\n    bl ov70_02240500\n    ldr r0, [r4]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202DB5C\n    mov r0, #0x1e\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    mov r1, #0x13\n    mov r2, #0xb\n    bl ov70_02240D44\n    mov r0, #3\n    pop {r4, pc}\n    _02240594: .word 0x0000025D"
    );
    #endif
}

void ov70_02240598(void) {
    ov70_022380A8(0x14, 3, 0);
}

void ov70_022405B4(void) {
    /* Original at 0x022405B4 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0224061C\n    bl ov70_02237F58\n    ldr r1, _02240638 ; =0x00001604\n    mov r2, #0\n    str r2, [r4, r1]\n    add r1, r0, #0\n    add r1, #0xf\n    cmp r1, #0xf\n    bhi _02240632\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022405DE: ; jump table\n    mov r0, #0x21\n    str r0, [r4, #0x2c]\n    b _02240632\n    mov r0, #3\n    bl sub_02039AD8\n    b _02240632\n    str r0, [r4, #0x3c]\n    mov r0, #4\n    bl sub_02039AD8\n    b _02240632\n    bl sub_020399EC\n    b _02240632\n    ldr r0, _02240638 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02240632\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02240638: .word 0x00001604"
    );
    #endif
}

u8 ov70_0224063C(void) {
    return 3;
}

void ov70_02240640(void) {
    ov70_02238E50(0x24, 3, 1, 9, 7);
}

void ov70_02240658(void) {
    ov70_02238E50(0x24, 3, 0, 9, 8);
}

void ov70_02240670(void) {
    ov70_02238E50(0x24, 3, 9);
}

void ov70_02240684(void) {
    ov70_02238E50(0x1e, 3, 0, 9, 0xa);
}

void ov70_0224069C(void) {
    ov70_022380EC(0x17, 3, 0);
}

void ov70_022406B8(void) {
    /* Original at 0x022406B8 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _0224072A\n    bl ov70_02237F58\n    ldr r1, _02240744 ; =0x00001604\n    mov r2, #0\n    add r0, #0xf\n    str r2, [r4, r1]\n    cmp r0, #0xf\n    bhi _02240740\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022406E0: ; jump table\n    add r0, r4, #0\n    bl ov70_022404D4\n    b _02240740\n    add r0, r4, #0\n    bl ov70_022404D4\n    add r0, r4, #0\n    bl ov70_022404D4\n    mov r0, #3\n    bl sub_02039AD8\n    b _02240740\n    mov r0, #4\n    bl sub_02039AD8\n    b _02240740\n    bl sub_020399EC\n    b _02240740\n    ldr r0, _02240744 ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02240740\n    bl sub_020399EC\n    mov r0, #3\n    pop {r4, pc}\n    _02240744: .word 0x00001604"
    );
    #endif
}

void ov70_02240748(void) {
    /* Original at 0x02240748 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _02240788 ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #0x93\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0x24\n    bl ov70_02238D84\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    add r0, r4, #0\n    bl ov70_02238F80\n    add r0, r4, #0\n    bl ov70_02241234\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02240788: .word 0x00000F0F"
    );
    #endif
}

void ov70_0224078C(void) {
    /* Original at 0x0224078C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    ldr r1, [r0, #0x3c]\n    mov r2, #0x9a\n    add r1, #0xf\n    cmp r1, #0xe\n    bhi _022407CC\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022407A4: ; jump table\n    mov r2, #0x1a\n    b _022407CC\n    mov r2, #0x97\n    b _022407CC\n    mov r2, #0x9c\n    ldr r1, _022407E0 ; =0x00000F0F\n    mov r3, #1\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r0, r1]\n    bl ov70_02244FA4\n    pop {r3, pc}\n    nop\n    _022407E0: .word 0x00000F0F"
    );
    #endif
}

u32 ov70_022407E4(void) {
    ov70_0224078C();
    ov70_02238D84(r4, 0x25, 0x24);
    ov70_02238E50(r4, 0, 0);
    ov70_02238F80(r4);
    return 3;
}

u32 ov70_0224080C(void) {
    ov70_0224078C();
    ov70_02238D84(r4, 0x25, 0x24);
    ov70_02238E50(r4, 1, 0);
    ov70_02238F80(r4);
    ov70_02241234(r4);
    return 3;
}

u32 ov70_02240838(void) {
    ov70_02238D84(0x25, 0x1e);
    ov70_02240D44(r4, 0x21, 0x24);
    return 3;
}

void ov70_02240854(void) {
    /* Original at 0x02240854 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl SetAllPCBoxesModified\n    ldr r0, [r4]\n    mov r1, #2\n    ldr r0, [r0, #0x20]\n    bl Save_PrepareForAsyncWrite\n    mov r0, #0x1f\n    str r0, [r4, #0x2c]\n    bl LCRandom\n    mov r1, #0x3c\n    bl _s32_div_f\n    lsl r0, r1, #0x10\n    lsr r0, r0, #0x10\n    add r1, r0, #2\n    mov r0, #0x47\n    lsl r0, r0, #6\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02240884(void) {
    /* Original at 0x02240884 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x47\n    lsl r1, r1, #6\n    ldr r2, [r0, r1]\n    sub r2, r2, #1\n    str r2, [r0, r1]\n    ldr r1, [r0, r1]\n    cmp r1, #0\n    bne _02240898\n    mov r1, #0x20\n    str r1, [r0, #0x2c]\n    mov r0, #3\n    bx lr"
    );
    #endif
}

void ov70_0224089C(void) {
    Save_WriteFileAsync(3);
}

void ov70_022408BC(void) {
    /* Original at 0x022408BC */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl Save_WriteFileAsync\n    cmp r0, #2\n    bne _022408D8\n    ldr r0, _022408DC ; =0x000011D6\n    ldrh r0, [r4, r0]\n    str r0, [r4, #0x2c]\n    add r0, r4, #0\n    bl ov70_02238F80\n    mov r0, #3\n    pop {r4, pc}\n    _022408DC: .word 0x000011D6"
    );
    #endif
}

u32 ov70_022408E0(void) {
    SetAllPCBoxesModified();
    Save_PrepareForAsyncWrite(*((u32*)(r0 + 0x20)), 2);
    *((u32*)(r4 + 0x2c)) = 0x23;
    return 3;
}

void ov70_022408FC(void) {
    /* Original at 0x022408FC */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl Save_WriteFileAsync\n    cmp r0, #2\n    bne _0224093C\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    add r0, r4, #0\n    bl ov70_02238F80\n    ldr r0, _02240944 ; =0x00000F0F\n    mov r1, #0xba\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    ldr r2, [r4, #0x28]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x25\n    mov r2, #0x1c\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02240944: .word 0x00000F0F"
    );
    #endif
}

void ov70_02240948(void) {
    /* Original at 0x02240948 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_02238F80\n    bl sub_0203A914\n    ldr r0, _0224099C ; =0x000011FC\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bne _02240978\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    b _02240990\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #0\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #3\n    add r2, r1, #0\n    add r3, r1, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _0224099C: .word 0x000011FC"
    );
    #endif
}

void ov70_022409A0(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_022409C0(void) {
    /* Original at 0x022409C0 */
    /* Requires manual decompilation - 78 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r6, r1, #0\n    mov r1, #0x12\n    add r5, r0, #0\n    lsl r1, r1, #4\n    ldrh r0, [r5, r1]\n    cmp r0, #0x12\n    beq _02240A1A\n    mov r0, #0x3d\n    bl AllocMonZeroed\n    mov r2, #0x12\n    lsl r2, r2, #4\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldrh r1, [r5, r2]\n    add r2, r2, #2\n    ldrh r2, [r5, r2]\n    ldr r0, [r0, #0xc]\n    bl PCStorage_GetMonByIndexPair\n    add r1, r4, #0\n    bl CopyBoxPokemonToPokemon\n    mov r2, #0x12\n    ldr r0, [r5]\n    lsl r2, r2, #4\n    ldrh r2, [r5, r2]\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl sub_0202DB70\n    mov r2, #0x12\n    lsl r2, r2, #4\n    ldr r0, [r5]\n    ldrh r1, [r5, r2]\n    add r2, r2, #2\n    ldrh r2, [r5, r2]\n    ldr r0, [r0, #0xc]\n    bl PCStorage_DeleteBoxMonByIndexPair\n    add r0, r4, #0\n    bl Heap_Free\n    b _02240A62\n    ldr r0, [r5]\n    add r1, r1, #2\n    ldrh r1, [r5, r1]\n    ldr r0, [r0, #8]\n    bl Party_GetMonByIndex\n    add r4, r0, #0\n    bl Pokemon_RemoveCapsule\n    mov r2, #0x12\n    ldr r0, [r5]\n    lsl r2, r2, #4\n    ldrh r2, [r5, r2]\n    ldr r0, [r0]\n    add r1, r4, #0\n    bl sub_0202DB70\n    ldr r1, _02240A74 ; =0x00000122\n    ldr r0, [r5]\n    ldrh r1, [r5, r1]\n    ldr r0, [r0, #8]\n    bl Party_RemoveMon\n    ldr r0, [r5]\n    ldr r1, _02240A78 ; =0x000001B9\n    ldr r0, [r0, #8]\n    bl Party_HasMon\n    cmp r0, #0\n    bne _02240A62\n    ldr r0, [r5]\n    ldr r0, [r0, #0x20]\n    bl Save_Chatot_Get\n    bl Chatot_Invalidate\n    cmp r6, #0\n    beq _02240A70\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0]\n    bl sub_0202DB5C\n    pop {r4, r5, r6, pc}\n    nop\n    _02240A74: .word 0x00000122\n    _02240A78: .word 0x000001B9"
    );
    #endif
}

void ov70_02240A7C(void) {
    /* Original at 0x02240A7C */
    /* Requires manual decompilation - 124 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, r6, lr}\n    sub sp, #8\n    add r4, r1, #0\n    add r5, r0, #0\n    add r0, r4, #0\n    mov r1, #6\n    mov r2, #0\n    add r6, r3, #0\n    bl GetMonData\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #0x20]\n    bl UpdatePokedexWithReceivedSpecies\n    mov r0, #0x12\n    str r0, [sp, #0x20]\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _02240AB0\n    mov r0, #0\n    str r0, [sp, #0x20]\n    cmp r6, #0\n    beq _02240B2C\n    mov r1, #0x46\n    add r0, sp, #0\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02240B98 ; =0x000001ED\n    cmp r0, r1\n    bne _02240B0E\n    add r0, r4, #0\n    mov r1, #0x6e\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02240AF4\n    add r0, r4, #0\n    mov r1, #0x99\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0x56\n    bne _02240B0E\n    add r0, r4, #0\n    mov r1, #0x6e\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02240B0E\n    ldr r0, [r5]\n    ldr r0, [r0, #0x20]\n    bl Save_VarsFlags_Get\n    add r6, r0, #0\n    bl Save_VarsFlags_GetVar404C\n    cmp r0, #0\n    bne _02240B0E\n    add r0, r6, #0\n    mov r1, #1\n    bl Save_VarsFlags_SetVar404C\n    add r0, r4, #0\n    mov r1, #9\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r4, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl SetMonData\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0]\n    bl ov70_02240CA0\n    ldr r0, [sp, #0x20]\n    cmp r0, #0x12\n    bne _02240B54\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    bl Party_AddMon\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    mov r1, #0x4d\n    mov r2, #0x12\n    lsl r1, r1, #2\n    str r2, [r5, r1]\n    sub r2, r0, #1\n    add r0, r1, #4\n    str r2, [r5, r0]\n    b _02240B84\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, sp, #0x20\n    ldr r0, [r0, #0xc]\n    add r2, sp, #4\n    bl PCStorage_FindFirstEmptySlot\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0, #0xc]\n    bl PCStorage_PlaceMonInBoxFirstEmptySlot\n    mov r0, #0x4d\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r1, [sp, #4]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, [r5]\n    mov r1, #0\n    ldr r0, [r0]\n    bl sub_0202DB5C\n    add sp, #8\n    pop {r4, r5, r6}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    _02240B98: .word 0x000001ED"
    );
    #endif
}

void ov70_02240B9C(void) {
    /* Original at 0x02240B9C */
    /* Requires manual decompilation - 112 instructions */
    #ifdef MWERKS
    asm(
        "push {r0, r1, r2, r3}\n    push {r4, r5, r6, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r0, [r5]\n    add r4, r1, #0\n    ldr r0, [r0, #0x20]\n    bl UpdatePokedexWithReceivedSpecies\n    mov r0, #0x12\n    str r0, [sp, #0x20]\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _02240BC2\n    mov r0, #0\n    str r0, [sp, #0x20]\n    add r0, r4, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    ldr r1, _02240C9C ; =0x000001ED\n    cmp r0, r1\n    bne _02240C16\n    add r0, r4, #0\n    mov r1, #0x6e\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02240BFC\n    add r0, r4, #0\n    mov r1, #0x99\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0x56\n    bne _02240C16\n    add r0, r4, #0\n    mov r1, #0x6e\n    mov r2, #0\n    bl GetMonData\n    cmp r0, #0\n    bne _02240C16\n    ldr r0, [r5]\n    ldr r0, [r0, #0x20]\n    bl Save_VarsFlags_Get\n    add r6, r0, #0\n    bl Save_VarsFlags_GetVar404C\n    cmp r0, #0\n    bne _02240C16\n    add r0, r6, #0\n    mov r1, #1\n    bl Save_VarsFlags_SetVar404C\n    mov r1, #0x46\n    add r0, sp, #0\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r1, #9\n    add r2, sp, #0\n    bl SetMonData\n    add r0, r4, #0\n    mov r1, #0x6f\n    mov r2, #0\n    bl SetMonData\n    ldr r0, [sp, #0x20]\n    cmp r0, #0x12\n    bne _02240C58\n    ldr r0, [r5]\n    add r1, r4, #0\n    ldr r0, [r0, #8]\n    bl Party_AddMon\n    ldr r0, [r5]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    mov r1, #0x4d\n    mov r2, #0x12\n    lsl r1, r1, #2\n    str r2, [r5, r1]\n    sub r2, r0, #1\n    add r0, r1, #4\n    str r2, [r5, r0]\n    b _02240C88\n    mov r0, #0\n    str r0, [sp, #4]\n    ldr r0, [r5]\n    add r1, sp, #0x20\n    ldr r0, [r0, #0xc]\n    add r2, sp, #4\n    bl PCStorage_FindFirstEmptySlot\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5]\n    ldr r1, [sp, #0x20]\n    ldr r0, [r0, #0xc]\n    bl PCStorage_PlaceMonInBoxFirstEmptySlot\n    mov r0, #0x4d\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #2\n    str r1, [r5, r0]\n    ldr r1, [sp, #4]\n    add r0, r0, #4\n    str r1, [r5, r0]\n    ldr r0, [r5]\n    mov r1, #1\n    ldr r0, [r0]\n    bl ov70_02240CA0\n    add sp, #8\n    pop {r4, r5, r6}\n    pop {r3}\n    add sp, #0x10\n    bx r3\n    _02240C9C: .word 0x000001ED"
    );
    #endif
}

void ov70_02240CA0(void) {
    /* Original at 0x02240CA0 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0x1c\n    add r5, r0, #0\n    add r4, r1, #0\n    add r0, sp, #0xc\n    add r1, sp, #0\n    bl ov00_021ECB94\n    ldr r0, [sp, #0x14]\n    ldr r3, [sp, #0x10]\n    lsl r0, r0, #0x18\n    lsr r1, r0, #0x10\n    ldr r0, [sp, #0xc]\n    lsl r3, r3, #0x18\n    ldr r2, [sp, #0x18]\n    lsl r0, r0, #0x18\n    lsr r3, r3, #8\n    orr r0, r3\n    orr r0, r1\n    add r1, r2, #0\n    orr r1, r0\n    cmp r4, #1\n    bne _02240CD8\n    add r0, r5, #0\n    bl sub_0202DB98\n    add sp, #0x1c\n    pop {r4, r5, pc}\n    add r0, r5, #0\n    bl sub_0202DB88\n    add sp, #0x1c\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov70_02240CE4(void) {
    sub_02039FB8();
}

void ov70_02240D00(void) {
    /* Original at 0x02240D00 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    add r0, r1, #0\n    bl ov70_0223E76C\n    cmp r0, #0\n    beq _02240D1E\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _02240D1E\n    mov r0, #2\n    pop {r4, pc}\n    ldr r0, _02240D40 ; =0x000011F8\n    ldrh r1, [r4, r0]\n    mov r0, #0x87\n    lsl r0, r0, #2\n    cmp r1, r0\n    bne _02240D3A\n    ldr r0, [r4]\n    ldr r0, [r0, #8]\n    bl Party_GetCount\n    cmp r0, #6\n    bne _02240D3A\n    mov r0, #1\n    pop {r4, pc}\n    mov r0, #0\n    pop {r4, pc}\n    nop\n    _02240D40: .word 0x000011F8"
    );
    #endif
}

void ov70_02240D44(void) {
    /* Original at 0x02240D44 */
    /* Requires manual decompilation - 7 instructions */
    #ifdef MWERKS
    asm(
        "ldr r3, _02240D50 ; =0x000011D4\n    strh r1, [r0, r3]\n    add r1, r3, #2\n    strh r2, [r0, r1]\n    bx lr\n    nop\n    _02240D50: .word 0x000011D4"
    );
    #endif
}

void ov70_02240D54(void) {
    sub_0202DB54(0, 1);
}

void ov70_02240D74(void) {
    /* Original at 0x02240D74 */
    /* Requires manual decompilation - 160 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x34\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov70_0224127C\n    ldr r2, _02240ED8 ; =0x00000D84\n    add r0, sp, #4\n    add r1, r5, #0\n    add r2, r5, r2\n    mov r3, #2\n    bl ov70_02238B54\n    mov r0, #2\n    str r0, [sp, #0x2c]\n    lsl r0, r0, #0x12\n    str r0, [sp, #0xc]\n    ldr r0, _02240EDC ; =0x00182000\n    str r0, [sp, #0x10]\n    add r0, sp, #4\n    bl Sprite_CreateAffine\n    ldr r1, _02240EE0 ; =0x00000EE4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02240EE0 ; =0x00000EE4\n    mov r1, #2\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    ldr r0, _02240EE0 ; =0x00000EE4\n    mov r1, #7\n    mul r1, r4\n    ldr r0, [r5, r0]\n    add r1, r1, #3\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02240EE0 ; =0x00000EE4\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0\n    ldr r6, _02240EE4 ; =ov70_02245D0A\n    str r0, [sp]\n    add r4, r5, #0\n    mov r7, #0xe\n    add r0, sp, #4\n    bl Sprite_CreateAffine\n    ldr r1, _02240EE8 ; =0x00000EE8\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r0, [r4, r0]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02240EE8 ; =0x00000EE8\n    add r1, r7, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02240EE8 ; =0x00000EE8\n    mov r1, #0\n    ldr r0, [r4, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02240EE8 ; =0x00000EE8\n    ldrh r1, [r6]\n    ldrh r2, [r6, #2]\n    ldr r0, [r4, r0]\n    bl ov70_022410F0\n    ldr r0, _02240EE8 ; =0x00000EE8\n    mov r1, #2\n    ldr r0, [r4, r0]\n    bl Sprite_SetPriority\n    ldr r0, [sp]\n    add r4, r4, #4\n    add r0, r0, #1\n    add r7, r7, #4\n    add r6, r6, #4\n    str r0, [sp]\n    cmp r0, #7\n    blt _02240DD8\n    add r0, sp, #4\n    bl Sprite_CreateAffine\n    ldr r1, _02240EEC ; =0x00000F0C\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, _02240EEC ; =0x00000F0C\n    mov r1, #0x2b\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02240EEC ; =0x00000F0C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    ldr r0, _02240EEC ; =0x00000F0C\n    mov r1, #0x80\n    ldr r0, [r5, r0]\n    mov r2, #0x56\n    bl ov70_022410F0\n    ldr r0, _02240EEC ; =0x00000F0C\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetPriority\n    add r0, sp, #4\n    bl Sprite_CreateAffine\n    mov r1, #0xf1\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0x2a\n    bl Sprite_SetAnimCtrlSeq\n    mov r2, #0xf1\n    lsl r2, r2, #4\n    ldr r0, [r5, r2]\n    add r2, r2, #4\n    ldr r3, [r5, r2]\n    mov r2, #0x6a\n    lsl r2, r2, #2\n    mov r1, #0x37\n    add r2, r3, r2\n    bl ov70_02238F9C\n    mov r0, #0xf1\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r7, _02240EF0 ; =0x0000120C\n    mov r4, #0\n    add r6, r7, #2\n    ldr r0, _02240EE0 ; =0x00000EE4\n    ldr r0, [r5, r0]\n    bl Sprite_GetMatrixPtr\n    ldr r1, [r0]\n    add r4, r4, #1\n    asr r2, r1, #0xb\n    lsr r2, r2, #0x14\n    add r2, r1, r2\n    asr r1, r2, #0xc\n    strh r1, [r5, r7]\n    ldr r1, [r0, #4]\n    asr r0, r1, #0xb\n    lsr r0, r0, #0x14\n    add r0, r1, r0\n    asr r0, r0, #0xc\n    strh r0, [r5, r6]\n    add r5, r5, #4\n    cmp r4, #8\n    blt _02240EAA\n    add sp, #0x34\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02240ED8: .word 0x00000D84\n    _02240EDC: .word 0x00182000\n    _02240EE0: .word 0x00000EE4\n    _02240EE4: .word ov70_02245D0A\n    _02240EE8: .word 0x00000EE8\n    _02240EEC: .word 0x00000F0C\n    _02240EF0: .word 0x0000120C"
    );
    #endif
}

void ov70_02240EF4(void) {
    /* Original at 0x02240EF4 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    bl ov70_02240D74\n    ldr r0, _02240F30 ; =ov70_02240F58\n    mov r1, #0x10\n    mov r2, #5\n    mov r3, #0x3d\n    bl CreateSysTaskAndEnvironment\n    ldr r1, _02240F34 ; =0x000011D8\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    bl SysTask_GetData\n    mov r1, #0\n    add r2, r1, #0\n    str r1, [r0]\n    sub r2, #0x28\n    str r2, [r0, #4]\n    str r4, [r0, #8]\n    str r5, [r0, #0xc]\n    bl ov70_02240F3C\n    ldr r0, _02240F38 ; =0x0000062E\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    nop\n    _02240F30: .word ov70_02240F58\n    _02240F34: .word 0x000011D8\n    _02240F38: .word 0x0000062E"
    );
    #endif
}

void ov70_02240F3C(void) {
    /* Original at 0x02240F3C */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "add r3, r0, #0\n    ldr r2, [r3, #0xc]\n    ldr r0, _02240F50 ; =0x00000EE4\n    ldr r3, [r3, #8]\n    ldr r0, [r2, r0]\n    mov r2, #7\n    mul r2, r3\n    ldr r3, _02240F54 ; =sub_020248F0\n    add r1, r1, r2\n    bx r3\n    _02240F50: .word 0x00000EE4\n    _02240F54: .word Sprite_SetAnimCtrlSeq"
    );
    #endif
}

void ov70_02240F58(void) {
    /* Original at 0x02240F58 */
    /* Requires manual decompilation - 72 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r4, r1, #0\n    add r6, r0, #0\n    ldr r0, [r4]\n    ldr r5, [r4, #0xc]\n    cmp r0, #3\n    bhi _02240FF6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02240F72: ; jump table\n    ldr r0, [r4, #4]\n    cmp r0, #0xa0\n    ble _02240F8E\n    mov r0, #0xa0\n    str r0, [r4, #4]\n    mov r1, #1\n    add r0, r4, #0\n    str r1, [r4]\n    bl ov70_02240F3C\n    ldr r0, [r4, #4]\n    mov r1, #0x80\n    add r2, r0, #5\n    ldr r0, _02240FF8 ; =0x00000EE4\n    str r2, [r4, #4]\n    ldr r0, [r5, r0]\n    bl ov70_022410F0\n    pop {r4, r5, r6, pc}\n    ldr r0, _02240FF8 ; =0x00000EE4\n    ldr r0, [r5, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _02240FF6\n    add r0, r4, #0\n    mov r1, #2\n    bl ov70_02240F3C\n    mov r0, #2\n    str r0, [r4]\n    pop {r4, r5, r6, pc}\n    ldr r0, [r4, #4]\n    cmp r0, #0x8a\n    bgt _02240FD0\n    mov r0, #0x8a\n    str r0, [r4, #4]\n    mov r1, #3\n    add r0, r4, #0\n    str r1, [r4]\n    bl ov70_02240F3C\n    b _02240FD4\n    sub r0, r0, #2\n    str r0, [r4, #4]\n    ldr r0, _02240FF8 ; =0x00000EE4\n    ldr r2, [r4, #4]\n    ldr r0, [r5, r0]\n    mov r1, #0x80\n    bl ov70_022410F0\n    pop {r4, r5, r6, pc}\n    ldr r0, _02240FFC ; =0x0000060C\n    bl PlaySE\n    ldr r1, [r4, #0xc]\n    ldr r0, _02241000 ; =0x000011DC\n    mov r2, #1\n    strh r2, [r1, r0]\n    add r0, r6, #0\n    bl DestroySysTaskAndEnvironment\n    pop {r4, r5, r6, pc}\n    _02240FF8: .word 0x00000EE4\n    _02240FFC: .word 0x0000060C\n    _02241000: .word 0x000011DC"
    );
    #endif
}

void ov70_02241004(void) {
    /* Original at 0x02241004 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r0, _0224103C ; =ov70_02241048\n    mov r1, #0x10\n    mov r2, #5\n    mov r3, #0x3d\n    bl CreateSysTaskAndEnvironment\n    ldr r1, _02241040 ; =0x000011D8\n    str r0, [r5, r1]\n    ldr r0, [r5, r1]\n    bl SysTask_GetData\n    mov r1, #0\n    str r1, [r0]\n    mov r1, #0x8a\n    str r1, [r0, #4]\n    str r4, [r0, #8]\n    mov r1, #5\n    str r5, [r0, #0xc]\n    bl ov70_02240F3C\n    ldr r0, _02241044 ; =0x0000060D\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    nop\n    _0224103C: .word ov70_02241048\n    _02241040: .word 0x000011D8\n    _02241044: .word 0x0000060D"
    );
    #endif
}

void ov70_02241048(void) {
    /* Original at 0x02241048 */
    /* Requires manual decompilation - 70 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    ldr r1, [r4]\n    ldr r5, [r4, #0xc]\n    cmp r1, #3\n    bhi _022410E0\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02241060: ; jump table\n    ldr r0, [r4, #4]\n    cmp r0, #0xa0\n    ble _0224107E\n    mov r0, #0xa0\n    str r0, [r4, #4]\n    mov r0, #1\n    str r0, [r4]\n    add r0, r4, #0\n    mov r1, #6\n    bl ov70_02240F3C\n    ldr r0, [r4, #4]\n    mov r1, #0x80\n    add r2, r0, #2\n    ldr r0, _022410E4 ; =0x00000EE4\n    str r2, [r4, #4]\n    ldr r0, [r5, r0]\n    bl ov70_022410F0\n    pop {r3, r4, r5, pc}\n    ldr r0, _022410E4 ; =0x00000EE4\n    ldr r0, [r5, r0]\n    bl Sprite_IsAnimated\n    cmp r0, #0\n    bne _022410E0\n    add r0, r4, #0\n    mov r1, #0\n    bl ov70_02240F3C\n    mov r0, #2\n    str r0, [r4]\n    ldr r0, _022410E8 ; =0x0000062F\n    bl PlaySE\n    pop {r3, r4, r5, pc}\n    mov r0, #0x13\n    ldr r1, [r4, #4]\n    mvn r0, r0\n    cmp r1, r0\n    bge _022410C4\n    mov r1, #3\n    add r0, r4, #0\n    str r1, [r4]\n    bl ov70_02240F3C\n    ldr r0, [r4, #4]\n    mov r1, #0x80\n    sub r2, r0, #5\n    ldr r0, _022410E4 ; =0x00000EE4\n    str r2, [r4, #4]\n    ldr r0, [r5, r0]\n    bl ov70_022410F0\n    pop {r3, r4, r5, pc}\n    ldr r1, _022410EC ; =0x000011DC\n    mov r2, #1\n    strh r2, [r5, r1]\n    bl DestroySysTaskAndEnvironment\n    pop {r3, r4, r5, pc}\n    nop\n    _022410E4: .word 0x00000EE4\n    _022410E8: .word 0x0000062F\n    _022410EC: .word 0x000011DC"
    );
    #endif
}

void ov70_022410F0(void) {
    /* Original at 0x022410F0 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    add r5, r2, #0\n    cmp r1, #0\n    ble _0224110E\n    lsl r0, r1, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _0224111C\n    lsl r0, r1, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    sub r5, #8\n    str r0, [sp]\n    cmp r5, #0\n    ble _0224113A\n    lsl r0, r5, #0xc\n    bl _fflt\n    add r1, r0, #0\n    mov r0, #0x3f\n    lsl r0, r0, #0x18\n    bl _fadd\n    b _02241148\n    lsl r0, r5, #0xc\n    bl _fflt\n    mov r1, #0x3f\n    lsl r1, r1, #0x18\n    bl _fsub\n    bl _ffix\n    mov r1, #1\n    lsl r1, r1, #0x14\n    add r0, r0, r1\n    str r0, [sp, #4]\n    mov r0, #0\n    str r0, [sp, #8]\n    add r0, r4, #0\n    add r1, sp, #0\n    bl Sprite_SetMatrix\n    add sp, #0xc\n    pop {r4, r5, pc}"
    );
    #endif
}

void ov70_02241164(void) {
    TouchscreenHitbox_FindRectAtTouchNew(0, 0);
}

void ov70_02241184(void) {
    /* Original at 0x02241184 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    str r2, [sp, #0xc]\n    add r0, r1, #0\n    beq _0224119E\n    add r0, r2, #0\n    cmp r0, #1\n    bne _0224119E\n    ldr r0, _02241218 ; =0x0000064E\n    bl PlaySE\n    ldr r4, [sp, #4]\n    mov r0, #0xe\n    mov r6, #0\n    str r0, [sp, #0x10]\n    add r5, r4, #0\n    mov r7, #0x11\n    ldr r0, [sp, #8]\n    cmp r6, r0\n    bge _022411F4\n    ldr r0, _0224121C ; =0x00000356\n    ldr r1, [sp, #4]\n    ldrb r0, [r4, r0]\n    mov r3, #0xe\n    add r2, r1, #0\n    str r0, [sp]\n    ldr r0, _02241220 ; =0x000011E4\n    lsl r3, r3, #6\n    ldr r0, [r1, r0]\n    ldr r1, _02241224 ; =0x000011EC\n    ldrb r3, [r4, r3]\n    ldr r1, [r2, r1]\n    add r2, r6, #0\n    bl ov70_022412C8\n    ldr r0, [sp, #0xc]\n    cmp r0, #0\n    ldr r0, _02241228 ; =0x00000EE8\n    beq _022411E0\n    ldr r0, [r5, r0]\n    ldr r1, [sp, #0x10]\n    bl Sprite_SetAnimCtrlSeq\n    b _022411E8\n    ldr r0, [r5, r0]\n    add r1, r7, #0\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, _02241228 ; =0x00000EE8\n    mov r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    b _022411FE\n    ldr r0, _02241228 ; =0x00000EE8\n    mov r1, #0\n    ldr r0, [r5, r0]\n    bl Sprite_SetDrawFlag\n    mov r0, #0x49\n    lsl r0, r0, #2\n    add r4, r4, r0\n    ldr r0, [sp, #0x10]\n    add r6, r6, #1\n    add r0, r0, #4\n    str r0, [sp, #0x10]\n    add r5, r5, #4\n    add r7, r7, #4\n    cmp r6, #7\n    blt _022411AA\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    _02241218: .word 0x0000064E\n    _0224121C: .word 0x00000356\n    _02241220: .word 0x000011E4\n    _02241224: .word 0x000011EC\n    _02241228: .word 0x00000EE8"
    );
    #endif
}

void ov70_0224122C(void) {
    /* Original at 0x0224122C */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "lsl r0, r0, #2\n    add r0, #0xe\n    bx lr"
    );
    #endif
}

void ov70_02241234(void) {
    /* Original at 0x02241234 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _02241278 ; =0x00000EE8\n    add r5, r0, #0\n    mov r4, #0\n    ldr r0, [r5, r7]\n    bl Sprite_GetDrawFlag\n    cmp r0, #0\n    beq _0224126E\n    ldr r0, _02241278 ; =0x00000EE8\n    ldr r0, [r5, r0]\n    bl Sprite_GetAnimationNumber\n    add r6, r0, #0\n    add r0, r4, #0\n    bl ov70_0224122C\n    add r0, r0, #1\n    cmp r6, r0\n    beq _0224126E\n    add r0, r4, #0\n    bl ov70_0224122C\n    add r1, r0, #0\n    ldr r0, _02241278 ; =0x00000EE8\n    add r1, r1, #1\n    ldr r0, [r5, r0]\n    bl Sprite_SetAnimCtrlSeq\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #7\n    blt _0224123C\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241278: .word 0x00000EE8"
    );
    #endif
}

void ov70_0224127C(void) {
    /* Original at 0x0224127C */
    /* Requires manual decompilation - 32 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r2, _022412BC ; =0x000011EC\n    add r4, r0, #0\n    mov r0, #0x54\n    mov r1, #0xb\n    add r2, r4, r2\n    mov r3, #0x3d\n    bl GfGfxLoader_GetPlttData\n    ldr r3, _022412C0 ; =0x000011E8\n    mov r1, #0xc\n    str r0, [r4, r3]\n    mov r0, #0x3d\n    sub r3, r3, #4\n    str r0, [sp]\n    mov r0, #0x54\n    mov r2, #1\n    add r3, r4, r3\n    bl GfGfxLoader_GetCharData\n    ldr r1, _022412C4 ; =0x000011E0\n    str r0, [r4, r1]\n    add r0, r1, #4\n    mov r1, #2\n    ldr r0, [r4, r0]\n    lsl r1, r1, #0xe\n    bl DC_FlushRange\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _022412BC: .word 0x000011EC\n    _022412C0: .word 0x000011E8\n    _022412C4: .word 0x000011E0"
    );
    #endif
}

void ov70_022412C8(void) {
    /* Original at 0x022412C8 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r7, r0, #0\n    add r6, r1, #0\n    ldr r0, [sp, #0x18]\n    add r1, r3, #0\n    add r5, r2, #0\n    bl SpriteToUnionRoomAvatarIdx\n    add r4, r0, #0\n    mov r0, #6\n    lsl r0, r0, #8\n    ldr r1, [r7, #0x14]\n    mul r0, r4\n    add r0, r1, r0\n    ldr r1, _02241304 ; =ov70_02245CFC\n    lsl r2, r5, #1\n    ldrh r1, [r1, r2]\n    mov r2, #2\n    ldr r6, [r6, #0xc]\n    lsl r2, r2, #8\n    bl GXS_LoadOBJ\n    lsl r0, r4, #5\n    add r1, r5, #2\n    add r0, r6, r0\n    lsl r1, r1, #5\n    mov r2, #0x20\n    bl GXS_LoadOBJPltt\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241304: .word ov70_02245CFC"
    );
    #endif
}

void ov70_02241308(void) {
    /* Original at 0x02241308 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02241328 ; =0x000011DC\n    ldrh r1, [r4, r0]\n    cmp r1, #0\n    beq _02241324\n    add r0, #0xc\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    ldr r0, _0224132C ; =0x000011E0\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    pop {r4, pc}\n    nop\n    _02241328: .word 0x000011DC\n    _0224132C: .word 0x000011E0"
    );
    #endif
}

void ov70_02241330(void) {
    /* Original at 0x02241330 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    lsl r4, r1, #2\n    ldr r1, _0224134C ; =0x00000F0C\n    ldr r3, _02241350 ; =ov70_02245D0C\n    ldr r0, [r0, r1]\n    ldr r1, _02241354 ; =ov70_02245D0A\n    ldrh r3, [r3, r4]\n    ldrh r1, [r1, r4]\n    add r3, #0x20\n    add r2, r2, r3\n    bl ov70_022410F0\n    pop {r4, pc}\n    nop\n    _0224134C: .word 0x00000F0C\n    _02241350: .word ov70_02245D0C\n    _02241354: .word ov70_02245D0A"
    );
    #endif
}

void ov70_02241358(void) {
    /* Original at 0x02241358 */
    /* Requires manual decompilation - 17 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _02241378 ; =0x0000120C\n    add r5, r0, #0\n    mov r4, #0\n    add r6, r7, #2\n    ldr r0, _0224137C ; =0x00000EE4\n    ldrsh r1, [r5, r7]\n    ldrsh r2, [r5, r6]\n    ldr r0, [r5, r0]\n    bl ov70_02238F9C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _02241362\n    pop {r3, r4, r5, r6, r7, pc}\n    _02241378: .word 0x0000120C\n    _0224137C: .word 0x00000EE4"
    );
    #endif
}

void ov70_02241380(void) {
    /* Original at 0x02241380 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r7, _022413A4 ; =0x0000120C\n    add r5, r0, #0\n    mov r4, #0\n    add r6, r7, #2\n    ldr r0, _022413A8 ; =0x00000EE4\n    ldrsh r2, [r5, r6]\n    ldrsh r1, [r5, r7]\n    ldr r0, [r5, r0]\n    add r2, #0x20\n    bl ov70_02238F9C\n    add r4, r4, #1\n    add r5, r5, #4\n    cmp r4, #8\n    blt _0224138A\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _022413A4: .word 0x0000120C\n    _022413A8: .word 0x00000EE4"
    );
    #endif
}

void ov70_022413AC(void) {
    /* Original at 0x022413AC */
    /* Requires manual decompilation - 85 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r3, #0x12\n    add r4, r0, #0\n    lsl r3, r3, #4\n    ldr r1, [r4]\n    ldrh r2, [r4, r3]\n    add r3, r3, #2\n    ldr r0, [r1, #8]\n    ldrh r3, [r4, r3]\n    ldr r1, [r1, #0xc]\n    bl ov70_0223E49C\n    add r1, r4, #0\n    add r1, #0xbc\n    str r0, [r1]\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0xcd\n    strb r1, [r0]\n    add r0, r4, #0\n    mov r2, #1\n    add r0, #0xcf\n    strb r2, [r0]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0xd0\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0xce\n    strb r2, [r0]\n    add r0, r4, #0\n    add r0, #0xd4\n    strh r1, [r0]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl sub_02088288\n    add r1, r4, #0\n    add r1, #0xe8\n    str r0, [r1]\n    ldr r0, [r4]\n    ldr r1, [r0, #0x30]\n    add r0, r4, #0\n    add r0, #0xd8\n    str r1, [r0]\n    ldr r0, [r4]\n    ldr r1, [r0, #0x24]\n    add r0, r4, #0\n    add r0, #0xc0\n    str r1, [r0]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl Save_SpecialRibbons_Get\n    add r1, r4, #0\n    add r1, #0xdc\n    str r0, [r1]\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl sub_0208828C\n    add r1, r4, #0\n    add r1, #0xf0\n    str r0, [r1]\n    add r0, r4, #0\n    ldr r1, _02241460 ; =ov70_02245D48\n    add r0, #0xbc\n    bl sub_02089D40\n    ldr r1, [r4]\n    add r0, r4, #0\n    ldr r1, [r1, #0x1c]\n    add r0, #0xbc\n    bl sub_0208AD34\n    add r1, r4, #0\n    ldr r0, _02241464 ; =gOverlayTemplate_PokemonSummary\n    add r1, #0xbc\n    mov r2, #0x3d\n    bl OverlayManager_New\n    add r1, r4, #0\n    add r1, #0xb8\n    str r0, [r1]\n    mov r0, #0x45\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #2\n    pop {r4, pc}\n    _02241460: .word ov70_02245D48\n    _02241464: .word gOverlayTemplate_PokemonSummary"
    );
    #endif
}

void ov70_02241468(void) {
    /* Original at 0x02241468 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    mov r4, #3\n    bl OverlayManager_Run\n    cmp r0, #0\n    beq _02241490\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl OverlayManager_Delete\n    ldr r2, [r5, #0x24]\n    add r0, r5, #0\n    mov r1, #5\n    bl ov70_02238E50\n    mov r4, #4\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02241494(void) {
    ov70_02238E58();
}

void ov70_022414A0(void) {
    /* Original at 0x022414A0 */
    /* Requires manual decompilation - 186 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x3d\n    bl AllocMonZeroed\n    ldr r1, _02241640 ; =0x000011F0\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x24]\n    cmp r0, #0xa\n    bls _022414B6\n    b _02241618\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022414C2: ; jump table\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xf8\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xf8\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0xfc\n    str r1, [r0]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_0224182C\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #0x30\n    str r2, [r4, r0]\n    add r0, r1, #0\n    mov r2, #3\n    sub r0, #0x2c\n    str r2, [r4, r0]\n    mov r0, #2\n    sub r1, #0x28\n    str r0, [r4, r1]\n    b _02241618\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    add r0, r4, #0\n    add r0, #0xfc\n    ldr r1, [r0]\n    add r0, r4, #0\n    add r0, #0xf8\n    str r1, [r0]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_0224182C\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #0x30\n    str r2, [r4, r0]\n    add r0, r1, #0\n    mov r2, #3\n    sub r0, #0x2c\n    str r2, [r4, r0]\n    mov r0, #4\n    sub r1, #0x28\n    str r0, [r4, r1]\n    b _02241618\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    ldr r0, [r4]\n    ldr r1, _02241640 ; =0x000011F0\n    ldr r0, [r0]\n    ldr r1, [r4, r1]\n    bl sub_0202DB64\n    ldr r0, _02241640 ; =0x000011F0\n    ldr r0, [r4, r0]\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xf8\n    str r0, [r1]\n    mov r0, #0x4f\n    lsl r0, r0, #2\n    add r0, r4, r0\n    bl ov70_0224182C\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #0x30\n    str r2, [r4, r0]\n    add r0, r1, #0\n    mov r2, #3\n    sub r0, #0x2c\n    str r2, [r4, r0]\n    mov r0, #1\n    sub r1, #0x28\n    str r0, [r4, r1]\n    b _02241618\n    ldr r0, [r4]\n    ldr r1, [r4, r1]\n    ldr r0, [r0]\n    bl sub_0202DB64\n    ldr r0, _02241640 ; =0x000011F0\n    ldr r0, [r4, r0]\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xf8\n    str r0, [r1]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r4, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    mul r0, r1\n    add r0, r2, r0\n    bl Mon_GetBoxMon\n    add r1, r4, #0\n    add r1, #0xfc\n    str r0, [r1]\n    mov r0, #0x26\n    lsl r0, r0, #4\n    add r2, r4, r0\n    mov r0, #0x4b\n    lsl r0, r0, #2\n    ldr r1, [r4, r0]\n    sub r0, #8\n    mul r0, r1\n    add r0, r2, r0\n    bl ov70_0224182C\n    mov r1, #0x13\n    lsl r1, r1, #4\n    str r0, [r4, r1]\n    add r0, r1, #0\n    ldr r2, [r4, r1]\n    sub r0, #0x30\n    str r2, [r4, r0]\n    add r0, r1, #0\n    mov r2, #3\n    sub r0, #0x2c\n    str r2, [r4, r0]\n    mov r0, #1\n    sub r1, #0x28\n    str r0, [r4, r1]\n    ldr r0, [r4]\n    mov r2, #0x3d\n    ldr r1, [r0, #0x24]\n    mov r0, #0x43\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    add r1, r4, #0\n    ldr r0, _02241644 ; =ov70_02245D50\n    add r1, #0xf8\n    bl OverlayManager_New\n    add r1, r4, #0\n    add r1, #0xb8\n    str r0, [r1]\n    mov r0, #0x45\n    mov r1, #1\n    lsl r0, r0, #2\n    str r1, [r4, r0]\n    mov r0, #2\n    pop {r4, pc}\n    _02241640: .word 0x000011F0\n    _02241644: .word ov70_02245D50"
    );
    #endif
}

void ov70_02241648(void) {
    /* Original at 0x02241648 */
    /* Requires manual decompilation - 198 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r5, r0, #0\n    ldr r0, [r5, #0x2c]\n    mov r4, #3\n    cmp r0, #0\n    beq _0224165E\n    cmp r0, #1\n    bne _0224165C\n    b _022417C8\n    b _022417FE\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl OverlayManager_Run\n    cmp r0, #0\n    bne _0224166E\n    b _022417FE\n    add r0, r5, #0\n    add r0, #0xb8\n    ldr r0, [r0]\n    bl OverlayManager_Delete\n    ldr r1, [r5, #0x24]\n    cmp r1, #9\n    bne _022416E8\n    add r0, r5, #0\n    bl ov70_02241868\n    mov r1, #6\n    mov r2, #0\n    add r6, r0, #0\n    bl GetMonData\n    add r3, r0, #0\n    add r0, sp, #0x28\n    lsl r3, r3, #0x10\n    str r0, [sp]\n    mov r0, #0\n    add r1, r6, #0\n    mov r2, #1\n    lsr r3, r3, #0x10\n    bl GetMonEvolution\n    add r2, r0, #0\n    beq _022416DA\n    ldr r3, [r5]\n    add r1, r6, #0\n    ldr r0, [r3, #0x38]\n    str r0, [sp]\n    ldr r0, [r3, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r3, #0x2c]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x28]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x28]\n    str r0, [sp, #0x10]\n    mov r0, #4\n    str r0, [sp, #0x14]\n    mov r0, #0x3d\n    str r0, [sp, #0x18]\n    ldr r3, [r3, #0x24]\n    mov r0, #0\n    bl sub_02075A7C\n    mov r1, #0x11\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [r5, #0x2c]\n    b _022417FE\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r4, #4\n    b _022417FE\n    cmp r1, #8\n    beq _022416F0\n    cmp r1, #0xa\n    bne _022417BA\n    add r0, r5, #0\n    bl ov70_02241868\n    add r6, r0, #0\n    mov r0, #0x3d\n    bl AllocMonZeroed\n    add r7, r0, #0\n    ldr r0, [r5]\n    add r1, r7, #0\n    ldr r0, [r0]\n    bl sub_0202DB64\n    add r0, r6, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    str r0, [sp, #0x1c]\n    add r0, r7, #0\n    mov r1, #5\n    mov r2, #0\n    bl GetMonData\n    ldr r1, [sp, #0x1c]\n    cmp r1, r0\n    bne _02241742\n    mov r1, #0\n    add r0, r6, #0\n    add r2, r1, #0\n    bl GetMonData\n    mov r1, #0\n    str r0, [sp, #0x20]\n    add r0, r7, #0\n    add r2, r1, #0\n    bl GetMonData\n    ldr r1, [sp, #0x20]\n    cmp r1, r0\n    beq _022417A6\n    add r0, r6, #0\n    mov r1, #6\n    mov r2, #0\n    bl GetMonData\n    add r3, r0, #0\n    add r0, sp, #0x24\n    lsl r3, r3, #0x10\n    str r0, [sp]\n    mov r0, #0\n    add r1, r6, #0\n    mov r2, #1\n    lsr r3, r3, #0x10\n    bl GetMonEvolution\n    add r2, r0, #0\n    beq _02241798\n    ldr r3, [r5]\n    add r1, r6, #0\n    ldr r0, [r3, #0x38]\n    str r0, [sp]\n    ldr r0, [r3, #0x10]\n    str r0, [sp, #4]\n    ldr r0, [r3, #0x2c]\n    str r0, [sp, #8]\n    ldr r0, [r3, #0x28]\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x24]\n    str r0, [sp, #0x10]\n    mov r0, #4\n    str r0, [sp, #0x14]\n    mov r0, #0x3d\n    str r0, [sp, #0x18]\n    ldr r3, [r3, #0x24]\n    mov r0, #0\n    bl sub_02075A7C\n    mov r1, #0x11\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #1\n    str r0, [r5, #0x2c]\n    b _022417B2\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r4, #4\n    b _022417B2\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r4, #4\n    add r0, r7, #0\n    bl Heap_Free\n    b _022417FE\n    add r0, r5, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r4, #4\n    b _022417FE\n    mov r0, #0x11\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_02075D3C\n    cmp r0, #0\n    beq _022417FE\n    mov r0, #0x11\n    lsl r0, r0, #4\n    ldr r0, [r5, r0]\n    bl sub_02075D4C\n    add r0, r5, #0\n    bl ov70_022418A4\n    mov r2, #1\n    lsl r2, r2, #0x1a\n    ldr r1, [r2]\n    ldr r0, _02241804 ; =0xFFFF1FFF\n    and r0, r1\n    str r0, [r2]\n    add r0, r5, #0\n    mov r1, #7\n    mov r2, #0xc\n    bl ov70_02238E50\n    mov r4, #4\n    add r0, r4, #0\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    _02241804: .word 0xFFFF1FFF"
    );
    #endif
}

void ov70_02241808(void) {
    /* Original at 0x02241808 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02241828 ; =0x000011F0\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    mov r0, #0x13\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    bl Heap_Free\n    add r0, r4, #0\n    bl ov70_02238E58\n    mov r0, #1\n    pop {r4, pc}\n    _02241828: .word 0x000011F0"
    );
    #endif
}

void ov70_0224182C(void) {
    /* Original at 0x0224182C */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    mov r0, #0x3d\n    bl PlayerProfile_New\n    add r4, r0, #0\n    bl PlayerProfile_Init\n    mov r1, #0x43\n    lsl r1, r1, #2\n    add r0, r4, #0\n    add r1, r5, r1\n    bl Save_Profile_PlayerName_Set\n    ldr r1, _02241860 ; =0x00000122\n    add r0, r4, #0\n    ldrb r1, [r5, r1]\n    bl PlayerProfile_SetVersion\n    ldr r1, _02241864 ; =0x00000123\n    add r0, r4, #0\n    ldrb r1, [r5, r1]\n    bl PlayerProfile_SetLanguage\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}\n    _02241860: .word 0x00000122\n    _02241864: .word 0x00000123"
    );
    #endif
}

void ov70_02241868(void) {
    /* Original at 0x02241868 */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #9\n    bne _02241882\n    mov r1, #0x26\n    lsl r1, r1, #4\n    add r2, r0, r1\n    mov r1, #0x4b\n    lsl r1, r1, #2\n    ldr r0, [r0, r1]\n    sub r1, #8\n    mul r1, r0\n    add r0, r2, r1\n    pop {r3, pc}\n    cmp r1, #0xa\n    bne _0224188E\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    add r0, r0, r1\n    pop {r3, pc}\n    cmp r1, #8\n    bne _0224189A\n    mov r1, #0x4f\n    lsl r1, r1, #2\n    add r0, r0, r1\n    pop {r3, pc}\n    bl GF_AssertFail\n    mov r0, #0\n    pop {r3, pc}"
    );
    #endif
}

void ov70_022418A4(void) {
    /* Original at 0x022418A4 */
    /* Requires manual decompilation - 44 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    ldr r1, [r5, #0x24]\n    bl ov70_02241868\n    mov r2, #0x4d\n    lsl r2, r2, #2\n    add r4, r0, #0\n    ldr r0, [r5, r2]\n    cmp r0, #0x12\n    bne _022418D4\n    ldr r0, [r5]\n    add r1, r2, #4\n    ldr r0, [r0, #8]\n    ldr r1, [r5, r1]\n    bl Party_GetMonByIndex\n    add r1, r0, #0\n    add r0, r4, #0\n    bl CopyPokemonToPokemon\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp]\n    ldr r0, [r5]\n    ldr r1, [r5, r2]\n    add r2, r2, #4\n    ldr r0, [r0, #0xc]\n    ldr r2, [r5, r2]\n    bl PCStorage_DeleteBoxMonByIndexPair\n    ldr r0, [r5]\n    add r1, sp, #4\n    ldr r0, [r0, #0xc]\n    add r2, sp, #0\n    bl PCStorage_FindFirstEmptySlot\n    add r0, r4, #0\n    bl Mon_GetBoxMon\n    add r2, r0, #0\n    ldr r0, [r5]\n    ldr r1, [sp, #4]\n    ldr r0, [r0, #0xc]\n    bl PCStorage_PlaceMonInBoxFirstEmptySlot\n    add sp, #8\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_0224190C(void) {
    /* Original at 0x0224190C */
    /* Requires manual decompilation - 544 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x2c\n    add r4, r0, #0\n    cmp r1, #6\n    bls _02241918\n    b _02241DAA\n    add r0, r1, r1\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02241924: ; jump table\n    mov r0, #0\n    ldr r6, _02241C68 ; =ov70_02245E0E\n    str r0, [sp, #0x28]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x28]\n    add r7, r7, #6\n    add r0, r0, #1\n    add r6, r6, #2\n    add r5, #0x10\n    str r0, [sp, #0x28]\n    cmp r0, #9\n    blt _0224193C\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _02241C6C ; =0x0000012F\n    mov r3, #9\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r1, #2\n    str r1, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r3, #1\n    str r3, [sp, #0xc]\n    mov r0, #0x30\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r0, [r4]\n    lsl r2, r2, #0x18\n    ldr r1, [r4, #4]\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    bl FillWindowPixelBuffer\n    ldr r6, _02241C70 ; =ov70_02245E10\n    mov r7, #1\n    mov r5, #0x10\n    sub r0, r6, #1\n    ldrb r0, [r0]\n    sub r3, r6, #2\n    str r0, [sp]\n    mov r0, #2\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    sub r0, r7, #1\n    lsl r0, r0, #2\n    add r0, #0x36\n    lsl r0, r0, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r3]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    add r7, r7, #1\n    add r6, r6, #2\n    add r5, #0x10\n    cmp r7, #4\n    blt _022419E0\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _02241C6C ; =0x0000012F\n    mov r3, #9\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldr r6, _02241C74 ; =ov70_02245DA2\n    str r0, [sp, #0x14]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x14]\n    add r7, #0x10\n    add r0, r0, #1\n    add r6, r6, #3\n    add r5, #0x10\n    str r0, [sp, #0x14]\n    cmp r0, #4\n    blt _02241A62\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x70\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0x40\n    lsr r2, r2, #0x18\n    mov r3, #6\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _02241C6C ; =0x0000012F\n    mov r3, #9\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldr r6, _02241C68 ; =ov70_02245E0E\n    str r0, [sp, #0x18]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #3\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x18]\n    add r7, r7, #6\n    add r0, r0, #1\n    add r6, r6, #2\n    add r5, #0x10\n    str r0, [sp, #0x18]\n    cmp r0, #9\n    blt _02241B10\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _02241C6C ; =0x0000012F\n    mov r3, #9\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    mov r3, #2\n    str r3, [sp]\n    mov r0, #9\n    str r0, [sp, #4]\n    str r3, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x66\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xf0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xf0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldr r6, _02241C78 ; =ov70_02245D96\n    str r0, [sp, #0x1c]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x1c]\n    add r7, #0x2e\n    add r0, r0, #1\n    add r6, r6, #2\n    add r5, #0x10\n    str r0, [sp, #0x1c]\n    cmp r0, #5\n    blt _02241BBC\n    mov r0, #0x10\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    ldr r0, _02241C7C ; =0x00000116\n    mov r3, #0xd\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0x50\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0x50\n    bl FillWindowPixelBuffer\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    ldr r0, _02241C6C ; =0x0000012F\n    mov r3, #0x18\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldr r6, _02241C80 ; =ov70_02245D60\n    b _02241C84\n    nop\n    _02241C68: .word ov70_02245E0E\n    _02241C6C: .word 0x0000012F\n    _02241C70: .word ov70_02245E10\n    _02241C74: .word ov70_02245DA2\n    _02241C78: .word ov70_02245D96\n    _02241C7C: .word 0x00000116\n    _02241C80: .word ov70_02245D60\n    str r0, [sp, #0x20]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #8\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x20]\n    add r7, #0x10\n    add r0, r0, #1\n    add r6, r6, #2\n    add r5, #0x10\n    str r0, [sp, #0x20]\n    cmp r0, #3\n    blt _02241C8A\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0x60\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    mov r3, #9\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    mov r0, #0\n    ldr r6, _02241DB0 ; =ov70_02245D6E\n    str r0, [sp, #0x24]\n    mov r7, #0x30\n    add r5, r0, #0\n    ldrb r0, [r6, #1]\n    str r0, [sp]\n    mov r0, #0xb\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    lsl r0, r7, #0x10\n    lsr r0, r0, #0x10\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldrb r3, [r6]\n    ldr r0, [r4]\n    add r1, r1, r5\n    lsr r2, r2, #0x18\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #0x24]\n    add r7, #0x16\n    add r0, r0, #1\n    add r6, r6, #2\n    add r5, #0x10\n    str r0, [sp, #0x24]\n    cmp r0, #4\n    blt _02241D0A\n    mov r0, #0xe\n    str r0, [sp]\n    mov r0, #5\n    str r0, [sp, #4]\n    mov r0, #1\n    str r0, [sp, #8]\n    str r0, [sp, #0xc]\n    mov r0, #0x88\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0x40\n    lsr r2, r2, #0x18\n    mov r3, #6\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0x40\n    bl FillWindowPixelBuffer\n    mov r0, #0x11\n    str r0, [sp]\n    mov r0, #6\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #1\n    str r0, [sp, #0xc]\n    mov r0, #0xa1\n    str r0, [sp, #0x10]\n    ldr r2, [r4, #0x54]\n    ldr r1, [r4, #4]\n    lsl r2, r2, #0x18\n    ldr r0, [r4]\n    add r1, #0xe0\n    lsr r2, r2, #0x18\n    mov r3, #9\n    bl AddWindowParameterized\n    ldr r0, [r4, #4]\n    mov r1, #0x22\n    add r0, #0xe0\n    bl FillWindowPixelBuffer\n    add sp, #0x2c\n    pop {r4, r5, r6, r7, pc}\n    nop\n    _02241DB0: .word ov70_02245D6E"
    );
    #endif
}

void ov70_02241DB4(void) {
    /* Original at 0x02241DB4 */
    /* Requires manual decompilation - 262 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x14\n    add r4, r0, #0\n    add r2, sp, #0x10\n    add r5, r1, #0\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    add r2, #1\n    add r3, sp, #0x10\n    bl sub_02019B1C\n    cmp r5, #6\n    bls _02241DD0\n    b _02242010\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02241DDC: ; jump table\n    mov r6, #0\n    add r5, r6, #0\n    mov r7, #0x22\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #9\n    blt _02241DF0\n    add r0, sp, #0x10\n    mov r1, #1\n    ldrsb r0, [r0, r1]\n    cmp r0, #0x10\n    bne _02241E3C\n    str r1, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #5\n    mov r3, #0x11\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    mov r7, #0x22\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #4\n    blt _02241E4E\n    add r0, sp, #0x10\n    mov r1, #1\n    ldrsb r0, [r0, r1]\n    cmp r0, #0x10\n    bne _02241E9A\n    str r1, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #5\n    mov r3, #0x11\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    mov r7, #0x22\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #5\n    blt _02241EAC\n    add r0, sp, #0x10\n    mov r1, #1\n    ldrsb r0, [r0, r1]\n    cmp r0, #0x10\n    bne _02241EF8\n    str r1, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #5\n    mov r3, #0x11\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    mov r7, #0x22\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #9\n    blt _02241F0A\n    add r0, sp, #0x10\n    mov r1, #1\n    ldrsb r0, [r0, r1]\n    cmp r0, #0x10\n    bne _02241F56\n    str r1, [sp]\n    mov r0, #0xf\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #5\n    mov r3, #0x11\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    ldr r0, [r4, #4]\n    add r0, #0xf0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    mov r7, #0x22\n    ldr r0, [r4, #4]\n    add r1, r7, #0\n    add r0, r0, r5\n    bl FillWindowPixelBuffer\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #6\n    blt _02241F70\n    add r0, sp, #0x10\n    mov r1, #1\n    ldrsb r0, [r0, r1]\n    sub r0, #0x10\n    lsl r0, r0, #0x18\n    asr r0, r0, #0x18\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    cmp r0, #1\n    bhi _02241FC8\n    str r1, [sp]\n    mov r0, #0xe\n    str r0, [sp, #4]\n    mov r0, #0xf\n    str r0, [sp, #8]\n    mov r0, #0x10\n    str r0, [sp, #0xc]\n    ldr r0, [r4]\n    mov r1, #2\n    mov r2, #5\n    mov r3, #0x12\n    bl FillBgTilemapRect\n    ldr r0, [r4]\n    mov r1, #2\n    bl BgCommitTilemapBufferToVram\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #3\n    blt _02241FD8\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}\n    mov r6, #0\n    add r5, r6, #0\n    ldr r0, [r4, #4]\n    add r0, r0, r5\n    bl RemoveWindow\n    add r6, r6, #1\n    add r5, #0x10\n    cmp r6, #5\n    blt _02241FF8\n    ldr r0, [r4, #4]\n    add r0, #0xe0\n    bl RemoveWindow\n    add sp, #0x14\n    pop {r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_02242014(void) {
    /* Original at 0x02242014 */
    /* Requires manual decompilation - 82 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    add r6, r1, #0\n    mov r0, #0x3d\n    mov r1, #0x80\n    add r7, r2, #0\n    bl Heap_Alloc\n    add r4, r0, #0\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r4]\n    ldr r0, [r5, #4]\n    mov r2, #1\n    str r0, [r4, #4]\n    ldr r0, [r5, #8]\n    mov r3, #0x3d\n    str r0, [r4, #8]\n    ldr r0, [r5, #0xc]\n    str r0, [r4, #0xc]\n    ldr r0, [r5, #0x10]\n    str r0, [r4, #0x10]\n    ldr r0, [r5, #0x14]\n    str r0, [r4, #0x14]\n    ldr r0, [r5, #0x18]\n    str r0, [r4, #0x18]\n    ldr r0, [r5, #0x1c]\n    str r0, [r4, #0x24]\n    ldr r0, [r5, #0x20]\n    str r0, [r4, #0x28]\n    ldr r0, [r5, #0x24]\n    str r0, [r4, #0x2c]\n    ldr r0, [r5, #0x28]\n    str r0, [r4, #0x20]\n    ldr r0, [r5, #0x2c]\n    str r0, [r4, #0x30]\n    str r6, [r4, #0x54]\n    str r7, [r4, #0x60]\n    strh r1, [r4, #0x3c]\n    add r0, r4, #0\n    strh r1, [r4, #0x3e]\n    add r0, #0x40\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x42\n    strh r1, [r0]\n    add r0, r4, #0\n    add r0, #0x44\n    strb r1, [r0]\n    add r0, r4, #0\n    add r0, #0x45\n    strb r1, [r0]\n    add r0, r4, #0\n    str r1, [r4, #0x48]\n    add r0, #0x7e\n    strb r1, [r0]\n    str r1, [r4, #0x4c]\n    ldr r0, [r4]\n    mov r1, #2\n    bl sub_0201956C\n    str r0, [r4, #0x1c]\n    mov r0, #0x14\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    mov r2, #2\n    mov r3, #0x20\n    bl sub_020195F4\n    ldr r0, [r4, #0xc]\n    mov r1, #0x88\n    mov r2, #0x28\n    bl ov70_02238F9C\n    ldr r0, [r4, #0xc]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0xf\n    mov r1, #0xe\n    mov r2, #2\n    mov r3, #0x3d\n    bl MessagePrinter_New\n    str r0, [r4, #0x38]\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_022420C4(void) {
    /* Original at 0x022420C4 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "add r2, r0, #0\n    add r2, #0x58\n    strh r1, [r2]\n    cmp r1, #3\n    bhi _02242128\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022420DA: ; jump table\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r0, #0x48]\n    add r1, #0x7e\n    strb r2, [r1]\n    strh r2, [r0, #0x3c]\n    strh r2, [r0, #0x3e]\n    mov r1, #4\n    str r1, [r0, #0x4c]\n    bx lr\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r0, #0x48]\n    add r1, #0x7e\n    strb r2, [r1]\n    strh r2, [r0, #0x3c]\n    strh r2, [r0, #0x3e]\n    mov r1, #0x10\n    str r1, [r0, #0x4c]\n    bx lr\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r0, #0x48]\n    add r1, #0x7e\n    strb r2, [r1]\n    mov r1, #0x1c\n    str r1, [r0, #0x4c]\n    bx lr\n    mov r2, #0\n    add r1, r0, #0\n    str r2, [r0, #0x48]\n    add r1, #0x7e\n    strb r2, [r1]\n    mov r1, #0x1f\n    str r1, [r0, #0x4c]\n    bx lr"
    );
    #endif
}

void ov70_0224212C(void) {
    MessagePrinter_Delete(*((u32*)(r0 + 0x38)));
    sub_020195C0(*((u32*)(r4 + 0x1c)));
    Heap_Free(r4);
}

void ov70_02242144(void) {
    sub_02019934();
}

void ov70_02242164(void) {
    /* Original at 0x02242164 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, lr}\n    cmp r1, #7\n    bhi _022421B4\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02242176: ; jump table\n    ldr r0, _022421B8 ; =ov70_02245ED0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _022421BC ; =ov70_02245F28\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _022421C0 ; =ov70_02245E3E\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _022421C4 ; =ov70_02245DD0\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _022421C8 ; =ov70_02245E5E\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    ldr r0, _022421CC ; =ov70_02245DE4\n    bl TouchscreenHitbox_FindRectAtTouchNew\n    pop {r3, pc}\n    nop\n    _022421B8: .word ov70_02245ED0\n    _022421BC: .word ov70_02245F28\n    _022421C0: .word ov70_02245E3E\n    _022421C4: .word ov70_02245DD0\n    _022421C8: .word ov70_02245E5E\n    _022421CC: .word ov70_02245DE4"
    );
    #endif
}

void ov70_022421D0(void) {
    /* Original at 0x022421D0 */
    /* Requires manual decompilation - 183 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x48]\n    cmp r1, #9\n    bge _022421E0\n    add r0, #0x7e\n    strb r1, [r0]\n    ldr r0, _02242344 ; =gSystem\n    mov r2, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r2, r0\n    beq _022421F6\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242348 ; =ov70_02245EA8\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _0224222A\n    mov r2, #0x80\n    tst r2, r0\n    beq _02242208\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _0224234C ; =ov70_02245EA9\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _0224222A\n    mov r2, #0x20\n    tst r2, r0\n    beq _0224221A\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242350 ; =ov70_02245EAA\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _0224222A\n    mov r2, #0x10\n    tst r0, r2\n    beq _0224222A\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242354 ; =ov70_02245EAB\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    cmp r1, #9\n    blt _02242282\n    ldr r0, [r5, #0x48]\n    cmp r0, #9\n    bge _02242282\n    ldr r0, _02242344 ; =gSystem\n    ldr r2, [r0, #0x4c]\n    mov r0, #0x40\n    tst r0, r2\n    beq _02242260\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrb r0, [r0]\n    str r0, [r5, #0x48]\n    add r0, r0, #4\n    cmp r0, #9\n    bge _02242282\n    add r0, r5, #0\n    add r0, #0x48\n    ldr r2, [r0]\n    add r2, r2, #4\n    str r2, [r0]\n    ldr r2, [r5, #0x48]\n    add r2, r2, #4\n    cmp r2, #9\n    blt _02242250\n    b _02242282\n    mov r0, #0x80\n    tst r0, r2\n    beq _02242282\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrb r0, [r0]\n    str r0, [r5, #0x48]\n    sub r0, r0, #4\n    bmi _02242282\n    add r0, r5, #0\n    add r0, #0x48\n    ldr r2, [r0]\n    sub r2, r2, #4\n    str r2, [r0]\n    ldr r2, [r5, #0x48]\n    sub r2, r2, #4\n    bpl _02242276\n    ldr r0, [r5, #0x48]\n    cmp r1, r0\n    beq _022422BC\n    ldr r0, _02242358 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    ldr r1, _0224235C ; =ov70_02245E26\n    lsl r2, r0, #1\n    ldrb r1, [r1, r2]\n    ldr r3, _02242360 ; =ov70_02245E27\n    ldr r0, [r5, #0xc]\n    ldrb r2, [r3, r2]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #9\n    ldr r0, [r5, #0xc]\n    bne _022422B6\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _022422BC\n    mov r1, #0x3d\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #4\n    bl ov70_02242164\n    add r6, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r6, r0\n    beq _022422F8\n    cmp r6, #9\n    bne _022422DE\n    ldr r0, _02242358 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    blo _022422E4\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _022422EE\n    ldrb r0, [r4, r6]\n    cmp r0, #0\n    beq _0224233C\n    ldr r0, _02242358 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _02242344 ; =gSystem\n    ldr r2, [r0, #0x48]\n    mov r0, #1\n    add r1, r2, #0\n    tst r1, r0\n    beq _0224232A\n    ldr r1, [r5, #0x48]\n    cmp r1, #9\n    bne _0224230E\n    sub r0, r0, #3\n    pop {r4, r5, r6, pc}\n    blt _02242314\n    bl GF_AssertFail\n    cmp r4, #0\n    beq _02242320\n    ldr r0, [r5, #0x48]\n    ldrb r0, [r4, r0]\n    cmp r0, #0\n    beq _0224233C\n    ldr r0, _02242358 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r0, r2\n    beq _0224233C\n    ldr r0, _02242358 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    nop\n    _02242344: .word gSystem\n    _02242348: .word ov70_02245EA8\n    _0224234C: .word ov70_02245EA9\n    _02242350: .word ov70_02245EAA\n    _02242354: .word ov70_02245EAB\n    _02242358: .word 0x000005DC\n    _0224235C: .word ov70_02245E26\n    _02242360: .word ov70_02245E27"
    );
    #endif
}

void ov70_02242364(void) {
    /* Original at 0x02242364 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #3\n    beq _02242386\n    mov r2, #0x3c\n    ldrsh r0, [r0, r2]\n    cmp r0, #8\n    bgt _02242382\n    lsl r3, r0, #3\n    ldr r0, _0224238C ; =ov70_02245F5C\n    ldr r0, [r0, r3]\n    cmp r1, r0\n    blt _0224237E\n    add r1, r2, #0\n    sub r1, #0x3d\n    add r0, r1, #0\n    bx lr\n    add r0, r1, #0\n    bx lr\n    mov r0, #1\n    mvn r0, r0\n    bx lr\n    _0224238C: .word ov70_02245F5C"
    );
    #endif
}

void ov70_02242390(void) {
    /* Original at 0x02242390 */
    /* Requires manual decompilation - 168 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x48]\n    cmp r1, #3\n    bge _022423A0\n    add r0, #0x7e\n    strb r1, [r0]\n    ldr r0, _022424E4 ; =gSystem\n    mov r2, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r2, r0\n    beq _022423B6\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _022424E8 ; =ov70_02245DC0\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _022423EA\n    mov r2, #0x80\n    tst r2, r0\n    beq _022423C8\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _022424EC ; =ov70_02245DC1\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _022423EA\n    mov r2, #0x20\n    tst r2, r0\n    beq _022423DA\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _022424F0 ; =ov70_02245DC2\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _022423EA\n    mov r2, #0x10\n    tst r0, r2\n    beq _022423EA\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _022424F4 ; =ov70_02245DC3\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    cmp r1, #3\n    bne _022423FC\n    ldr r0, [r5, #0x48]\n    cmp r0, #3\n    bge _022423FC\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrb r0, [r0]\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x48]\n    cmp r1, r0\n    beq _02242440\n    ldr r0, _022424F8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #3\n    bne _02242422\n    ldr r0, [r5, #0xc]\n    mov r1, #0xc0\n    mov r2, #0x88\n    bl ov70_02238F9C\n    ldr r0, [r5, #0xc]\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _02242440\n    ldr r1, _022424FC ; =ov70_02245E26\n    lsl r2, r0, #1\n    ldrb r1, [r1, r2]\n    ldr r3, _02242500 ; =ov70_02245E27\n    ldr r0, [r5, #0xc]\n    ldrb r2, [r3, r2]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r5, #0xc]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #5\n    bl ov70_02242164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02242488\n    add r0, r5, #0\n    bl ov70_02242364\n    mov r1, #0\n    add r6, r0, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _022424E0\n    sub r0, r1, #1\n    cmp r6, r0\n    beq _0224247E\n    cmp r4, #0\n    beq _0224247E\n    mov r0, #0x3c\n    ldrsh r0, [r5, r0]\n    lsl r1, r0, #2\n    ldr r0, _02242504 ; =ov70_02245E84\n    ldr r1, [r0, r1]\n    add r0, r4, r6\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _022424DC\n    ldr r0, _022424F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    ldr r0, _022424E4 ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _022424CA\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov70_02242364\n    mov r1, #0\n    add r6, r0, #0\n    mvn r1, r1\n    cmp r6, r1\n    beq _022424E0\n    sub r0, r1, #1\n    cmp r6, r0\n    beq _022424C0\n    cmp r4, #0\n    beq _022424C0\n    mov r0, #0x3c\n    ldrsh r0, [r5, r0]\n    lsl r1, r0, #2\n    ldr r0, _02242504 ; =ov70_02245E84\n    ldr r1, [r0, r1]\n    add r0, r4, r6\n    ldrb r0, [r1, r0]\n    cmp r0, #0\n    beq _022424DC\n    ldr r0, _022424F8 ; =0x000005DC\n    bl PlaySE\n    add r0, r6, #0\n    pop {r4, r5, r6, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _022424DC\n    ldr r0, _022424F8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, r5, r6, pc}\n    nop\n    _022424E4: .word gSystem\n    _022424E8: .word ov70_02245DC0\n    _022424EC: .word ov70_02245DC1\n    _022424F0: .word ov70_02245DC2\n    _022424F4: .word ov70_02245DC3\n    _022424F8: .word 0x000005DC\n    _022424FC: .word ov70_02245E26\n    _02242500: .word ov70_02245E27\n    _02242504: .word ov70_02245E84"
    );
    #endif
}

void ov70_02242508(void) {
    _s32_div_f(1);
}

void ov70_0224251C(void) {
    /* Original at 0x0224251C */
    /* Requires manual decompilation - 40 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #4\n    beq _0224252E\n    cmp r1, #5\n    beq _02242534\n    cmp r1, #6\n    beq _02242542\n    b _0224254E\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mvn r1, r1\n    bl ov70_02242574\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    bl ov70_02242574\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x5a\n    ldrsh r2, [r5, r0]\n    lsl r2, r2, #2\n    add r4, r1, r2\n    ldr r1, [r5, #0x5c]\n    cmp r4, r1\n    bge _0224256C\n    ldr r0, _02242570 ; =0x000005DC\n    bl PlaySE\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    pop {r3, r4, r5, pc}\n    sub r0, #0x5b\n    pop {r3, r4, r5, pc}\n    _02242570: .word 0x000005DC"
    );
    #endif
}

void ov70_02242574(void) {
    /* Original at 0x02242574 */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5, #0x5c]\n    add r6, r1, #0\n    mov r1, #4\n    bl ov70_02242508\n    sub r4, r0, #1\n    beq _02242616\n    cmp r6, #0\n    bge _022425BE\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    beq _022425B6\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _022425F0\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r4, [r0]\n    b _022425F0\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    cmp r0, r4\n    bge _022425E8\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _022425F0\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    mov r1, #0x5a\n    ldrsh r1, [r5, r1]\n    ldr r2, [r5, #0x5c]\n    add r0, r5, #0\n    bl ov70_022434C0\n    ldr r0, [r5, #0x5c]\n    mov r1, #4\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r5, #4]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x38]\n    add r2, #0x40\n    bl ov70_02243F00\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov70_0224261C(void) {
    /* Original at 0x0224261C */
    /* Requires manual decompilation - 94 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _022426E4 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x4c]\n    mov r1, #0x40\n    ldr r4, [r5, #0x48]\n    tst r1, r2\n    beq _0224263C\n    cmp r4, #0\n    beq _02242636\n    sub r0, r4, #1\n    str r0, [r5, #0x48]\n    b _0224266E\n    mov r0, #4\n    str r0, [r5, #0x48]\n    b _0224266E\n    mov r1, #0x80\n    tst r1, r2\n    beq _02242652\n    cmp r4, #4\n    beq _0224264C\n    add r0, r4, #1\n    str r0, [r5, #0x48]\n    b _0224266E\n    mov r0, #0\n    str r0, [r5, #0x48]\n    b _0224266E\n    mov r1, #0x20\n    add r3, r2, #0\n    tst r3, r1\n    beq _02242662\n    sub r1, #0x21\n    bl ov70_02242574\n    b _0224266E\n    mov r1, #0x10\n    tst r1, r2\n    beq _0224266E\n    mov r1, #1\n    bl ov70_02242574\n    ldr r0, [r5, #0x48]\n    cmp r4, r0\n    beq _022426A2\n    ldr r0, _022426E8 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    ldr r1, _022426EC ; =ov70_02245D76\n    lsl r3, r0, #1\n    ldr r2, _022426F0 ; =ov70_02245D77\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #4\n    ldr r0, [r5, #0xc]\n    bne _0224269C\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _022426A2\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #0\n    bl ov70_02242164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _022426BC\n    add r0, r5, #0\n    bl ov70_0224251C\n    pop {r3, r4, r5, pc}\n    ldr r1, _022426E4 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _022426D0\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov70_0224251C\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _022426E0\n    ldr r0, _022426E8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    nop\n    _022426E4: .word gSystem\n    _022426E8: .word 0x000005DC\n    _022426EC: .word ov70_02245D76\n    _022426F0: .word ov70_02245D77"
    );
    #endif
}

void ov70_022426F4(void) {
    /* Original at 0x022426F4 */
    /* Requires manual decompilation - 90 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    ldr r0, _022427B0 ; =gSystem\n    ldr r4, [r5, #0x48]\n    ldr r1, [r0, #0x4c]\n    mov r0, #0x40\n    tst r0, r1\n    beq _0224271C\n    ldr r0, _022427B4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    beq _02242716\n    sub r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242738\n    mov r0, #3\n    str r0, [r5, #0x48]\n    b _02242738\n    mov r0, #0x80\n    tst r0, r1\n    beq _02242738\n    ldr r0, _022427B4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #3\n    beq _02242734\n    add r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242738\n    mov r0, #0\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x48]\n    cmp r4, r0\n    beq _02242764\n    ldr r1, _022427B8 ; =ov70_02245D66\n    lsl r3, r0, #1\n    ldr r2, _022427BC ; =ov70_02245D67\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #3\n    ldr r0, [r5, #0xc]\n    bne _0224275E\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _02242764\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #1\n    bl ov70_02242164\n    add r4, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r4, r0\n    beq _02242784\n    ldr r0, _022427B4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, _022427C0 ; =ov70_02245DB0\n    lsl r1, r4, #2\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    ldr r1, _022427B0 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _0224279E\n    ldr r0, _022427B4 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    lsl r1, r0, #2\n    ldr r0, _022427C0 ; =ov70_02245DB0\n    ldr r0, [r0, r1]\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _022427AE\n    ldr r0, _022427B4 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    _022427B0: .word gSystem\n    _022427B4: .word 0x000005DC\n    _022427B8: .word ov70_02245D66\n    _022427BC: .word ov70_02245D67\n    _022427C0: .word ov70_02245DB0"
    );
    #endif
}

void ov70_022427C4(void) {
    /* Original at 0x022427C4 */
    /* Requires manual decompilation - 68 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    cmp r1, #0\n    bge _02242802\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r4, #0x14]\n    mov r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    beq _022427F8\n    sub r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _02242834\n    add r0, r4, #0\n    mov r1, #2\n    add r0, #0x5a\n    strh r1, [r0]\n    b _02242834\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r4, #0x10]\n    mov r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r4, r0]\n    cmp r0, #2\n    bge _0224282C\n    add r1, r0, #1\n    add r0, r4, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _02242834\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    mov r1, #0x5a\n    ldrsh r1, [r4, r1]\n    ldr r2, [r4, #0x5c]\n    add r0, r4, #0\n    bl ov70_022434C0\n    ldr r0, [r4, #0x5c]\n    mov r1, #4\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r4, #4]\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x38]\n    add r2, #0x40\n    bl ov70_02243F00\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_02242860(void) {
    /* Original at 0x02242860 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r1, #0\n    add r5, r0, #0\n    cmp r4, #4\n    beq _02242874\n    cmp r4, #5\n    beq _02242880\n    cmp r4, #6\n    beq _0224288E\n    b _0224289A\n    ldr r0, _022428BC ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mvn r1, r1\n    bl ov70_022427C4\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    bl ov70_022427C4\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x5a\n    ldrsh r1, [r5, r0]\n    lsl r1, r1, #2\n    add r2, r4, r1\n    ldr r1, [r5, #0x5c]\n    cmp r2, r1\n    bge _022428B8\n    ldr r0, _022428BC ; =0x000005DC\n    bl PlaySE\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    pop {r3, r4, r5, pc}\n    sub r0, #0x5b\n    pop {r3, r4, r5, pc}\n    _022428BC: .word 0x000005DC"
    );
    #endif
}

void ov70_022428C0(void) {
    /* Original at 0x022428C0 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02242990 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x4c]\n    mov r1, #0x40\n    ldr r4, [r5, #0x48]\n    tst r1, r2\n    beq _022428E8\n    ldr r0, _02242994 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    beq _022428E2\n    sub r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242922\n    mov r0, #4\n    str r0, [r5, #0x48]\n    b _02242922\n    mov r1, #0x80\n    tst r1, r2\n    beq _02242906\n    ldr r0, _02242994 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #4\n    beq _02242900\n    add r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242922\n    mov r0, #0\n    str r0, [r5, #0x48]\n    b _02242922\n    mov r1, #0x20\n    add r3, r2, #0\n    tst r3, r1\n    beq _02242916\n    sub r1, #0x21\n    bl ov70_022427C4\n    b _02242922\n    mov r1, #0x10\n    tst r1, r2\n    beq _02242922\n    mov r1, #1\n    bl ov70_022427C4\n    ldr r0, [r5, #0x48]\n    cmp r4, r0\n    beq _0224294E\n    ldr r1, _02242998 ; =ov70_02245D80\n    lsl r3, r0, #1\n    ldr r2, _0224299C ; =ov70_02245D81\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #4\n    ldr r0, [r5, #0xc]\n    bne _02242948\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _0224294E\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #2\n    bl ov70_02242164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02242968\n    add r0, r5, #0\n    bl ov70_02242860\n    pop {r3, r4, r5, pc}\n    ldr r1, _02242990 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _0224297C\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov70_02242860\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _0224298C\n    ldr r0, _02242994 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    nop\n    _02242990: .word gSystem\n    _02242994: .word 0x000005DC\n    _02242998: .word ov70_02245D80\n    _0224299C: .word ov70_02245D81"
    );
    #endif
}

void ov70_022429A0(void) {
    /* Original at 0x022429A0 */
    /* Requires manual decompilation - 12 instructions */
    #ifdef MWERKS
    asm(
        "cmp r1, #9\n    beq _022429AA\n    cmp r1, #0xa\n    beq _022429B0\n    b _022429B4\n    mov r0, #1\n    mvn r0, r0\n    bx lr\n    mov r0, #0xa\n    bx lr\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov70_022429B8(void) {
    /* Original at 0x022429B8 */
    /* Requires manual decompilation - 191 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r4, r1, #0\n    ldr r1, [r5, #0x48]\n    cmp r1, #9\n    bge _022429C8\n    add r0, #0x7e\n    strb r1, [r0]\n    ldr r0, _02242B3C ; =gSystem\n    mov r2, #0x40\n    ldr r0, [r0, #0x4c]\n    tst r2, r0\n    beq _022429DE\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242B40 ; =ov70_02245EFC\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _02242A12\n    mov r2, #0x80\n    tst r2, r0\n    beq _022429F0\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242B44 ; =ov70_02245EFD\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _02242A12\n    mov r2, #0x20\n    tst r2, r0\n    beq _02242A02\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242B48 ; =ov70_02245EFE\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    b _02242A12\n    mov r2, #0x10\n    tst r0, r2\n    beq _02242A12\n    ldr r0, [r5, #0x48]\n    lsl r2, r0, #2\n    ldr r0, _02242B4C ; =ov70_02245EFF\n    ldrb r0, [r0, r2]\n    str r0, [r5, #0x48]\n    cmp r1, #9\n    blt _02242A6A\n    ldr r0, [r5, #0x48]\n    cmp r0, #9\n    bge _02242A6A\n    ldr r0, _02242B3C ; =gSystem\n    ldr r2, [r0, #0x4c]\n    mov r0, #0x40\n    tst r0, r2\n    beq _02242A48\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrb r0, [r0]\n    str r0, [r5, #0x48]\n    add r0, r0, #4\n    cmp r0, #9\n    bge _02242A6A\n    add r0, r5, #0\n    add r0, #0x48\n    ldr r2, [r0]\n    add r2, r2, #4\n    str r2, [r0]\n    ldr r2, [r5, #0x48]\n    add r2, r2, #4\n    cmp r2, #9\n    blt _02242A38\n    b _02242A6A\n    mov r0, #0x80\n    tst r0, r2\n    beq _02242A6A\n    add r0, r5, #0\n    add r0, #0x7e\n    ldrb r0, [r0]\n    str r0, [r5, #0x48]\n    sub r0, r0, #4\n    bmi _02242A6A\n    add r0, r5, #0\n    add r0, #0x48\n    ldr r2, [r0]\n    sub r2, r2, #4\n    str r2, [r0]\n    ldr r2, [r5, #0x48]\n    sub r2, r2, #4\n    bpl _02242A5E\n    ldr r0, [r5, #0x48]\n    cmp r1, r0\n    beq _02242AB6\n    ldr r0, _02242B50 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    ldr r1, _02242B54 ; =ov70_02245DF8\n    lsl r2, r0, #1\n    ldrb r1, [r1, r2]\n    ldr r3, _02242B58 ; =ov70_02245DF9\n    ldr r0, [r5, #0xc]\n    ldrb r2, [r3, r2]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #9\n    beq _02242A9A\n    cmp r0, #0xa\n    beq _02242AA4\n    b _02242AAE\n    ldr r0, [r5, #0xc]\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _02242AB6\n    ldr r0, [r5, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    b _02242AB6\n    ldr r0, [r5, #0xc]\n    mov r1, #0x3d\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #6\n    bl ov70_02242164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02242AF0\n    add r0, r5, #0\n    bl ov70_022429A0\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _02242AE6\n    cmp r5, #0xb\n    beq _02242AE6\n    cmp r4, #0\n    beq _02242AE6\n    ldrb r0, [r4, r5]\n    cmp r0, #0\n    beq _02242B36\n    ldr r0, _02242B50 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    ldr r0, _02242B3C ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    beq _02242B24\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov70_022429A0\n    add r5, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _02242B1A\n    cmp r5, #0xb\n    beq _02242B1A\n    cmp r4, #0\n    beq _02242B1A\n    ldrb r0, [r4, r5]\n    cmp r0, #0\n    beq _02242B36\n    ldr r0, _02242B50 ; =0x000005DC\n    bl PlaySE\n    add r0, r5, #0\n    pop {r3, r4, r5, pc}\n    mov r0, #2\n    tst r0, r1\n    beq _02242B36\n    ldr r0, _02242B50 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    _02242B3C: .word gSystem\n    _02242B40: .word ov70_02245EFC\n    _02242B44: .word ov70_02245EFD\n    _02242B48: .word ov70_02245EFE\n    _02242B4C: .word ov70_02245EFF\n    _02242B50: .word 0x000005DC\n    _02242B54: .word ov70_02245DF8\n    _02242B58: .word ov70_02245DF9"
    );
    #endif
}

void ov70_02242B5C(void) {
    /* Original at 0x02242B5C */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    cmp r1, #5\n    beq _02242B6E\n    cmp r1, #6\n    beq _02242B7A\n    cmp r1, #7\n    beq _02242B88\n    b _02242B94\n    ldr r0, _02242BB8 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #0\n    mvn r1, r1\n    bl ov70_02242BBC\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r1, #1\n    bl ov70_02242BBC\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    mov r0, #0x5a\n    ldrsh r3, [r5, r0]\n    lsl r2, r3, #2\n    add r2, r3, r2\n    add r4, r1, r2\n    ldr r1, [r5, #0x5c]\n    cmp r4, r1\n    bge _02242BB4\n    ldr r0, _02242BB8 ; =0x000005DC\n    bl PlaySE\n    ldr r1, [r5, #0x34]\n    lsl r0, r4, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    pop {r3, r4, r5, pc}\n    sub r0, #0x5b\n    pop {r3, r4, r5, pc}\n    _02242BB8: .word 0x000005DC"
    );
    #endif
}

void ov70_02242BBC(void) {
    /* Original at 0x02242BBC */
    /* Requires manual decompilation - 73 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    ldr r0, [r5, #0x5c]\n    add r6, r1, #0\n    mov r1, #5\n    bl ov70_02242508\n    sub r4, r0, #1\n    beq _02242C5E\n    cmp r6, #0\n    bge _02242C06\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5, #0x14]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0x27\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    beq _02242BFE\n    sub r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _02242C38\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r4, [r0]\n    b _02242C38\n    mov r0, #0x5e\n    lsl r0, r0, #4\n    bl PlaySE\n    ldr r0, [r5, #0x10]\n    mov r1, #1\n    bl Sprite_SetAnimActiveFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0x26\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    cmp r0, r4\n    bge _02242C30\n    add r1, r0, #1\n    add r0, r5, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    b _02242C38\n    add r0, r5, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    mov r1, #0x5a\n    ldrsh r1, [r5, r1]\n    ldr r2, [r5, #0x5c]\n    add r0, r5, #0\n    bl ov70_0224352C\n    ldr r0, [r5, #0x5c]\n    mov r1, #5\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r5, #4]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x38]\n    add r2, #0x50\n    bl ov70_02243F00\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02242C64(void) {
    /* Original at 0x02242C64 */
    /* Requires manual decompilation - 97 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    ldr r1, _02242D34 ; =gSystem\n    add r5, r0, #0\n    ldr r2, [r1, #0x4c]\n    mov r1, #0x40\n    ldr r4, [r5, #0x48]\n    tst r1, r2\n    beq _02242C8C\n    ldr r0, _02242D38 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #0\n    beq _02242C86\n    sub r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242CC6\n    mov r0, #5\n    str r0, [r5, #0x48]\n    b _02242CC6\n    mov r1, #0x80\n    tst r1, r2\n    beq _02242CAA\n    ldr r0, _02242D38 ; =0x000005DC\n    bl PlaySE\n    ldr r0, [r5, #0x48]\n    cmp r0, #5\n    beq _02242CA4\n    add r0, r0, #1\n    str r0, [r5, #0x48]\n    b _02242CC6\n    mov r0, #0\n    str r0, [r5, #0x48]\n    b _02242CC6\n    mov r1, #0x20\n    add r3, r2, #0\n    tst r3, r1\n    beq _02242CBA\n    sub r1, #0x21\n    bl ov70_02242BBC\n    b _02242CC6\n    mov r1, #0x10\n    tst r1, r2\n    beq _02242CC6\n    mov r1, #1\n    bl ov70_02242BBC\n    ldr r0, [r5, #0x48]\n    cmp r4, r0\n    beq _02242CF2\n    ldr r1, _02242D3C ; =ov70_02245D8A\n    lsl r3, r0, #1\n    ldr r2, _02242D40 ; =ov70_02245D8B\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r5, #0x48]\n    cmp r0, #5\n    ldr r0, [r5, #0xc]\n    bne _02242CEC\n    mov r1, #0x30\n    bl Sprite_SetAnimCtrlSeq\n    b _02242CF2\n    mov r1, #0x32\n    bl Sprite_SetAnimCtrlSeq\n    add r0, r5, #0\n    mov r1, #3\n    bl ov70_02242164\n    add r1, r0, #0\n    mov r0, #0\n    mvn r0, r0\n    cmp r1, r0\n    beq _02242D0C\n    add r0, r5, #0\n    bl ov70_02242B5C\n    pop {r3, r4, r5, pc}\n    ldr r1, _02242D34 ; =gSystem\n    ldr r2, [r1, #0x48]\n    mov r1, #1\n    tst r1, r2\n    beq _02242D20\n    ldr r1, [r5, #0x48]\n    add r0, r5, #0\n    bl ov70_02242B5C\n    pop {r3, r4, r5, pc}\n    mov r1, #2\n    tst r1, r2\n    beq _02242D30\n    ldr r0, _02242D38 ; =0x000005DC\n    bl PlaySE\n    mov r0, #1\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    nop\n    _02242D34: .word gSystem\n    _02242D38: .word 0x000005DC\n    _02242D3C: .word ov70_02245D8A\n    _02242D40: .word ov70_02245D8B"
    );
    #endif
}

void ov70_02242D44(void) {
    /* Original at 0x02242D44 */
    /* Requires manual decompilation - 121 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    str r1, [sp, #4]\n    str r2, [sp, #8]\n    cmp r0, #6\n    bne _02242D58\n    mov r3, #0x21\n    b _02242D5A\n    mov r3, #0x22\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    bl sub_02019688\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    ldr r1, [sp, #4]\n    add r0, r5, #0\n    bl ov70_0224190C\n    add r0, r5, #0\n    add r0, #0x64\n    mov r1, #1\n    mov r2, #0x1a\n    bl MI_CpuFill8\n    mov r4, #0\n    add r6, r4, #0\n    add r1, r4, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0x6e\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, [sp, #4]\n    cmp r0, #4\n    bne _02242DBE\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_02243F7C\n    cmp r0, #1\n    bne _02242DB2\n    add r2, r5, r4\n    add r2, #0x64\n    mov r1, #1\n    ldr r0, _02242E50 ; =0x000F0E02\n    strb r1, [r2]\n    b _02242DE0\n    add r2, r5, r4\n    add r2, #0x64\n    mov r1, #0\n    ldr r0, _02242E54 ; =0x00080902\n    strb r1, [r2]\n    b _02242DE0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_02243FE0\n    cmp r0, #1\n    bne _02242DD6\n    add r2, r5, r4\n    add r2, #0x64\n    mov r1, #1\n    ldr r0, _02242E50 ; =0x000F0E02\n    strb r1, [r2]\n    b _02242DE0\n    add r2, r5, r4\n    ldr r0, _02242E54 ; =0x00080902\n    add r2, #0x64\n    mov r1, #0\n    strb r1, [r2]\n    str r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    add r1, r1, r6\n    add r2, r7, #0\n    mov r3, #2\n    bl ov70_02242FC4\n    add r0, r7, #0\n    bl String_Delete\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #9\n    blt _02242D88\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    ldr r0, [sp, #4]\n    cmp r0, #6\n    bne _02242E34\n    ldr r0, [r5, #0x24]\n    mov r1, #0xae\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, _02242E50 ; =0x000F0E02\n    add r2, r4, #0\n    str r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    add r1, #0xf0\n    mov r3, #2\n    bl ov70_02242FC4\n    add r0, r4, #0\n    bl String_Delete\n    ldr r2, [sp, #8]\n    mov r1, #0\n    lsl r2, r2, #0x18\n    ldr r0, [r5, #0x1c]\n    asr r2, r2, #0x18\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_020197F4\n    add sp, #0xc\n    pop {r4, r5, r6, r7, pc}\n    _02242E50: .word 0x000F0E02\n    _02242E54: .word 0x00080902"
    );
    #endif
}

void ov70_02242E58(void) {
    /* Original at 0x02242E58 */
    /* Requires manual decompilation - 59 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x1f\n    bl sub_02019688\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r5, #0\n    mov r1, #1\n    bl ov70_0224190C\n    mov r6, #0\n    add r4, r6, #0\n    add r1, r6, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0x7c\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    ldr r0, _02242EE0 ; =0x000F0E02\n    add r2, r7, #0\n    str r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    add r1, r1, r4\n    mov r3, #2\n    bl ov70_02242FC4\n    add r0, r7, #0\n    bl String_Delete\n    add r6, r6, #1\n    add r4, #0x10\n    cmp r6, #3\n    blt _02242E80\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    mov r2, #0x20\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_020197F4\n    mov r1, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    sub r2, r1, #4\n    add r3, r1, #0\n    bl sub_020198FC\n    pop {r3, r4, r5, r6, r7, pc}\n    _02242EE0: .word 0x000F0E02"
    );
    #endif
}

void ov70_02242EE4(void) {
    /* Original at 0x02242EE4 */
    /* Requires manual decompilation - 96 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x23\n    bl sub_02019688\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r4, #0\n    mov r1, #2\n    bl ov70_0224190C\n    ldr r0, [r4, #0x60]\n    cmp r0, #1\n    bne _02242F20\n    add r0, r4, #0\n    ldr r1, [r4, #0x24]\n    add r0, #0x34\n    mov r2, #1\n    bl ov70_0223F7E4\n    str r0, [r4, #0x5c]\n    b _02242F32\n    cmp r0, #0\n    bne _02242F32\n    add r0, r4, #0\n    ldr r1, [r4, #0x24]\n    add r0, #0x34\n    mov r2, #0\n    bl ov70_0223F7E4\n    str r0, [r4, #0x5c]\n    ldr r2, [r4, #0x5c]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov70_022434C0\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    ldr r0, [r4, #0x5c]\n    mov r1, #4\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r4, #4]\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x38]\n    add r2, #0x40\n    bl ov70_02243F00\n    ldr r2, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r4, #0x1c]\n    mov r2, #0x20\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r4, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    mov r1, #0\n    add r0, r4, #0\n    str r1, [r4, #0x48]\n    add r0, #0x7e\n    strb r1, [r0]\n    ldr r0, [r4, #0x48]\n    ldr r1, _02242FBC ; =ov70_02245D76\n    lsl r3, r0, #1\n    ldr r2, _02242FC0 ; =ov70_02245D77\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_020197F4\n    mov r1, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    sub r2, r1, #4\n    add r3, r1, #0\n    bl sub_020198FC\n    mov r0, #0x20\n    str r0, [r4, #0x4c]\n    add sp, #4\n    pop {r3, r4, pc}\n    _02242FBC: .word ov70_02245D76\n    _02242FC0: .word ov70_02245D77"
    );
    #endif
}

void ov70_02242FC4(void) {
    /* Original at 0x02242FC4 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x10\n    add r4, r1, #0\n    mov r1, #0\n    add r5, r0, #0\n    str r1, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x20]\n    str r0, [sp, #8]\n    add r0, r4, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r5, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl sub_02019A60\n    add sp, #0x10\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02242FF4(void) {
    /* Original at 0x02242FF4 */
    /* Requires manual decompilation - 3 instructions */
    #ifdef MWERKS
    asm(
        "mov r0, #0\n    mvn r0, r0\n    bx lr"
    );
    #endif
}

void ov70_02242FFC(void) {
    /* Original at 0x02242FFC */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_020199E4\n    cmp r0, #0\n    bne _02243044\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x58\n    ldrsh r0, [r4, r0]\n    cmp r0, #2\n    bne _02243040\n    ldr r0, [r4, #0x10]\n    mov r1, #0xe4\n    mov r2, #0x78\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x9a\n    mov r2, #0x78\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x50]\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0224304C(void) {
    sub_020199E4(0, 0);
}

void ov70_02243068(void) {
    /* Original at 0x02243068 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_020199E4\n    cmp r0, #0\n    bne _02243084\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_0201980C\n    ldr r0, [r4, #0x50]\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}"
    );
    #endif
}

void ov70_0224308C(void) {
    /* Original at 0x0224308C */
    /* Requires manual decompilation - 28 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #4\n    mov r2, #0x20\n    bl ov70_02242D44\n    ldr r0, [r4, #0xc]\n    mov r1, #0x3d\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0xc]\n    mov r1, #0x88\n    mov r2, #0x28\n    bl ov70_02238F9C\n    mov r1, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    sub r2, r1, #4\n    add r3, r1, #0\n    bl sub_020198FC\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    mov r0, #5\n    str r0, [r4, #0x50]\n    sub r0, r0, #6\n    strh r0, [r4, #0x3c]\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_022430CC(void) {
    /* Original at 0x022430CC */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x64\n    bl ov70_022421D0\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _022430F6\n    cmp r4, #8\n    bhi _02243118\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #6\n    str r0, [r5, #0x4c]\n    strh r4, [r5, #0x3c]\n    b _02243118\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #6\n    str r0, [r5, #0x50]\n    sub r0, r0, #7\n    strh r0, [r5, #0x3c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243120(void) {
    /* Original at 0x02243120 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #4\n    bl ov70_02241DB4\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3c\n    ldrsh r1, [r4, r0]\n    cmp r1, #0\n    blt _0224315C\n    cmp r1, #8\n    ble _02243142\n    bl GF_AssertFail\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #3\n    ldr r0, _02243168 ; =ov70_02245F5C\n    ldr r0, [r0, r1]\n    cmp r0, #1\n    bne _02243158\n    mov r0, #0\n    strh r0, [r4, #0x3e]\n    mov r0, #0xc\n    b _02243160\n    mov r0, #8\n    b _02243160\n    sub r0, #0x3e\n    pop {r4, pc}\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    _02243168: .word ov70_02245F5C"
    );
    #endif
}

void ov70_0224316C(void) {
    /* Original at 0x0224316C */
    /* Requires manual decompilation - 98 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x22\n    bl sub_02019688\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r5, #0\n    mov r1, #4\n    bl ov70_0224190C\n    add r0, r5, #0\n    add r0, #0x64\n    mov r1, #1\n    mov r2, #0x1a\n    bl MI_CpuFill8\n    mov r4, #0\n    add r6, r4, #0\n    add r1, r4, #0\n    ldr r0, [r5, #0x24]\n    add r1, #0x6e\n    bl NewString_ReadMsgData\n    add r7, r0, #0\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_02243F7C\n    cmp r0, #1\n    bne _022431C2\n    add r2, r5, r4\n    ldr r0, _02243244 ; =0x000F0E02\n    add r2, #0x64\n    mov r1, #1\n    b _022431CA\n    add r2, r5, r4\n    ldr r0, _02243248 ; =0x00080902\n    add r2, #0x64\n    mov r1, #0\n    strb r1, [r2]\n    str r0, [sp]\n    ldr r1, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    add r1, r1, r6\n    add r2, r7, #0\n    mov r3, #2\n    bl ov70_02242FC4\n    add r0, r7, #0\n    bl String_Delete\n    add r4, r4, #1\n    add r6, #0x10\n    cmp r4, #9\n    blt _022431A0\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_020197F4\n    ldr r0, [r5, #0xc]\n    mov r1, #0x3d\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x3c\n    ldrsh r0, [r5, r0]\n    ldr r1, _0224324C ; =ov70_02245E26\n    ldr r2, _02243250 ; =ov70_02245E27\n    lsl r3, r0, #1\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    mov r0, #0x3c\n    ldrsh r0, [r5, r0]\n    mov r1, #1\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0xc]\n    bl Sprite_SetDrawFlag\n    mov r0, #5\n    str r0, [r5, #0x4c]\n    sub r0, r0, #6\n    pop {r3, r4, r5, r6, r7, pc}\n    _02243244: .word 0x000F0E02\n    _02243248: .word 0x00080902\n    _0224324C: .word ov70_02245E26\n    _02243250: .word ov70_02245E27"
    );
    #endif
}

void ov70_02243254(void) {
    /* Original at 0x02243254 */
    /* Requires manual decompilation - 150 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x20\n    bl sub_02019688\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r5, #0\n    mov r1, #5\n    bl ov70_0224190C\n    add r0, r5, #0\n    add r0, #0x64\n    mov r1, #1\n    mov r2, #0x1a\n    bl MI_CpuFill8\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02243388 ; =0x000F0E02\n    mov r3, #0x3c\n    str r0, [sp, #4]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    ldr r2, [r5, #4]\n    add r3, #0x6e\n    bl ov70_02243E8C\n    mov r0, #0x3c\n    ldrsh r1, [r5, r0]\n    ldr r0, _0224338C ; =ov70_02245F5C\n    mov r4, #1\n    lsl r2, r1, #3\n    ldr r0, [r0, r2]\n    cmp r0, #1\n    blt _0224332C\n    mov r7, #0x10\n    lsl r2, r1, #2\n    ldr r1, _02243390 ; =ov70_02245E84\n    add r0, r5, #0\n    ldr r1, [r1, r2]\n    add r1, r4, r1\n    sub r1, r1, #1\n    bl ov70_02243F54\n    cmp r0, #0\n    ble _022432DA\n    mov r1, #0x3c\n    ldrsh r1, [r5, r1]\n    ldr r0, _02243388 ; =0x000F0E02\n    lsl r2, r1, #2\n    ldr r1, _02243390 ; =ov70_02245E84\n    ldr r2, [r1, r2]\n    add r1, r5, r4\n    add r2, r2, r1\n    add r2, #0x63\n    mov r1, #1\n    b _022432EE\n    mov r1, #0x3c\n    ldrsh r1, [r5, r1]\n    ldr r0, _02243394 ; =0x00080902\n    lsl r2, r1, #2\n    ldr r1, _02243390 ; =ov70_02245E84\n    ldr r2, [r1, r2]\n    add r1, r5, r4\n    add r2, r2, r1\n    add r2, #0x63\n    mov r1, #0\n    strb r1, [r2]\n    mov r1, #5\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r3, #0x3c\n    ldrsh r3, [r5, r3]\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    lsl r6, r3, #3\n    ldr r3, _02243398 ; =ov70_02245F58\n    ldr r1, [r5, #0x24]\n    ldr r3, [r3, r6]\n    add r2, r2, r7\n    add r3, r4, r3\n    lsl r6, r3, #2\n    ldr r3, _0224339C ; =ov70_02245FA0\n    add r3, r3, r6\n    sub r3, r3, #4\n    ldr r3, [r3]\n    bl ov70_02243E8C\n    mov r0, #0x3c\n    ldrsh r1, [r5, r0]\n    ldr r0, _02243398 ; =ov70_02245F58\n    add r4, r4, #1\n    lsl r2, r1, #3\n    add r0, r0, r2\n    ldr r0, [r0, #4]\n    add r7, #0x10\n    cmp r4, r0\n    ble _022432B0\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r5, #0xc]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x3e\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bge _0224335A\n    mov r0, #0\n    b _0224335A\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x48]\n    ldr r1, _022433A0 ; =ov70_02245E26\n    lsl r3, r0, #1\n    ldr r2, _022433A4 ; =ov70_02245E27\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #9\n    str r0, [r5, #0x4c]\n    sub r0, #0xa\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02243388: .word 0x000F0E02\n    _0224338C: .word ov70_02245F5C\n    _02243390: .word ov70_02245E84\n    _02243394: .word 0x00080902\n    _02243398: .word ov70_02245F58\n    _0224339C: .word ov70_02245FA0\n    _022433A0: .word ov70_02245E26\n    _022433A4: .word ov70_02245E27"
    );
    #endif
}

void ov70_022433A8(void) {
    /* Original at 0x022433A8 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x64\n    bl ov70_02242390\n    add r5, r0, #0\n    cmp r5, #4\n    bhi _022433D0\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022433C6: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _022433EA\n    b _022433FA\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xa\n    str r0, [r4, #0x4c]\n    strh r5, [r4, #0x3e]\n    b _022433FA\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0xa\n    str r0, [r4, #0x4c]\n    sub r0, #0xb\n    strh r0, [r4, #0x3e]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243400(void) {
    /* Original at 0x02243400 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    mov r1, #5\n    add r4, r0, #0\n    bl ov70_02241DB4\n    mov r0, #0x3e\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    blt _02243416\n    mov r0, #0xc\n    b _02243418\n    mov r0, #7\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02243420(void) {
    /* Original at 0x02243420 */
    /* Requires manual decompilation - 5 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #8\n    str r1, [r0, #0x4c]\n    sub r1, #9\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov70_0224342C(void) {
    /* Original at 0x0224342C */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    mov r6, #0\n    add r7, r2, #0\n    str r1, [sp]\n    add r5, r3, #0\n    add r4, r6, #0\n    cmp r7, #0\n    ble _02243452\n    ldrh r1, [r5]\n    ldr r0, [sp]\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _0224344A\n    add r4, r4, #1\n    add r6, r6, #1\n    add r5, r5, #2\n    cmp r6, r7\n    blt _0224343C\n    add r0, r4, #0\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_02243458(void) {
    /* Original at 0x02243458 */
    /* Requires manual decompilation - 46 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    str r1, [sp]\n    add r6, r0, #0\n    ldr r1, [sp, #0x28]\n    mov r0, #0x3d\n    add r2, sp, #0xc\n    add r4, r3, #0\n    ldr r7, [sp, #0x2c]\n    bl ov70_0223F658\n    str r0, [sp, #4]\n    ldr r2, [sp, #0xc]\n    ldr r3, [sp, #4]\n    add r0, r4, #0\n    add r1, r7, #0\n    bl ov70_0224342C\n    str r0, [sp, #8]\n    add r0, r0, #1\n    mov r1, #0x3d\n    bl ListMenuItems_New\n    str r0, [r6]\n    ldr r0, [sp, #0xc]\n    mov r4, #0\n    cmp r0, #0\n    ble _022434B4\n    ldr r5, [sp, #4]\n    ldrh r1, [r5]\n    add r0, r7, #0\n    bl Pokedex_CheckMonSeenFlag\n    cmp r0, #0\n    beq _022434AA\n    ldrh r2, [r5]\n    ldr r0, [r6]\n    ldr r1, [sp]\n    add r3, r2, #0\n    bl ListMenuItems_AppendFromMsgData\n    ldr r0, [sp, #0xc]\n    add r4, r4, #1\n    add r5, r5, #2\n    cmp r4, r0\n    blt _02243492\n    ldr r0, [sp, #4]\n    bl Heap_Free\n    ldr r0, [sp, #8]\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}"
    );
    #endif
}

void ov70_022434C0(void) {
    /* Original at 0x022434C0 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    lsl r7, r1, #2\n    mov r4, #0\n    add r5, r0, #0\n    lsl r0, r7, #3\n    str r2, [sp, #4]\n    str r4, [sp, #0xc]\n    add r6, r4, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    mov r1, #0x22\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #4]\n    cmp r7, r0\n    bge _022434FE\n    ldr r0, _02243528 ; =0x000F0E02\n    ldr r2, [sp, #8]\n    str r0, [sp]\n    ldr r3, [r5, #0x34]\n    ldr r1, [r5, #4]\n    add r2, r2, r3\n    ldr r0, [r5, #0x1c]\n    ldr r2, [r6, r2]\n    add r1, r1, r4\n    mov r3, #0\n    bl ov70_02242FC4\n    b _02243512\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    add r2, r2, r4\n    bl sub_02019A60\n    ldr r0, [sp, #0xc]\n    add r4, #0x10\n    add r0, r0, #1\n    add r7, r7, #1\n    add r6, #8\n    str r0, [sp, #0xc]\n    cmp r0, #4\n    blt _022434D4\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02243528: .word 0x000F0E02"
    );
    #endif
}

void ov70_0224352C(void) {
    /* Original at 0x0224352C */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #0x10\n    add r5, r0, #0\n    lsl r0, r1, #2\n    mov r4, #0\n    add r7, r1, r0\n    lsl r0, r7, #3\n    str r2, [sp, #4]\n    str r4, [sp, #0xc]\n    add r6, r4, #0\n    str r0, [sp, #8]\n    ldr r0, [r5, #4]\n    mov r1, #0x22\n    add r0, r0, r4\n    bl FillWindowPixelBuffer\n    ldr r0, [sp, #4]\n    cmp r7, r0\n    bge _0224356C\n    ldr r0, _02243594 ; =0x000F0E02\n    ldr r2, [sp, #8]\n    str r0, [sp]\n    ldr r3, [r5, #0x34]\n    ldr r1, [r5, #4]\n    add r2, r2, r3\n    ldr r0, [r5, #0x1c]\n    ldr r2, [r6, r2]\n    add r1, r1, r4\n    mov r3, #0\n    bl ov70_02242FC4\n    b _02243580\n    ldr r0, [r5, #4]\n    add r0, r0, r4\n    bl CopyWindowPixelsToVram_TextMode\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    add r2, r2, r4\n    bl sub_02019A60\n    ldr r0, [sp, #0xc]\n    add r4, #0x10\n    add r0, r0, #1\n    add r7, r7, #1\n    add r6, #8\n    str r0, [sp, #0xc]\n    cmp r0, #5\n    blt _02243542\n    add sp, #0x10\n    pop {r3, r4, r5, r6, r7, pc}\n    _02243594: .word 0x000F0E02"
    );
    #endif
}

void ov70_02243598(void) {
    /* Original at 0x02243598 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x23\n    bl sub_02019688\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r4, #0\n    mov r1, #0\n    bl ov70_0224190C\n    mov r0, #0x3e\n    ldrsh r2, [r4, r0]\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #2\n    ldr r0, _0224367C ; =ov70_02245E84\n    ldr r0, [r0, r1]\n    add r0, r2, r0\n    str r0, [sp]\n    ldr r0, [r4, #0x20]\n    str r0, [sp, #4]\n    add r0, r4, #0\n    ldr r1, [r4, #0x28]\n    ldr r2, [r4, #0x24]\n    ldr r3, [r4, #0x30]\n    add r0, #0x34\n    bl ov70_02243458\n    str r0, [r4, #0x5c]\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    ldr r2, [r4, #0x5c]\n    add r0, r4, #0\n    bl ov70_022434C0\n    ldr r0, [r4, #0x5c]\n    mov r1, #4\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r4, #4]\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x38]\n    add r2, #0x40\n    bl ov70_02243F00\n    ldr r2, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r4, #0x1c]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r4, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0\n    ldr r1, _02243680 ; =ov70_02245D76\n    lsl r3, r0, #1\n    ldr r2, _02243684 ; =ov70_02245D77\n    str r0, [r4, #0x48]\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x10]\n    mov r1, #0xe4\n    mov r2, #0x78\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x9a\n    mov r2, #0x78\n    bl ov70_02238F9C\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0xd\n    str r0, [r4, #0x4c]\n    sub r0, #0xe\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _0224367C: .word ov70_02245E84\n    _02243680: .word ov70_02245D76\n    _02243684: .word ov70_02245D77"
    );
    #endif
}

void ov70_02243688(void) {
    /* Original at 0x02243688 */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_0224261C\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _022436A2\n    add r0, r0, #1\n    cmp r4, r0\n    beq _022436F6\n    b _022436C4\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, _022436FC ; =0x000005DC\n    bl PlaySE\n    mov r0, #0xe\n    str r0, [r5, #0x4c]\n    sub r0, #0xf\n    add r5, #0x40\n    strh r0, [r5]\n    b _022436F6\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0xf\n    str r0, [r5, #0x50]\n    add r5, #0x40\n    strh r4, [r5]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}\n    _022436FC: .word 0x000005DC"
    );
    #endif
}

void ov70_02243700(void) {
    /* Original at 0x02243700 */
    /* Requires manual decompilation - 34 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    add r0, r4, #0\n    mov r1, #0\n    bl ov70_02241DB4\n    ldr r0, [r4, #0x34]\n    bl ListMenuItems_Delete\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    ble _0224372E\n    bl GF_AssertFail\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #3\n    ldr r0, _0224374C ; =ov70_02245F5C\n    ldr r0, [r0, r1]\n    cmp r0, #1\n    bne _02243740\n    mov r0, #7\n    b _02243742\n    mov r0, #0xb\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    nop\n    _0224374C: .word ov70_02245F5C"
    );
    #endif
}

void ov70_02243750(void) {
    /* Original at 0x02243750 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    bl ov70_02241DB4\n    ldr r0, [r4, #0x34]\n    bl ListMenuItems_Delete\n    mov r0, #0x40\n    ldrsh r0, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02243768(void) {
    /* Original at 0x02243768 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #6\n    mov r2, #0x20\n    add r4, r0, #0\n    bl ov70_02242D44\n    mov r1, #0\n    mov r0, #4\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    sub r2, r1, #4\n    add r3, r1, #0\n    bl sub_020198FC\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    mov r0, #0x11\n    str r0, [r4, #0x50]\n    mov r0, #0xa\n    str r0, [r4, #0x48]\n    sub r0, #0xb\n    strh r0, [r4, #0x3c]\n    ldr r0, [r4, #0x48]\n    ldr r1, _022437C0 ; =ov70_02245DF8\n    lsl r3, r0, #1\n    ldr r2, _022437C4 ; =ov70_02245DF9\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r4, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0\n    mvn r0, r0\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _022437C0: .word ov70_02245DF8\n    _022437C4: .word ov70_02245DF9"
    );
    #endif
}

void ov70_022437C8(void) {
    /* Original at 0x022437C8 */
    /* Requires manual decompilation - 57 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    add r1, r5, #0\n    add r1, #0x64\n    bl ov70_022429B8\n    add r4, r0, #0\n    cmp r4, #0xa\n    beq _0224380E\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _022437EA\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02243840\n    b _02243832\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x12\n    str r0, [r5, #0x50]\n    sub r0, #0x13\n    strh r0, [r5, #0x3c]\n    b _02243840\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x12\n    str r0, [r5, #0x50]\n    sub r0, #0x14\n    strh r0, [r5, #0x3c]\n    b _02243840\n    cmp r4, #8\n    bls _0224383A\n    bl GF_AssertFail\n    strh r4, [r5, #0x3c]\n    mov r0, #0x12\n    str r0, [r5, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243848(void) {
    /* Original at 0x02243848 */
    /* Requires manual decompilation - 63 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #6\n    bl ov70_02241DB4\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3c\n    ldrsh r2, [r4, r0]\n    cmp r2, #0\n    bge _0224387E\n    add r1, r0, #0\n    sub r1, #0x3d\n    cmp r2, r1\n    bne _02243872\n    add sp, #4\n    sub r0, #0x3e\n    pop {r3, r4, pc}\n    sub r0, #0x3e\n    cmp r2, r0\n    bne _022438C8\n    add sp, #4\n    mov r0, #0\n    pop {r3, r4, pc}\n    cmp r2, #8\n    ble _02243886\n    bl GF_AssertFail\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #3\n    ldr r0, _022438D0 ; =ov70_02245F5C\n    ldr r0, [r0, r1]\n    cmp r0, #1\n    bne _022438C4\n    mov r1, #0\n    strh r1, [r4, #0x3e]\n    mov r2, #3\n    str r2, [sp]\n    ldr r0, [r4, #0x1c]\n    sub r2, r2, #7\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _022438B2\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0xc]\n    mov r1, #0x32\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #2\n    str r0, [r4, #0x4c]\n    mov r0, #0x18\n    str r0, [r4, #0x50]\n    b _022438C8\n    mov r0, #0x14\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    add sp, #4\n    pop {r3, r4, pc}\n    _022438D0: .word ov70_02245F5C"
    );
    #endif
}

void ov70_022438D4(void) {
    /* Original at 0x022438D4 */
    /* Requires manual decompilation - 35 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #6\n    mov r2, #0x10\n    bl ov70_02242D44\n    ldr r0, [r4, #0xc]\n    mov r1, #0x3d\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    ldr r1, _02243920 ; =ov70_02245DF8\n    ldr r2, _02243924 ; =ov70_02245DF9\n    lsl r3, r0, #1\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    str r0, [r4, #0x48]\n    add r1, #0x10\n    ldr r0, [r4, #0xc]\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _02243918\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x11\n    str r0, [r4, #0x4c]\n    sub r0, #0x12\n    pop {r4, pc}\n    _02243920: .word ov70_02245DF8\n    _02243924: .word ov70_02245DF9"
    );
    #endif
}

void ov70_02243928(void) {
    /* Original at 0x02243928 */
    /* Requires manual decompilation - 142 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x20\n    bl sub_02019688\n    ldr r0, [r5, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r5, #0\n    mov r1, #5\n    bl ov70_0224190C\n    add r0, r5, #0\n    add r0, #0x64\n    mov r1, #1\n    mov r2, #0x1a\n    bl MI_CpuFill8\n    mov r0, #2\n    str r0, [sp]\n    ldr r0, _02243A50 ; =0x000F0E02\n    mov r3, #0x3c\n    str r0, [sp, #4]\n    ldrsh r3, [r5, r3]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    ldr r2, [r5, #4]\n    add r3, #0x6e\n    bl ov70_02243E8C\n    mov r4, #1\n    mov r7, #0x10\n    mov r1, #0x3c\n    ldrsh r1, [r5, r1]\n    add r0, r5, #0\n    lsl r2, r1, #2\n    ldr r1, _02243A54 ; =ov70_02245E84\n    ldr r1, [r1, r2]\n    add r1, r4, r1\n    sub r1, r1, #1\n    bl ov70_02243FD4\n    cmp r0, #0\n    ble _022439A4\n    mov r1, #0x3c\n    ldrsh r1, [r5, r1]\n    ldr r0, _02243A50 ; =0x000F0E02\n    lsl r2, r1, #2\n    ldr r1, _02243A54 ; =ov70_02245E84\n    ldr r2, [r1, r2]\n    add r1, r5, r4\n    add r2, r2, r1\n    add r2, #0x63\n    mov r1, #1\n    b _022439B8\n    mov r1, #0x3c\n    ldrsh r1, [r5, r1]\n    ldr r0, _02243A58 ; =0x00080902\n    lsl r2, r1, #2\n    ldr r1, _02243A54 ; =ov70_02245E84\n    ldr r2, [r1, r2]\n    add r1, r5, r4\n    add r2, r2, r1\n    add r2, #0x63\n    mov r1, #0\n    strb r1, [r2]\n    mov r1, #5\n    str r1, [sp]\n    str r0, [sp, #4]\n    mov r3, #0x3c\n    ldrsh r3, [r5, r3]\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    lsl r6, r3, #3\n    ldr r3, _02243A5C ; =ov70_02245F58\n    ldr r1, [r5, #0x24]\n    ldr r3, [r3, r6]\n    add r2, r2, r7\n    add r3, r4, r3\n    lsl r6, r3, #2\n    ldr r3, _02243A60 ; =ov70_02245FA0\n    add r3, r3, r6\n    sub r3, r3, #4\n    ldr r3, [r3]\n    bl ov70_02243E8C\n    add r4, r4, #1\n    add r7, #0x10\n    cmp r4, #4\n    blt _02243976\n    ldr r2, [r5, #4]\n    ldr r0, [r5, #0x1c]\n    ldr r1, [r5, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    mov r2, #0x10\n    add r3, r1, #0\n    bl sub_020196E8\n    ldr r0, [r5, #0xc]\n    mov r1, #0x2f\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #0x3e\n    ldrsh r0, [r5, r0]\n    cmp r0, #0\n    bge _02243A18\n    mov r0, #0\n    b _02243A18\n    str r0, [r5, #0x48]\n    ldr r0, [r5, #0x48]\n    ldr r1, _02243A64 ; =ov70_02245E26\n    lsl r3, r0, #1\n    ldr r2, _02243A68 ; =ov70_02245E27\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r5, #0xc]\n    add r1, #0x10\n    lsl r1, r1, #3\n    lsl r2, r2, #3\n    bl ov70_02238F9C\n    ldr r0, [r5, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x18]\n    cmp r0, #0\n    beq _02243A46\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x15\n    str r0, [r5, #0x4c]\n    sub r0, #0x16\n    add sp, #8\n    pop {r3, r4, r5, r6, r7, pc}\n    _02243A50: .word 0x000F0E02\n    _02243A54: .word ov70_02245E84\n    _02243A58: .word 0x00080902\n    _02243A5C: .word ov70_02245F58\n    _02243A60: .word ov70_02245FA0\n    _02243A64: .word ov70_02245E26\n    _02243A68: .word ov70_02245E27"
    );
    #endif
}

void ov70_02243A6C(void) {
    /* Original at 0x02243A6C */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    add r1, r4, #0\n    add r1, #0x64\n    bl ov70_02242390\n    add r5, r0, #0\n    cmp r5, #4\n    bhi _02243A94\n    add r0, r5, r5\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02243A8A: ; jump table\n    mov r0, #1\n    mvn r0, r0\n    cmp r5, r0\n    beq _02243AAE\n    b _02243ABE\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x16\n    str r0, [r4, #0x4c]\n    strh r5, [r4, #0x3e]\n    b _02243ABE\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x16\n    str r0, [r4, #0x4c]\n    sub r0, #0x17\n    strh r0, [r4, #0x3e]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243AC4(void) {
    /* Original at 0x02243AC4 */
    /* Requires manual decompilation - 38 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r1, #5\n    bl ov70_02241DB4\n    ldr r0, [r4, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #0x3e\n    ldrsh r0, [r4, r0]\n    cmp r0, #0\n    bge _02243AE6\n    mov r0, #0x13\n    str r0, [r4, #0x4c]\n    b _02243B12\n    mov r0, #3\n    mov r1, #0\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    sub r2, r1, #4\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _02243B02\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0xc]\n    mov r1, #0x32\n    bl Sprite_SetAnimCtrlSeq\n    mov r0, #2\n    str r0, [r4, #0x4c]\n    mov r0, #0x18\n    str r0, [r4, #0x50]\n    mov r0, #0\n    mvn r0, r0\n    add sp, #4\n    pop {r3, r4, pc}"
    );
    #endif
}

void ov70_02243B1C(void) {
    /* Original at 0x02243B1C */
    /* Requires manual decompilation - 8 instructions */
    #ifdef MWERKS
    asm(
        "mov r1, #0x14\n    str r1, [r0, #0x4c]\n    mov r1, #0x3e\n    ldrsh r2, [r0, r1]\n    sub r1, #0x3f\n    str r2, [r0, #0x48]\n    add r0, r1, #0\n    bx lr"
    );
    #endif
}

void ov70_02243B2C(void) {
    /* Original at 0x02243B2C */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #1\n    str r0, [sp]\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    mov r2, #0x64\n    mov r3, #0x1e\n    bl sub_02019688\n    ldr r0, [r4, #0x1c]\n    mov r1, #0\n    bl sub_02019B08\n    add r0, r4, #0\n    mov r1, #3\n    bl ov70_0224190C\n    mov r3, #0x3c\n    ldrsh r3, [r4, r3]\n    mov r2, #0x3e\n    add r0, r4, #0\n    lsl r5, r3, #2\n    ldr r3, _02243BFC ; =ov70_02245E84\n    ldrsh r2, [r4, r2]\n    ldr r3, [r3, r5]\n    ldr r1, [r4, #0x2c]\n    add r0, #0x34\n    add r2, r2, r3\n    bl ov70_0223F904\n    str r0, [r4, #0x5c]\n    ldr r2, [r4, #0x5c]\n    add r0, r4, #0\n    mov r1, #0\n    bl ov70_0224352C\n    add r0, r4, #0\n    mov r1, #0\n    add r0, #0x5a\n    strh r1, [r0]\n    ldr r0, [r4, #0x5c]\n    mov r1, #5\n    bl ov70_02242508\n    str r0, [sp]\n    mov r3, #0x5a\n    ldr r2, [r4, #4]\n    ldrsh r3, [r4, r3]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x38]\n    add r2, #0x50\n    bl ov70_02243F00\n    ldr r2, [r4, #4]\n    ldr r0, [r4, #0x1c]\n    ldr r1, [r4, #0x24]\n    add r2, #0xe0\n    mov r3, #0x44\n    bl ov70_02243EB8\n    mov r1, #0\n    ldr r0, [r4, #0x1c]\n    mov r2, #1\n    add r3, r1, #0\n    bl sub_020196E8\n    mov r0, #0\n    ldr r1, _02243C00 ; =ov70_02245D8A\n    lsl r3, r0, #1\n    ldr r2, _02243C04 ; =ov70_02245D8B\n    str r0, [r4, #0x48]\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x10]\n    mov r1, #0xb0\n    mov r2, #0x88\n    bl ov70_02238F9C\n    ldr r0, [r4, #0x14]\n    mov r1, #0x58\n    mov r2, #0x88\n    bl ov70_02238F9C\n    ldr r0, [r4, #0xc]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x10]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x14]\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    mov r0, #0x19\n    str r0, [r4, #0x4c]\n    sub r0, #0x1a\n    pop {r3, r4, r5, pc}\n    nop\n    _02243BFC: .word ov70_02245E84\n    _02243C00: .word ov70_02245D8A\n    _02243C04: .word ov70_02245D8B"
    );
    #endif
}

void ov70_02243C08(void) {
    /* Original at 0x02243C08 */
    /* Requires manual decompilation - 56 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_02242C64\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02243C22\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02243C84\n    b _02243C52\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #2\n    str r0, [r5, #0x4c]\n    mov r0, #0x1a\n    str r0, [r5, #0x50]\n    b _02243C84\n    mov r2, #6\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x1b\n    str r0, [r5, #0x50]\n    add r5, #0x42\n    strh r4, [r5]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243C8C(void) {
    /* Original at 0x02243C8C */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #3\n    bl ov70_02241DB4\n    ldr r0, [r4, #0x34]\n    bl ListMenuItems_Delete\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    cmp r0, #8\n    ble _02243CA8\n    bl GF_AssertFail\n    mov r0, #0x3c\n    ldrsh r0, [r4, r0]\n    lsl r1, r0, #3\n    ldr r0, _02243CC4 ; =ov70_02245F5C\n    ldr r0, [r0, r1]\n    cmp r0, #1\n    bne _02243CBA\n    mov r0, #0x13\n    b _02243CBC\n    mov r0, #0x17\n    str r0, [r4, #0x4c]\n    mov r0, #0\n    mvn r0, r0\n    pop {r4, pc}\n    _02243CC4: .word ov70_02245F5C"
    );
    #endif
}

void ov70_02243CC8(void) {
    /* Original at 0x02243CC8 */
    /* Requires manual decompilation - 14 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #3\n    bl ov70_02241DB4\n    ldr r0, [r4, #0x18]\n    cmp r0, #0\n    beq _02243CDE\n    mov r1, #1\n    bl Sprite_SetDrawFlag\n    ldr r0, [r4, #0x34]\n    bl ListMenuItems_Delete\n    mov r0, #0x42\n    ldrsh r0, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02243CEC(void) {
    /* Original at 0x02243CEC */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    str r1, [r4, #0x48]\n    bl ov70_02242E58\n    ldr r0, [r4, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x48]\n    ldr r1, _02243D20 ; =ov70_02245D66\n    lsl r3, r0, #1\n    ldr r2, _02243D24 ; =ov70_02245D67\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    bl ov70_02238F9C\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    mov r0, #0x1d\n    str r0, [r4, #0x50]\n    sub r0, #0x1e\n    pop {r4, pc}\n    nop\n    _02243D20: .word ov70_02245D66\n    _02243D24: .word ov70_02245D67"
    );
    #endif
}

void ov70_02243D28(void) {
    /* Original at 0x02243D28 */
    /* Requires manual decompilation - 47 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_022426F4\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02243D42\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02243D8A\n    b _02243D68\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x1e\n    str r0, [r5, #0x50]\n    sub r0, #0x20\n    add r5, #0x44\n    strb r0, [r5]\n    b _02243D8A\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x1e\n    str r0, [r5, #0x50]\n    add r5, #0x44\n    strb r4, [r5]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243D90(void) {
    ov70_02241DB4();
}

void ov70_02243DA0(void) {
    /* Original at 0x02243DA0 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #0\n    str r1, [r4, #0x48]\n    bl ov70_02242EE4\n    ldr r0, [r4, #0xc]\n    mov r1, #0x31\n    bl Sprite_SetAnimCtrlSeq\n    ldr r0, [r4, #0x48]\n    ldr r1, _02243DD4 ; =ov70_02245D80\n    lsl r3, r0, #1\n    ldr r2, _02243DD8 ; =ov70_02245D81\n    ldrb r1, [r1, r3]\n    ldrb r2, [r2, r3]\n    ldr r0, [r4, #0xc]\n    bl ov70_02238F9C\n    mov r0, #1\n    str r0, [r4, #0x4c]\n    mov r0, #0x20\n    str r0, [r4, #0x50]\n    sub r0, #0x21\n    pop {r4, pc}\n    nop\n    _02243DD4: .word ov70_02245D80\n    _02243DD8: .word ov70_02245D81"
    );
    #endif
}

void ov70_02243DDC(void) {
    /* Original at 0x02243DDC */
    /* Requires manual decompilation - 67 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_022428C0\n    add r4, r0, #0\n    mov r0, #1\n    mvn r0, r0\n    cmp r4, r0\n    beq _02243DF6\n    add r0, r0, #1\n    cmp r4, r0\n    beq _02243E6E\n    b _02243E2C\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x21\n    str r0, [r5, #0x50]\n    sub r0, #0x23\n    add r5, #0x45\n    strb r0, [r5]\n    b _02243E6E\n    mov r2, #4\n    str r2, [sp]\n    mov r1, #0\n    ldr r0, [r5, #0x1c]\n    add r3, r1, #0\n    bl sub_020198FC\n    ldr r0, [r5, #0xc]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x10]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    ldr r0, [r5, #0x14]\n    mov r1, #0\n    bl Sprite_SetDrawFlag\n    mov r0, #3\n    str r0, [r5, #0x4c]\n    mov r0, #0x21\n    str r0, [r5, #0x50]\n    mov r0, #0x5a\n    ldrsh r0, [r5, r0]\n    ldr r1, [r5, #0x34]\n    add r5, #0x45\n    lsl r0, r0, #2\n    add r0, r4, r0\n    lsl r0, r0, #3\n    add r0, r1, r0\n    ldr r0, [r0, #4]\n    strb r0, [r5]\n    mov r0, #0\n    mvn r0, r0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243E74(void) {
    /* Original at 0x02243E74 */
    /* Requires manual decompilation - 9 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r1, #2\n    bl ov70_02241DB4\n    ldr r0, [r4, #0x34]\n    bl ListMenuItems_Delete\n    mov r0, #0x45\n    ldrsb r0, [r4, r0]\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02243E8C(void) {
    /* Original at 0x02243E8C */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #4\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r6, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    ldr r0, [sp, #0x1c]\n    ldr r3, [sp, #0x18]\n    str r0, [sp]\n    add r0, r5, #0\n    add r1, r6, #0\n    add r2, r4, #0\n    bl ov70_02242FC4\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #4\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02243EB8(void) {
    /* Original at 0x02243EB8 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r6, r0, #0\n    add r0, r1, #0\n    add r1, r3, #0\n    add r5, r2, #0\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0xff\n    str r0, [sp, #4]\n    ldr r0, _02243EFC ; =0x000F0E02\n    mov r1, #4\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r4, #0\n    str r3, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add r0, r5, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r5, #0\n    bl sub_02019A60\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0x10\n    pop {r4, r5, r6, pc}\n    _02243EFC: .word 0x000F0E02"
    );
    #endif
}

void ov70_02243F00(void) {
    /* Original at 0x02243F00 */
    /* Requires manual decompilation - 37 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r4, r2, #0\n    add r6, r0, #0\n    add r5, r1, #0\n    add r1, r3, #1\n    str r4, [sp]\n    mov r0, #0\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    mov r2, #2\n    mov r3, #1\n    bl PrintUIntOnWindow\n    mov r1, #0\n    str r1, [sp]\n    add r0, r5, #0\n    add r2, r4, #0\n    mov r3, #0x10\n    bl sub_0200CDAC\n    str r4, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r3, #0\n    ldr r1, [sp, #0x20]\n    add r0, r5, #0\n    mov r2, #2\n    str r3, [sp, #8]\n    bl PrintUIntOnWindow\n    add r0, r4, #0\n    bl CopyWindowPixelsToVram_TextMode\n    add r0, r6, #0\n    mov r1, #0\n    add r2, r4, #0\n    bl sub_02019A60\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02243F54(void) {
    /* Original at 0x02243F54 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    mov r0, #0x3d\n    add r2, sp, #0\n    bl ov70_0223F658\n    add r5, r0, #0\n    ldr r0, [r4, #0x30]\n    ldr r1, [r4, #0x20]\n    ldr r2, [sp]\n    add r3, r5, #0\n    bl ov70_0224342C\n    add r4, r0, #0\n    add r0, r5, #0\n    bl Heap_Free\n    add r0, r4, #0\n    pop {r3, r4, r5, pc}"
    );
    #endif
}

void ov70_02243F7C(void) {
    /* Original at 0x02243F7C */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _02243FC8 ; =ov70_02245E84\n    lsl r3, r1, #2\n    ldr r4, [r2, r3]\n    ldr r2, _02243FCC ; =ov70_02245F5C\n    lsl r1, r1, #3\n    ldr r2, [r2, r1]\n    add r7, r0, #0\n    cmp r2, #0\n    ble _02243FB4\n    mov r5, #0\n    cmp r2, #0\n    ble _02243FC2\n    ldr r0, _02243FD0 ; =ov70_02245F58\n    add r6, r0, r1\n    add r0, r7, #0\n    add r1, r4, r5\n    bl ov70_02243F54\n    cmp r0, #0\n    ble _02243FAA\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, #4]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02243F9A\n    b _02243FC2\n    add r1, r4, #0\n    bl ov70_02243F54\n    cmp r0, #0\n    ble _02243FC2\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _02243FC8: .word ov70_02245E84\n    _02243FCC: .word ov70_02245F5C\n    _02243FD0: .word ov70_02245F58"
    );
    #endif
}

void ov70_02243FD4(void) {
    ov70_0223F8D0();
}

void ov70_02243FE0(void) {
    /* Original at 0x02243FE0 */
    /* Requires manual decompilation - 39 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, r7, lr}\n    ldr r2, _0224402C ; =ov70_02245E84\n    lsl r3, r1, #2\n    ldr r4, [r2, r3]\n    ldr r2, _02244030 ; =ov70_02245F5C\n    lsl r1, r1, #3\n    ldr r2, [r2, r1]\n    add r7, r0, #0\n    cmp r2, #0\n    ble _02244018\n    mov r5, #0\n    cmp r2, #0\n    ble _02244026\n    ldr r0, _02244034 ; =ov70_02245F58\n    add r6, r0, r1\n    add r0, r7, #0\n    add r1, r4, r5\n    bl ov70_02243FD4\n    cmp r0, #0\n    ble _0224400E\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    ldr r0, [r6, #4]\n    add r5, r5, #1\n    cmp r5, r0\n    blt _02243FFE\n    b _02244026\n    add r1, r4, #0\n    bl ov70_02243FD4\n    cmp r0, #0\n    ble _02244026\n    mov r0, #1\n    pop {r3, r4, r5, r6, r7, pc}\n    mov r0, #0\n    pop {r3, r4, r5, r6, r7, pc}\n    nop\n    _0224402C: .word ov70_02245E84\n    _02244030: .word ov70_02245F5C\n    _02244034: .word ov70_02245F58"
    );
    #endif
}

void ov70_02244038(void) {
    /* Original at 0x02244038 */
    /* Requires manual decompilation - 93 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl ov70_02244670\n    ldr r2, _02244114 ; =0x04000304\n    ldr r0, _02244118 ; =0xFFFF7FFF\n    ldrh r1, [r2]\n    and r0, r1\n    strh r0, [r2]\n    mov r0, #6\n    str r0, [sp]\n    mov r1, #1\n    str r1, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r2, r1, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    ldr r0, [r4, #4]\n    bl ov70_022441A4\n    add r0, r4, #0\n    bl ov70_022442B4\n    add r0, r4, #0\n    bl ov70_0224458C\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    mov r0, #1\n    add r1, r0, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #2\n    mov r1, #1\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #4\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #8\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _022440FA\n    ldr r1, [r4]\n    ldr r0, [r1, #0x3c]\n    cmp r0, #0\n    beq _022440EE\n    ldr r0, [r1, #0x20]\n    bl sub_02039418\n    ldr r0, _0224411C ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _02244120 ; =0x00000BA8\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #2\n    bl ov70_02238D84\n    add r0, r4, #0\n    bl ov70_02238F64\n    b _0224410C\n    mov r0, #4\n    bl Sys_ClearSleepDisableFlag\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    b _0224410C\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl sub_02039418\n    add r0, r4, #0\n    bl ov70_02245124\n    mov r0, #0x11\n    str r0, [r4, #0x2c]\n    mov r0, #2\n    add sp, #0xc\n    pop {r3, r4, pc}\n    nop\n    _02244114: .word 0x04000304\n    _02244118: .word 0xFFFF7FFF\n    _0224411C: .word 0x00000F0F\n    _02244120: .word 0x00000BA8"
    );
    #endif
}

void ov70_02244124(void) {
    /* Original at 0x02244124 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r5, r0, #0\n    bl ov70_02238E44\n    bl sub_0203A930\n    ldr r4, [r5, #0x2c]\n    ldr r1, _02244150 ; =ov70_02246780\n    lsl r2, r4, #2\n    ldr r1, [r1, r2]\n    add r0, r5, #0\n    blx r1\n    ldr r1, [r5, #0x2c]\n    cmp r4, r1\n    beq _0224414E\n    mov r1, #0x16\n    mov r2, #0\n    lsl r1, r1, #8\n    strh r2, [r5, r1]\n    add r1, r1, #2\n    strh r2, [r5, r1]\n    pop {r3, r4, r5, pc}\n    _02244150: .word ov70_02246780"
    );
    #endif
}

void ov70_02244154(void) {
    /* Original at 0x02244154 */
    /* Requires manual decompilation - 33 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _0224419C ; =0x000012D0\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _0224416E\n    bl SysTask_Destroy\n    ldr r0, _0224419C ; =0x000012D0\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r0, #4\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov70_022446A8\n    add r0, r4, #0\n    bl ov70_02244644\n    ldr r0, [r4, #4]\n    bl ov70_02244290\n    ldr r0, _022441A0 ; =0x000012D4\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r4, #0\n    bl ov70_02238E58\n    ldr r0, [r4, #0x14]\n    cmp r0, #0\n    bne _02244196\n    mov r0, #5\n    pop {r4, pc}\n    mov r0, #1\n    pop {r4, pc}\n    nop\n    _0224419C: .word 0x000012D0\n    _022441A0: .word 0x000012D4"
    );
    #endif
}

void ov70_022441A4(void) {
    /* Original at 0x022441A4 */
    /* Requires manual decompilation - 101 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #0x70\n    ldr r5, _02244280 ; =ov70_02246058\n    add r4, r0, #0\n    ldmia r5!, {r0, r1}\n    add r3, sp, #0x54\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #0\n    str r0, [r3]\n    add r0, r4, #0\n    add r3, r1, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    add r0, r4, #0\n    mov r1, #0\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _02244284 ; =ov70_0224603C\n    add r3, sp, #0x38\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #1\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineATogglePlanes\n    ldr r5, _02244288 ; =ov70_02246020\n    add r3, sp, #0x1c\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #4\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #1\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add r0, r4, #0\n    mov r1, #4\n    bl BgClearTilemapBufferAndCommit\n    ldr r5, _0224428C ; =ov70_02246074\n    add r3, sp, #0\n    ldmia r5!, {r0, r1}\n    add r2, r3, #0\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldmia r5!, {r0, r1}\n    stmia r3!, {r0, r1}\n    ldr r0, [r5]\n    mov r1, #5\n    str r0, [r3]\n    add r0, r4, #0\n    mov r3, #0\n    bl InitBgFromTemplate\n    mov r0, #2\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    mov r0, #0\n    mov r1, #0x20\n    add r2, r0, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #4\n    mov r1, #0x20\n    mov r2, #0\n    mov r3, #0x3d\n    bl BG_ClearCharDataRange\n    mov r0, #0x10\n    mov r1, #0\n    bl GfGfx_EngineBTogglePlanes\n    add sp, #0x70\n    pop {r3, r4, r5, pc}\n    nop\n    _02244280: .word ov70_02246058\n    _02244284: .word ov70_0224603C\n    _02244288: .word ov70_02246020\n    _0224428C: .word ov70_02246074"
    );
    #endif
}

void ov70_02244290(void) {
    FreeBgTilemapBuffer(5);
    FreeBgTilemapBuffer(r4, 4);
    FreeBgTilemapBuffer(r4, 1);
    FreeBgTilemapBuffer(r4, 0);
}

void ov70_022442B4(void) {
    /* Original at 0x022442B4 */
    /* Requires manual decompilation - 250 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, r7, lr}\n    sub sp, #0x3c\n    str r0, [sp, #0x10]\n    ldr r4, [r0, #4]\n    mov r0, #0x58\n    mov r1, #0x3d\n    bl NARC_New\n    mov r2, #0\n    str r2, [sp]\n    mov r1, #0x3d\n    str r1, [sp, #4]\n    mov r1, #3\n    add r3, r2, #0\n    str r0, [sp, #0x2c]\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r3, #0\n    str r3, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    ldr r0, [sp, #0x2c]\n    mov r1, #3\n    mov r2, #4\n    bl GfGfxLoader_GXLoadPalFromOpenNarc\n    mov r1, #0x1a\n    mov r0, #0\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    mov r1, #0x1a\n    mov r0, #4\n    lsl r1, r1, #4\n    mov r2, #0x3d\n    bl LoadFontPal1\n    ldr r0, [sp, #0x10]\n    ldr r0, [r0]\n    ldr r0, [r0, #0x24]\n    bl Options_GetFrame\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r1, #0\n    mov r2, #1\n    mov r3, #0xe\n    bl LoadUserFrameGfx2\n    mov r1, #0\n    str r1, [sp]\n    mov r0, #0x3d\n    str r0, [sp, #4]\n    add r0, r4, #0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl LoadUserFrameGfx1\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #2\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #6\n    add r2, r4, #0\n    mov r3, #1\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    str r0, [sp]\n    str r0, [sp, #4]\n    str r0, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xb\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadCharDataFromOpenNarc\n    mov r1, #0\n    mov r0, #6\n    str r1, [sp]\n    lsl r0, r0, #8\n    str r0, [sp, #4]\n    str r1, [sp, #8]\n    mov r0, #0x3d\n    str r0, [sp, #0xc]\n    ldr r0, [sp, #0x2c]\n    mov r1, #0xc\n    add r2, r4, #0\n    mov r3, #5\n    bl GfGfxLoader_LoadScrnDataFromOpenNarc\n    mov r0, #0\n    add r1, r0, #0\n    bl BG_SetMaskColor\n    mov r0, #4\n    mov r1, #0\n    bl BG_SetMaskColor\n    mov r2, #0x33\n    ldr r1, _022444CC ; =0x000012D0\n    ldr r0, [sp, #0x10]\n    lsl r2, r2, #4\n    add r0, r0, r1\n    mov r1, #0\n    bl MI_CpuFill8\n    ldr r0, [sp, #0x2c]\n    mov r1, #5\n    add r2, sp, #0x38\n    mov r3, #0x3d\n    bl GfGfxLoader_GetPlttDataFromOpenNarc\n    add r4, r0, #0\n    ldr r0, [sp, #0x38]\n    ldr r2, _022444D0 ; =0x000012D8\n    ldr r1, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    add r1, r1, r2\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    ldr r0, [sp, #0x38]\n    ldr r2, _022444D4 ; =0x00001358\n    ldr r1, [sp, #0x10]\n    ldr r0, [r0, #0xc]\n    add r1, r1, r2\n    mov r2, #0x80\n    bl MIi_CpuCopy16\n    add r0, r4, #0\n    bl Heap_Free\n    mov r0, #0\n    str r0, [sp, #0x24]\n    str r0, [sp, #0x28]\n    ldr r1, _022444D4 ; =0x00001358\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x10]\n    sub r1, #0x80\n    add r0, r0, r1\n    str r0, [sp, #0x14]\n    mov r0, #0\n    str r0, [sp, #0x20]\n    str r0, [sp, #0x1c]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    lsl r1, r0, #5\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    str r0, [sp, #0x30]\n    ldr r0, [sp, #0x24]\n    cmp r0, #0x15\n    blt _02244420\n    bl GF_AssertFail\n    ldr r0, [sp, #0x30]\n    mov r7, #1\n    add r4, r0, #2\n    ldr r0, [sp, #0x18]\n    add r6, r0, #2\n    ldr r0, [sp, #0x14]\n    add r5, r0, #2\n    ldr r0, [sp, #0x20]\n    asr r0, r0, #8\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    str r0, [sp, #0x34]\n    ldr r0, _022444D0 ; =0x000012D8\n    ldr r3, [sp, #0x34]\n    ldrh r0, [r4, r0]\n    add r1, r6, #0\n    mov r2, #1\n    str r0, [sp]\n    add r0, r5, #0\n    bl BlendPalette\n    add r7, r7, #1\n    add r4, r4, #2\n    add r6, r6, #2\n    add r5, r5, #2\n    cmp r7, #0x10\n    blt _02244438\n    ldr r0, [sp, #0x18]\n    add r0, #0x20\n    str r0, [sp, #0x18]\n    ldr r0, [sp, #0x24]\n    add r0, r0, #1\n    str r0, [sp, #0x24]\n    ldr r0, [sp, #0x1c]\n    cmp r0, #1\n    beq _02244482\n    mov r0, #3\n    ldr r1, [sp, #0x20]\n    lsl r0, r0, #8\n    add r1, r1, r0\n    mov r0, #1\n    lsl r0, r0, #0xc\n    str r1, [sp, #0x20]\n    cmp r1, r0\n    blt _02244416\n    str r0, [sp, #0x20]\n    mov r0, #1\n    str r0, [sp, #0x1c]\n    b _02244416\n    ldr r0, [sp, #0x14]\n    add r0, #0x20\n    str r0, [sp, #0x14]\n    ldr r0, [sp, #0x28]\n    add r0, r0, #1\n    str r0, [sp, #0x28]\n    cmp r0, #3\n    blt _02244404\n    ldr r1, _022444D4 ; =0x00001358\n    ldr r0, [sp, #0x10]\n    add r0, r0, r1\n    mov r1, #0x2a\n    lsl r1, r1, #4\n    bl DC_FlushRange\n    ldr r1, _022444D8 ; =0x000012D4\n    ldr r0, [sp, #0x10]\n    mov r2, #1\n    str r2, [r0, r1]\n    ldr r2, _022444DC ; =0x000015FC\n    mov r3, #0\n    str r3, [r0, r2]\n    sub r2, r1, #4\n    ldr r1, [sp, #0x10]\n    ldr r0, _022444E0 ; =ov70_022444E4\n    add r1, r1, r2\n    mov r2, #0x14\n    bl SysTask_CreateOnVBlankQueue\n    ldr r2, _022444CC ; =0x000012D0\n    ldr r1, [sp, #0x10]\n    str r0, [r1, r2]\n    ldr r0, [sp, #0x2c]\n    bl NARC_Delete\n    add sp, #0x3c\n    pop {r4, r5, r6, r7, pc}\n    _022444CC: .word 0x000012D0\n    _022444D0: .word 0x000012D8\n    _022444D4: .word 0x00001358\n    _022444D8: .word 0x000012D4\n    _022444DC: .word 0x000015FC\n    _022444E0: .word ov70_022444E4"
    );
    #endif
}

void ov70_022444E4(void) {
    /* Original at 0x022444E4 */
    /* Requires manual decompilation - 80 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r1, #0\n    ldr r0, [r4, #4]\n    cmp r0, #0\n    beq _02244582\n    ldr r1, _02244584 ; =0x0000032B\n    mov r0, #1\n    ldrb r2, [r4, r1]\n    eor r2, r0\n    strb r2, [r4, r1]\n    ldrb r2, [r4, r1]\n    tst r0, r2\n    bne _02244582\n    add r0, r1, #1\n    ldr r0, [r4, r0]\n    cmp r0, #1\n    bhi _0224451A\n    sub r0, r1, #3\n    ldrsh r0, [r4, r0]\n    add r2, r4, #0\n    add r2, #0x88\n    lsl r0, r0, #5\n    add r0, r2, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GX_LoadBGPltt\n    mov r0, #0xcb\n    lsl r0, r0, #2\n    ldr r0, [r4, r0]\n    cmp r0, #0\n    beq _02244528\n    cmp r0, #2\n    bne _0224453E\n    mov r0, #0xca\n    lsl r0, r0, #2\n    ldrsh r0, [r4, r0]\n    add r1, r4, #0\n    add r1, #0x88\n    lsl r0, r0, #5\n    add r0, r1, r0\n    mov r1, #0\n    mov r2, #0x20\n    bl GXS_LoadBGPltt\n    ldr r0, _02244588 ; =0x0000032A\n    ldrsb r1, [r4, r0]\n    cmp r1, #0\n    bne _02244566\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    add r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0x15\n    blt _02244582\n    mov r2, #0x13\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r2, [r4, r0]\n    mov r1, #1\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    sub r1, r0, #2\n    ldrsh r1, [r4, r1]\n    sub r2, r1, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsh r1, [r4, r1]\n    cmp r1, #0\n    bge _02244582\n    mov r2, #1\n    sub r1, r0, #2\n    strh r2, [r4, r1]\n    ldrsb r1, [r4, r0]\n    eor r1, r2\n    strb r1, [r4, r0]\n    pop {r4, pc}\n    _02244584: .word 0x0000032B\n    _02244588: .word 0x0000032A"
    );
    #endif
}

void ov70_0224458C(void) {
    /* Original at 0x0224458C */
    /* Requires manual decompilation - 81 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0x14\n    mov r3, #4\n    add r4, r0, #0\n    str r3, [sp]\n    mov r0, #0x17\n    str r0, [sp, #4]\n    mov r0, #0x10\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x94\n    ldr r1, _02244634 ; =0x00000F48\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    bl AddWindowParameterized\n    ldr r0, _02244634 ; =0x00000F48\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r0, #1\n    str r0, [sp]\n    mov r0, #0x18\n    str r0, [sp, #4]\n    mov r0, #2\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x81\n    lsl r0, r0, #2\n    ldr r1, _02244638 ; =0x00000F38\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #4\n    bl AddWindowParameterized\n    ldr r0, _02244638 ; =0x00000F38\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    mov r3, #1\n    mov r1, #0x2f\n    ldr r0, _0224463C ; =0x000F0E00\n    str r3, [sp]\n    str r0, [sp, #4]\n    ldr r0, _02244638 ; =0x00000F38\n    lsl r1, r1, #6\n    ldr r1, [r4, r1]\n    add r0, r4, r0\n    mov r2, #0\n    bl ov70_02245050\n    mov r0, #0x13\n    str r0, [sp]\n    mov r0, #0x1b\n    str r0, [sp, #4]\n    mov r0, #4\n    str r0, [sp, #8]\n    mov r0, #0xd\n    str r0, [sp, #0xc]\n    mov r0, #0x28\n    ldr r1, _02244640 ; =0x00000F18\n    str r0, [sp, #0x10]\n    ldr r0, [r4, #4]\n    add r1, r4, r1\n    mov r2, #0\n    mov r3, #2\n    bl AddWindowParameterized\n    ldr r0, _02244640 ; =0x00000F18\n    mov r1, #0\n    add r0, r4, r0\n    bl FillWindowPixelBuffer\n    add sp, #0x14\n    pop {r3, r4, pc}\n    nop\n    _02244634: .word 0x00000F48\n    _02244638: .word 0x00000F38\n    _0224463C: .word 0x000F0E00\n    _02244640: .word 0x00000F18"
    );
    #endif
}

void ov70_02244644(void) {
    /* Original at 0x02244644 */
    /* Requires manual decompilation - 16 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02244664 ; =0x00000F18\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _02244668 ; =0x00000F38\n    add r0, r4, r0\n    bl RemoveWindow\n    ldr r0, _0224466C ; =0x00000F48\n    add r0, r4, r0\n    bl RemoveWindow\n    pop {r4, pc}\n    nop\n    _02244664: .word 0x00000F18\n    _02244668: .word 0x00000F38\n    _0224466C: .word 0x00000F48"
    );
    #endif
}

void ov70_02244670(void) {
    /* Original at 0x02244670 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xb4\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _022446A0 ; =0x00000BBC\n    str r0, [r4, r1]\n    mov r0, #1\n    lsl r0, r0, #8\n    mov r1, #0x3d\n    bl String_New\n    ldr r1, _022446A4 ; =0x00000BEC\n    str r0, [r4, r1]\n    sub r1, #0x4c\n    ldr r0, [r4, r1]\n    mov r1, #0x1f\n    bl NewString_ReadMsgData\n    mov r1, #0x2f\n    lsl r1, r1, #6\n    str r0, [r4, r1]\n    pop {r4, pc}\n    _022446A0: .word 0x00000BBC\n    _022446A4: .word 0x00000BEC"
    );
    #endif
}

void ov70_022446A8(void) {
    /* Original at 0x022446A8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0x2f\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _022446C8 ; =0x00000BEC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    ldr r0, _022446CC ; =0x00000BBC\n    ldr r0, [r4, r0]\n    bl String_Delete\n    pop {r4, pc}\n    _022446C8: .word 0x00000BEC\n    _022446CC: .word 0x00000BBC"
    );
    #endif
}

void ov70_022446D0(void) {
    /* Original at 0x022446D0 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _022446FC ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02244700 ; =0x00000BAC\n    mov r2, #0x11\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #1\n    bl ov70_02238D84\n    ldr r0, _02244704 ; =0x000011FA\n    mov r1, #1\n    strh r1, [r4, r0]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _022446FC: .word 0x00000F0F\n    _02244700: .word 0x00000BAC\n    _02244704: .word 0x000011FA"
    );
    #endif
}

void ov70_02244708(void) {
    /* Original at 0x02244708 */
    /* Requires manual decompilation - 43 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _02244742\n    ldr r0, _02244768 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    ldr r0, _0224476C ; =0x00000F0F\n    mov r2, #1\n    str r0, [sp]\n    ldr r1, _02244770 ; =0x00000BA8\n    add r0, r4, #0\n    ldr r1, [r4, r1]\n    add r3, r2, #0\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #2\n    bl ov70_02238D84\n    add r0, r4, #0\n    bl ov70_02238F64\n    b _02244760\n    cmp r0, #2\n    bne _02244760\n    ldr r0, _02244768 ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    bl sub_0203946C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02244768: .word 0x000011C8\n    _0224476C: .word 0x00000F0F\n    _02244770: .word 0x00000BA8"
    );
    #endif
}

void ov70_02244774(void) {
    /* Original at 0x02244774 */
    /* Requires manual decompilation - 19 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0224479C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r2, #7\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xd\n    mov r2, #0x10\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _0224479C: .word 0x00000F0F"
    );
    #endif
}

void ov70_022447A0(void) {
    /* Original at 0x022447A0 */
    /* Requires manual decompilation - 42 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02244800 ; =0x000011B0\n    mov r1, #0x3d\n    ldr r0, [r4, r0]\n    bl Handle2dMenuInput_DeleteOnFinish\n    mov r1, #0\n    mvn r1, r1\n    cmp r0, r1\n    beq _022447FC\n    sub r1, r1, #1\n    cmp r0, r1\n    bne _022447DE\n    bl ov00_021EC5B4\n    cmp r0, #0\n    bne _022447CA\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    b _022447FC\n    add r0, r4, #0\n    mov r1, #7\n    mov r2, #0xb\n    bl ov70_02238E50\n    mov r0, #1\n    str r0, [r4, #0x1c]\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    b _022447FC\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _022447EA\n    bl ov00_021EC8D8\n    bl sub_0203946C\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _02244800: .word 0x000011B0"
    );
    #endif
}

void ov70_02244804(void) {
    /* Original at 0x02244804 */
    /* Requires manual decompilation - 20 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    ldr r1, _0224482C ; =0x00000F0F\n    add r4, r0, #0\n    str r1, [sp]\n    ldr r1, _02244830 ; =0x00000BAC\n    mov r2, #0x1a\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x12\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _0224482C: .word 0x00000F0F\n    _02244830: .word 0x00000BAC"
    );
    #endif
}

u32 ov70_02244834(void) {
    sub_0203946C();
    ov00_021EC8D8();
    ov70_02238E50(r4, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0x13;
    return 3;
}

void ov70_02244854(void) {
    /* Original at 0x02244854 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    bl sub_0203A914\n    ldr r0, _02244880 ; =0x00000F0F\n    ldr r1, _02244884 ; =0x00000BAC\n    str r0, [sp]\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r2, #0x1b\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0x14\n    mov r2, #0xb\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _02244880: .word 0x00000F0F\n    _02244884: .word 0x00000BAC"
    );
    #endif
}

void ov70_02244888(void) {
    /* Original at 0x02244888 */
    /* Requires manual decompilation - 21 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r0, [r0, #0x20]\n    bl sub_02039418\n    mov r0, #4\n    bl Sys_SetSleepDisableFlag\n    add r0, r4, #0\n    bl ov70_02245124\n    add r0, r4, #0\n    add r0, #0x54\n    mov r1, #2\n    mov r2, #1\n    mov r3, #0x14\n    bl ov00_021EC3F0\n    mov r0, #2\n    bl ov00_021EC454\n    bl ov00_021EC4A4\n    mov r0, #3\n    str r0, [r4, #0x2c]\n    pop {r4, pc}"
    );
    #endif
}

void ov70_022448C0(void) {
    /* Original at 0x022448C0 */
    /* Requires manual decompilation - 48 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #0x48\n    add r4, r0, #0\n    bl ov00_021EC60C\n    bl ov00_021EC5B4\n    cmp r0, #0\n    beq _0224493E\n    bl ov00_021EC724\n    cmp r0, #8\n    bhi _0224491E\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _022448E6: ; jump table\n    add r0, sp, #8\n    add r1, sp, #4\n    bl ov00_021EC11C\n    str r0, [r4, #0x40]\n    ldr r0, [sp, #8]\n    str r0, [r4, #0x44]\n    ldr r0, [sp, #4]\n    str r0, [r4, #0x48]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    add r0, r4, #0\n    bl ov70_02238F80\n    mov r0, #0x17\n    str r0, [r4, #0x2c]\n    b _0224493E\n    add r0, sp, #0\n    bl ov00_021EC0FC\n    add r0, r4, #0\n    bl ov70_02238F80\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    sub r0, #0x17\n    str r0, [r4, #0x3c]\n    b _0224493E\n    add r0, sp, #0xc\n    bl ov00_021EC9E0\n    mov r0, #4\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #0x48\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02244944(void) {
    ov00_021ECD04();
}

void ov70_02244954(void) {
    /* Original at 0x02244954 */
    /* Requires manual decompilation - 66 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    sub sp, #8\n    add r4, r0, #0\n    bl ov00_021ECDC8\n    cmp r0, #5\n    bhi _022449F4\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _0224496E: ; jump table\n    mov r0, #6\n    str r0, [r4, #0x2c]\n    b _022449F4\n    add r0, r4, #0\n    bl ov70_02238F80\n    add r0, sp, #4\n    add r1, sp, #0\n    bl ov00_021EC11C\n    str r0, [r4, #0x40]\n    ldr r0, [sp, #4]\n    str r0, [r4, #0x44]\n    bl ov00_021EC210\n    bl ov00_021EC8D8\n    mov r0, #0x17\n    str r0, [r4, #0x2c]\n    ldr r1, [sp]\n    cmp r1, #7\n    bhi _022449E2\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _022449B2: ; jump table\n    str r0, [r4, #0x2c]\n    b _022449E2\n    bl ov00_021FA0D8\n    mov r0, #0x17\n    str r0, [r4, #0x2c]\n    b _022449E2\n    str r0, [r4, #0x2c]\n    b _022449E2\n    bl ov00_021ED9B4\n    mov r0, #0x17\n    str r0, [r4, #0x2c]\n    b _022449E2\n    bl sub_020399EC\n    ldr r1, [sp, #4]\n    ldr r0, _022449FC ; =0xFFFFB1E0\n    cmp r1, r0\n    bge _022449F4\n    ldr r0, _02244A00 ; =0xFFFF8AD1\n    cmp r1, r0\n    blt _022449F4\n    mov r0, #0x17\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #8\n    pop {r4, pc}\n    nop\n    _022449FC: .word 0xFFFFB1E0\n    _02244A00: .word 0xFFFF8AD1"
    );
    #endif
}

void ov70_02244A04(void) {
    /* Original at 0x02244A04 */
    /* Requires manual decompilation - 30 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    add r5, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #0x14]\n    bl sub_0202C08C\n    add r4, r0, #0\n    ldr r0, [r5]\n    ldr r0, [r0, #4]\n    bl Save_SysInfo_GetDwcProfileId\n    cmp r0, #0\n    bne _02244A28\n    ldr r1, [r5]\n    ldr r0, [r1, #4]\n    ldr r1, [r1, #0x34]\n    bl Save_SysInfo_SetDwcProfileId\n    ldr r0, [r5]\n    ldr r0, [r0, #4]\n    bl Save_SysInfo_GetDwcProfileId\n    add r6, r0, #0\n    add r0, r4, #0\n    bl DWC_CreateFriendKey\n    add r3, r0, #0\n    add r2, r1, #0\n    add r0, r6, #0\n    add r1, r3, #0\n    bl ov70_022378C0\n    mov r0, #7\n    str r0, [r5, #0x2c]\n    mov r0, #3\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02244A4C(void) {
    ov70_022382C0(3, 8, 0);
}

void ov70_02244A68(void) {
    /* Original at 0x02244A68 */
    /* Requires manual decompilation - 65 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    beq _02244B02\n    bl ov70_02237F58\n    add r5, r0, #0\n    ldr r0, _02244B1C ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r5, #0\n    add r0, #0xf\n    cmp r0, #0x11\n    bhi _02244AF6\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244A94: ; jump table\n    mov r0, #9\n    str r0, [r4, #0x2c]\n    b _02244B18\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244B18\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244B18\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244B18\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244B18\n    add r0, r4, #0\n    bl ov70_02238F80\n    bl sub_020399EC\n    b _02244B18\n    ldr r0, _02244B1C ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02244B18\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _02244B1C: .word 0x00001604"
    );
    #endif
}

void ov70_02244B20(void) {
    /* Original at 0x02244B20 */
    /* Requires manual decompilation - 22 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4]\n    ldr r1, _02244B4C ; =0x00001260\n    ldr r0, [r0, #0x20]\n    add r1, r4, r1\n    bl sub_0203189C\n    ldr r1, _02244B4C ; =0x00001260\n    add r0, r4, r1\n    add r1, #0x64\n    add r1, r4, r1\n    bl ov70_02238304\n    mov r0, #0xa\n    str r0, [r4, #0x2c]\n    ldr r0, _02244B50 ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02244B4C: .word 0x00001260\n    _02244B50: .word 0x00001604"
    );
    #endif
}

void ov70_02244B54(void) {
    /* Original at 0x02244B54 */
    /* Requires manual decompilation - 129 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    add r4, r0, #0\n    bl ov70_02237F38\n    cmp r0, #0\n    bne _02244B62\n    b _02244C72\n    bl ov70_02237F58\n    add r5, r0, #0\n    ldr r0, _02244C8C ; =0x00001604\n    mov r1, #0\n    str r1, [r4, r0]\n    add r0, r5, #0\n    add r0, #0xf\n    cmp r0, #0x11\n    bhi _02244C66\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244B82: ; jump table\n    add r0, r4, #0\n    bl ov70_02238F80\n    ldr r0, _02244C90 ; =0x000012C4\n    ldr r1, [r4, r0]\n    cmp r1, #0\n    beq _02244BBE\n    cmp r1, #1\n    beq _02244C0E\n    cmp r1, #2\n    beq _02244C18\n    b _02244C22\n    add r0, r0, #4\n    ldr r0, [r4, r0]\n    cmp r0, #3\n    bhi _02244C08\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244BD2: ; jump table\n    add r0, r4, #0\n    mov r1, #1\n    mov r2, #0\n    bl ov70_02238E50\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    b _02244C88\n    ldr r0, _02244C94 ; =0xFFFFEC75\n    str r0, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    ldr r0, _02244C98 ; =0xFFFFEC78\n    str r0, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    ldr r0, _02244C9C ; =0xFFFFEC77\n    str r0, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    bl sub_020399EC\n    b _02244C88\n    ldr r0, _02244CA0 ; =0xFFFFEC74\n    str r0, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    ldr r0, _02244CA4 ; =0xFFFFEC73\n    str r0, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    bl sub_020399EC\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    str r5, [r4, #0x3c]\n    mov r0, #0x15\n    str r0, [r4, #0x2c]\n    b _02244C88\n    add r0, r4, #0\n    bl ov70_02238F80\n    bl sub_020399EC\n    b _02244C88\n    ldr r0, _02244C8C ; =0x00001604\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    ldr r1, [r4, r0]\n    mov r0, #0xe1\n    lsl r0, r0, #4\n    cmp r1, r0\n    bne _02244C88\n    bl sub_020399EC\n    mov r0, #3\n    pop {r3, r4, r5, pc}\n    _02244C8C: .word 0x00001604\n    _02244C90: .word 0x000012C4\n    _02244C94: .word 0xFFFFEC75\n    _02244C98: .word 0xFFFFEC78\n    _02244C9C: .word 0xFFFFEC77\n    _02244CA0: .word 0xFFFFEC74\n    _02244CA4: .word 0xFFFFEC73"
    );
    #endif
}

void ov70_02244CA8(void) {
    /* Original at 0x02244CA8 */
    /* Requires manual decompilation - 15 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, [r4, #0x44]\n    ldr r1, [r4, #0x48]\n    neg r0, r0\n    bl ov00_021E6A70\n    ldr r2, [r4, #0x44]\n    add r1, r0, #0\n    add r0, r4, #0\n    neg r2, r2\n    bl ov70_022451A8\n    mov r0, #0x18\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02244CCC(void) {
    /* Original at 0x02244CCC */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    ldr r0, _02244CFC ; =gSystem\n    ldr r1, [r0, #0x48]\n    mov r0, #1\n    tst r0, r1\n    bne _02244CE8\n    mov r0, #2\n    tst r0, r1\n    bne _02244CE8\n    ldr r0, _02244D00 ; =gSystem + 0x40\n    ldrh r0, [r0, #0x24]\n    cmp r0, #0\n    beq _02244CF6\n    ldr r0, _02244D04 ; =0x00000F48\n    mov r1, #0\n    add r0, r4, r0\n    bl sub_0200E5D4\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    nop\n    _02244CFC: .word gSystem\n    _02244D00: .word gSystem + 0x40\n    _02244D04: .word 0x00000F48"
    );
    #endif
}

void ov70_02244D08(void) {
    /* Original at 0x02244D08 */
    /* Requires manual decompilation - 26 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #0xc\n    add r4, r0, #0\n    bl sub_0203A914\n    add r0, r4, #0\n    bl ov70_02238F80\n    mov r0, #6\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    mov r0, #0x3d\n    str r0, [sp, #8]\n    mov r0, #0\n    add r1, r0, #0\n    add r2, r0, #0\n    add r3, r0, #0\n    bl BeginNormalPaletteFade\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    ldr r0, _02244D40 ; =0x000011FC\n    mov r1, #1\n    str r1, [r4, r0]\n    mov r0, #4\n    add sp, #0xc\n    pop {r3, r4, pc}\n    _02244D40: .word 0x000011FC"
    );
    #endif
}

void ov70_02244D44(void) {
    /* Original at 0x02244D44 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    bl ov70_02238C8C\n    cmp r0, #1\n    bne _02244D68\n    ldr r0, _02244D7C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    b _02244D78\n    cmp r0, #2\n    bne _02244D78\n    ldr r0, _02244D7C ; =0x000011C8\n    ldr r0, [r4, r0]\n    bl YesNoPrompt_Destroy\n    mov r0, #0\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    pop {r4, pc}\n    _02244D7C: .word 0x000011C8"
    );
    #endif
}

void ov70_02244D80(void) {
    /* Original at 0x02244D80 */
    /* Requires manual decompilation - 83 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r2, #0xd\n    ldr r0, [r4, #0x3c]\n    mvn r2, r2\n    cmp r0, r2\n    bgt _02244DBE\n    bge _02244DFA\n    ldr r1, _02244E38 ; =0xFFFFEC78\n    cmp r0, r1\n    bgt _02244DB6\n    ldr r1, _02244E3C ; =0x0000138D\n    add r1, r0, r1\n    bmi _02244DFE\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02244DAA: ; jump table\n    mov r1, #0xe\n    mvn r1, r1\n    cmp r0, r1\n    b _02244DFE\n    add r1, r2, #0\n    add r1, #9\n    cmp r0, r1\n    bgt _02244DD4\n    add r1, r2, #0\n    add r1, #9\n    cmp r0, r1\n    bge _02244DFE\n    add r1, r2, #2\n    cmp r0, r1\n    b _02244DFE\n    add r0, r0, #3\n    cmp r0, #5\n    bhi _02244DFE\n    add r0, r0, r0\n    add r0, pc\n    ldrh r0, [r0, #6]\n    lsl r0, r0, #0x10\n    asr r0, r0, #0x10\n    add pc, r0\n    _02244DE6: ; jump table\n    mov r2, #0x96\n    b _02244E14\n    mov r2, #0x97\n    b _02244E14\n    mov r2, #0x9c\n    b _02244E14\n    mov r2, #0x9b\n    b _02244E14\n    mov r2, #0xb9\n    b _02244E14\n    mov r2, #0xb6\n    b _02244E14\n    mov r2, #0xb6\n    b _02244E14\n    mov r2, #0xb7\n    b _02244E14\n    mov r2, #0xb8\n    ldr r0, _02244E40 ; =0x00000F0F\n    mov r1, #0xba\n    str r0, [sp]\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    add r0, r4, #0\n    mov r3, #1\n    bl ov70_02244FA4\n    add r0, r4, #0\n    mov r1, #0xc\n    mov r2, #0x16\n    bl ov70_02238D84\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02244E38: .word 0xFFFFEC78\n    _02244E3C: .word 0x0000138D\n    _02244E40: .word 0x00000F0F"
    );
    #endif
}

void ov70_02244E44(void) {
    /* Original at 0x02244E44 */
    /* Requires manual decompilation - 92 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    mov r1, #0x16\n    add r4, r0, #0\n    lsl r1, r1, #8\n    ldrsh r1, [r4, r1]\n    cmp r1, #3\n    bhi _02244EE8\n    add r1, r1, r1\n    add r1, pc\n    ldrh r1, [r1, #6]\n    lsl r1, r1, #0x10\n    asr r1, r1, #0x10\n    add pc, r1\n    _02244E60: ; jump table\n    ldr r1, _02244F0C ; =0x00000F0F\n    mov r2, #0xba\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    mov r0, #0x16\n    lsl r0, r0, #8\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _02244F04\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02244F04\n    bl sub_0203946C\n    bl ov00_021EC8D8\n    mov r0, #0x16\n    lsl r0, r0, #8\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _02244F04\n    ldr r1, _02244F0C ; =0x00000F0F\n    mov r2, #0xbb\n    str r1, [sp]\n    mov r1, #0xba\n    lsl r1, r1, #4\n    ldr r1, [r4, r1]\n    mov r3, #1\n    bl ov70_02244FA4\n    mov r0, #0x16\n    lsl r0, r0, #8\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _02244F04\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02244F04\n    mov r0, #0x16\n    lsl r0, r0, #8\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    b _02244F04\n    ldr r0, _02244F10 ; =0x00001602\n    ldrsh r1, [r4, r0]\n    add r1, r1, #1\n    strh r1, [r4, r0]\n    ldrsh r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _02244F04\n    mov r1, #0\n    add r0, r4, #0\n    add r2, r1, #0\n    bl ov70_02238E50\n    mov r0, #0xb\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    nop\n    _02244F0C: .word 0x00000F0F\n    _02244F10: .word 0x00001602"
    );
    #endif
}

void ov70_02244F14(void) {
    TextPrinterCheckActive(0xbf, 3);
}

void ov70_02244F34(void) {
    /* Original at 0x02244F34 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02244F62\n    mov r0, #0x47\n    lsl r0, r0, #6\n    ldr r0, [r4, r0]\n    cmp r0, #0x1e\n    ble _02244F58\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #0x47\n    lsl r0, r0, #6\n    ldr r1, [r4, r0]\n    add r1, r1, #1\n    str r1, [r4, r0]\n    mov r0, #3\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02244F68(void) {
    /* Original at 0x02244F68 */
    /* Requires manual decompilation - 27 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, lr}\n    sub sp, #4\n    add r4, r0, #0\n    mov r0, #0xbf\n    lsl r0, r0, #4\n    ldr r0, [r4, r0]\n    lsl r0, r0, #0x18\n    lsr r0, r0, #0x18\n    bl TextPrinterCheckActive\n    cmp r0, #0\n    bne _02244F9A\n    mov r0, #0\n    str r0, [sp]\n    mov r2, #0x8d\n    ldr r0, [r4, #4]\n    mov r1, #0xa\n    lsl r2, r2, #2\n    mov r3, #8\n    bl ov70_02238C14\n    ldr r1, _02244FA0 ; =0x000011C8\n    str r0, [r4, r1]\n    ldr r0, [r4, #0x30]\n    str r0, [r4, #0x2c]\n    mov r0, #3\n    add sp, #4\n    pop {r3, r4, pc}\n    _02244FA0: .word 0x000011C8"
    );
    #endif
}

void ov70_02244FA4(void) {
    /* Original at 0x02244FA4 */
    /* Requires manual decompilation - 49 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    add r0, r1, #0\n    add r1, r2, #0\n    add r4, r3, #0\n    bl NewString_ReadMsgData\n    add r6, r0, #0\n    ldr r1, _0224500C ; =0x00000B9C\n    add r2, r6, #0\n    ldr r0, [r5, r1]\n    add r1, #0x20\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    add r0, r6, #0\n    bl String_Delete\n    ldr r0, _02245010 ; =0x00000F18\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _02245010 ; =0x00000F18\n    mov r1, #0\n    add r0, r5, r0\n    mov r2, #1\n    mov r3, #0xe\n    bl DrawFrameAndWindow2\n    mov r3, #0\n    str r3, [sp]\n    str r4, [sp, #4]\n    ldr r0, _02245010 ; =0x00000F18\n    ldr r2, _02245014 ; =0x00000BBC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    mov r0, #0x47\n    mov r1, #0\n    lsl r0, r0, #6\n    str r1, [r5, r0]\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    nop\n    _0224500C: .word 0x00000B9C\n    _02245010: .word 0x00000F18\n    _02245014: .word 0x00000BBC"
    );
    #endif
}

void ov70_02245018(void) {
    /* Original at 0x02245018 */
    /* Requires manual decompilation - 25 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, lr}\n    add r4, r0, #0\n    cmp r3, #1\n    beq _02245026\n    cmp r3, #2\n    beq _0224503C\n    b _0224504A\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r1, r1, r0\n    lsr r0, r1, #0x1f\n    add r0, r1, r0\n    asr r2, r0, #1\n    b _0224504A\n    ldr r0, [sp, #0xc]\n    mov r2, #0\n    bl FontID_String_GetWidth\n    ldrb r1, [r4, #7]\n    lsl r1, r1, #3\n    sub r2, r1, r0\n    add r0, r2, #0\n    pop {r4, pc}"
    );
    #endif
}

void ov70_02245050(void) {
    /* Original at 0x02245050 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #1\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov70_02245018\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #1\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_02245084(void) {
    /* Original at 0x02245084 */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov70_02245018\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    add r0, r5, #0\n    add r2, r6, #0\n    str r1, [sp, #0xc]\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_022450B8(void) {
    /* Original at 0x022450B8 */
    /* Requires manual decompilation - 24 instructions */
    #ifdef MWERKS
    asm(
        "push {r4, r5, r6, lr}\n    sub sp, #0x10\n    add r4, r3, #0\n    ldr r3, [sp, #0x24]\n    add r5, r0, #0\n    str r3, [sp]\n    mov r3, #0\n    str r3, [sp, #4]\n    ldr r3, [sp, #0x20]\n    add r6, r1, #0\n    bl ov70_02245018\n    add r3, r0, #0\n    str r4, [sp]\n    mov r1, #0\n    ldr r0, [sp, #0x24]\n    str r1, [sp, #4]\n    str r0, [sp, #8]\n    str r1, [sp, #0xc]\n    add r0, r5, #0\n    mov r1, #4\n    add r2, r6, #0\n    bl AddTextPrinterParameterizedWithColor\n    add sp, #0x10\n    pop {r4, r5, r6, pc}"
    );
    #endif
}

void ov70_022450EC(void) {
    /* Original at 0x022450EC */
    /* Requires manual decompilation - 23 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    add r0, r1, #0\n    ldr r1, _0224511C ; =ov70_0224600C\n    lsl r2, r2, #2\n    ldr r1, [r1, r2]\n    bl NewString_ReadMsgData\n    add r4, r0, #0\n    mov r2, #0\n    ldr r0, _02245120 ; =0x00010200\n    str r2, [sp]\n    str r0, [sp, #4]\n    add r0, r5, #0\n    add r1, r4, #0\n    add r3, r2, #0\n    bl ov70_02245084\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _0224511C: .word ov70_0224600C\n    _02245120: .word 0x00010200"
    );
    #endif
}

void ov70_02245124(void) {
    sub_0203A880();
}

void ov70_0224512C(void) {
    /* Original at 0x0224512C */
    /* Requires manual decompilation - 51 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, r6, lr}\n    sub sp, #0xc\n    add r5, r0, #0\n    mov r0, #1\n    add r6, r1, #0\n    lsl r0, r0, #8\n    mov r1, #0x3d\n    bl String_New\n    add r4, r0, #0\n    ldr r0, _02245198 ; =0x00000BAC\n    add r1, r6, #0\n    ldr r0, [r5, r0]\n    add r2, r4, #0\n    bl ReadMsgDataIntoString\n    ldr r1, _0224519C ; =0x00000B9C\n    add r2, r4, #0\n    ldr r0, [r5, r1]\n    add r1, #0x50\n    ldr r1, [r5, r1]\n    bl StringExpandPlaceholders\n    ldr r0, _022451A0 ; =0x00000F48\n    mov r1, #0xf\n    add r0, r5, r0\n    bl FillWindowPixelBuffer\n    ldr r0, _022451A0 ; =0x00000F48\n    mov r1, #1\n    add r0, r5, r0\n    mov r2, #0x1f\n    mov r3, #0xb\n    bl DrawFrameAndWindow1\n    mov r3, #0\n    str r3, [sp]\n    str r3, [sp, #4]\n    ldr r0, _022451A0 ; =0x00000F48\n    ldr r2, _022451A4 ; =0x00000BEC\n    str r3, [sp, #8]\n    ldr r2, [r5, r2]\n    add r0, r5, r0\n    mov r1, #1\n    bl AddTextPrinterParameterized\n    mov r1, #0xbf\n    lsl r1, r1, #4\n    str r0, [r5, r1]\n    add r0, r4, #0\n    bl String_Delete\n    add sp, #0xc\n    pop {r3, r4, r5, r6, pc}\n    _02245198: .word 0x00000BAC\n    _0224519C: .word 0x00000B9C\n    _022451A0: .word 0x00000F48\n    _022451A4: .word 0x00000BEC"
    );
    #endif
}

void ov70_022451A8(void) {
    /* Original at 0x022451A8 */
    /* Requires manual decompilation - 29 instructions */
    #ifdef MWERKS
    asm(
        "push {r3, r4, r5, lr}\n    sub sp, #8\n    add r5, r0, #0\n    mov r0, #0\n    add r4, r1, #0\n    mvn r0, r0\n    cmp r4, r0\n    bne _022451BA\n    mov r4, #0xb\n    mov r0, #2\n    str r0, [sp]\n    mov r0, #1\n    str r0, [sp, #4]\n    ldr r0, _022451E4 ; =0x00000B9C\n    mov r1, #0\n    ldr r0, [r5, r0]\n    mov r3, #5\n    bl BufferIntegerAsString\n    ldr r0, _022451E8 ; =0x00000F18\n    mov r1, #1\n    add r0, r5, r0\n    bl ClearFrameAndWindow2\n    add r0, r5, #0\n    add r1, r4, #0\n    bl ov70_0224512C\n    add sp, #8\n    pop {r3, r4, r5, pc}\n    _022451E4: .word 0x00000B9C\n    _022451E8: .word 0x00000F18"
    );
    #endif
}
