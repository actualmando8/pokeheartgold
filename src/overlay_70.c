/* Decompiled from asm/overlay_70.s */
#include "global.h"

void ov70_022378C0(void) {
    // push {r3, r4}
    // ldr r3, _022378D8 ; =_02246800
    // mov r4, #1
    // str r4, [r3]
    // mov r4, #0
    // str r4, [r3, #4]
    // str r0, [r3, #8]
    // str r1, [r3, #0xc]
    // str r2, [r3, #0x10]
    // pop {r3, r4}
    // bx lr
    // nop
    // _022378D8: .word _02246800
    // TODO: decompile
}




void ov70_022378DC(void) {
    // push {r3, lr}
    // ldr r1, _02237BC0 ; =_02246800
    // ldr r0, [r1]
    // cmp r0, #0x18
    // bls _022378E8
    // b _02237F24
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022378F4: ; jump table
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237934
    // cmp r0, #7
    // beq _0223794C
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237BC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // ldr r2, _02237BC4 ; =ov70_02246920
    // str r1, [r0]
    // ldrb r2, [r2, #0x1c]
    // cmp r2, #0xe
    // bhi _022379C6
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _02237966: ; jump table
    // mov r1, #0
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x1d
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x1c
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x19
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x1e
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x1f
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x20
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x21
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x22
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x23
    // str r1, [r0, #4]
    // b _022379CE
    // sub r1, #0x1a
    // str r1, [r0, #4]
    // b _022379CE
    // mov r1, #0xc
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _022379E2
    // cmp r0, #7
    // beq _022379FA
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237BC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r2, #0x18
    // ldr r1, _02237BC4 ; =ov70_02246920
    // str r2, [r0]
    // ldrb r1, [r1, #0x1c]
    // cmp r1, #5
    // bgt _02237A24
    // cmp r1, #0
    // blt _02237A4C
    // add r3, r1, r1
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _02237A18: ; jump table
    // cmp r1, #0xe
    // beq _02237A42
    // b _02237A4C
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237A54
    // sub r2, #0x1d
    // str r2, [r0, #4]
    // b _02237A54
    // sub r2, #0x1c
    // str r2, [r0, #4]
    // b _02237A54
    // sub r2, #0x1b
    // str r2, [r0, #4]
    // b _02237A54
    // mov r1, #1
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237A54
    // mov r1, #0xc
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237A68
    // cmp r0, #7
    // beq _02237A80
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237BC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C020
    // mov r1, #0x49
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _02237A9A
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237AD4
    // ldr r0, _02237BC8 ; =ov70_02246900
    // ldr r0, [r0, #0x40]
    // ldrb r0, [r0]
    // cmp r0, #3
    // beq _02237AB8
    // cmp r0, #5
    // beq _02237AAE
    // cmp r0, #0xe
    // beq _02237AC2
    // b _02237ACC
    // mov r1, #2
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237AD4
    // mov r1, #3
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237AD4
    // mov r1, #1
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237AD4
    // mov r1, #0xc
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237AE8
    // cmp r0, #7
    // beq _02237B00
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237BC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C020
    // mov r1, #0x49
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _02237B1A
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #1
    // str r1, [r0, #4]
    // b _02237B68
    // ldr r0, _02237BC8 ; =ov70_02246900
    // ldr r0, [r0, #0x40]
    // ldrb r0, [r0]
    // cmp r0, #5
    // bgt _02237B34
    // cmp r0, #3
    // blt _02237B60
    // beq _02237B44
    // cmp r0, #4
    // beq _02237B4E
    // cmp r0, #5
    // beq _02237B3A
    // b _02237B60
    // cmp r0, #0xe
    // beq _02237B56
    // b _02237B60
    // mov r1, #2
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237B68
    // mov r1, #3
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237B68
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237B68
    // mov r1, #1
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237B68
    // mov r1, #0xc
    // ldr r0, _02237BC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237B7C
    // cmp r0, #7
    // beq _02237B94
    // pop {r3, pc}
    // ldr r0, _02237BC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237BC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r1, _02237BC0 ; =_02246800
    // mov r2, #0x18
    // ldr r0, _02237BC4 ; =ov70_02246920
    // str r2, [r1]
    // ldrb r0, [r0, #0x1c]
    // cmp r0, #5
    // bgt _02237BB2
    // cmp r0, #1
    // blt _02237BDE
    // beq _02237BB8
    // cmp r0, #3
    // beq _02237BD2
    // cmp r0, #5
    // beq _02237BCC
    // b _02237BDE
    // cmp r0, #0xe
    // beq _02237BD8
    // b _02237BDE
    // mov r0, #0
    // str r0, [r1, #4]
    // b _02237BE6
    // nop
    // _02237BC0: .word _02246800
    // _02237BC4: .word ov70_02246920
    // _02237BC8: .word ov70_02246900
    // sub r2, #0x1b
    // str r2, [r1, #4]
    // b _02237BE6
    // sub r2, #0x1c
    // str r2, [r1, #4]
    // b _02237BE6
    // sub r2, #0x1a
    // str r2, [r1, #4]
    // b _02237BE6
    // mov r1, #0xc
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237BFA
    // cmp r0, #7
    // beq _02237C12
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r2, #0x18
    // ldr r1, _02237EC4 ; =ov70_02246920
    // str r2, [r0]
    // ldrb r1, [r1, #0x1c]
    // cmp r1, #5
    // bgt _02237C3C
    // cmp r1, #0
    // blt _02237C64
    // add r3, r1, r1
    // add r3, pc
    // ldrh r3, [r3, #6]
    // lsl r3, r3, #0x10
    // asr r3, r3, #0x10
    // add pc, r3
    // _02237C30: ; jump table
    // cmp r1, #0xe
    // beq _02237C5A
    // b _02237C64
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237C6C
    // sub r2, #0x1b
    // str r2, [r0, #4]
    // b _02237C6C
    // sub r2, #0x1d
    // str r2, [r0, #4]
    // b _02237C6C
    // sub r2, #0x1c
    // str r2, [r0, #4]
    // b _02237C6C
    // mov r1, #1
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237C6C
    // mov r1, #0xc
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237C80
    // cmp r0, #7
    // beq _02237C98
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C020
    // mov r1, #0x49
    // lsl r1, r1, #2
    // cmp r0, r1
    // blo _02237CBC
    // bl ov38_0221C020
    // mov r1, #0x49
    // lsl r1, r1, #2
    // bl _u32_div_f
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // b _02237CE4
    // cmp r0, #0
    // bne _02237CC8
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237CE4
    // ldr r0, _02237EC8 ; =ov70_02246900
    // ldr r0, [r0, #0x40]
    // ldrb r0, [r0]
    // cmp r0, #0xe
    // bne _02237CDC
    // mov r1, #1
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237CE4
    // mov r1, #0xc
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237CF8
    // cmp r0, #7
    // beq _02237D10
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C020
    // mov r1, #0x49
    // lsl r1, r1, #2
    // cmp r0, r1
    // bne _02237D2A
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237DB6
    // ldr r0, _02237EC8 ; =ov70_02246900
    // ldr r0, [r0, #0x40]
    // ldrb r0, [r0]
    // cmp r0, #0xe
    // bhi _02237DAE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02237D40: ; jump table
    // mov r1, #4
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #5
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #6
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #7
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #8
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #9
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #0xa
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #1
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237DB6
    // mov r1, #0xc
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237DCA
    // cmp r0, #7
    // beq _02237DE2
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r1, _02237EC0 ; =_02246800
    // mov r2, #0x18
    // ldr r0, _02237EC4 ; =ov70_02246920
    // str r2, [r1]
    // ldrb r0, [r0, #0x1c]
    // cmp r0, #1
    // beq _02237DFA
    // cmp r0, #2
    // beq _02237E06
    // cmp r0, #0xe
    // beq _02237E00
    // b _02237E0A
    // mov r0, #0
    // str r0, [r1, #4]
    // b _02237E0A
    // sub r2, #0x1a
    // str r2, [r1, #4]
    // b _02237E0A
    // sub r2, #0x1d
    // str r2, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237E1E
    // cmp r0, #7
    // beq _02237E36
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r1, _02237EC0 ; =_02246800
    // mov r2, #0x18
    // ldr r0, _02237EC4 ; =ov70_02246920
    // str r2, [r1]
    // ldrb r0, [r0, #0x1c]
    // cmp r0, #7
    // bgt _02237E54
    // cmp r0, #1
    // blt _02237E72
    // beq _02237E5A
    // cmp r0, #6
    // beq _02237E60
    // cmp r0, #7
    // beq _02237E66
    // b _02237E72
    // cmp r0, #0xe
    // beq _02237E6C
    // b _02237E72
    // mov r0, #0
    // str r0, [r1, #4]
    // b _02237E7A
    // mov r0, #1
    // str r0, [r1, #4]
    // b _02237E7A
    // mov r0, #2
    // str r0, [r1, #4]
    // b _02237E7A
    // sub r2, #0x1a
    // str r2, [r1, #4]
    // b _02237E7A
    // mov r1, #0xc
    // ldr r0, _02237EC0 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // bl ov38_0221BF48
    // cmp r0, #1
    // beq _02237E8E
    // cmp r0, #7
    // beq _02237EA6
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C014
    // bl ov70_02238398
    // ldr r1, _02237EC0 ; =_02246800
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // bl ov38_0221C020
    // cmp r0, #8
    // bne _02237EBC
    // ldr r0, _02237EC0 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237F12
    // ldr r0, _02237EC4 ; =ov70_02246920
    // b _02237ECC
    // _02237EC0: .word _02246800
    // _02237EC4: .word ov70_02246920
    // _02237EC8: .word ov70_02246900
    // ldrb r0, [r0, #0x1c]
    // cmp r0, #7
    // bgt _02237EE2
    // cmp r0, #1
    // blt _02237F0A
    // beq _02237EE8
    // cmp r0, #6
    // beq _02237EF0
    // cmp r0, #7
    // beq _02237EF8
    // b _02237F0A
    // cmp r0, #0xe
    // beq _02237F00
    // b _02237F0A
    // ldr r0, _02237F28 ; =_02246800
    // mov r1, #0
    // str r1, [r0, #4]
    // b _02237F12
    // ldr r0, _02237F28 ; =_02246800
    // mov r1, #1
    // str r1, [r0, #4]
    // b _02237F12
    // ldr r0, _02237F28 ; =_02246800
    // mov r1, #2
    // str r1, [r0, #4]
    // b _02237F12
    // mov r1, #1
    // ldr r0, _02237F28 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // b _02237F12
    // mov r1, #0xc
    // ldr r0, _02237F28 ; =_02246800
    // mvn r1, r1
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // mov r0, #0x18
    // str r0, [r1]
    // sub r0, #0x24
    // str r0, [r1, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _02237F28: .word _02246800
    // TODO: decompile
}




void ov70_02237F2C(void) {
    // ldr r0, _02237F34 ; =_02246800
    // mov r1, #0
    // str r1, [r0]
    // bx lr
    // _02237F34: .word _02246800
    // TODO: decompile
}




void ov70_02237F38(void) {
    // ldr r1, _02237F54 ; =_02246800
    // ldr r0, [r1]
    // cmp r0, #1
    // beq _02237F46
    // cmp r0, #0x18
    // beq _02237F4A
    // b _02237F50
    // mov r0, #1
    // bx lr
    // mov r0, #1
    // str r0, [r1]
    // bx lr
    // mov r0, #0
    // bx lr
    // _02237F54: .word _02246800
    // TODO: decompile
}




void ov70_02237F58(void) {
    // ldr r0, _02237F60 ; =_02246800
    // ldr r0, [r0, #4]
    // bx lr
    // nop
    // _02237F60: .word _02246800
    // TODO: decompile
}




void ov70_02237F64(void) {
    // push {r3, lr}
    // add r1, r0, #0
    // mov r2, #0x49
    // ldr r0, _02237FA4 ; =ov70_02246814
    // lsl r2, r2, #2
    // bl memcpy
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // mov r2, #0x49
    // ldr r0, _02237FA8 ; =ov70_022460A0
    // ldr r1, _02237FA4 ; =ov70_02246814
    // ldr r3, _02237FAC ; =ov70_0224693C
    // lsl r2, r2, #2
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02237F94
    // ldr r0, _02237FB0 ; =_02246800
    // mov r1, #2
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _02237FB0 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // _02237FA4: .word ov70_02246814
    // _02237FA8: .word ov70_022460A0
    // _02237FAC: .word ov70_0224693C
    // _02237FB0: .word _02246800
    // TODO: decompile
}




void ov70_02237FB4(void) {
    // push {r3, lr}
    // ldr r0, _02237FF4 ; =ov70_0224680C
    // ldr r2, _02237FF8 ; =ov70_02246814
    // ldr r1, [r0]
    // ldr r0, [r0, #4]
    // str r1, [r2]
    // str r0, [r2, #4]
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _02237FFC ; =ov70_022460EC
    // ldr r1, _02237FF8 ; =ov70_02246814
    // ldr r3, _02238000 ; =ov70_0224693C
    // mov r2, #8
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02237FE2
    // ldr r0, _02238004 ; =_02246800
    // mov r1, #4
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _02238004 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _02237FF4: .word ov70_0224680C
    // _02237FF8: .word ov70_02246814
    // _02237FFC: .word ov70_022460EC
    // _02238000: .word ov70_0224693C
    // _02238004: .word _02246800
    // TODO: decompile
}




void ov70_02238008(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _02238048 ; =ov70_02246900
    // str r4, [r0, #0x40]
    // bl ov38_0221BE84
    // mov r0, #0x49
    // lsl r0, r0, #2
    // str r0, [sp]
    // ldr r0, _0223804C ; =ov70_0224613C
    // ldr r1, _02238050 ; =ov70_02246814
    // mov r2, #0
    // add r3, r4, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02238036
    // ldr r0, _02238054 ; =_02246800
    // mov r1, #6
    // str r1, [r0]
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _02238054 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // add sp, #4
    // pop {r3, r4, pc}
    // _02238048: .word ov70_02246900
    // _0223804C: .word ov70_0224613C
    // _02238050: .word ov70_02246814
    // _02238054: .word _02246800
    // TODO: decompile
}




void ov70_02238058(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, _02238098 ; =ov70_02246900
    // str r4, [r0, #0x40]
    // bl ov38_0221BE84
    // mov r0, #0x49
    // lsl r0, r0, #2
    // str r0, [sp]
    // ldr r0, _0223809C ; =ov70_02246184
    // ldr r1, _022380A0 ; =ov70_02246814
    // mov r2, #0
    // add r3, r4, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02238086
    // ldr r0, _022380A4 ; =_02246800
    // mov r1, #8
    // str r1, [r0]
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _022380A4 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // add sp, #4
    // pop {r3, r4, pc}
    // _02238098: .word ov70_02246900
    // _0223809C: .word ov70_02246184
    // _022380A0: .word ov70_02246814
    // _022380A4: .word _02246800
    // TODO: decompile
}




void ov70_022380A8(void) {
    // push {r3, lr}
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _022380DC ; =ov70_022461D0
    // ldr r1, _022380E0 ; =ov70_02246814
    // ldr r3, _022380E4 ; =ov70_0224693C
    // mov r2, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _022380CA
    // ldr r0, _022380E8 ; =_02246800
    // mov r1, #0xa
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _022380E8 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _022380DC: .word ov70_022461D0
    // _022380E0: .word ov70_02246814
    // _022380E4: .word ov70_0224693C
    // _022380E8: .word _02246800
    // TODO: decompile
}




void ov70_022380EC(void) {
    // push {r3, lr}
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _02238120 ; =ov70_0224621C
    // ldr r1, _02238124 ; =ov70_02246814
    // ldr r3, _02238128 ; =ov70_0224693C
    // mov r2, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _0223810E
    // ldr r0, _0223812C ; =_02246800
    // mov r1, #0xc
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _0223812C ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _02238120: .word ov70_0224621C
    // _02238124: .word ov70_02246814
    // _02238128: .word ov70_0224693C
    // _0223812C: .word _02246800
    // TODO: decompile
}




void ov70_02238130(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, _02238194 ; =ov70_02246900
    // add r6, r2, #0
    // str r6, [r0, #0x40]
    // add r4, r1, #0
    // bl ov38_0221BE84
    // ldrb r0, [r5]
    // ldr r1, _02238198 ; =ov70_02246814
    // mov r2, #7
    // strb r0, [r1]
    // ldrb r0, [r5, #1]
    // add r3, r6, #0
    // strb r0, [r1, #1]
    // ldrb r0, [r5, #2]
    // strb r0, [r1, #2]
    // ldrb r0, [r5, #3]
    // strb r0, [r1, #3]
    // ldrb r0, [r5, #4]
    // strb r0, [r1, #4]
    // ldrb r0, [r5, #5]
    // strb r0, [r1, #5]
    // ldr r0, _0223819C ; =_02246800
    // strb r4, [r0, #0x1a]
    // mov r0, #0x49
    // lsl r0, r0, #2
    // mul r0, r4
    // str r0, [sp]
    // ldr r0, _022381A0 ; =ov70_02246268
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02238180
    // ldr r0, _0223819C ; =_02246800
    // mov r1, #0xe
    // str r1, [r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _0223819C ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _02238194: .word ov70_02246900
    // _02238198: .word ov70_02246814
    // _0223819C: .word _02246800
    // _022381A0: .word ov70_02246268
    // TODO: decompile
}




void ov70_022381A4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _022381F8 ; =ov70_02246900
    // add r4, r1, #0
    // str r4, [r0, #0x40]
    // bl ov38_0221BE84
    // ldr r3, _022381FC ; =ov70_02246814
    // add r2, r5, #0
    // mov r1, #8
    // ldrb r0, [r2]
    // add r2, r2, #1
    // strb r0, [r3]
    // add r3, r3, #1
    // sub r1, r1, #1
    // bne _022381B8
    // mov r0, #6
    // ldrsb r1, [r5, r0]
    // mov r0, #0x49
    // lsl r0, r0, #2
    // mul r0, r1
    // str r0, [sp]
    // ldr r0, _02238200 ; =ov70_02246268
    // ldr r1, _022381FC ; =ov70_02246814
    // mov r2, #8
    // add r3, r4, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _022381E8
    // ldr r0, _02238204 ; =_02246800
    // mov r1, #0xe
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldr r0, _02238204 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, r4, r5, pc}
    // _022381F8: .word ov70_02246900
    // _022381FC: .word ov70_02246814
    // _02238200: .word ov70_02246268
    // _02238204: .word _02246800
    // TODO: decompile
}




void ov70_02238208(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #4
    // add r5, r0, #0
    // ldr r0, _0223825C ; =ov70_02246900
    // add r6, r2, #0
    // add r4, r1, #0
    // str r6, [r0, #0x40]
    // bl ov38_0221BE84
    // mov r2, #0x49
    // ldr r0, _02238260 ; =ov70_02246814
    // add r1, r4, #0
    // lsl r2, r2, #2
    // bl memcpy
    // ldr r0, _0223825C ; =ov70_02246900
    // mov r2, #0x49
    // str r5, [r0, #0x38]
    // lsl r2, r2, #2
    // str r2, [sp]
    // ldr r0, _02238264 ; =ov70_022462B4
    // ldr r1, _02238260 ; =ov70_02246814
    // add r2, r2, #4
    // add r3, r6, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _0223824A
    // ldr r0, _02238268 ; =_02246800
    // mov r1, #0x10
    // str r1, [r0]
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // ldr r0, _02238268 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // add sp, #4
    // pop {r3, r4, r5, r6, pc}
    // _0223825C: .word ov70_02246900
    // _02238260: .word ov70_02246814
    // _02238264: .word ov70_022462B4
    // _02238268: .word _02246800
    // TODO: decompile
}




void ov70_0223826C(void) {
    // push {r3, lr}
    // ldr r0, _022382AC ; =ov70_0224680C
    // ldr r2, _022382B0 ; =ov70_02246814
    // ldr r1, [r0]
    // ldr r0, [r0, #4]
    // str r1, [r2]
    // str r0, [r2, #4]
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _022382B4 ; =ov70_02246304
    // ldr r1, _022382B0 ; =ov70_02246814
    // ldr r3, _022382B8 ; =ov70_0224693C
    // mov r2, #8
    // bl ov70_02238360
    // cmp r0, #0
    // beq _0223829A
    // ldr r0, _022382BC ; =_02246800
    // mov r1, #0x12
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _022382BC ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _022382AC: .word ov70_0224680C
    // _022382B0: .word ov70_02246814
    // _022382B4: .word ov70_02246304
    // _022382B8: .word ov70_0224693C
    // _022382BC: .word _02246800
    // TODO: decompile
}




void ov70_022382C0(void) {
    // push {r3, lr}
    // bl ov38_0221BE84
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _022382F4 ; =ov70_02246358
    // ldr r1, _022382F8 ; =ov70_02246814
    // ldr r3, _022382FC ; =ov70_0224693C
    // mov r2, #0
    // bl ov70_02238360
    // cmp r0, #0
    // beq _022382E2
    // ldr r0, _02238300 ; =_02246800
    // mov r1, #0x14
    // str r1, [r0]
    // pop {r3, pc}
    // ldr r0, _02238300 ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, pc}
    // nop
    // _022382F4: .word ov70_02246358
    // _022382F8: .word ov70_02246814
    // _022382FC: .word ov70_0224693C
    // _02238300: .word _02246800
    // TODO: decompile
}




void ov70_02238304(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r0, #0x1c
    // add r4, r1, #0
    // bl OS_GetMacAddress
    // ldr r0, _02238350 ; =ov70_02246814
    // add r1, r5, #0
    // mov r2, #0x64
    // bl memcpy
    // ldr r0, _02238354 ; =ov70_02246900
    // str r4, [r0, #0x40]
    // bl ov38_0221BE84
    // mov r0, #8
    // str r0, [sp]
    // ldr r3, _02238354 ; =ov70_02246900
    // ldr r0, _02238358 ; =ov70_022463A4
    // ldr r1, _02238350 ; =ov70_02246814
    // ldr r3, [r3, #0x40]
    // mov r2, #0x64
    // bl ov70_02238360
    // cmp r0, #0
    // beq _02238340
    // ldr r0, _0223835C ; =_02246800
    // mov r1, #0x16
    // str r1, [r0]
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223835C ; =_02246800
    // mov r1, #0x18
    // str r1, [r0]
    // sub r1, #0x25
    // str r1, [r0, #4]
    // bl ov38_0221BFEC
    // pop {r3, r4, r5, pc}
    // _02238350: .word ov70_02246814
    // _02238354: .word ov70_02246900
    // _02238358: .word ov70_022463A4
    // _0223835C: .word _02246800
    // TODO: decompile
}




void ov70_02238360(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // ldr r1, [sp, #0x18]
    // str r3, [sp]
    // str r1, [sp, #4]
    // add r4, r2, #0
    // ldr r1, _02238394 ; =_02246800
    // add r2, r5, #0
    // ldr r1, [r1, #8]
    // add r3, r4, #0
    // bl ov38_0221BEA8
    // cmp r0, #0
    // beq _02238386
    // cmp r0, #1
    // beq _0223838C
    // cmp r0, #2
    // b _0223838C
    // add sp, #8
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _02238394: .word _02246800
    // TODO: decompile
}




void ov70_02238398(void) {
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022383AA: ; jump table
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r4, r4
    // mvn r0, r0
    WCM_GetPhase(0xc);
    // mvn r4, r4
    ov00_021EC210();
}




void ov70_02238430(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r1, #0
    // add r6, r0, #0
    // ldr r0, [r5]
    // cmp r0, #0
    // beq _02238446
    // cmp r0, #1
    // bne _02238444
    // b _0223856E
    // b _02238582
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // bl HBlankInterruptDisable
    // bl GfGfx_DisableEngineAPlanes
    // bl GfGfx_DisableEngineBPlanes
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02238588 ; =0xFFFFE0FF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _0223858C ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // bl ov70_02238880
    // mov r2, #7
    // mov r0, #3
    // mov r1, #0x3d
    // lsl r2, r2, #0x10
    // bl Heap_Create
    // bl LoadDwcOverlay
    // bl LoadOVY38
    // mov r0, #0x3d
    // bl sub_02039FD8
    // ldr r1, _02238590 ; =0x00001608
    // add r0, r6, #0
    // mov r2, #0x3d
    // bl OverlayManager_CreateAndGetData
    // ldr r2, _02238590 ; =0x00001608
    // mov r1, #0
    // add r4, r0, #0
    // bl memset
    // mov r0, #0x3d
    // bl BgConfig_Alloc
    // str r0, [r4, #4]
    // ldr r0, _02238594 ; =ov70_02246944
    // add r2, sp, #0
    // ldr r3, _02238598 ; =ov70_022451F8
    // str r4, [r0, #4]
    // add r7, r2, #0
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // add r0, r7, #0
    // bl SetBothScreensModesAndDisable
    // mov r0, #4
    // mov r1, #0x3d
    // bl FontID_Alloc
    // mov r0, #0xb
    // mov r1, #0x40
    // mov r2, #0x3d
    // bl MessageFormat_New_Custom
    // ldr r1, _0223859C ; =0x00000B9C
    // ldr r2, _022385A0 ; =0x00000307
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x3d
    // bl NewMsgDataFromNarc
    // mov r1, #0xba
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r2, _022385A4 ; =0x0000030A
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x3d
    // bl NewMsgDataFromNarc
    // ldr r1, _022385A8 ; =0x00000BA8
    // mov r2, #0x32
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // lsl r2, r2, #4
    // mov r3, #0x3d
    // bl NewMsgDataFromNarc
    // ldr r1, _022385AC ; =0x00000BAC
    // mov r2, #0xed
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x3d
    // bl NewMsgDataFromNarc
    // ldr r1, _022385B0 ; =0x00000BA4
    // ldr r2, _022385B4 ; =0x0000031E
    // str r0, [r4, r1]
    // mov r0, #0
    // mov r1, #0x1b
    // mov r3, #0x3d
    // bl NewMsgDataFromNarc
    // mov r1, #0xbb
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // mov r0, #4
    // mov r1, #8
    // bl SetKeyRepeatTimers
    // add r0, r4, #0
    // add r1, r6, #0
    // bl ov70_02238818
    // add r0, r4, #0
    // bl ov70_02238E70
    // ldr r1, _022385B8 ; =0x0000047D
    // mov r0, #0xb
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // ldr r1, _022385BC ; =0x00020020
    // mov r0, #0x3d
    // bl Heap_Alloc
    // str r0, [r4, #0x4c]
    // add r0, #0x1f
    // mov r1, #0x1f
    // bic r0, r1
    // mov r1, #2
    // lsl r1, r1, #0x10
    // mov r2, #0
    // bl NNS_FndCreateExpHeapEx
    // str r0, [r4, #0x50]
    // mov r0, #1
    // str r0, [r5]
    // b _02238582
    // bl sub_02034D8C
    // mov r0, #1
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // mov r0, #0
    // str r0, [r5]
    // add sp, #0x10
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02238588: .word 0xFFFFE0FF
    // _0223858C: .word 0x04001000
    // _02238590: .word 0x00001608
    // _02238594: .word ov70_02246944
    // _02238598: .word ov70_022451F8
    // _0223859C: .word 0x00000B9C
    // _022385A0: .word 0x00000307
    // _022385A4: .word 0x0000030A
    // _022385A8: .word 0x00000BA8
    // _022385AC: .word 0x00000BAC
    // _022385B0: .word 0x00000BA4
    // _022385B4: .word 0x0000031E
    // _022385B8: .word 0x0000047D
    // _022385BC: .word 0x00020020
    // TODO: decompile
}




void ov70_022385C0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // bl ov00_021ECB40
    // bl ov70_022378DC
    // ldr r1, [r5]
    // cmp r1, #5
    // bhi _022386BA
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022385E4: ; jump table
    // bl sub_02034DB8
    // cmp r0, #0
    // beq _022386BA
    // ldr r1, [r4, #0x50]
    // ldr r0, _022386D8 ; =ov70_02246944
    // str r1, [r0]
    // ldr r0, _022386DC ; =ov70_02238DF8
    // ldr r1, _022386E0 ; =ov70_02238E20
    // bl ov00_021EC294
    // mov r0, #1
    // str r0, [r5]
    // b _022386BA
    // ldr r3, [r4, #0x14]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _022386E4 ; =ov70_022463EC
    // add r0, r4, #0
    // ldr r2, [r2, r6]
    // blx r2
    // str r0, [r5]
    // bl ov70_02238880
    // mov r0, #0x45
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022386BA
    // add r0, r4, #0
    // bl ov70_02238E98
    // b _022386BA
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _022386BA
    // mov r0, #3
    // str r0, [r5]
    // b _022386BA
    // ldr r3, [r4, #0x14]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _022386E8 ; =ov70_022463EC + 4
    // add r0, r4, #0
    // ldr r2, [r2, r6]
    // blx r2
    // str r0, [r5]
    // b _022386BA
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _022386BA
    // mov r0, #0x45
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022386A0
    // add r0, r4, #0
    // bl ov70_02238E70
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov70_02240D74
    // mov r1, #0x4a
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0
    // bl ov70_02241184
    // add r0, r4, #0
    // bl ov70_02239C6C
    // add r0, r4, #0
    // bl ov70_02239CF8
    // mov r0, #0x45
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // ldr r3, [r4, #0x14]
    // mov r2, #0xc
    // add r6, r3, #0
    // mul r6, r2
    // ldr r2, _022386EC ; =ov70_022463EC + 8
    // ldr r1, [r5]
    // ldr r2, [r2, r6]
    // add r0, r4, #0
    // blx r2
    // str r0, [r5]
    // b _022386BA
    // mov r0, #1
    // pop {r4, r5, r6, pc}
    // add r0, r4, #0
    // bl ov70_02238F04
    // add r0, r4, #0
    // bl ov70_02238F24
    // ldr r0, _022386F0 ; =0x00000BF4
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _022386D2
    // bl SpriteList_RenderAndAnimateSprites
    // mov r0, #0
    // pop {r4, r5, r6, pc}
    // nop
    // _022386D8: .word ov70_02246944
    // _022386DC: .word ov70_02238DF8
    // _022386E0: .word ov70_02238E20
    // _022386E4: .word ov70_022463EC
    // _022386E8: .word ov70_022463EC + 4
    // _022386EC: .word ov70_022463EC + 8
    // _022386F0: .word 0x00000BF4
    // TODO: decompile
}




void ov70_022386F4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl OverlayManager_GetData
    // add r4, r0, #0
    // ldr r0, [r4, #0x4c]
    // bl Heap_Free
    // bl UnloadOVY38
    // bl UnloadDwcOverlay
    // add r0, r4, #0
    // bl ov70_02238E98
    // ldr r0, _02238794 ; =0x00000BA4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _02238798 ; =0x00000BAC
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _0223879C ; =0x00000BA8
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // mov r0, #0xbb
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl DestroyMsgData
    // ldr r0, _022387A0 ; =0x00000B9C
    // ldr r0, [r4, r0]
    // bl MessageFormat_Delete
    // add r0, r4, #0
    // bl ov70_0223887C
    // bl sub_02034DE0
    // mov r0, #0
    // bl TextFlags_SetCanTouchSpeedUpPrint
    // ldr r0, [r4, #4]
    // bl Heap_Free
    // ldr r0, [r4]
    // bl Heap_Free
    // add r0, r5, #0
    // bl OverlayManager_FreeData
    // mov r0, #4
    // bl FontID_Release
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _022387A4 ; =0xFFFF1FFF
    // and r1, r0
    // str r1, [r2]
    // ldr r2, _022387A8 ; =0x04001000
    // ldr r1, [r2]
    // and r0, r1
    // str r0, [r2]
    // mov r0, #0
    // add r1, r0, #0
    // bl Main_SetVBlankIntrCB
    // mov r0, #0x3d
    // bl Heap_Destroy
    // mov r0, #1
    // pop {r3, r4, r5, pc}
    // _02238794: .word 0x00000BA4
    // _02238798: .word 0x00000BAC
    // _0223879C: .word 0x00000BA8
    // _022387A0: .word 0x00000B9C
    // _022387A4: .word 0xFFFF1FFF
    // _022387A8: .word 0x04001000
    // TODO: decompile
}




void ov70_022387AC(void) {
    // push {r4, lr}
    // ldr r1, _022387E8 ; =0x00001204
    // add r4, r0, #0
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // beq _022387C0
    // blx r1
    // ldr r0, _022387E8 ; =0x00001204
    // mov r1, #0
    // str r1, [r4, r0]
    // ldr r0, _022387EC ; =0x00001208
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _022387CC
    // add r0, r4, #0
    // blx r1
    // ldr r0, [r4, #4]
    // bl DoScheduledBgGpuUpdates
    // bl GF_RunVramTransferTasks
    // bl OamManager_ApplyAndResetBuffers
    // ldr r3, _022387F0 ; =0x027E0000
    // ldr r1, _022387F4 ; =0x00003FF8
    // mov r0, #1
    // ldr r2, [r3, r1]
    // orr r0, r2
    // str r0, [r3, r1]
    // pop {r4, pc}
    // _022387E8: .word 0x00001204
    // _022387EC: .word 0x00001208
    // _022387F0: .word 0x027E0000
    // _022387F4: .word 0x00003FF8
    // TODO: decompile
}




void ov70_022387F8(void) {
}




void ov70_02238818(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl OverlayManager_GetArgs
    // mov r1, #0
    // str r0, [r4]
    // add r0, r4, #0
    // add r2, r1, #0
    // str r1, [r4, #0x14]
    // bl ov70_02238E50
    // mov r1, #0x47
    // mov r0, #0
    // lsl r1, r1, #2
    // strh r0, [r4, r1]
    // ldr r1, _02238874 ; =0x00000B8A
    // mov r3, #3
    // strh r0, [r4, r1]
    // add r2, r1, #2
    // strb r3, [r4, r2]
    // add r2, r1, #3
    // strb r0, [r4, r2]
    // add r2, r1, #4
    // strb r0, [r4, r2]
    // add r1, r1, #6
    // ldr r2, _02238878 ; =0x000011DC
    // strh r0, [r4, r1]
    // mov r3, #0x12
    // strh r0, [r4, r2]
    // lsl r1, r3, #4
    // strh r3, [r4, r1]
    // add r1, r2, #0
    // add r1, #0x1c
    // strh r0, [r4, r1]
    // add r1, r2, #0
    // add r1, #0x1e
    // strh r0, [r4, r1]
    // add r1, r2, #2
    // strh r0, [r4, r1]
    // add r1, r2, #0
    // sub r1, #0x20
    // str r0, [r4, r1]
    // add r2, #0xf0
    // str r0, [r4, r2]
    // pop {r4, pc}
    // _02238874: .word 0x00000B8A
    // _02238878: .word 0x000011DC
    // TODO: decompile
}




void ov70_0223887C(void) {
    // bx lr
    // TODO: decompile
}




void ov70_02238880(void) {
    // ldr r3, _022388C0 ; =0x04001000
    // ldr r0, _022388C4 ; =0xFFFF1FFF
    // ldr r1, [r3]
    // lsl r2, r3, #0xe
    // and r1, r0
    // str r1, [r3]
    // ldr r1, [r2]
    // and r1, r0
    // lsr r0, r3, #0xd
    // orr r0, r1
    // str r0, [r2]
    // ldr r0, _022388C8 ; =0x04000048
    // mov r1, #0x3f
    // ldrh r3, [r0]
    // mov r2, #0x1f
    // bic r3, r1
    // orr r3, r2
    // strh r3, [r0]
    // ldrh r3, [r0, #2]
    // bic r3, r1
    // orr r2, r3
    // mov r1, #0x20
    // orr r1, r2
    // strh r1, [r0, #2]
    // add r1, r0, #0
    // ldr r2, _022388CC ; =0x0000F0FF
    // sub r1, #8
    // strh r2, [r1]
    // mov r1, #0x10
    // sub r0, r0, #4
    // strh r1, [r0]
    // bx lr
    // _022388C0: .word 0x04001000
    // _022388C4: .word 0xFFFF1FFF
    // _022388C8: .word 0x04000048
    // _022388CC: .word 0x0000F0FF
    // TODO: decompile
}




void ov70_022388D0(void) {
    // push {r4, lr}
    // sub sp, #0x10
    // ldr r4, _022388FC ; =ov70_02245208
    // add r3, sp, #0
    // add r2, r3, #0
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl ObjCharTransfer_Init
    // mov r0, #0x14
    // mov r1, #0x3d
    // bl ObjPlttTransfer_Init
    // bl ObjCharTransfer_ClearBuffers
    // bl ObjPlttTransfer_Reset
    // add sp, #0x10
    // pop {r4, pc}
    // _022388FC: .word ov70_02245208
    // TODO: decompile
}




void ov70_02238900(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x20
    // add r5, r0, #0
    // mov r0, #0x64
    // mov r1, #0x3d
    // bl NARC_New
    // str r0, [sp, #0x18]
    // bl NNS_G2dInitOamManagerModule
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02238B2C ; =0xFFCFFFEF
    // add r3, r1, #0
    // and r3, r0
    // mov r1, #0x10
    // orr r3, r1
    // str r3, [r2]
    // ldr r3, _02238B30 ; =0x04001000
    // ldr r2, [r3]
    // and r0, r2
    // orr r0, r1
    // str r0, [r3]
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0x7e
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r3, #0x20
    // str r3, [sp, #0xc]
    // mov r1, #0x3d
    // str r1, [sp, #0x10]
    // mov r1, #0x7a
    // add r2, r0, #0
    // bl OamManager_Create
    // ldr r1, _02238B34 ; =0x00000BF8
    // mov r0, #0x54
    // add r1, r5, r1
    // mov r2, #0x3d
    // bl G2dRenderer_Init
    // ldr r1, _02238B38 ; =0x00000BF4
    // mov r2, #1
    // str r0, [r5, r1]
    // add r0, r1, #4
    // add r0, r5, r0
    // mov r1, #0
    // lsl r2, r2, #0x14
    // bl G2dRenderer_SetSubSurfaceCoords
    // mov r7, #0xd2
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #4
    // mov r0, #3
    // add r1, r6, #0
    // mov r2, #0x3d
    // bl Create2DGfxResObjMan
    // str r0, [r4, r7]
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #4
    // blt _02238970
    // mov r0, #0
    // str r0, [sp]
    // mov r3, #1
    // str r3, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0xd2
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x18]
    // mov r2, #0x15
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0xd3
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #3
    // str r0, [sp, #8]
    // mov r0, #0x3d
    // sub r1, #0xc
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r2, #0xa
    // bl AddPlttResObjFromOpenNarc
    // ldr r1, _02238B3C ; =0x00000D34
    // mov r2, #0x16
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02238B40 ; =0x00000D38
    // mov r2, #0x17
    // str r0, [r5, r1]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // sub r1, #0xc
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r3, #1
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02238B44 ; =0x00000D3C
    // mov r3, #1
    // str r0, [r5, r1]
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r2, #0x2b
    // bl AddCharResObjFromOpenNarc
    // mov r1, #0x35
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0xa
    // str r0, [sp, #8]
    // mov r0, #0x3d
    // sub r1, #0x1c
    // str r0, [sp, #0xc]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r2, #9
    // mov r3, #0
    // bl AddPlttResObjFromOpenNarc
    // ldr r1, _02238B48 ; =0x00000D44
    // mov r3, #1
    // str r0, [r5, r1]
    // str r3, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r2, #0x2c
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02238B4C ; =0x00000D48
    // mov r3, #1
    // str r0, [r5, r1]
    // str r3, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // sub r1, #0x1c
    // str r0, [sp, #8]
    // ldr r0, [r5, r1]
    // ldr r1, [sp, #0x18]
    // mov r2, #0x2d
    // bl AddCellOrAnimResObjFromOpenNarc
    // ldr r1, _02238B50 ; =0x00000D4C
    // str r0, [r5, r1]
    // sub r1, #0x1c
    // ldr r0, [r5, r1]
    // bl sub_0200ACF0
    // mov r0, #0x35
    // lsl r0, r0, #6
    // ldr r0, [r5, r0]
    // bl sub_0200ACF0
    // ldr r0, _02238B3C ; =0x00000D34
    // ldr r0, [r5, r0]
    // bl sub_0200AF94
    // ldr r0, _02238B48 ; =0x00000D44
    // ldr r0, [r5, r0]
    // bl sub_0200AF94
    // bl sub_02074490
    // add r1, r0, #0
    // mov r0, #0x14
    // add r2, sp, #0x1c
    // mov r3, #0x3d
    // bl GfGfxLoader_GetPlttData
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x60
    // ldr r0, [r0, #0xc]
    // bl DC_FlushRange
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x60
    // ldr r0, [r0, #0xc]
    // add r2, r1, #0
    // bl GX_LoadOBJPltt
    // ldr r0, [sp, #0x1c]
    // mov r7, #0x1f
    // ldr r4, [r0, #0xc]
    // mov r3, #0
    // add r5, r7, #0
    // ldrh r2, [r4]
    // mov r0, #0x1f
    // add r3, r3, #1
    // add r1, r2, #0
    // and r1, r0
    // lsr r0, r1, #0x1f
    // add r0, r1, r0
    // asr r1, r0, #1
    // asr r0, r2, #0xa
    // add r6, r0, #0
    // and r6, r7
    // lsr r0, r6, #0x1f
    // add r0, r6, r0
    // asr r2, r2, #5
    // add r6, r2, #0
    // and r6, r5
    // lsr r2, r6, #0x1f
    // add r2, r6, r2
    // asr r0, r0, #1
    // asr r2, r2, #1
    // lsl r0, r0, #0xa
    // lsl r2, r2, #5
    // orr r0, r2
    // orr r0, r1
    // strh r0, [r4]
    // add r4, r4, #2
    // cmp r3, #0x30
    // blt _02238ACC
    // ldr r0, [sp, #0x1c]
    // mov r1, #0x60
    // ldr r0, [r0, #0xc]
    // bl DC_FlushRange
    // ldr r0, [sp, #0x1c]
    // mov r1, #0xc0
    // ldr r0, [r0, #0xc]
    // mov r2, #0x60
    // bl GX_LoadOBJPltt
    // ldr r0, [sp, #0x14]
    // bl Heap_Free
    // ldr r0, [sp, #0x18]
    // bl NARC_Delete
    // add sp, #0x20
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02238B2C: .word 0xFFCFFFEF
    // _02238B30: .word 0x04001000
    // _02238B34: .word 0x00000BF8
    // _02238B38: .word 0x00000BF4
    // _02238B3C: .word 0x00000D34
    // _02238B40: .word 0x00000D38
    // _02238B44: .word 0x00000D3C
    // _02238B48: .word 0x00000D44
    // _02238B4C: .word 0x00000D48
    // _02238B50: .word 0x00000D4C
    // TODO: decompile
}




void ov70_02238B54(void) {
    // push {r3, r4}
    // ldr r4, _02238B7C ; =0x00000BF4
    // ldr r1, [r1, r4]
    // str r1, [r0]
    // str r2, [r0, #4]
    // mov r2, #0
    // mov r1, #1
    // str r2, [r0, #0x10]
    // lsl r1, r1, #0xc
    // str r1, [r0, #0x14]
    // str r1, [r0, #0x18]
    // str r1, [r0, #0x1c]
    // strh r2, [r0, #0x20]
    // mov r1, #1
    // str r1, [r0, #0x24]
    // str r3, [r0, #0x28]
    // mov r1, #0x3d
    // str r1, [r0, #0x2c]
    // pop {r3, r4}
    // bx lr
    // _02238B7C: .word 0x00000BF4
    // TODO: decompile
}




void ov70_02238B80(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    // str r1, [sp, #0x10]
    // ldr r0, [r4, r2]
    // str r0, [sp, #0x14]
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x18]
    // add r0, #8
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x1c]
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // add r2, #0x40
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, r4, r2
    // str r1, [sp, #0x28]
    CreateSpriteResourcesHeader((0xd2 << 4), 0, 0, 0);
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r2, [r4, r3]
    // str r2, [sp, #0x14]
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x18]
    // add r2, #8
    // ldr r2, [r4, r2]
    // str r2, [sp, #0x1c]
    // add r2, #0xc
    // ldr r2, [r4, r2]
    // add r3, #0x64
    // str r2, [sp, #0x20]
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, r4, r3
    CreateSpriteResourcesHeader(0, 1, 1, 1);
    GfGfx_EngineATogglePlanes(0x10, 1);
    GfGfx_EngineBTogglePlanes(0x10, 1);
}




void ov70_02238C14(void) {
}




void ov70_02238C2C(void) {
    YesNoPrompt_Create(0x3d);
    // str r0, [sp]
    // add r0, sp, #0x20
    // ldr r1, [sp, #0x30]
    ov70_02238FB4(1);
    // ldr r0, [sp, #0x30]
    // str r5, [sp, #4]
    // str r0, [sp, #8]
    // str r6, [sp, #0xc]
    // str r7, [sp, #0x10]
    // add r1, sp, #4
    *((u8*)(r1 + 0x10)) = 0x18;
    *((u8*)(r1 + 0x11)) = r4;
    // bic r2, r0
    *((u8*)(r1 + 0x12)) = *((u8*)(r1 + 0x12));
    // bic r2, r0
    *((u8*)(r1 + 0x12)) = *((u8*)(r1 + 0x12));
    *((u8*)(r1 + 0x13)) = 0;
    // ldr r0, [sp]
    // add r1, sp, #4
    YesNoPrompt_InitFromTemplate(0, *((u8*)(r1 + 0x12)));
    // ldr r0, [sp]
}




void ov70_02238C8C(void) {
    // push {r4, lr}
    // ldr r1, _02238CA8 ; =0x000011C8
    // ldr r0, [r0, r1]
    // bl YesNoPrompt_HandleInput
    // add r4, r0, #0
    // sub r0, r4, #1
    // cmp r0, #1
    // bhi _02238CA2
    // bl ov70_02238FE0
    // add r0, r4, #0
    // pop {r4, pc}
    // nop
    // _02238CA8: .word 0x000011C8
    // TODO: decompile
}




void ov70_02238CAC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x30
    // add r5, r0, #0
    // add r4, r1, #0
    // mov r0, #0x3d
    // mov r1, #0
    // add r6, r2, #0
    // bl TouchscreenListMenuSpawner_Create
    // ldr r1, _02238D28 ; =0x000011CC
    // mov r2, #0x18
    // str r0, [r5, r1]
    // add r0, sp, #0x18
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r2, _02238D2C ; =_022451EC
    // add r0, sp, #0x18
    // ldrh r3, [r2]
    // add r1, sp, #0x18
    // strh r3, [r0]
    // ldrh r3, [r2, #2]
    // strh r3, [r0, #2]
    // ldrh r3, [r2, #4]
    // strh r3, [r0, #4]
    // ldrh r3, [r2, #6]
    // strh r3, [r0, #6]
    // ldrh r3, [r2, #8]
    // ldrh r2, [r2, #0xa]
    // strh r3, [r0, #8]
    // ldr r3, _02238D30 ; =0x000011AC
    // strh r2, [r0, #0xa]
    // ldr r2, [r5, r3]
    // add r3, #0x20
    // str r2, [sp, #0x24]
    // ldr r2, [r5, #4]
    // str r2, [sp, #0x28]
    // strb r4, [r0, #0x14]
    // lsl r0, r6, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r2, #0
    // ldr r0, _02238D34 ; =ov70_02238D38
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // str r2, [sp, #0x10]
    // mov r0, #1
    // str r0, [sp, #0x14]
    // ldr r0, [r5, r3]
    // mov r3, #0x14
    // bl TouchscreenListMenu_CreateWithCallback
    // add r4, r0, #0
    // mov r0, #1
    // bl ov70_02238FB4
    // add r0, r4, #0
    // add sp, #0x30
    // pop {r4, r5, r6, pc}
    // nop
    // _02238D28: .word 0x000011CC
    // _02238D2C: .word _022451EC
    // _02238D30: .word 0x000011AC
    // _02238D34: .word ov70_02238D38
    // TODO: decompile
}




void ov70_02238D38(void) {
}




void ov70_02238D60(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02238D7C ; =0x000011D0
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenu_Destroy
    // ldr r0, _02238D80 ; =0x000011CC
    // ldr r0, [r4, r0]
    // bl TouchscreenListMenuSpawner_Destroy
    // bl ov70_02238FE0
    // pop {r4, pc}
    // nop
    // _02238D7C: .word 0x000011D0
    // _02238D80: .word 0x000011CC
    // TODO: decompile
}




void ov70_02238D84(void) {
}




void ov70_02238D8C(void) {
    _fflt((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp]
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(r4);
}




void ov70_02238DF8(void) {
    // push {r4, r5, r6, lr}
    // add r5, r1, #0
    // add r4, r2, #0
    // bl OS_DisableInterrupts
    // add r6, r0, #0
    // ldr r0, _02238E1C ; =ov70_02246944
    // add r1, r5, #0
    // ldr r0, [r0]
    // add r2, r4, #0
    // bl NNS_FndAllocFromExpHeapEx
    // add r4, r0, #0
    // add r0, r6, #0
    // bl OS_RestoreInterrupts
    // add r0, r4, #0
    // pop {r4, r5, r6, pc}
    // _02238E1C: .word ov70_02246944
    // TODO: decompile
}




void ov70_02238E20(void) {
    // push {r3, r4, r5, lr}
    // add r5, r1, #0
    // beq _02238E3C
    // bl OS_DisableInterrupts
    // add r4, r0, #0
    // ldr r0, _02238E40 ; =ov70_02246944
    // add r1, r5, #0
    // ldr r0, [r0]
    // bl NNS_FndFreeToExpHeap
    // add r0, r4, #0
    // bl OS_RestoreInterrupts
    // pop {r3, r4, r5, pc}
    // nop
    // _02238E40: .word ov70_02246944
    // TODO: decompile
}




void ov70_02238E44(void) {
}




void ov70_02238E50(void) {
}




void ov70_02238E58(void) {
}




void ov70_02238E64(void) {
}




void ov70_02238E70(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_022387F8
    // bl ov70_022388D0
    // add r0, r4, #0
    // bl ov70_02238900
    // add r0, r4, #0
    // bl ov70_02238B80
    // ldr r0, _02238E94 ; =ov70_022387AC
    // add r1, r4, #0
    // bl Main_SetVBlankIntrCB
    // pop {r4, pc}
    // nop
    // _02238E94: .word ov70_022387AC
    // TODO: decompile
}




void ov70_02238E98(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // bl ov70_02241308
    // mov r0, #0xd3
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // mov r0, #0x35
    // lsl r0, r0, #6
    // ldr r0, [r6, r0]
    // bl sub_0200AEB0
    // ldr r0, _02238EF8 ; =0x00000D34
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // ldr r0, _02238EFC ; =0x00000D44
    // ldr r0, [r6, r0]
    // bl sub_0200B0A8
    // mov r7, #0xd2
    // mov r4, #0
    // add r5, r6, #0
    // lsl r7, r7, #4
    // ldr r0, [r5, r7]
    // bl Destroy2DGfxResObjMan
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #4
    // blt _02238ECC
    // ldr r0, _02238F00 ; =0x00000BF4
    // ldr r0, [r6, r0]
    // bl SpriteList_Delete
    // ldr r0, _02238F00 ; =0x00000BF4
    // mov r1, #0
    // str r1, [r6, r0]
    // bl OamManager_Free
    // bl ObjCharTransfer_Destroy
    // bl ObjPlttTransfer_Destroy
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02238EF8: .word 0x00000D34
    // _02238EFC: .word 0x00000D44
    // _02238F00: .word 0x00000BF4
    // TODO: decompile
}




void ov70_02238F04(void) {
    *((u16*)(r0 + 0x3a)) = (*((u16*)(r0 + 0x3a)) - 1);
}




void ov70_02238F10(void) {
    // ldr r1, _02238F20 ; =0x000011FA
    // mov r2, #1
    // strh r2, [r0, r1]
    // mov r2, #0
    // sub r1, r1, #2
    // strh r2, [r0, r1]
    // bx lr
    // nop
    // _02238F20: .word 0x000011FA
    // TODO: decompile
}




void ov70_02238F24(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02238F5C ; =0x000011FA
    // ldrh r1, [r4, r0]
    // cmp r1, #0
    // beq _02238F58
    // ldr r0, [r4]
    // sub r1, r1, #1
    // ldr r0, [r0, #0xc]
    // bl PCStorage_CountMonsAndEggsInBox
    // ldr r1, _02238F60 ; =0x000011F8
    // ldrh r2, [r4, r1]
    // add r0, r2, r0
    // strh r0, [r4, r1]
    // add r0, r1, #2
    // ldrh r0, [r4, r0]
    // add r2, r0, #1
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // ldrh r0, [r4, r0]
    // cmp r0, #0x13
    // bne _02238F58
    // mov r2, #0
    // add r0, r1, #2
    // strh r2, [r4, r0]
    // pop {r4, pc}
    // nop
    // _02238F5C: .word 0x000011FA
    // _02238F60: .word 0x000011F8
    // TODO: decompile
}




void ov70_02238F64(void) {
}




void ov70_02238F80(void) {
}




void ov70_02238F9C(void) {
}




void ov70_02238FB4(void) {
    // push {r3, lr}
    // cmp r0, #0
    // beq _02238FC8
    // mov r1, #0x1e
    // add r2, r1, #0
    // ldr r0, _02238FD8 ; =0x04000050
    // sub r2, #0x25
    // bl G2x_SetBlendBrightness_
    // pop {r3, pc}
    // mov r1, #0x1e
    // add r2, r1, #0
    // ldr r0, _02238FDC ; =0x04001050
    // sub r2, #0x25
    // bl G2x_SetBlendBrightness_
    // pop {r3, pc}
    // nop
    // _02238FD8: .word 0x04000050
    // _02238FDC: .word 0x04001050
    // TODO: decompile
}




void ov70_02238FE0(void) {
    // ldr r0, _02238FEC ; =0x04000050
    // mov r1, #0
    // strh r1, [r0]
    // ldr r0, _02238FF0 ; =0x04001050
    // strh r1, [r0]
    // bx lr
    // _02238FEC: .word 0x04000050
    // _02238FF0: .word 0x04001050
    // TODO: decompile
}




void ov70_02238FF4(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_02239614
    // ldr r2, _022390C8 ; =0x04000304
    // ldr r0, _022390CC ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // ldr r0, [r4, #4]
    // bl ov70_02239134
    // add r0, r4, #0
    // bl ov70_02239330
    // add r0, r4, #0
    // bl ov70_022394B8
    // add r0, r4, #0
    // bl ov70_02239414
    // add r0, r4, #0
    // bl ov70_02245124
    // add r0, r4, #0
    // bl ov70_02239B00
    // ldr r1, _022390D0 ; =0x00000484
    // mov r0, #0x17
    // mov r2, #1
    // bl Sound_SetSceneAndPlayBGM
    // ldrh r0, [r4, #0x34]
    // cmp r0, #0
    // bne _02239072
    // add r0, r4, #0
    // bl ov70_02239304
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #1
    // strh r0, [r4, #0x34]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov70_02240EF4
    // b _022390BC
    // ldr r0, _022390D4 ; =0x000011FC
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _022390A2
    // ldr r0, _022390D8 ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // cmp r0, #0
    // beq _022390A2
    // add r0, r4, #0
    // bl ov70_02241358
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _022390B8
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // mov r0, #5
    // str r0, [r4, #0x2c]
    // ldr r0, _022390D4 ; =0x000011FC
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #2
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _022390C8: .word 0x04000304
    // _022390CC: .word 0xFFFF7FFF
    // _022390D0: .word 0x00000484
    // _022390D4: .word 0x000011FC
    // _022390D8: .word 0x0400106C
    // TODO: decompile
}




void ov70_022390DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238E44
    // bl sub_0203A930
    // ldr r1, [r4, #0x2c]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _022390F8 ; =ov70_02246464
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // nop
    // _022390F8: .word ov70_02246464
    // TODO: decompile
}




void ov70_022390FC(void) {
    sub_0203A914();
    ov70_022394A8(r4);
    ov70_0223963C(r4);
    ov70_022395C4(r4);
    ov70_022392E0(*((u32*)(r4 + 4)));
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xf1 << 4), 0);
    ov70_02238E58(r4);
}




void ov70_02239134(void) {
    // push {r4, r5, lr}
    // sub sp, #0x64
    // ldr r5, _022391E0 ; =ov70_0224525C
    // add r3, sp, #0x54
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _022391E4 ; =ov70_022452F4
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _022391E8 ; =ov70_022452D8
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _022391EC ; =ov70_02245310
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_022391F0
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x64
    // pop {r4, r5, pc}
    // _022391E0: .word ov70_0224525C
    // _022391E4: .word ov70_022452F4
    // _022391E8: .word ov70_022452D8
    // _022391EC: .word ov70_02245310
    // TODO: decompile
}




void ov70_022391F0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x70
    // ldr r3, _022392AC ; =ov70_022452A0
    // add r6, r2, #0
    // add r5, r0, #0
    // add r4, r1, #0
    // add r2, sp, #0x54
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #4
    // str r0, [r2]
    // add r0, r5, #0
    // add r2, r7, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r5, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r3, _022392B0 ; =ov70_02245284
    // add r2, sp, #0x38
    // ldmia r3!, {r0, r1}
    // add r7, r2, #0
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldmia r3!, {r0, r1}
    // stmia r2!, {r0, r1}
    // ldr r0, [r3]
    // mov r1, #6
    // str r0, [r2]
    // add r0, r5, #0
    // add r2, r7, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // cmp r6, #0
    // bne _02239252
    // add r0, r5, #0
    // mov r1, #6
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _022392B4 ; =ov70_022452BC
    // add r3, sp, #0x1c
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r5, #0
    // mov r3, #0
    // str r4, [sp, #0x20]
    // bl InitBgFromTemplate
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // ldr r4, _022392B8 ; =ov70_0224532C
    // add r3, sp, #0
    // ldmia r4!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r4!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r4]
    // mov r1, #7
    // str r0, [r3]
    // add r0, r5, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r5, #0
    // mov r1, #7
    // bl BgClearTilemapBufferAndCommit
    // add sp, #0x70
    // pop {r3, r4, r5, r6, r7, pc}
    // _022392AC: .word ov70_022452A0
    // _022392B0: .word ov70_02245284
    // _022392B4: .word ov70_022452BC
    // _022392B8: .word ov70_0224532C
    // TODO: decompile
}




void ov70_022392BC(void) {
}




void ov70_022392E0(void) {
}




void ov70_02239304(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r0, _0223932C ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // pop {r4, pc}
    // _0223932C: .word 0x00000DCC
    // TODO: decompile
}




void ov70_02239330(void) {
    NARC_New(0x64, 0x3d);
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(4, 0, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0x10, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x27, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r6, 0x26, r4, 2);
    ov70_02239C6C(r5);
    ov70_02239CF8(r5);
    GfGfx_EngineBTogglePlanes(1, 1);
    GfGfx_EngineBTogglePlanes(1, 0);
    NARC_Delete(r6);
}




void ov70_02239414(void) {
    // push {r4, lr}
    // sub sp, #0x80
    // mov r1, #0
    // add r4, r0, #0
    // str r1, [sp]
    // sub r0, r1, #1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r2, #0xd2
    // str r1, [sp, #0xc]
    // mov r0, #1
    // lsl r2, r2, #4
    // str r0, [sp, #0x10]
    // ldr r0, [r4, r2]
    // add r3, r1, #0
    // str r0, [sp, #0x14]
    // add r0, r2, #4
    // ldr r0, [r4, r0]
    // str r0, [sp, #0x18]
    // add r0, r2, #0
    // add r0, #8
    // ldr r0, [r4, r0]
    // add r2, #0xc
    // str r0, [sp, #0x1c]
    // ldr r0, [r4, r2]
    // add r2, r1, #0
    // str r0, [sp, #0x20]
    // str r1, [sp, #0x24]
    // add r0, sp, #0x2c
    // str r1, [sp, #0x28]
    // bl CreateSpriteResourcesHeader
    // add r0, sp, #0x50
    // add r1, r4, #0
    // add r2, sp, #0x2c
    // mov r3, #1
    // bl ov70_02238B54
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldrh r1, [r4, r0]
    // lsl r2, r1, #2
    // ldr r1, _0223949C ; =ov70_02245240
    // ldrh r1, [r1, r2]
    // lsl r1, r1, #0xc
    // str r1, [sp, #0x58]
    // ldrh r0, [r4, r0]
    // lsl r1, r0, #2
    // ldr r0, _022394A0 ; =ov70_02245242
    // ldrh r0, [r0, r1]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0x5c]
    // add r0, sp, #0x50
    // bl Sprite_CreateAffine
    // ldr r1, _022394A4 ; =0x00000DCC
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _022394A4 ; =0x00000DCC
    // mov r1, #0x2b
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // add sp, #0x80
    // pop {r4, pc}
    // _0223949C: .word ov70_02245240
    // _022394A0: .word ov70_02245242
    // _022394A4: .word 0x00000DCC
    // TODO: decompile
}




void ov70_022394A8(void) {
    // ldr r1, _022394B0 ; =0x00000DCC
    // ldr r3, _022394B4 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // _022394B0: .word 0x00000DCC
    // _022394B4: .word Sprite_Delete
    // TODO: decompile
}




void ov70_022394B8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // mov r2, #1
    // add r7, r0, #0
    // str r2, [sp]
    // mov r0, #0x1c
    // str r0, [sp, #4]
    // mov r3, #2
    // ldr r1, _022395B0 ; =0x00000F38
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r7, r1
    // bl AddWindowParameterized
    // ldr r0, _022395B0 ; =0x00000F38
    // mov r1, #0
    // add r0, r7, r0
    // bl FillWindowPixelBuffer
    // mov r0, #2
    // str r0, [sp]
    // mov r3, #0
    // mov r2, #0x2f
    // ldr r0, _022395B4 ; =0x000F0600
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // ldr r0, _022395B0 ; =0x00000F38
    // str r3, [sp, #0xc]
    // lsl r2, r2, #6
    // ldr r2, [r7, r2]
    // add r0, r7, r0
    // mov r1, #1
    // bl AddTextPrinterParameterizedWithColor
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, _022395B8 ; =0x00000F58
    // mov r6, #0x61
    // mov r4, #6
    // add r5, r7, r0
    // lsl r0, r4, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xf
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r5, #0
    // mov r2, #1
    // mov r3, #9
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r6, #0x1e
    // add r0, r0, #1
    // add r4, r4, #5
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // cmp r0, #3
    // blt _02239510
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // ldr r1, _022395BC ; =0x00000F18
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r7, r1
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r0, _022395BC ; =0x00000F18
    // mov r1, #0xf
    // add r0, r7, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x96
    // ldr r1, _022395C0 ; =0x00001158
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r7, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _022395C0 ; =0x00001158
    // mov r1, #0xf
    // add r0, r7, r0
    // bl FillWindowPixelBuffer
    // add r0, r7, #0
    // mov r1, #0
    // bl ov70_02239D44
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022395B0: .word 0x00000F38
    // _022395B4: .word 0x000F0600
    // _022395B8: .word 0x00000F58
    // _022395BC: .word 0x00000F18
    // _022395C0: .word 0x00001158
    // TODO: decompile
}




void ov70_022395C4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _02239600 ; =0x00001198
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _02239604 ; =0x00001158
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _02239608 ; =0x00000F18
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _0223960C ; =0x00000F58
    // mov r4, #0
    // add r5, r6, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _022395E6
    // ldr r0, _02239610 ; =0x00000F38
    // add r0, r6, r0
    // bl RemoveWindow
    // pop {r4, r5, r6, pc}
    // nop
    // _02239600: .word 0x00001198
    // _02239604: .word 0x00001158
    // _02239608: .word 0x00000F18
    // _0223960C: .word 0x00000F58
    // _02239610: .word 0x00000F38
    // TODO: decompile
}




void ov70_02239614(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _02239638 ; =0x00000BBC
    // str r0, [r4, r1]
    // sub r1, #0x1c
    // ldr r0, [r4, r1]
    // mov r1, #0x27
    // bl NewString_ReadMsgData
    // mov r1, #0x2f
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // pop {r4, pc}
    // nop
    // _02239638: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223963C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02239654 ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // _02239654: .word 0x00000BBC
    // TODO: decompile
}




void ov70_02239658(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02239694 ; =0x000011DC
    // ldrh r0, [r4, r0]
    // cmp r0, #0
    // beq _0223968E
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0xb
    // bl ov70_02238E50
    // mov r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02239694: .word 0x000011DC
    // TODO: decompile
}




void ov70_02239698(void) {
}




void ov70_022396A8(void) {
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    *((u32*)(r4 + 0x2c)) = 3;
}




void ov70_022396CC(void) {
}




void ov70_022396E0(void) {
}




void ov70_022396F4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _02239728 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #4
    // mov r2, #1
    // mov r3, #0
    // bl ov70_02239B84
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #6
    // bl ov70_02238D84
    // ldr r0, _0223972C ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimActiveFlag
    // add r0, r4, #0
    // bl ov70_02238F10
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _02239728: .word 0x00000F0F
    // _0223972C: .word 0x00000DCC
    // TODO: decompile
}




void ov70_02239730(void) {
    // ldr r3, _02239738 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0223973C ; =ov70_0224524C
    // bx r3
    // nop
    // _02239738: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223973C: .word ov70_0224524C
    // TODO: decompile
}




void ov70_02239740(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // cmp r1, #0
    // beq _02239756
    // cmp r1, #1
    // beq _022397CC
    // cmp r1, #2
    // beq _022397E8
    // add sp, #4
    // pop {r3, r4, pc}
    // ldrh r1, [r4, #0x36]
    // cmp r1, #0
    // bne _02239772
    // mov r1, #5
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // ldr r0, _0223981C ; =0x000005DC
    // bl PlaySE
    // add sp, #4
    // pop {r3, r4, pc}
    // ldrh r1, [r4, #0x3a]
    // cmp r1, #0
    // bne _02239796
    // mov r1, #7
    // mov r2, #0xb
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x1c]
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // ldr r0, _02239820 ; =0x00000708
    // strh r0, [r4, #0x3a]
    // ldr r0, _0223981C ; =0x000005DC
    // bl PlaySE
    // add sp, #4
    // pop {r3, r4, pc}
    // ldr r0, _02239824 ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _02239828 ; =0x00000F0F
    // mov r1, #0x22
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_02239B84
    // add r0, r4, #0
    // mov r1, #0xb
    // mov r2, #5
    // bl ov70_02238D84
    // ldr r0, _0223982C ; =0x000005F3
    // bl PlaySE
    // mov r0, #0x47
    // mov r1, #0
    // lsl r0, r0, #6
    // add sp, #4
    // str r1, [r4, r0]
    // pop {r3, r4, pc}
    // ldr r1, _02239830 ; =0x000011DE
    // mov r2, #0
    // strh r2, [r4, r1]
    // mov r1, #4
    // mov r2, #0xd
    // bl ov70_02238E50
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // ldr r0, _0223981C ; =0x000005DC
    // bl PlaySE
    // add sp, #4
    // pop {r3, r4, pc}
    // bl ov70_02238E64
    // add r2, r0, #0
    // ldr r0, _02239828 ; =0x00000F0F
    // mov r1, #7
    // str r0, [sp]
    // add r0, r4, #0
    // mov r3, #0
    // bl ov70_02239BDC
    // add r0, r4, #0
    // mov r1, #0xa
    // mov r2, #0xc
    // bl ov70_02238D84
    // ldr r0, _02239824 ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _0223981C ; =0x000005DC
    // bl PlaySE
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223981C: .word 0x000005DC
    // _02239820: .word 0x00000708
    // _02239824: .word 0x00000DCC
    // _02239828: .word 0x00000F0F
    // _0223982C: .word 0x000005F3
    // _02239830: .word 0x000011DE
    // TODO: decompile
}




void ov70_02239834(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov70_02239730
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _02239876
    // mov r0, #0x47
    // lsl r0, r0, #2
    // strh r4, [r5, r0]
    // ldr r0, _0223993C ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // ldr r1, _02239940 ; =ov70_02245240
    // ldr r3, _02239944 ; =ov70_02245242
    // lsl r2, r0, #2
    // ldr r0, _02239948 ; =0x00000DCC
    // ldrh r1, [r1, r2]
    // ldrh r2, [r3, r2]
    // ldr r0, [r5, r0]
    // bl ov70_02238D8C
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_02239740
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223994C ; =gSystem
    // mov r1, #2
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _022398AC
    // add r0, r5, #0
    // bl ov70_02238E64
    // add r2, r0, #0
    // ldr r0, _02239950 ; =0x00000F0F
    // mov r1, #7
    // str r0, [sp]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov70_02239BDC
    // add r0, r5, #0
    // mov r1, #0xa
    // mov r2, #0xc
    // bl ov70_02238D84
    // ldr r0, _02239948 ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimActiveFlag
    // b _02239938
    // mov r1, #1
    // tst r1, r0
    // beq _022398C0
    // mov r1, #0x47
    // lsl r1, r1, #2
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // bl ov70_02239740
    // b _02239938
    // mov r1, #0x40
    // add r2, r0, #0
    // tst r2, r1
    // beq _022398FE
    // add r0, r1, #0
    // add r0, #0xdc
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _02239938
    // add r0, r1, #0
    // add r0, #0xdc
    // ldrh r0, [r5, r0]
    // add r1, #0xdc
    // sub r0, r0, #1
    // strh r0, [r5, r1]
    // ldr r0, _0223993C ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // ldr r1, _02239940 ; =ov70_02245240
    // ldr r2, _02239944 ; =ov70_02245242
    // lsl r3, r0, #2
    // ldr r0, _02239948 ; =0x00000DCC
    // ldrh r1, [r1, r3]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, r0]
    // bl ov70_02238D8C
    // b _02239938
    // mov r1, #0x80
    // tst r0, r1
    // beq _02239938
    // add r0, r1, #0
    // add r0, #0x9c
    // ldrh r0, [r5, r0]
    // cmp r0, #2
    // bhs _02239938
    // add r0, r1, #0
    // add r0, #0x9c
    // ldrh r0, [r5, r0]
    // add r1, #0x9c
    // add r0, r0, #1
    // strh r0, [r5, r1]
    // ldr r0, _0223993C ; =0x000005DC
    // bl PlaySE
    // mov r0, #0x47
    // lsl r0, r0, #2
    // ldrh r0, [r5, r0]
    // ldr r1, _02239940 ; =ov70_02245240
    // ldr r2, _02239944 ; =ov70_02245242
    // lsl r3, r0, #2
    // ldr r0, _02239948 ; =0x00000DCC
    // ldrh r1, [r1, r3]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, r0]
    // bl ov70_02238D8C
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _0223993C: .word 0x000005DC
    // _02239940: .word ov70_02245240
    // _02239944: .word ov70_02245242
    // _02239948: .word 0x00000DCC
    // _0223994C: .word gSystem
    // _02239950: .word 0x00000F0F
    // TODO: decompile
}




void ov70_02239954(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r0, #0
    // add r0, r4, #0
    // bl ov70_02241004
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // ldr r0, _02239978 ; =0x000011DC
    // mov r1, #0
    // strh r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02239978: .word 0x000011DC
    // TODO: decompile
}




void ov70_0223997C(void) {
    // ldr r1, _0223998C ; =0x000011DC
    // ldrh r1, [r0, r1]
    // cmp r1, #0
    // beq _02239988
    // mov r1, #9
    // str r1, [r0, #0x2c]
    // mov r0, #3
    // bx lr
    // _0223998C: .word 0x000011DC
    // TODO: decompile
}




void ov70_02239990(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(0, 0, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}




void ov70_022399D8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // mov r1, #0xa
    // str r0, [sp]
    // add r2, r1, #0
    // ldr r0, [r4, #4]
    // add r2, #0xf8
    // mov r3, #3
    // bl ov70_02238C14
    // ldr r1, _02239A08 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #0xd
    // str r0, [r4, #0x2c]
    // ldr r0, _02239A0C ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _02239A08: .word 0x000011C8
    // _02239A0C: .word 0x00000DCC
    // TODO: decompile
}




void ov70_02239A10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _02239A62
    // ldr r0, _02239A9C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _02239AA0 ; =0x00001158
    // mov r1, #1
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // ldr r0, _02239AA0 ; =0x00001158
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02239AA4 ; =0x00001198
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // mov r0, #6
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #7
    // str r0, [r4, #0x2c]
    // b _02239A98
    // cmp r0, #2
    // bne _02239A98
    // ldr r0, _02239A9C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _02239AA0 ; =0x00001158
    // mov r1, #1
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // ldr r0, _02239AA0 ; =0x00001158
    // add r0, r4, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _02239AA8 ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #5
    // str r0, [r4, #0x2c]
    // ldr r0, _02239AA8 ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // pop {r4, pc}
    // _02239A9C: .word 0x000011C8
    // _02239AA0: .word 0x00001158
    // _02239AA4: .word 0x00001198
    // _02239AA8: .word 0x00000DCC
    // TODO: decompile
}




void ov70_02239AAC(void) {
}




void ov70_02239ACC(void) {
    // ldr r0, [r4, r0]
    TextPrinterCheckActive((((0xbf << 4) << 0x18) >> 0x18));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
}




void ov70_02239B00(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r7, r0, #0
    // ldr r0, _02239B7C ; =0x00000F58
    // ldrh r1, [r7, #0x36]
    // add r4, r7, r0
    // mov r0, #0xc
    // ldr r2, _02239B80 ; =ov70_0224526C
    // mul r0, r1
    // mov r6, #0
    // add r5, r2, r0
    // mov r0, #0x78
    // str r0, [sp]
    // mov r0, #8
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xf
    // add r3, r2, #0
    // bl FillWindowPixelRect
    // mov r0, #0x78
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0
    // mov r3, #8
    // bl FillWindowPixelRect
    // mov r0, #0x78
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #0
    // mov r3, #0xa
    // bl FillWindowPixelRect
    // mov r0, #0
    // str r0, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r7, r1]
    // ldr r3, [r5]
    // add r0, r4, #0
    // mov r2, #4
    // bl ov70_02239C34
    // add r0, r4, #0
    // bl CopyWindowToVram
    // add r6, r6, #1
    // add r4, #0x10
    // add r5, r5, #4
    // cmp r6, #3
    // blt _02239B16
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02239B7C: .word 0x00000F58
    // _02239B80: .word ov70_0224526C
    // TODO: decompile
}




void ov70_02239B84(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // mov r2, #0xba
    // add r5, r0, #0
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, #0x1c
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // ldr r0, _02239BD4 ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _02239BD4 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _02239BD4 ; =0x00000F18
    // ldr r2, _02239BD8 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02239BD4: .word 0x00000F18
    // _02239BD8: .word 0x00000BBC
    // TODO: decompile
}




void ov70_02239BDC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // mov r2, #0xba
    // add r5, r0, #0
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, #0x1c
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // ldr r0, _02239C2C ; =0x00001158
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _02239C2C ; =0x00001158
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _02239C2C ; =0x00001158
    // ldr r2, _02239C30 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _02239C2C: .word 0x00001158
    // _02239C30: .word 0x00000BBC
    // TODO: decompile
}




void ov70_02239C34(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r3, #0
    // add r6, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // ldr r0, _02239C68 ; =0x000A0900
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // nop
    // _02239C68: .word 0x000A0900
    // TODO: decompile
}




void ov70_02239C6C(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x64, 5, 4, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x64, 0x11, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x64, 0x28, r4, 5);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(r4, 5, 0, 0);
    BgCommitTilemapBufferToVram(r4, 5);
    LoadFontPal1(4, 0x20, 0x3d);
}




void ov70_02239CF8(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x64, 0x12, *((u32*)(r0 + 4)), 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x64, 0x29, *((u32*)(r4 + 4)), 6);
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xf1 << 4), 1);
}




void ov70_02239D44(void) {
    // push {r4, r5, lr}
    // sub sp, #0x14
    // add r5, r0, #0
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x10
    // str r0, [sp, #4]
    // mov r2, #4
    // add r4, r1, #0
    // ldr r1, _02239D88 ; =0x00001198
    // str r2, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // str r0, [sp, #0x10]
    // ldr r0, [r5, #4]
    // add r1, r5, r1
    // mov r3, #0xd
    // bl AddWindowParameterized
    // ldr r0, _02239D88 ; =0x00001198
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r1, #0xba
    // ldr r0, _02239D88 ; =0x00001198
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov70_022450EC
    // add sp, #0x14
    // pop {r4, r5, pc}
    // _02239D88: .word 0x00001198
    // TODO: decompile
}




void ov70_02239D8C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_0223A1E4
    // ldr r0, [r4, #4]
    // bl ov70_02239EAC
    // add r0, r4, #0
    // bl ov70_02239FA4
    // add r0, r4, #0
    // bl ov70_0223A0D4
    // add r0, r4, #0
    // bl ov70_0223A06C
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Mon_GetBoxMon
    // str r0, [sp]
    // mov r0, #0x8a
    // lsl r0, r0, #2
    // mov r2, #0xba
    // add r0, r4, r0
    // lsl r2, r2, #4
    // str r0, [sp, #4]
    // add r1, r2, #4
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // ldr r3, _02239E58 ; =0x00001058
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // bl ov70_0223A578
    // ldr r1, _02239E5C ; =0x00001118
    // mov r2, #0x92
    // add r0, r4, r1
    // str r0, [sp]
    // mov r0, #0xba
    // lsl r0, r0, #4
    // mov r3, #0x4f
    // sub r1, #0x50
    // lsl r2, r2, #2
    // lsl r3, r3, #2
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // add r2, r4, r2
    // add r3, r4, r3
    // bl ov70_0223A72C
    // ldr r1, _02239E60 ; =0x0000022F
    // mov r2, #0
    // ldrsb r0, [r4, r1]
    // add r1, r1, #1
    // ldrsb r1, [r4, r1]
    // bl ov70_0223F864
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldrsh r2, [r4, r1]
    // ldr r3, _02239E64 ; =0x000010E8
    // add r1, r1, #2
    // str r2, [sp]
    // ldrsb r1, [r4, r1]
    // mov r2, #0xba
    // lsl r2, r2, #4
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r2, #4
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // bl ov70_0223F470
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_0223A7E4
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02239E58: .word 0x00001058
    // _02239E5C: .word 0x00001118
    // _02239E60: .word 0x0000022F
    // _02239E64: .word 0x000010E8
    // TODO: decompile
}




void ov70_02239E68(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x2c]
    // lsl r2, r1, #2
    // ldr r1, _02239E78 ; =ov70_022464A8
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r3, pc}
    // nop
    // _02239E78: .word ov70_022464A8
    // TODO: decompile
}




void ov70_02239E7C(void) {
    ov70_0223A0C4();
    ov70_0223A224(r4);
    ov70_0223A1A0(r4);
    ov70_02239F78(*((u32*)(r4 + 4)));
    // ldr r0, [r4, r0]
    Sprite_SetDrawFlag((0xf1 << 4), 0);
    ov70_02238E58(r4);
}




void ov70_02239EAC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x70
    // ldr r5, _02239F68 ; =ov70_0224539C
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02239F6C ; =ov70_02245380
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _02239F70 ; =ov70_02245364
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _02239F74 ; =ov70_02245348
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_022391F0
    // add sp, #0x70
    // pop {r3, r4, r5, pc}
    // _02239F68: .word ov70_0224539C
    // _02239F6C: .word ov70_02245380
    // _02239F70: .word ov70_02245364
    // _02239F74: .word ov70_02245348
    // TODO: decompile
}




void ov70_02239F78(void) {
}




void ov70_02239FA4(void) {
    NARC_New(0x64, 0x3d);
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(8, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 5, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r6) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r5, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r5, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0x14, r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x1c, r5, 1);
    LoadFontPal1(4, 0x20, 0x3d);
    ov70_02239CF8(r6);
    NARC_Delete(r4);
}




void ov70_0223A06C(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    ov70_02238B54(r0, (0xd6 << 4), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((0x3a << 0xc));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    Sprite_SetAnimActiveFlag(1);
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0xee << 4), 0x25);
    // ldr r0, [r4, r0]
    Sprite_SetPriority((0xee << 4), 1);
    sub_0203A880();
}




void ov70_0223A0C4(void) {
    // mov r1, #0xee
    // lsl r1, r1, #4
    // ldr r3, _0223A0D0 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0223A0D0: .word Sprite_Delete
    // TODO: decompile
}




void ov70_0223A0D4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // add r7, r0, #0
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // ldr r1, _0223A190 ; =0x00000F18
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r7, r1
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r0, _0223A190 ; =0x00000F18
    // mov r1, #0
    // add r0, r7, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0xf
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x5e
    // ldr r1, _0223A194 ; =0x00000F58
    // str r0, [sp, #0x10]
    // ldr r0, [r7, #4]
    // add r1, r7, r1
    // mov r2, #0
    // mov r3, #0x15
    // bl AddWindowParameterized
    // mov r0, #0
    // str r0, [sp, #0x14]
    // ldr r0, _0223A198 ; =0x00001058
    // ldr r4, _0223A19C ; =ov70_022453B8
    // mov r6, #0x86
    // add r5, r7, r0
    // ldr r0, [r4, #4]
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // mov r2, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r3, [r4]
    // ldr r0, [r7, #4]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add r4, #0x10
    // mul r0, r1
    // add r6, r6, r0
    // ldr r0, [sp, #0x14]
    // add r5, #0x10
    // add r0, r0, #1
    // str r0, [sp, #0x14]
    // cmp r0, #0xe
    // blt _0223A132
    // add r0, r7, #0
    // mov r1, #2
    // bl ov70_02239D44
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223A190: .word 0x00000F18
    // _0223A194: .word 0x00000F58
    // _0223A198: .word 0x00001058
    // _0223A19C: .word ov70_022453B8
    // TODO: decompile
}




void ov70_0223A1A0(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0223A1D4 ; =0x00001198
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223A1D8 ; =0x00000F18
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223A1DC ; =0x00000F58
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223A1E0 ; =0x00001058
    // mov r4, #0
    // add r5, r5, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0xe
    // blt _0223A1C2
    // pop {r3, r4, r5, pc}
    // nop
    // _0223A1D4: .word 0x00001198
    // _0223A1D8: .word 0x00000F18
    // _0223A1DC: .word 0x00000F58
    // _0223A1E0: .word 0x00001058
    // TODO: decompile
}




void ov70_0223A1E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223A220 ; =0x00000BBC
    // str r0, [r5, r1]
    // sub r1, #0x1c
    // ldr r0, [r5, r1]
    // mov r1, #0x27
    // bl NewString_ReadMsgData
    // mov r1, #0x2f
    // lsl r1, r1, #6
    // str r0, [r5, r1]
    // mov r4, #0
    // mov r7, #0x14
    // add r6, r1, #4
    // add r0, r7, #0
    // mov r1, #0x3d
    // bl String_New
    // str r0, [r5, r6]
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0xa
    // blt _0223A20A
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223A220: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223A224(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // ldr r6, _0223A250 ; =0x00000BC4
    // mov r4, #0
    // add r5, r7, #0
    // ldr r0, [r5, r6]
    // bl String_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #0xa
    // blt _0223A22E
    // ldr r0, _0223A254 ; =0x00000BBC
    // ldr r0, [r7, r0]
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // ldr r0, [r7, r0]
    // bl String_Delete
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223A250: .word 0x00000BC4
    // _0223A254: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223A258(void) {
}




void ov70_0223A260(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _0223A2C0 ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // add r3, r2, #0
    // tst r3, r1
    // bne _0223A27A
    // ldr r3, _0223A2C4 ; =gSystem + 0x40
    // ldrh r3, [r3, #0x24]
    // cmp r3, #0
    // beq _0223A2A4
    // ldr r0, _0223A2C8 ; =0x00000F0F
    // mov r1, #5
    // str r0, [sp]
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223A4F4
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #7
    // bl ov70_02238D84
    // ldr r0, _0223A2CC ; =0x000005DC
    // bl PlaySE
    // b _0223A2B8
    // mov r3, #2
    // tst r2, r3
    // beq _0223A2B8
    // mov r2, #0
    // str r3, [r4, #0x2c]
    // bl ov70_02238E50
    // ldr r0, _0223A2CC ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0223A2C0: .word gSystem
    // _0223A2C4: .word gSystem + 0x40
    // _0223A2C8: .word 0x00000F0F
    // _0223A2CC: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223A2D0(void) {
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 0, 0, 0);
    *((u32*)(r4 + 0x2c)) = 0;
}




void ov70_0223A2F8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r2, _0223A31C ; =0x0000016A
    // mov r1, #0xc
    // mov r3, #8
    // bl ov70_02238C14
    // ldr r1, _0223A320 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #6
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223A31C: .word 0x0000016A
    // _0223A320: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223A324(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223A354
    // ldr r0, _0223A378 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223A37C ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #8
    // bl ov70_02238E50
    // add r0, r4, #0
    // bl ov70_0223A874
    // b _0223A372
    // cmp r0, #2
    // bne _0223A372
    // ldr r0, _0223A378 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _0223A380 ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // str r1, [r4, #0x2c]
    // bl ClearFrameAndWindow2
    // add r0, r4, #0
    // bl ov70_0223A874
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223A378: .word 0x000011C8
    // _0223A37C: .word 0x000011FC
    // _0223A380: .word 0x00000F18
    // TODO: decompile
}




void ov70_0223A384(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #2
    // mov r1, #0x3d
    // bl ListMenuItems_New
    // ldr r1, _0223A3D4 ; =0x000011AC
    // mov r2, #0x37
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ListMenuItems_AppendFromMsgData
    // ldr r0, _0223A3D4 ; =0x000011AC
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x38
    // mov r3, #2
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #0
    // mov r1, #2
    // mov r2, #0xd
    // bl ov70_02238CAC
    // ldr r1, _0223A3D8 ; =0x000011D0
    // str r0, [r4, r1]
    // mov r0, #1
    // bl ov70_02238FB4
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223A3D4: .word 0x000011AC
    // _0223A3D8: .word 0x000011D0
    // TODO: decompile
}




void ov70_0223A3DC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0223A494 ; =0x000011D0
    // ldr r0, [r5, r0]
    // bl TouchscreenListMenu_HandleInput
    // cmp r0, #1
    // bne _0223A45E
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223A498 ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r4, r5, r0
    // add r0, r4, #0
    // bl ov70_0223E76C
    // cmp r0, #0
    // beq _0223A43A
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _0223A43A
    // ldr r0, _0223A49C ; =0x00000F0F
    // mov r1, #0x24
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0
    // str r4, [sp, #4]
    // bl ov70_0223A4F4
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #1
    // bl ov70_02238D84
    // add sp, #8
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223A49C ; =0x00000F0F
    // mov r1, #6
    // str r0, [sp]
    // add r0, r5, #0
    // mov r2, #1
    // mov r3, #0
    // str r4, [sp, #4]
    // bl ov70_0223A4F4
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #5
    // bl ov70_02238D84
    // add r0, r5, #0
    // bl ov70_0223A874
    // b _0223A48C
    // cmp r0, #2
    // beq _0223A46A
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223A48C
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223A498 ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // add r0, r5, #0
    // bl ov70_0223A874
    // mov r0, #3
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223A494: .word 0x000011D0
    // _0223A498: .word 0x000011AC
    // _0223A49C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223A4A0(void) {
}




void ov70_0223A4C0(void) {
    // ldr r0, [r4, r0]
    TextPrinterCheckActive((((0xbf << 4) << 0x18) >> 0x18));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
}




void ov70_0223A4F4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, [sp, #0x24]
    // add r6, r1, #0
    // add r4, r2, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _0223A56C ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl BufferBoxMonSpeciesName
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r1, r6, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r1, _0223A56C ; =0x00000B9C
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, #0x20
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // ldr r0, _0223A570 ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223A570 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _0223A570 ; =0x00000F18
    // ldr r2, _0223A574 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0223A56C: .word 0x00000B9C
    // _0223A570: .word 0x00000F18
    // _0223A574: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223A578(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // add r5, r0, #0
    // str r1, [sp, #8]
    // mov r0, #0x16
    // mov r1, #0x3d
    // add r7, r2, #0
    // add r6, r3, #0
    // ldr r4, [sp, #0x54]
    // bl String_New
    // str r0, [sp, #0x1c]
    // mov r0, #0x12
    // mov r1, #0x3d
    // bl String_New
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x50]
    // ldr r2, [sp, #0x1c]
    // mov r1, #0x77
    // bl GetBoxMonData
    // mov r2, #0
    // ldrsh r0, [r4, r2]
    // mov r1, #6
    // str r0, [sp, #0x10]
    // mov r0, #2
    // ldrsb r0, [r4, r0]
    // str r0, [sp, #0x14]
    // mov r0, #3
    // ldrsb r4, [r4, r0]
    // ldr r0, [sp, #0x50]
    // bl GetBoxMonData
    // str r0, [sp, #0x38]
    // add r0, r5, #0
    // mov r1, #0x49
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x14]
    // ldr r2, _0223A71C ; =ov70_02245910
    // lsl r0, r0, #2
    // str r0, [sp, #0xc]
    // ldr r1, [sp, #0xc]
    // add r0, r5, #0
    // ldr r1, [r2, r1]
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x30]
    // add r0, r5, #0
    // mov r1, #0x6a
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x2c]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // mov r1, #3
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r2, r4, #0
    // add r3, r1, #0
    // bl BufferIntegerAsString
    // add r0, r7, #0
    // add r1, r5, #0
    // mov r2, #0x6b
    // mov r3, #0x3d
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x28]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x10]
    // bl NewString_ReadMsgData
    // ldr r1, [sp, #0x38]
    // str r0, [sp, #0x34]
    // lsl r1, r1, #0x10
    // ldr r0, [sp, #0x18]
    // lsr r1, r1, #0x10
    // mov r2, #0x3d
    // bl GetItemNameIntoString
    // add r0, r5, #0
    // mov r1, #0x3b
    // bl NewString_ReadMsgData
    // mov r4, #0
    // str r0, [sp, #0x20]
    // add r5, r6, #0
    // add r7, r4, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #6
    // blt _0223A630
    // mov r2, #0
    // ldr r0, _0223A720 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x1c]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // ldr r0, [sp, #0x14]
    // cmp r0, #3
    // beq _0223A66E
    // mov r3, #0
    // ldr r1, _0223A724 ; =ov70_0224649C
    // ldr r0, [sp, #0xc]
    // str r3, [sp]
    // ldr r0, [r1, r0]
    // ldr r1, [sp, #0x30]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // mov r2, #0x40
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A720 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x34]
    // add r0, #0x10
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A720 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x2c]
    // add r0, #0x20
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A720 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x28]
    // add r0, #0x30
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A728 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x24]
    // add r0, #0x40
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A720 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x18]
    // add r0, #0x50
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A728 ; =0x000F0200
    // str r2, [sp]
    // add r6, #0x60
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // ldr r0, [sp, #0x24]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x2c]
    // bl String_Delete
    // ldr r0, [sp, #0x28]
    // bl String_Delete
    // ldr r0, [sp, #0x30]
    // bl String_Delete
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x34]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223A71C: .word ov70_02245910
    // _0223A720: .word 0x00010200
    // _0223A724: .word ov70_0224649C
    // _0223A728: .word 0x000F0200
    // TODO: decompile
}




void ov70_0223A72C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // add r7, r0, #0
    // add r5, r1, #0
    // mov r0, #0x10
    // mov r1, #0x3d
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // bl String_New
    // add r4, r0, #0
    // mov r0, #0x10
    // mov r1, #0x3d
    // bl String_New
    // add r6, r0, #0
    // add r0, r7, #0
    // mov r1, #0x31
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x10]
    // ldr r1, [sp, #8]
    // add r0, r4, #0
    // bl CopyU16ArrayToString
    // add r0, r7, #0
    // mov r1, #0xb4
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [sp, #0xc]
    // mov r1, #0x91
    // add r2, r6, #0
    // bl GetMonData
    // mov r2, #0
    // ldr r0, _0223A7DC ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x10]
    // add r0, r5, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A7E0 ; =0x00010200
    // str r2, [sp]
    // add r5, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A7DC ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r1, r7, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223A7E0 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x28]
    // add r1, r6, #0
    // add r0, #0x10
    // add r3, r2, #0
    // bl ov70_02245084
    // ldr r0, [sp, #0x10]
    // bl String_Delete
    // add r0, r4, #0
    // bl String_Delete
    // add r0, r7, #0
    // bl String_Delete
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223A7DC: .word 0x000F0200
    // _0223A7E0: .word 0x00010200
    // TODO: decompile
}




void ov70_0223A7E4(void) {
    Heap_Alloc(0x3d, (0x32 << 6));
    // add r0, sp, #0x20
    GetPokemonSpriteCharAndPlttNarcIds(r5, 2);
    GetMonData(r5, 0, 0);
    GetMonData(r5, 5, 0);
    // str r3, [sp]
    // str r1, [sp, #4]
    // str r1, [sp, #8]
    // str r4, [sp, #0xc]
    // str r6, [sp, #0x10]
    // str r3, [sp, #0x14]
    // str r1, [sp, #0x18]
    // str r0, [sp, #0x1c]
    // add r1, sp, #0x20
    // ldrh r0, [r1]
    sub_02014494(*((u16*)(2 + 2)), 0x3d, 0);
    DC_FlushRange(r4, (0x32 << 6));
    GX_LoadOBJ(r4, (0x4a << 8), (0x32 << 6));
    // str r0, [sp]
    // str r0, [sp, #4]
    // add r1, sp, #0x20
    // ldrh r0, [r1]
    GfGfxLoader_GXLoadPal(0x3d, *((u16*)(r1 + 4)), 1, (0x1a << 4));
    Heap_Free(r4);
}




void ov70_0223A874(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // ldr r1, _0223A8B4 ; =0x0000022F
    // add r4, r0, #0
    // ldrsb r0, [r4, r1]
    // add r1, r1, #1
    // ldrsb r1, [r4, r1]
    // mov r2, #0
    // bl ov70_0223F864
    // mov r1, #0x8b
    // lsl r1, r1, #2
    // ldrsh r2, [r4, r1]
    // add r1, r1, #2
    // ldr r3, _0223A8B8 ; =0x000010E8
    // str r2, [sp]
    // ldrsb r1, [r4, r1]
    // mov r2, #0xba
    // lsl r2, r2, #4
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r1, r2, #4
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // bl ov70_0223F470
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223A8B4: .word 0x0000022F
    // _0223A8B8: .word 0x000010E8
    // TODO: decompile
}




void ov70_0223A8BC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_0223AE98
    // ldr r1, _0223AA60 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r2, [r4, r1]
    // mov r1, #0x1f
    // mvn r1, r1
    // sub r1, r1, r2
    // bl ov70_0223AB3C
    // add r0, r4, #0
    // bl ov70_0223ABF4
    // add r0, r4, #0
    // bl ov70_0223ACF4
    // add r0, r4, #0
    // bl ov70_0223AC98
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // add r5, r1, #0
    // mul r5, r0
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r0, r4, r0
    // add r0, r0, r5
    // bl Mon_GetBoxMon
    // str r0, [sp]
    // mov r0, #0xd3
    // lsl r0, r0, #2
    // add r0, r4, r0
    // mov r2, #0xba
    // add r0, r0, r5
    // lsl r2, r2, #4
    // str r0, [sp, #4]
    // add r1, r2, #4
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // ldr r3, _0223AA64 ; =0x00001058
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // bl ov70_0223A578
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // mov r2, #0xdb
    // add r3, r1, #0
    // sub r0, #8
    // mov r5, #0x26
    // lsl r2, r2, #2
    // lsl r5, r5, #4
    // ldr r1, _0223AA68 ; =0x00001118
    // mul r3, r0
    // add r0, r4, r1
    // str r0, [sp]
    // mov r0, #0xba
    // lsl r0, r0, #4
    // sub r1, #0x50
    // add r2, r4, r2
    // ldr r0, [r4, r0]
    // add r5, r4, r5
    // add r2, r2, r3
    // add r1, r4, r1
    // add r3, r5, r3
    // bl ov70_0223A72C
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r2, r4, r0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // mul r0, r1
    // add r0, r2, r0
    // bl ov70_0223A7E4
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223AA6C ; =0x00001138
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x4d
    // bl ov70_0223B3BC
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223AA70 ; =0x000010E8
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x51
    // bl ov70_0223B3BC
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223AA74 ; =0x00000F58
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x58
    // bl ov70_0223B3EC
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223AA78 ; =0x00000F68
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x6d
    // bl ov70_0223B3EC
    // add r0, r4, #0
    // bl ov70_0223B258
    // ldr r2, _0223AA60 ; =0x00000F14
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // ldr r2, [r4, r2]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // neg r2, r2
    // bl ov70_02241330
    // ldr r1, _0223AA7C ; =ov70_0223B4D4
    // ldr r0, _0223AA80 ; =0x00001208
    // ldr r2, _0223AA84 ; =0x04000304
    // str r1, [r4, r0]
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0x11
    // bne _0223AA54
    // ldr r0, _0223AA88 ; =0x0400006C
    // bl GXx_GetMasterBrightness_
    // mov r1, #0xf
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223AA0A
    // ldr r0, _0223AA8C ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // mov r1, #0xf
    // mvn r1, r1
    // cmp r0, r1
    // beq _0223AA0A
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // b _0223AA54
    // ldr r0, _0223AA88 ; =0x0400006C
    // bl GXx_GetMasterBrightness_
    // mov r1, #0xf
    // mvn r1, r1
    // cmp r0, r1
    // beq _0223AA3E
    // ldr r0, _0223AA8C ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // mov r1, #0xf
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223AA3E
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #4
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // b _0223AA54
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223AA60: .word 0x00000F14
    // _0223AA64: .word 0x00001058
    // _0223AA68: .word 0x00001118
    // _0223AA6C: .word 0x00001138
    // _0223AA70: .word 0x000010E8
    // _0223AA74: .word 0x00000F58
    // _0223AA78: .word 0x00000F68
    // _0223AA7C: .word ov70_0223B4D4
    // _0223AA80: .word 0x00001208
    // _0223AA84: .word 0x04000304
    // _0223AA88: .word 0x0400006C
    // _0223AA8C: .word 0x0400106C
    // TODO: decompile
}




void ov70_0223AA90(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r6, r0, #0
    // ldr r1, [r6, #0x2c]
    // lsl r2, r1, #2
    // ldr r1, _0223AAEC ; =ov70_022464CC
    // ldr r1, [r1, r2]
    // blx r1
    // ldr r7, _0223AAF0 ; =0x0000120E
    // str r0, [sp]
    // mov r4, #0
    // add r5, r6, #0
    // ldr r2, _0223AAF4 ; =0x00000F14
    // ldr r1, _0223AAF8 ; =0x0000120C
    // ldr r3, [r6, r2]
    // ldrsh r2, [r5, r7]
    // ldr r0, _0223AAFC ; =0x00000EE4
    // ldrsh r1, [r5, r1]
    // add r2, r3, r2
    // ldr r0, [r5, r0]
    // add r2, #0x20
    // bl ov70_02238F9C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #8
    // blt _0223AAA6
    // mov r2, #0xee
    // lsl r2, r2, #4
    // ldr r0, [r6, r2]
    // add r2, #0x34
    // ldr r3, [r6, r2]
    // mov r2, #0x3a
    // mov r1, #0xd0
    // sub r2, r2, r3
    // bl ov70_02238F9C
    // mov r1, #0x4b
    // ldr r2, _0223AAF4 ; =0x00000F14
    // lsl r1, r1, #2
    // ldr r1, [r6, r1]
    // ldr r2, [r6, r2]
    // add r0, r6, #0
    // bl ov70_02241330
    // ldr r0, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223AAEC: .word ov70_022464CC
    // _0223AAF0: .word 0x0000120E
    // _0223AAF4: .word 0x00000F14
    // _0223AAF8: .word 0x0000120C
    // _0223AAFC: .word 0x00000EE4
    // TODO: decompile
}




void ov70_0223AB00(void) {
    // push {r4, lr}
    // ldr r1, _0223AB38 ; =0x00001208
    // add r4, r0, #0
    // mov r2, #0
    // str r2, [r4, r1]
    // bl ov70_0223ACE4
    // add r0, r4, #0
    // bl ov70_0223AF30
    // add r0, r4, #0
    // bl ov70_0223AE40
    // ldr r0, [r4, #4]
    // bl ov70_0223ABD8
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223AB38: .word 0x00001208
    // TODO: decompile
}




void ov70_0223AB3C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x38
    // ldr r6, _0223ABCC ; =ov70_022454D0
    // add r3, sp, #0x1c
    // add r5, r0, #0
    // add r4, r1, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r5, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r5, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r6, _0223ABD0 ; =ov70_022454B4
    // add r3, sp, #0
    // ldmia r6!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r6!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r6]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r5, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // ldr r0, _0223ABD4 ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // cmp r0, #0
    // bne _0223ABAE
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // bl ov70_022391F0
    // b _0223ABB8
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov70_022391F0
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add sp, #0x38
    // pop {r4, r5, r6, pc}
    // _0223ABCC: .word ov70_022454D0
    // _0223ABD0: .word ov70_022454B4
    // _0223ABD4: .word 0x0400106C
    // TODO: decompile
}




void ov70_0223ABD8(void) {
}




void ov70_0223ABF4(void) {
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 4, 1, 2);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x64, 0x14, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x64, 8, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x64, 0x12, r4, 6);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x64, 0x2a, r4, 6);
    LoadFontPal1(4, 0x20, 0x3d);
}




void ov70_0223AC98(void) {
    // add r0, sp, #0
    // add r2, r4, r2
    ov70_02238B54(r0, (0xd6 << 4), 1);
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    Sprite_CreateAffine((0x3a << 0xc));
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    Sprite_SetAnimActiveFlag(1);
    // ldr r0, [r4, r0]
    Sprite_SetAnimCtrlSeq((0xee << 4), 0x25);
    sub_0203A880();
}




void ov70_0223ACE4(void) {
    // mov r1, #0xee
    // lsl r1, r1, #4
    // ldr r3, _0223ACF0 ; =Sprite_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // nop
    // _0223ACF0: .word Sprite_Delete
    // TODO: decompile
}




void ov70_0223ACF4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // add r6, r0, #0
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r2, #4
    // ldr r1, _0223AE2C ; =0x00000F18
    // str r2, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #4]
    // add r1, r6, r1
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _0223AE2C ; =0x00000F18
    // mov r1, #0
    // add r0, r6, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0xd
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r3, #1
    // ldr r1, _0223AE30 ; =0x00000F58
    // str r3, [sp, #0xc]
    // mov r0, #0x94
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #4]
    // add r1, r6, r1
    // mov r2, #4
    // bl AddWindowParameterized
    // ldr r0, _0223AE30 ; =0x00000F58
    // mov r1, #0
    // add r0, r6, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0xd
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0xae
    // ldr r1, _0223AE34 ; =0x00000F68
    // str r0, [sp, #0x10]
    // ldr r0, [r6, #4]
    // add r1, r6, r1
    // mov r2, #4
    // mov r3, #0x11
    // bl AddWindowParameterized
    // ldr r0, _0223AE34 ; =0x00000F68
    // mov r1, #0
    // add r0, r6, r0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x18]
    // ldr r0, _0223AE38 ; =0x00001058
    // ldr r4, _0223AE3C ; =ov70_022454EC
    // mov r7, #0xc8
    // add r5, r6, r0
    // ldr r2, [r4, #0x10]
    // ldr r0, [r4, #4]
    // cmp r2, #0
    // bne _0223ADD6
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // lsl r2, r2, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x14]
    // lsr r2, r2, #0x18
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r3, [r4]
    // ldr r0, [r6, #4]
    // lsl r3, r3, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0xc]
    // add r2, r1, #0
    // mul r2, r0
    // ldr r0, [sp, #0x14]
    // add r0, r0, r2
    // str r0, [sp, #0x14]
    // b _0223AE10
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // ldr r0, [r4, #8]
    // lsl r2, r2, #0x18
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #4]
    // ldr r0, [r4, #0xc]
    // add r1, r5, #0
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r3, [r4]
    // ldr r0, [r6, #4]
    // lsl r3, r3, #0x18
    // lsr r2, r2, #0x18
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r1, [r4, #8]
    // ldr r0, [r4, #0xc]
    // mul r0, r1
    // add r7, r7, r0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x18]
    // add r4, #0x14
    // add r0, r0, #1
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // cmp r0, #0x10
    // blt _0223AD8A
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223AE2C: .word 0x00000F18
    // _0223AE30: .word 0x00000F58
    // _0223AE34: .word 0x00000F68
    // _0223AE38: .word 0x00001058
    // _0223AE3C: .word ov70_022454EC
    // TODO: decompile
}




void ov70_0223AE40(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _0223AE88 ; =0x00000F18
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223AE8C ; =0x00000F68
    // add r0, r5, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0223AE90 ; =0x00000F58
    // add r0, r5, r0
    // bl ClearWindowTilemapAndCopyToVram
    // ldr r0, _0223AE8C ; =0x00000F68
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223AE90 ; =0x00000F58
    // add r0, r5, r0
    // bl RemoveWindow
    // ldr r0, _0223AE94 ; =0x00001058
    // mov r4, #0
    // add r5, r5, r0
    // add r0, r5, #0
    // bl ClearWindowTilemapAndCopyToVram
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #0x10
    // blt _0223AE72
    // pop {r3, r4, r5, pc}
    // _0223AE88: .word 0x00000F18
    // _0223AE8C: .word 0x00000F68
    // _0223AE90: .word 0x00000F58
    // _0223AE94: .word 0x00001058
    // TODO: decompile
}




void ov70_0223AE98(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r2, r5, r0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r5, r0]
    // sub r0, #8
    // mul r0, r1
    // add r4, r2, r0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223AF18 ; =0x00000BBC
    // str r0, [r5, r1]
    // sub r1, #0x20
    // ldr r0, [r5, r1]
    // bl MessageFormat_ResetBuffers
    // ldr r0, _0223AF1C ; =0x0000011E
    // ldrb r2, [r4, r0]
    // cmp r2, #0
    // beq _0223AED4
    // ldr r0, _0223AF20 ; =0x00000B9C
    // mov r1, #8
    // ldr r0, [r5, r0]
    // bl BufferCountryName
    // ldr r2, _0223AF24 ; =0x0000011F
    // ldrb r3, [r4, r2]
    // cmp r3, #0
    // beq _0223AEEA
    // ldr r0, _0223AF20 ; =0x00000B9C
    // sub r2, r2, #1
    // ldrb r2, [r4, r2]
    // ldr r0, [r5, r0]
    // mov r1, #9
    // bl BufferCityName
    // ldr r1, _0223AF20 ; =0x00000B9C
    // mov r2, #0x52
    // ldr r0, [r5, r1]
    // add r1, r1, #4
    // ldr r1, [r5, r1]
    // mov r3, #0x3d
    // bl ReadMsgData_ExpandPlaceholders
    // ldr r1, _0223AF28 ; =0x00000BC4
    // mov r2, #0x53
    // str r0, [r5, r1]
    // add r0, r1, #0
    // sub r0, #0x28
    // sub r1, #0x24
    // ldr r0, [r5, r0]
    // ldr r1, [r5, r1]
    // mov r3, #0x3d
    // bl ReadMsgData_ExpandPlaceholders
    // ldr r1, _0223AF2C ; =0x00000BC8
    // str r0, [r5, r1]
    // pop {r3, r4, r5, pc}
    // nop
    // _0223AF18: .word 0x00000BBC
    // _0223AF1C: .word 0x0000011E
    // _0223AF20: .word 0x00000B9C
    // _0223AF24: .word 0x0000011F
    // _0223AF28: .word 0x00000BC4
    // _0223AF2C: .word 0x00000BC8
    // TODO: decompile
}




void ov70_0223AF30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223AF50 ; =0x00000BC4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _0223AF54 ; =0x00000BC8
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _0223AF58 ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _0223AF50: .word 0x00000BC4
    // _0223AF54: .word 0x00000BC8
    // _0223AF58: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223AF5C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x24]
    // cmp r0, #0x10
    // bne _0223AF90
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #7
    // str r0, [r4, #0x2c]
    // b _0223AF9C
    // mov r1, #1
    // ldr r0, _0223AFA4 ; =0x00000F0C
    // str r1, [r4, #0x2c]
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223AFA4: .word 0x00000F0C
    // TODO: decompile
}




void ov70_0223AFA8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // add r4, r1, #0
    // cmp r4, r0
    // beq _0223AFF2
    // cmp r4, #0
    // blt _0223AFF2
    // add r0, r4, #1
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0223AFF4 ; =0x00000EE4
    // ldr r0, [r1, r0]
    // lsl r1, r4, #2
    // add r1, #0x10
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0x11
    // bl ov70_02238E50
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov70_02241330
    // ldr r0, _0223AFF8 ; =0x000005DC
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // _0223AFF4: .word 0x00000EE4
    // _0223AFF8: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223AFFC(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // ldr r1, _0223B114 ; =gSystem
    // mov r2, #1
    // ldr r1, [r1, #0x48]
    // add r4, r0, #0
    // add r3, r1, #0
    // tst r3, r2
    // beq _0223B02C
    // ldr r1, _0223B118 ; =0x00000F0F
    // mov r3, #0
    // str r1, [sp]
    // mov r1, #0x10
    // bl ov70_0223B364
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #4
    // bl ov70_02238D84
    // ldr r0, _0223B11C ; =0x000005DC
    // bl PlaySE
    // b _0223B10C
    // mov r3, #2
    // tst r3, r1
    // beq _0223B054
    // mov r0, #0x10
    // str r0, [sp]
    // str r2, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // ldr r0, _0223B11C ; =0x000005DC
    // bl PlaySE
    // b _0223B10C
    // mov r2, #0x20
    // tst r2, r1
    // beq _0223B07A
    // mov r2, #0x4b
    // lsl r2, r2, #2
    // ldr r5, [r4, r2]
    // ldr r1, _0223B120 ; =ov70_022454A4
    // lsl r3, r5, #1
    // ldrb r1, [r1, r3]
    // cmp r5, r1
    // beq _0223B10C
    // sub r2, r2, #4
    // ldr r3, [r4, r2]
    // add r2, r1, #1
    // cmp r3, r2
    // blt _0223B10C
    // bl ov70_0223AFA8
    // b _0223B10C
    // mov r2, #0x10
    // tst r1, r2
    // beq _0223B0A0
    // mov r2, #0x4b
    // lsl r2, r2, #2
    // ldr r5, [r4, r2]
    // ldr r1, _0223B124 ; =ov70_022454A5
    // lsl r3, r5, #1
    // ldrb r1, [r1, r3]
    // cmp r5, r1
    // beq _0223B10C
    // sub r2, r2, #4
    // ldr r3, [r4, r2]
    // add r2, r1, #1
    // cmp r3, r2
    // blt _0223B10C
    // bl ov70_0223AFA8
    // b _0223B10C
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // bl ov70_02241164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _0223B0BA
    // add r0, r4, #0
    // bl ov70_0223AFA8
    // ldr r0, _0223B128 ; =ov70_02245498
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // cmp r0, #0
    // bne _0223B0E6
    // ldr r0, _0223B118 ; =0x00000F0F
    // mov r1, #0x10
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223B364
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #4
    // bl ov70_02238D84
    // ldr r0, _0223B11C ; =0x000005DC
    // bl PlaySE
    // b _0223B10C
    // cmp r0, #1
    // bne _0223B10C
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // ldr r0, _0223B11C ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223B114: .word gSystem
    // _0223B118: .word 0x00000F0F
    // _0223B11C: .word 0x000005DC
    // _0223B120: .word ov70_022454A4
    // _0223B124: .word ov70_022454A5
    // _0223B128: .word ov70_02245498
    // TODO: decompile
}




void ov70_0223B12C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223B184 ; =0x00000F0C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xf
    // beq _0223B178
    // cmp r0, #6
    // bne _0223B160
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _0223B178
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223B184: .word 0x00000F0C
    // TODO: decompile
}




void ov70_0223B188(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #4
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, [r4, #4]
    // ldr r2, _0223B1B0 ; =0x0000012E
    // mov r1, #0xa
    // mov r3, #3
    // bl ov70_02238C2C
    // ldr r1, _0223B1B4 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #5
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // _0223B1B0: .word 0x0000012E
    // _0223B1B4: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223B1B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223B202
    // ldr r0, _0223B240 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #6
    // bl ov70_02238E50
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223B244 ; =0x00001138
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x4d
    // bl ov70_0223B3BC
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223B248 ; =0x000010E8
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x51
    // bl ov70_0223B3BC
    // add r0, r4, #0
    // bl ov70_0223B258
    // b _0223B23C
    // cmp r0, #2
    // bne _0223B23C
    // ldr r0, _0223B240 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _0223B24C ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223B250 ; =0x00000F58
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x58
    // bl ov70_0223B3EC
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r1, _0223B254 ; =0x00000F68
    // ldr r0, [r4, r0]
    // add r1, r4, r1
    // mov r2, #0x6d
    // bl ov70_0223B3EC
    // mov r0, #3
    // pop {r4, pc}
    // _0223B240: .word 0x000011C8
    // _0223B244: .word 0x00001138
    // _0223B248: .word 0x000010E8
    // _0223B24C: .word 0x00000F18
    // _0223B250: .word 0x00000F58
    // _0223B254: .word 0x00000F68
    // TODO: decompile
}




void ov70_0223B258(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x10
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #6
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // mov r3, #1
    // str r3, [sp, #8]
    // mov r0, #0x3d
    // str r0, [sp, #0xc]
    // ldr r2, [r4, #4]
    // mov r0, #0x64
    // mov r1, #0x24
    // bl GfGfxLoader_LoadScrnData
    // ldr r2, _0223B2B4 ; =0x00000BC4
    // ldr r0, _0223B2B8 ; =0x000010F8
    // ldr r1, [r4, r2]
    // add r2, r2, #4
    // ldr r2, [r4, r2]
    // add r0, r4, r0
    // bl ov70_0223B484
    // mov r2, #0xba
    // ldr r0, _0223B2BC ; =0x00001148
    // lsl r2, r2, #4
    // mov r3, #0x35
    // mov r5, #0x4b
    // ldr r1, [r4, r2]
    // add r2, r2, #4
    // lsl r3, r3, #4
    // lsl r5, r5, #2
    // add r0, r4, r0
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // ldr r4, [r4, r5]
    // sub r5, #8
    // mul r5, r4
    // add r3, r3, r5
    // bl ov70_0223B41C
    // add sp, #0x10
    // pop {r3, r4, r5, pc}
    // nop
    // _0223B2B4: .word 0x00000BC4
    // _0223B2B8: .word 0x000010F8
    // _0223B2BC: .word 0x00001148
    // TODO: decompile
}




void ov70_0223B2C0(void) {
}




void ov70_0223B2D0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223B2FC ; =0x00000F14
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223B2F6
    // ldr r0, _0223B2FC ; =0x00000F14
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r1, #1
    // str r1, [r4, #0x2c]
    // sub r0, #8
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223B2FC: .word 0x00000F14
    // TODO: decompile
}




void ov70_0223B300(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223B338 ; =0x00000F14
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223B332
    // ldr r2, _0223B33C ; =0x04000304
    // ldr r0, _0223B340 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #0xf
    // bl ov70_02238E50
    // ldr r0, _0223B338 ; =0x00000F14
    // mov r1, #0x10
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223B338: .word 0x00000F14
    // _0223B33C: .word 0x04000304
    // _0223B340: .word 0xFFFF7FFF
    // TODO: decompile
}




void ov70_0223B344(void) {
}




void ov70_0223B364(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // mov r2, #0xba
    // add r5, r0, #0
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, #0x1c
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // ldr r0, _0223B3B4 ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223B3B4 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #2
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _0223B3B4 ; =0x00000F18
    // ldr r2, _0223B3B8 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223B3B4: .word 0x00000F18
    // _0223B3B8: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223B3BC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, _0223B3E8 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223B3E8: .word 0x000F0200
    // TODO: decompile
}




void ov70_0223B3EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r1, #0
    // add r1, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0223B418 ; =0x000F0200
    // mov r2, #0
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_022450B8
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0223B418: .word 0x000F0200
    // TODO: decompile
}




void ov70_0223B41C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r6, r1, #0
    // mov r1, #0
    // add r5, r0, #0
    // add r7, r2, #0
    // add r4, r3, #0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223B480 ; =0x00010200
    // mov r3, #0
    // str r0, [sp]
    // ldrsh r2, [r4, r3]
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ov70_0223F20C
    // mov r0, #0x49
    // str r0, [sp]
    // mov r3, #0
    // ldr r0, _0223B480 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // mov r2, #2
    // ldrsb r2, [r4, r2]
    // add r0, r5, #0
    // add r1, r6, #0
    // bl ov70_0223F324
    // mov r0, #3
    // mov r1, #4
    // ldrsb r0, [r4, r0]
    // ldrsb r1, [r4, r1]
    // mov r2, #0
    // bl ov70_0223F864
    // add r2, r0, #0
    // mov r0, #0x68
    // str r0, [sp]
    // mov r3, #0
    // ldr r0, _0223B480 ; =0x00010200
    // str r3, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r1, r6, #0
    // str r3, [sp, #0xc]
    // bl ov70_0223F38C
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223B480: .word 0x00010200
    // TODO: decompile
}




void ov70_0223B484(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // mov r1, #0
    // add r6, r2, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // add r0, #0x10
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // cmp r4, #0
    // beq _0223B4B4
    // mov r2, #0
    // ldr r0, _0223B4D0 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // cmp r6, #0
    // beq _0223B4CC
    // mov r2, #0
    // ldr r0, _0223B4D0 ; =0x00010200
    // str r2, [sp]
    // add r5, #0x10
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0223B4D0: .word 0x00010200
    // TODO: decompile
}




void ov70_0223B4D4(void) {
    // push {r3, r4, r5, lr}
    // ldr r3, _0223B558 ; =0x00000F14
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #0
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #1
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // mov r1, #3
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // add r2, r1, #0
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #4
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // mov r2, #3
    // ldr r5, [r4, r3]
    // add r3, r2, #0
    // sub r3, #0x23
    // ldr r0, [r4, #4]
    // mov r1, #5
    // sub r3, r3, r5
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #6
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223B558 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #7
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // pop {r3, r4, r5, pc}
    // nop
    // _0223B558: .word 0x00000F14
    // TODO: decompile
}




void ov70_0223B55C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x3c
    // add r4, r0, #0
    // bl ov70_0223BC7C
    // ldr r0, [r4, #4]
    // bl ov70_0223B7CC
    // add r0, r4, #0
    // bl ov70_0223B8E0
    // add r0, r4, #0
    // bl ov70_0223BAE0
    // add r0, r4, #0
    // bl ov70_0223B9C8
    // ldr r0, [r4, #4]
    // ldr r3, _0223B6AC ; =0x00000F58
    // str r0, [sp, #0xc]
    // add r0, r4, r3
    // str r0, [sp, #0x10]
    // ldr r0, _0223B6B0 ; =0x00001168
    // add r1, r4, r0
    // str r1, [sp, #0x14]
    // mov r1, #0xdd
    // lsl r1, r1, #4
    // ldr r2, [r4, r1]
    // sub r1, r1, #4
    // str r2, [sp, #0x18]
    // add r2, r3, #0
    // sub r2, #0x54
    // ldr r2, [r4, r2]
    // sub r3, #0x50
    // str r2, [sp, #0x1c]
    // ldr r2, [r4, r3]
    // add r0, #0x5c
    // str r2, [sp, #0x20]
    // ldr r1, [r4, r1]
    // mov r2, #0xba
    // lsl r2, r2, #4
    // str r1, [sp, #0x24]
    // ldr r1, [r4, r2]
    // str r1, [sp, #0x28]
    // add r1, r2, #4
    // ldr r1, [r4, r1]
    // add r2, #0x10
    // str r1, [sp, #0x2c]
    // ldr r1, [r4, r2]
    // mov r2, #1
    // str r1, [sp, #0x30]
    // ldr r1, [r4]
    // ldr r1, [r1, #0x10]
    // str r1, [sp, #0x34]
    // ldr r0, [r4, r0]
    // mov r1, #2
    // ldr r0, [r0, #0x14]
    // str r0, [sp, #0x38]
    // add r0, sp, #0xc
    // bl ov70_02242014
    // ldr r1, _0223B6B4 ; =0x000011A8
    // mov r2, #0xba
    // str r0, [r4, r1]
    // ldr r0, _0223B6B8 ; =0x00001058
    // lsl r2, r2, #4
    // sub r1, #0x30
    // ldr r2, [r4, r2]
    // add r0, r4, r0
    // add r1, r4, r1
    // bl ov70_0223CB1C
    // ldr r3, _0223B6BC ; =0x000011DE
    // mov r2, #0xba
    // ldr r1, _0223B6C0 ; =0x000010D8
    // lsl r2, r2, #4
    // ldrh r3, [r4, r3]
    // ldr r0, [r4, #4]
    // ldr r2, [r4, r2]
    // add r1, r4, r1
    // bl ov70_0223CC04
    // mov r3, #0
    // ldr r0, _0223B6C4 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r2, _0223B6C8 ; =0x00000BA4
    // ldr r0, _0223B6CC ; =0x00001068
    // ldr r1, [r4, r2]
    // sub r2, #0x1a
    // ldrsh r2, [r4, r2]
    // add r0, r4, r0
    // bl ov70_0223F1D8
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223B6C4 ; =0x00010200
    // mov r2, #0xba
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // ldr r1, [r4, r2]
    // sub r2, #0x14
    // ldr r0, _0223B6D0 ; =0x00001088
    // ldrsb r2, [r4, r2]
    // add r0, r4, r0
    // mov r3, #1
    // bl ov70_0223F2BC
    // ldr r1, _0223B6D4 ; =0x00000B8D
    // mov r2, #1
    // ldrsb r0, [r4, r1]
    // add r1, r1, #1
    // ldrsb r1, [r4, r1]
    // bl ov70_0223F864
    // add r2, r0, #0
    // mov r3, #0
    // ldr r0, _0223B6C4 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // mov r1, #0xba
    // str r0, [sp, #8]
    // ldr r0, _0223B6D8 ; =0x000010A8
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // bl ov70_0223F370
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223B6C4 ; =0x00010200
    // mov r2, #0xbb
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // ldr r3, _0223B6DC ; =0x000012CC
    // ldr r0, _0223B6E0 ; =0x00001188
    // ldr r1, [r4, r2]
    // sub r2, #0x10
    // ldr r2, [r4, r2]
    // ldr r3, [r4, r3]
    // add r0, r4, r0
    // bl ov70_0223F244
    // ldr r1, _0223B6E4 ; =ov70_0223CCA4
    // ldr r0, _0223B6E8 ; =0x00001208
    // str r1, [r4, r0]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xd
    // bne _0223B6A2
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0x3c
    // pop {r3, r4, pc}
    // _0223B6AC: .word 0x00000F58
    // _0223B6B0: .word 0x00001168
    // _0223B6B4: .word 0x000011A8
    // _0223B6B8: .word 0x00001058
    // _0223B6BC: .word 0x000011DE
    // _0223B6C0: .word 0x000010D8
    // _0223B6C4: .word 0x00010200
    // _0223B6C8: .word 0x00000BA4
    // _0223B6CC: .word 0x00001068
    // _0223B6D0: .word 0x00001088
    // _0223B6D4: .word 0x00000B8D
    // _0223B6D8: .word 0x000010A8
    // _0223B6DC: .word 0x000012CC
    // _0223B6E0: .word 0x00001188
    // _0223B6E4: .word ov70_0223CCA4
    // _0223B6E8: .word 0x00001208
    // TODO: decompile
}




void ov70_0223B6EC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r1, [r5, #0x2c]
    // lsl r2, r1, #2
    // ldr r1, _0223B768 ; =ov70_02246528
    // ldr r1, [r1, r2]
    // blx r1
    // mov r7, #0x6a
    // str r0, [sp]
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #2
    // ldr r3, _0223B76C ; =0x0000120E
    // ldr r1, _0223B770 ; =0x0000120C
    // ldr r2, _0223B774 ; =0x00000F14
    // ldr r0, _0223B778 ; =0x00000EE4
    // ldrsh r3, [r4, r3]
    // ldr r2, [r5, r2]
    // ldrsh r1, [r4, r1]
    // ldr r0, [r4, r0]
    // add r2, r2, r3
    // bl ov70_02238F9C
    // ldr r2, _0223B774 ; =0x00000F14
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r2, [r5, r2]
    // ldr r0, [r5, r0]
    // mov r1, #0x37
    // add r2, r2, r7
    // bl ov70_02238F9C
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #8
    // blt _0223B704
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r2, r0, #0
    // ldr r0, _0223B77C ; =0x00000DCC
    // mov r3, #6
    // add r6, r4, #0
    // mul r6, r3
    // mul r3, r2
    // ldr r2, _0223B780 ; =ov70_02246500
    // ldr r1, _0223B784 ; =ov70_022464FE
    // ldrh r3, [r2, r3]
    // ldr r2, _0223B774 ; =0x00000F14
    // ldrh r1, [r1, r6]
    // ldr r2, [r5, r2]
    // ldr r0, [r5, r0]
    // sub r2, r3, r2
    // bl ov70_02238F9C
    // ldr r0, [sp]
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223B768: .word ov70_02246528
    // _0223B76C: .word 0x0000120E
    // _0223B770: .word 0x0000120C
    // _0223B774: .word 0x00000F14
    // _0223B778: .word 0x00000EE4
    // _0223B77C: .word 0x00000DCC
    // _0223B780: .word ov70_02246500
    // _0223B784: .word ov70_022464FE
    // TODO: decompile
}




void ov70_0223B788(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223B7C8 ; =0x00001208
    // mov r1, #0
    // str r1, [r4, r0]
    // sub r0, #0x60
    // ldr r0, [r4, r0]
    // bl ov70_0224212C
    // add r0, r4, #0
    // bl ov70_0223BAAC
    // add r0, r4, #0
    // bl ov70_0223BCD0
    // add r0, r4, #0
    // bl ov70_0223BC2C
    // ldr r0, [r4, #4]
    // bl ov70_0223B8B4
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // _0223B7C8: .word 0x00001208
    // TODO: decompile
}




void ov70_0223B7CC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x70
    // ldr r5, _0223B8A4 ; =ov70_02245690
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223B8A8 ; =ov70_022456AC
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223B8AC ; =ov70_02245674
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223B8B0 ; =ov70_02245658
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_022391F0
    // mov r0, #2
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // add sp, #0x70
    // pop {r3, r4, r5, pc}
    // _0223B8A4: .word ov70_02245690
    // _0223B8A8: .word ov70_022456AC
    // _0223B8AC: .word ov70_02245674
    // _0223B8B0: .word ov70_02245658
    // TODO: decompile
}




void ov70_0223B8B4(void) {
}




void ov70_0223B8E0(void) {
    NARC_New(0x64, 0x3d);
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(3, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 5, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r6) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r5, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r5, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0xe, r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x1d, r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0xf, r5, 2);
    LoadFontPal1(4, 0x20, 0x3d);
    ov70_02239CF8(r6);
    NARC_Delete(r4);
}




void ov70_0223B9C8(void) {
    // push {r4, lr}
    // sub sp, #0x30
    // mov r2, #0xd6
    // add r4, r0, #0
    // lsl r2, r2, #4
    // add r0, sp, #0
    // add r1, r4, #0
    // add r2, r4, r2
    // mov r3, #1
    // bl ov70_02238B54
    // ldr r0, _0223BA9C ; =ov70_022464F0
    // ldrh r1, [r0, #0xe]
    // ldrh r0, [r0, #0x10]
    // lsl r1, r1, #0xc
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // str r1, [sp, #8]
    // bl Sprite_CreateAffine
    // ldr r1, _0223BAA0 ; =0x00000DCC
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _0223BAA0 ; =0x00000DCC
    // mov r1, #0x2d
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223BAA0 ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetPriority
    // ldr r0, _0223BAA0 ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl Sprite_SetOamMode
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #2
    // lsl r0, r0, #0x10
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // mov r1, #0xdd
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x2f
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x39
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // mov r0, #0x75
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223BAA4 ; =0x00000F04
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x26
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223BAA4 ; =0x00000F04
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #0x23
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223BAA8 ; =0x00000F08
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x27
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223BAA8 ; =0x00000F08
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // bl sub_0203A880
    // add sp, #0x30
    // pop {r4, pc}
    // nop
    // _0223BA9C: .word ov70_022464F0
    // _0223BAA0: .word 0x00000DCC
    // _0223BAA4: .word 0x00000F04
    // _0223BAA8: .word 0x00000F08
    // TODO: decompile
}




void ov70_0223BAAC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223BAD4 ; =0x00000DCC
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // ldr r0, _0223BAD8 ; =0x00000F04
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // ldr r0, _0223BADC ; =0x00000F08
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // pop {r4, pc}
    // _0223BAD4: .word 0x00000DCC
    // _0223BAD8: .word 0x00000F04
    // _0223BADC: .word 0x00000F08
    // TODO: decompile
}




void ov70_0223BAE0(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x1c
    // str r0, [sp, #0x14]
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r2, _0223BC10 ; =0x00000F18
    // ldr r1, [sp, #0x14]
    // ldr r0, [r0, #4]
    // add r1, r1, r2
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r1, _0223BC10 ; =0x00000F18
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _0223BC14 ; =0x00001058
    // ldr r0, [sp, #0x14]
    // ldr r4, _0223BC18 ; =ov70_02245640
    // mov r7, #0
    // mov r6, #1
    // add r5, r0, r1
    // ldrh r0, [r4, #2]
    // add r1, r5, #0
    // mov r2, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrh r3, [r4]
    // ldr r0, [sp, #0x14]
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r7, r7, #1
    // add r6, #0x16
    // add r4, r4, #4
    // add r5, #0x10
    // cmp r7, #6
    // blt _0223BB22
    // ldr r1, _0223BC1C ; =0x00001178
    // ldr r0, [sp, #0x14]
    // ldr r4, _0223BC20 ; =ov70_0224562C
    // mov r7, #0
    // mov r6, #0x85
    // add r5, r0, r1
    // ldrh r0, [r4, #2]
    // add r1, r5, #0
    // mov r2, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x1c
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrh r3, [r4]
    // ldr r0, [sp, #0x14]
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r7, r7, #1
    // add r6, #0x38
    // add r4, r4, #4
    // add r5, #0x10
    // cmp r7, #2
    // blt _0223BB6E
    // ldr r1, _0223BC14 ; =0x00001058
    // ldr r0, [sp, #0x14]
    // ldr r6, _0223BC24 ; =0x0000011D
    // add r0, r0, r1
    // ldr r4, _0223BC28 ; =ov70_02245634
    // mov r5, #0
    // str r0, [sp, #0x18]
    // add r0, r5, #6
    // lsl r7, r0, #4
    // ldrh r0, [r4, #2]
    // ldr r1, [sp, #0x18]
    // mov r2, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xa
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrh r3, [r4]
    // ldr r0, [sp, #0x14]
    // add r1, r1, r7
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, [sp, #0x18]
    // mov r1, #0
    // add r0, r0, r7
    // bl FillWindowPixelBuffer
    // add r5, r5, #1
    // add r6, #0x14
    // add r4, r4, #4
    // cmp r5, #3
    // blt _0223BBBC
    // ldr r0, [sp, #0x14]
    // mov r1, #4
    // bl ov70_02239D44
    // add sp, #0x1c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223BC10: .word 0x00000F18
    // _0223BC14: .word 0x00001058
    // _0223BC18: .word ov70_02245640
    // _0223BC1C: .word 0x00001178
    // _0223BC20: .word ov70_0224562C
    // _0223BC24: .word 0x0000011D
    // _0223BC28: .word ov70_02245634
    // TODO: decompile
}




void ov70_0223BC2C(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0223BC6C ; =0x00001198
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _0223BC70 ; =0x00000F18
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _0223BC74 ; =0x00001058
    // mov r4, #0
    // add r5, r6, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #9
    // blt _0223BC46
    // ldr r0, _0223BC78 ; =0x00001178
    // mov r4, #0
    // add r5, r6, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #2
    // blt _0223BC5A
    // pop {r4, r5, r6, pc}
    // nop
    // _0223BC6C: .word 0x00001198
    // _0223BC70: .word 0x00000F18
    // _0223BC74: .word 0x00001058
    // _0223BC78: .word 0x00001178
    // TODO: decompile
}




void ov70_0223BC7C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223BCC8 ; =0x00000BBC
    // str r0, [r4, r1]
    // sub r1, #0x1c
    // ldr r0, [r4, r1]
    // mov r1, #0x2a
    // bl NewString_ReadMsgData
    // mov r1, #0x2f
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // mov r0, #0x3d
    // mov r1, #0x30
    // bl Heap_Alloc
    // ldr r1, _0223BCCC ; =0x000011C4
    // mov r2, #0x30
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // mov r0, #0
    // bl MIi_CpuClearFast
    // mov r0, #0x3d
    // bl ov70_0223F684
    // ldr r1, _0223BCCC ; =0x000011C4
    // ldr r2, [r4, r1]
    // add r1, #0x70
    // str r0, [r2, #0x14]
    // add r0, r4, r1
    // bl ov70_0223F948
    // pop {r4, pc}
    // _0223BCC8: .word 0x00000BBC
    // _0223BCCC: .word 0x000011C4
    // TODO: decompile
}




void ov70_0223BCD0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223BCFC ; =0x000011C4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x14]
    // bl Heap_Free
    // ldr r0, _0223BCFC ; =0x000011C4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0223BD00 ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _0223BCFC: .word 0x000011C4
    // _0223BD00: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223BD04(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r1, [r4, #0x24]
    // cmp r1, #0xf
    // ldr r1, _0223BD78 ; =0x00000F0F
    // bne _0223BD4E
    // mov r2, #0
    // str r1, [sp]
    // mov r1, #0x20
    // add r3, r2, #0
    // bl ov70_0223CAC4
    // ldr r0, _0223BD7C ; =0x0400006C
    // bl GXx_GetMasterBrightness_
    // mov r1, #0xf
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223BD48
    // mov r0, #0x10
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0x1e
    // str r0, [r4, #0x2c]
    // b _0223BD64
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // b _0223BD64
    // str r1, [sp]
    // mov r1, #8
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223BD78: .word 0x00000F0F
    // _0223BD7C: .word 0x0400006C
    // TODO: decompile
}




void ov70_0223BD80(void) {
    // ldr r3, _0223BD88 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0223BD8C ; =ov70_022456C8
    // bx r3
    // nop
    // _0223BD88: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223BD8C: .word ov70_022456C8
    // TODO: decompile
}




void ov70_0223BD90(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // cmp r1, #6
    // bhi _0223BE70
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223BDA6: ; jump table
    // mov r0, #3
    // str r0, [r4, #0x2c]
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // ldr r0, _0223BE78 ; =0x00000B8A
    // ldrsh r0, [r4, r0]
    // cmp r0, #0
    // beq _0223BDF0
    // mov r1, #0x12
    // bl GetMonBaseStat
    // ldr r1, _0223BE7C ; =0x000011C4
    // ldr r2, [r4, r1]
    // str r0, [r2, #0x20]
    // ldr r1, [r4, r1]
    // ldr r0, _0223BE78 ; =0x00000B8A
    // ldr r1, [r1, #0x20]
    // add r0, r4, r0
    // bl ov70_0223EDE4
    // cmp r0, #0
    // beq _0223BDF0
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #6
    // str r0, [r4, #0x2c]
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #0xc
    // str r0, [r4, #0x2c]
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0223BE70
    // mov r0, #0x1d
    // str r0, [r4, #0x2c]
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // mov r0, #0xf
    // add sp, #0xc
    // str r0, [r4, #0x2c]
    // pop {r3, r4, pc}
    // ldr r1, _0223BE80 ; =0x00000F0F
    // mov r2, #1
    // str r1, [sp]
    // mov r1, #0xf
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #0x17
    // bl ov70_02238D84
    // ldr r0, _0223BE74 ; =0x000005DC
    // bl PlaySE
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0223BE74: .word 0x000005DC
    // _0223BE78: .word 0x00000B8A
    // _0223BE7C: .word 0x000011C4
    // _0223BE80: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223BE84(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov70_0223BD80
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _0223BEA8
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_0223C420
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_0223BD90
    // b _0223BEEE
    // add r0, r5, #0
    // bl ov70_0223C304
    // ldr r0, _0223BEF4 ; =gSystem
    // mov r2, #1
    // ldr r1, [r0, #0x48]
    // add r0, r1, #0
    // tst r0, r2
    // beq _0223BECA
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r1, r0, #0
    // add r0, r5, #0
    // bl ov70_0223BD90
    // b _0223BEEE
    // mov r0, #2
    // tst r0, r1
    // beq _0223BEEE
    // ldr r0, _0223BEF8 ; =0x00000F0F
    // mov r1, #0xf
    // str r0, [sp]
    // add r0, r5, #0
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r5, #0
    // mov r1, #0x15
    // mov r2, #0x17
    // bl ov70_02238D84
    // ldr r0, _0223BEFC ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // nop
    // _0223BEF4: .word gSystem
    // _0223BEF8: .word 0x00000F0F
    // _0223BEFC: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223BF00(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r3, _0223BF94 ; =0x00000B8A
    // add r4, r0, #0
    // ldrsh r1, [r4, r3]
    // cmp r1, #0
    // bne _0223BF2E
    // ldr r1, _0223BF98 ; =0x00000F0F
    // mov r2, #1
    // str r1, [sp]
    // mov r1, #0xc
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _0223BF9C ; =0x000005F3
    // bl PlaySE
    // b _0223BF8C
    // ldr r2, _0223BFA0 ; =0x000012CC
    // add r1, r3, #6
    // add r0, r4, r3
    // add r3, #0xe
    // ldr r2, [r4, r2]
    // ldr r3, [r4, r3]
    // add r1, r4, r1
    // bl ov70_0223CC68
    // cmp r0, #0
    // beq _0223BF66
    // ldr r0, _0223BF98 ; =0x00000F0F
    // mov r1, #0x21
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _0223BF9C ; =0x000005F3
    // bl PlaySE
    // b _0223BF8C
    // ldr r0, _0223BFA4 ; =0x000005FE
    // bl PlaySE
    // ldr r0, _0223BF98 ; =0x00000F0F
    // mov r1, #0xd
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #0x10
    // bl ov70_02238D84
    // add r0, r4, #0
    // bl ov70_02241234
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223BF94: .word 0x00000B8A
    // _0223BF98: .word 0x00000F0F
    // _0223BF9C: .word 0x000005F3
    // _0223BFA0: .word 0x000012CC
    // _0223BFA4: .word 0x000005FE
    // TODO: decompile
}




void ov70_0223BFA8(void) {
    sub_0202DB90(*((u32*)*((u32*)r0)));
    sub_0202DB80(*((u32*)r0));
    // str r1, [sp, #0x1c]
    // str r1, [sp, #0x20]
    // str r1, [sp, #0x24]
    // str r0, [sp, #0x28]
    // add r0, sp, #0xc
    // add r1, sp, #0
    ov00_021ECB94(((r0 << 0x18) >> 0x18), (((r0 >> 8) << 0x18) >> 0x18));
    // add r0, sp, #0xc
    RTC_ConvertDateToDay();
    // add r0, sp, #0x1c
    RTC_ConvertDateToDay();
    // sub r0, r4, r0
    // bmi _0223C002
}




void ov70_0223C008(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // mov r1, #1
    // add r5, r0, #0
    // mov r4, #3
    // bl ov70_0223BFA8
    // cmp r0, #0
    // beq _0223C01C
    // add r4, r4, #2
    // add r0, r5, #0
    // mov r1, #0
    // bl ov70_0223BFA8
    // cmp r0, #0
    // beq _0223C02A
    // add r4, r4, #2
    // ldr r0, _0223C0BC ; =0x000012CC
    // ldr r0, [r5, r0]
    // cmp r0, #0
    // bne _0223C044
    // ldr r0, _0223C0C0 ; =0x00000B8A
    // mov r2, #0x26
    // lsl r2, r2, #4
    // add r0, r5, r0
    // add r1, r4, #0
    // add r2, r5, r2
    // bl ov70_02238130
    // b _0223C082
    // add r0, sp, #0
    // mov r1, #0
    // mov r2, #8
    // bl MI_CpuFill8
    // ldr r1, _0223C0C0 ; =0x00000B8A
    // add r0, sp, #0
    // ldrsh r2, [r5, r1]
    // strh r2, [r0]
    // add r2, r1, #2
    // ldrsb r2, [r5, r2]
    // strb r2, [r0, #2]
    // add r2, r1, #3
    // ldrsb r2, [r5, r2]
    // strb r2, [r0, #3]
    // add r2, r1, #4
    // ldrsb r2, [r5, r2]
    // add r1, r1, #5
    // strb r2, [r0, #4]
    // ldrsb r1, [r5, r1]
    // strb r1, [r0, #5]
    // ldr r1, _0223C0BC ; =0x000012CC
    // strb r4, [r0, #6]
    // ldr r1, [r5, r1]
    // strb r1, [r0, #7]
    // mov r1, #0x26
    // lsl r1, r1, #4
    // add r0, sp, #0
    // add r1, r5, r1
    // bl ov70_022381A4
    // ldr r1, _0223C0C0 ; =0x00000B8A
    // ldrh r2, [r5, r1]
    // add r0, r1, #6
    // strh r2, [r5, r0]
    // add r0, r1, #2
    // ldrh r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #8
    // strh r2, [r5, r0]
    // add r0, r1, #4
    // ldrh r2, [r5, r0]
    // add r0, r1, #0
    // add r0, #0xa
    // strh r2, [r5, r0]
    // ldr r2, _0223C0BC ; =0x000012CC
    // add r1, #0xe
    // ldr r0, [r5, r2]
    // sub r2, #0xee
    // str r0, [r5, r1]
    // ldr r0, _0223C0C4 ; =0x00001604
    // mov r1, #0
    // str r1, [r5, r0]
    // mov r0, #0x11
    // str r0, [r5, #0x2c]
    // strh r1, [r5, r2]
    // mov r0, #3
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223C0BC: .word 0x000012CC
    // _0223C0C0: .word 0x00000B8A
    // _0223C0C4: .word 0x00001604
    // TODO: decompile
}




void ov70_0223C0C8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0223C176
    // bl ov70_02237F58
    // add r5, r0, #0
    // ldr r0, _0223C190 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r5, #0
    // add r0, #0xf
    // cmp r0, #0x16
    // bhi _0223C18C
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0223C0F4: ; jump table
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // str r5, [r4, r0]
    // ldr r0, _0223C194 ; =0x000005FE
    // bl StopSE
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r2, #1
    // bl ov70_02241184
    // cmp r5, #0
    // ldr r0, [r4, #4]
    // ldr r1, _0223C198 ; =0x000010D8
    // bne _0223C150
    // mov r2, #0xba
    // lsl r2, r2, #4
    // ldr r2, [r4, r2]
    // add r1, r4, r1
    // mov r3, #0
    // bl ov70_0223CC04
    // b _0223C15E
    // mov r2, #0xba
    // lsl r2, r2, #4
    // ldr r2, [r4, r2]
    // add r1, r4, r1
    // mov r3, #1
    // bl ov70_0223CC04
    // mov r0, #0x12
    // str r0, [r4, #0x2c]
    // b _0223C18C
    // mov r0, #0x1b
    // str r0, [r4, #0x2c]
    // b _0223C18C
    // bl sub_020399EC
    // b _0223C18C
    // mov r0, #0x14
    // str r0, [r4, #0x2c]
    // b _0223C18C
    // ldr r0, _0223C190 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _0223C18C
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _0223C190: .word 0x00001604
    // _0223C194: .word 0x000005FE
    // _0223C198: .word 0x000010D8
    // TODO: decompile
}




void ov70_0223C19C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #0x4a
    // add r4, r0, #0
    // lsl r1, r1, #2
    // ldr r1, [r4, r1]
    // cmp r1, #0
    // ldr r1, _0223C1F0 ; =0x00000F0F
    // bne _0223C1CC
    // str r1, [sp]
    // mov r1, #0xe
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _0223C1F4 ; =0x000005F3
    // bl PlaySE
    // b _0223C1EA
    // str r1, [sp]
    // mov r1, #0x1e
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #0x13
    // bl ov70_02238D84
    // mov r0, #0x47
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C1F0: .word 0x00000F0F
    // _0223C1F4: .word 0x000005F3
    // TODO: decompile
}




void ov70_0223C1F8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #0x47
    // add r4, r0, #0
    // lsl r1, r1, #6
    // ldr r2, [r4, r1]
    // add r2, r2, #1
    // str r2, [r4, r1]
    // ldr r1, [r4, r1]
    // cmp r1, #0x2d
    // ble _0223C22C
    // ldr r1, _0223C234 ; =0x00000F0F
    // mov r2, #1
    // str r1, [sp]
    // mov r1, #0x20
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _0223C238 ; =0x000011DE
    // mov r1, #1
    // strh r1, [r4, r0]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223C234: .word 0x00000F0F
    // _0223C238: .word 0x000011DE
    // TODO: decompile
}




void ov70_0223C23C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #0xb9
    // add r4, r0, #0
    // mov r3, #0
    // lsl r1, r1, #4
    // strh r3, [r4, r1]
    // ldr r1, _0223C26C ; =0x00000F0F
    // mov r2, #1
    // str r1, [sp]
    // mov r1, #0x26
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _0223C270 ; =0x000005F3
    // bl PlaySE
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C26C: .word 0x00000F0F
    // _0223C270: .word 0x000005F3
    // TODO: decompile
}




void ov70_0223C274(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C2A8 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0x99
    // mov r2, #4
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x16
    // mov r2, #0x1c
    // bl ov70_02238D84
    // mov r0, #0x47
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r4, r0]
    // ldr r0, _0223C2AC ; =0x000005F3
    // bl PlaySE
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223C2A8: .word 0x00000F0F
    // _0223C2AC: .word 0x000005F3
    // TODO: decompile
}




void ov70_0223C2B0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C2E4 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0x9e
    // mov r2, #4
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x16
    // mov r2, #2
    // bl ov70_02238D84
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // ldr r0, _0223C2E8 ; =0x000005F3
    // bl PlaySE
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C2E4: .word 0x00000F0F
    // _0223C2E8: .word 0x000005F3
    // TODO: decompile
}




void ov70_0223C2EC(void) {
    // ldr r1, _0223C300 ; =0x000011C4
    // ldr r1, [r0, r1]
    // ldr r0, [r1, #0x24]
    // cmp r0, #0
    // bne _0223C2FA
    // ldr r0, [r1, #0x28]
    // bx lr
    // ldr r0, [r1, #0x2c]
    // add r0, r0, #4
    // bx lr
    // _0223C300: .word 0x000011C4
    // TODO: decompile
}




void ov70_0223C304(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // ldr r0, _0223C404 ; =gSystem
    // mov r1, #0x40
    // ldr r0, [r0, #0x48]
    // tst r1, r0
    // beq _0223C346
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r1, [r5, r0]
    // ldr r0, [r1, #0x24]
    // cmp r0, #0
    // bne _0223C32E
    // ldr r0, [r1, #0x28]
    // cmp r0, #0
    // ble _0223C3BE
    // sub r0, r0, #1
    // str r0, [r1, #0x28]
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // b _0223C3BE
    // ldr r0, [r1, #0x2c]
    // cmp r0, #0
    // ble _0223C3BE
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r1, [r5, r0]
    // ldr r0, [r1, #0x2c]
    // sub r0, r0, #1
    // str r0, [r1, #0x2c]
    // b _0223C3BE
    // mov r1, #0x80
    // tst r1, r0
    // beq _0223C380
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r1, [r5, r0]
    // ldr r0, [r1, #0x24]
    // cmp r0, #0
    // bne _0223C368
    // ldr r0, [r1, #0x28]
    // cmp r0, #3
    // bge _0223C3BE
    // add r0, r0, #1
    // str r0, [r1, #0x28]
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // b _0223C3BE
    // ldr r0, [r1, #0x2c]
    // cmp r0, #2
    // bge _0223C3BE
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r1, [r5, r0]
    // ldr r0, [r1, #0x2c]
    // add r0, r0, #1
    // str r0, [r1, #0x2c]
    // b _0223C3BE
    // mov r1, #0x10
    // tst r1, r0
    // beq _0223C3A0
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r0, [r5, r0]
    // ldr r0, [r0, #0x24]
    // cmp r0, #1
    // beq _0223C396
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223C408 ; =0x000011C4
    // mov r1, #1
    // ldr r0, [r5, r0]
    // str r1, [r0, #0x24]
    // b _0223C3BE
    // mov r1, #0x20
    // tst r0, r1
    // beq _0223C3BE
    // ldr r0, _0223C408 ; =0x000011C4
    // ldr r0, [r5, r0]
    // ldr r0, [r0, #0x24]
    // cmp r0, #0
    // beq _0223C3B6
    // ldr r0, _0223C40C ; =0x000005DC
    // bl PlaySE
    // ldr r0, _0223C408 ; =0x000011C4
    // mov r1, #0
    // ldr r0, [r5, r0]
    // str r1, [r0, #0x24]
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r2, r0, #0
    // ldr r0, _0223C410 ; =0x00000DCC
    // mov r3, #6
    // add r6, r4, #0
    // mul r6, r3
    // ldr r1, _0223C414 ; =ov70_022464FE
    // mul r3, r2
    // ldr r2, _0223C418 ; =ov70_02246500
    // ldrh r1, [r1, r6]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, r0]
    // bl ov70_02238F9C
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r3, r0, #0
    // ldr r0, _0223C410 ; =0x00000DCC
    // mov r1, #6
    // add r2, r3, #0
    // mul r2, r1
    // ldr r1, _0223C41C ; =ov70_02246502
    // ldr r0, [r5, r0]
    // ldrh r1, [r1, r2]
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, r5, r6, pc}
    // nop
    // _0223C404: .word gSystem
    // _0223C408: .word 0x000011C4
    // _0223C40C: .word 0x000005DC
    // _0223C410: .word 0x00000DCC
    // _0223C414: .word ov70_022464FE
    // _0223C418: .word ov70_02246500
    // _0223C41C: .word ov70_02246502
    // TODO: decompile
}




void ov70_0223C420(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // lsl r0, r1, #1
    // ldr r1, _0223C494 ; =ov70_022464F0
    // ldrb r1, [r1, r0]
    // cmp r1, #0
    // ldr r1, _0223C498 ; =0x000011C4
    // bne _0223C440
    // ldr r2, [r5, r1]
    // mov r3, #0
    // str r3, [r2, #0x24]
    // ldr r2, _0223C49C ; =ov70_022464F1
    // ldrb r2, [r2, r0]
    // ldr r0, [r5, r1]
    // str r2, [r0, #0x28]
    // b _0223C44E
    // ldr r2, [r5, r1]
    // mov r3, #1
    // str r3, [r2, #0x24]
    // ldr r2, _0223C49C ; =ov70_022464F1
    // ldrb r2, [r2, r0]
    // ldr r0, [r5, r1]
    // str r2, [r0, #0x2c]
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r4, r0, #0
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r2, r0, #0
    // ldr r0, _0223C4A0 ; =0x00000DCC
    // mov r3, #6
    // add r6, r4, #0
    // mul r6, r3
    // ldr r1, _0223C4A4 ; =ov70_022464FE
    // mul r3, r2
    // ldr r2, _0223C4A8 ; =ov70_02246500
    // ldrh r1, [r1, r6]
    // ldrh r2, [r2, r3]
    // ldr r0, [r5, r0]
    // bl ov70_02238F9C
    // add r0, r5, #0
    // bl ov70_0223C2EC
    // add r3, r0, #0
    // ldr r0, _0223C4A0 ; =0x00000DCC
    // mov r1, #6
    // add r2, r3, #0
    // mul r2, r1
    // ldr r1, _0223C4AC ; =ov70_02246502
    // ldr r0, [r5, r0]
    // ldrh r1, [r1, r2]
    // bl Sprite_SetAnimCtrlSeq
    // pop {r4, r5, r6, pc}
    // nop
    // _0223C494: .word ov70_022464F0
    // _0223C498: .word 0x000011C4
    // _0223C49C: .word ov70_022464F1
    // _0223C4A0: .word 0x00000DCC
    // _0223C4A4: .word ov70_022464FE
    // _0223C4A8: .word ov70_02246500
    // _0223C4AC: .word ov70_02246502
    // TODO: decompile
}




void ov70_0223C4B0(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223C4E0 ; =0x00000F14
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // bne _0223C4D6
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0223C4E0: .word 0x00000F14
    // TODO: decompile
}




void ov70_0223C4E4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C508 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #9
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #4
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C508: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223C50C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223C528 ; =0x000011A8
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #9
    // bl ov70_0223CD28
    // mov r0, #5
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223C528: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223C52C(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223C5FC ; =0x000011A8
    // ldr r0, [r4, r0]
    // bl ov70_02242144
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // beq _0223C54C
    // add r0, r0, #1
    // cmp r5, r0
    // beq _0223C5F6
    // b _0223C56E
    // mov r0, #0
    // bl ov70_0223CD28
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r0, _0223C600 ; =0x000011C4
    // ldr r3, [r4, r0]
    // add r0, #0x70
    // ldrh r2, [r3, #6]
    // ldrh r1, [r3, #4]
    // add r0, r4, r0
    // add r1, r2, r1
    // ldrh r2, [r3, #0xa]
    // ldrh r3, [r3, #8]
    // bl ov70_0223F960
    // b _0223C5F6
    // mov r0, #0
    // bl ov70_0223CD28
    // ldr r0, _0223C604 ; =0x00000B8A
    // mov r1, #0
    // strh r5, [r4, r0]
    // ldr r0, _0223C608 ; =0x00001068
    // str r1, [r4, #0x2c]
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // ldr r0, _0223C60C ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, _0223C610 ; =0x00000BA4
    // ldr r0, _0223C608 ; =0x00001068
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // add r2, r5, #0
    // bl ov70_0223F1D8
    // add r0, r5, #0
    // mov r1, #0x12
    // bl GetMonBaseStat
    // ldr r1, _0223C600 ; =0x000011C4
    // ldr r2, [r4, r1]
    // str r0, [r2, #0x20]
    // ldr r3, [r4, r1]
    // add r1, #0x70
    // add r0, r4, r1
    // ldrh r2, [r3, #6]
    // ldrh r1, [r3, #4]
    // add r1, r2, r1
    // ldrh r2, [r3, #0xa]
    // ldrh r3, [r3, #8]
    // bl ov70_0223F960
    // ldr r1, _0223C600 ; =0x000011C4
    // ldr r0, _0223C604 ; =0x00000B8A
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // ldr r1, [r1, #0x20]
    // bl ov70_0223EDE4
    // cmp r0, #0
    // beq _0223C5F6
    // ldr r0, _0223C614 ; =0x00001088
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223C60C ; =0x00010200
    // mov r2, #0xba
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // ldr r1, [r4, r2]
    // sub r2, #0x14
    // ldr r0, _0223C614 ; =0x00001088
    // ldrsb r2, [r4, r2]
    // add r0, r4, r0
    // mov r3, #1
    // bl ov70_0223F2BC
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223C5FC: .word 0x000011A8
    // _0223C600: .word 0x000011C4
    // _0223C604: .word 0x00000B8A
    // _0223C608: .word 0x00001068
    // _0223C60C: .word 0x00010200
    // _0223C610: .word 0x00000BA4
    // _0223C614: .word 0x00001088
    // TODO: decompile
}




void ov70_0223C618(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C63C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xa
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #7
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C63C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223C640(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223C65C ; =0x000011A8
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #9
    // bl ov70_0223CD28
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223C65C: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223C660(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0223C6DC ; =0x000011A8
    // ldr r0, [r5, r0]
    // bl ov70_02242144
    // add r4, r0, #0
    // cmp r4, #2
    // bhi _0223C682
    // cmp r4, #0
    // beq _0223C6A0
    // cmp r4, #1
    // beq _0223C6A0
    // cmp r4, #2
    // beq _0223C6A0
    // b _0223C6D6
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // bne _0223C6D6
    // mov r0, #0
    // bl ov70_0223CD28
    // ldr r0, _0223C6E0 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // b _0223C6D6
    // mov r0, #0
    // bl ov70_0223CD28
    // ldr r0, _0223C6E4 ; =0x00000B8C
    // add r1, r4, #1
    // strb r1, [r5, r0]
    // ldr r0, _0223C6E8 ; =0x00001088
    // mov r1, #0
    // add r0, r5, r0
    // str r1, [r5, #0x2c]
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223C6EC ; =0x00010200
    // mov r2, #0xba
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // ldr r1, [r5, r2]
    // sub r2, #0x14
    // ldr r0, _0223C6E8 ; =0x00001088
    // ldrsb r2, [r5, r2]
    // add r0, r5, r0
    // mov r3, #1
    // bl ov70_0223F2BC
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223C6DC: .word 0x000011A8
    // _0223C6E0: .word 0x00000F18
    // _0223C6E4: .word 0x00000B8C
    // _0223C6E8: .word 0x00001088
    // _0223C6EC: .word 0x00010200
    // TODO: decompile
}




void ov70_0223C6F0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C714 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xb
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #0xa
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C714: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223C718(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x46
    // ldr r1, _0223C73C ; =0x0000FFFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // ldr r0, _0223C740 ; =0x000011A8
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #9
    // bl ov70_0223CD28
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223C73C: .word 0x0000FFFF
    // _0223C740: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223C744(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0223C7B4 ; =0x000011A8
    // ldr r0, [r5, r0]
    // bl ov70_02242144
    // add r4, r0, #0
    // cmp r4, #0xb
    // beq _0223C768
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _0223C768
    // add r0, r0, #1
    // cmp r4, r0
    // beq _0223C7AE
    // b _0223C774
    // mov r0, #0
    // bl ov70_0223CD28
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // b _0223C7AE
    // mov r0, #0
    // bl ov70_0223CD28
    // ldr r0, _0223C7B8 ; =0x00000B8A
    // add r1, r4, #0
    // add r0, r5, r0
    // mov r2, #1
    // bl ov70_0223F828
    // ldr r0, _0223C7BC ; =0x000010A8
    // mov r1, #0
    // add r0, r5, r0
    // str r1, [r5, #0x2c]
    // bl FillWindowPixelBuffer
    // mov r3, #0
    // mov r1, #0xba
    // ldr r0, _0223C7C0 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // ldr r0, _0223C7BC ; =0x000010A8
    // lsl r1, r1, #4
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // add r2, r4, #0
    // bl ov70_0223F370
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // _0223C7B4: .word 0x000011A8
    // _0223C7B8: .word 0x00000B8A
    // _0223C7BC: .word 0x000010A8
    // _0223C7C0: .word 0x00010200
    // TODO: decompile
}




void ov70_0223C7C4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C7E8 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xb0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #0xd
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C7E8: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223C7EC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x46
    // ldr r1, _0223C810 ; =0x0000FFFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // ldr r0, _0223C814 ; =0x000011A8
    // mov r1, #3
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #9
    // bl ov70_0223CD28
    // mov r0, #0xe
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223C810: .word 0x0000FFFF
    // _0223C814: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223C818(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0223C898 ; =0x000011A8
    // ldr r0, [r5, r0]
    // bl ov70_02242144
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _0223C890
    // sub r0, r0, #1
    // cmp r4, r0
    // beq _0223C840
    // ldr r0, _0223C89C ; =ov70_0224590C
    // ldr r0, [r0]
    // add r0, r0, #1
    // cmp r4, r0
    // bne _0223C856
    // mov r0, #0
    // bl ov70_0223CD28
    // ldr r0, _0223C8A0 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // b _0223C890
    // mov r0, #0
    // bl ov70_0223CD28
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_0223F8A8
    // ldr r0, _0223C8A4 ; =0x00001188
    // mov r1, #0
    // add r0, r5, r0
    // str r1, [r5, #0x2c]
    // bl FillWindowPixelBuffer
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223C8A8 ; =0x00010200
    // mov r2, #0xbb
    // str r0, [sp, #8]
    // lsl r2, r2, #4
    // ldr r3, _0223C8AC ; =0x000012CC
    // ldr r0, _0223C8A4 ; =0x00001188
    // ldr r1, [r5, r2]
    // sub r2, #0x10
    // ldr r2, [r5, r2]
    // ldr r3, [r5, r3]
    // add r0, r5, r0
    // bl ov70_0223F244
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223C898: .word 0x000011A8
    // _0223C89C: .word ov70_0224590C
    // _0223C8A0: .word 0x00000F18
    // _0223C8A4: .word 0x00001188
    // _0223C8A8: .word 0x00010200
    // _0223C8AC: .word 0x000012CC
    // TODO: decompile
}




void ov70_0223C8B0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // mov r2, #0x12
    // ldr r0, [r4, #4]
    // mov r1, #0xc
    // lsl r2, r2, #4
    // mov r3, #3
    // bl ov70_02238C14
    // ldr r1, _0223C8D8 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #0x18
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223C8D8: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223C8DC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223C90E
    // ldr r0, _0223C924 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // add r0, r4, #0
    // bl ov70_02241234
    // mov r0, #0x4a
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // b _0223C91E
    // cmp r0, #2
    // bne _0223C91E
    // ldr r0, _0223C924 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223C924: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223C928(void) {
}




void ov70_0223C930(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223C954 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0x98
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223CAC4
    // add r0, r4, #0
    // mov r1, #0x15
    // mov r2, #1
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223C954: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223C958(void) {
}




void ov70_0223C978(void) {
    // ldr r0, [r4, r0]
    TextPrinterCheckActive((((0xbf << 4) << 0x18) >> 0x18));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
}




void ov70_0223C9AC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223CA0C ; =0x00000F14
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223CA06
    // ldr r2, _0223CA10 ; =0x04000304
    // ldrh r1, [r2]
    // lsr r0, r2, #0xb
    // orr r0, r1
    // strh r0, [r2]
    // mov r1, #0xf
    // ldr r0, _0223CA0C ; =0x00000F14
    // mvn r1, r1
    // str r1, [r4, r0]
    // ldr r1, _0223CA14 ; =0x000011DE
    // ldrh r1, [r4, r1]
    // cmp r1, #0
    // beq _0223C9FA
    // sub r0, #0x2c
    // ldr r0, [r4, r0]
    // mov r1, #0x10
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0x10
    // bl ov70_02238E50
    // mov r0, #0x4b
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223CA0C: .word 0x00000F14
    // _0223CA10: .word 0x04000304
    // _0223CA14: .word 0x000011DE
    // TODO: decompile
}




void ov70_0223CA18(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223CA3C ; =0x00000F14
    // ldr r1, [r4, r0]
    // sub r1, r1, #1
    // str r1, [r4, r0]
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223CA36
    // ldr r0, _0223CA3C ; =0x00000F14
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223CA3C: .word 0x00000F14
    // TODO: decompile
}




void ov70_0223CA40(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // ldr r0, _0223CAB4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r1, r0
    // beq _0223CA68
    // mov r1, #0x10
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _0223CAAC
    // mov r0, #0x4a
    // lsl r0, r0, #2
    // ldr r0, [r5, r0]
    // bl ov70_02241164
    // add r4, r0, #0
    // ldr r0, _0223CAB8 ; =0x000011DE
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // beq _0223CAAC
    // cmp r4, #0
    // blt _0223CAAC
    // add r0, r4, #1
    // lsl r0, r0, #2
    // add r1, r5, r0
    // ldr r0, _0223CABC ; =0x00000EE4
    // ldr r0, [r1, r0]
    // lsl r1, r4, #2
    // add r1, #0x10
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #0
    // bl ov70_02238E50
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // str r4, [r5, r0]
    // ldr r0, _0223CAC0 ; =0x000005DC
    // bl PlaySE
    // mov r0, #3
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223CAB4: .word gSystem
    // _0223CAB8: .word 0x000011DE
    // _0223CABC: .word 0x00000EE4
    // _0223CAC0: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223CAC4(void) {
    // push {r4, r5, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // mov r2, #0xba
    // add r5, r0, #0
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, #0x1c
    // ldr r2, [r5, r2]
    // bl ReadMsgDataIntoString
    // ldr r0, _0223CB14 ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223CB14 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _0223CB14 ; =0x00000F18
    // ldr r2, _0223CB18 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add sp, #0xc
    // pop {r4, r5, pc}
    // nop
    // _0223CB14: .word 0x00000F18
    // _0223CB18: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223CB1C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r4, r2, #0
    // add r5, r0, #0
    // add r7, r1, #0
    // add r0, r4, #0
    // mov r1, #0x3d
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0x3f
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x20
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0x41
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x40
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0xab
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r7, #0
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0x43
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r0, #0x60
    // add r1, r6, #0
    // add r3, r2, #0
    // bl ov70_022450B8
    // add r0, r6, #0
    // bl String_Delete
    // add r0, r4, #0
    // mov r1, #0xee
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, _0223CC00 ; =0x000F0200
    // str r2, [sp]
    // add r5, #0x70
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_022450B8
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223CC00: .word 0x000F0200
    // TODO: decompile
}




void ov70_0223CC04(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r7, r1, #0
    // add r6, r2, #0
    // ldr r4, _0223CC60 ; =0x00010200
    // cmp r3, #0
    // beq _0223CC1A
    // ldr r4, _0223CC64 ; =0x000F0200
    // mov r1, #0
    // b _0223CC1C
    // mov r1, #2
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #4
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0x12
    // mov r3, #2
    // bl BgTilemapRectChangePalette
    // add r0, r5, #0
    // mov r1, #1
    // bl BgCommitTilemapBufferToVram
    // add r0, r6, #0
    // mov r1, #0x45
    // bl NewString_ReadMsgData
    // add r5, r0, #0
    // mov r2, #0
    // str r2, [sp]
    // add r0, r7, #0
    // add r1, r5, #0
    // add r3, r2, #0
    // str r4, [sp, #4]
    // bl ov70_022450B8
    // add r0, r5, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _0223CC60: .word 0x00010200
    // _0223CC64: .word 0x000F0200
    // TODO: decompile
}




void ov70_0223CC68(void) {
    // ldrsh r5, [r0, r4]
    // ldrsh r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r4, [r1, r4]
    // ldrsb r5, [r0, r4]
    // ldrsb r0, [r1, r4]
}




void ov70_0223CCA4(void) {
    // push {r4, lr}
    // ldr r3, _0223CD24 ; =0x00000F14
    // add r4, r0, #0
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #0
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #1
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #2
    // mov r2, #3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // mov r1, #3
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // add r2, r1, #0
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #4
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #5
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #6
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // ldr r3, _0223CD24 ; =0x00000F14
    // ldr r0, [r4, #4]
    // ldr r3, [r4, r3]
    // mov r1, #7
    // mov r2, #3
    // neg r3, r3
    // bl BgSetPosTextAndCommit
    // pop {r4, pc}
    // nop
    // _0223CD24: .word 0x00000F14
    // TODO: decompile
}




void ov70_0223CD28(void) {
}




void ov70_0223CD44(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_0223D3BC
    // ldr r2, _0223CDCC ; =0x04000304
    // ldr r0, _0223CDD0 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // ldr r0, [r4, #4]
    // bl ov70_0223CE44
    // add r0, r4, #0
    // bl ov70_0223CF74
    // add r0, r4, #0
    // bl ov70_0223D26C
    // add r0, r4, #0
    // bl ov70_0223D058
    // add r0, r4, #0
    // bl ov70_02241358
    // ldr r0, _0223CDD4 ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // cmp r0, #0
    // bne _0223CD98
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // b _0223CDAE
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r1, #0x12
    // lsl r1, r1, #4
    // ldrh r1, [r4, r1]
    // add r0, r4, #0
    // bl ov70_0223E264
    // add r0, r4, #0
    // bl ov70_02245124
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223CDCC: .word 0x04000304
    // _0223CDD0: .word 0xFFFF7FFF
    // _0223CDD4: .word 0x0400106C
    // TODO: decompile
}




void ov70_0223CDD8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238E44
    // bl sub_0203A930
    // ldr r1, [r4, #0x2c]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _0223CDF4 ; =ov70_022465A8
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // nop
    // _0223CDF4: .word ov70_022465A8
    // TODO: decompile
}




void ov70_0223CDF8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0203A914
    // ldr r0, _0223CE40 ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // cmp r0, #0
    // beq _0223CE10
    // add r0, r4, #0
    // bl ov70_02241380
    // add r0, r4, #0
    // bl ov70_0223D208
    // add r0, r4, #0
    // bl ov70_0223D414
    // add r0, r4, #0
    // bl ov70_0223D378
    // ldr r0, [r4, #4]
    // bl ov70_0223CF48
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223CE40: .word 0x0400106C
    // TODO: decompile
}




void ov70_0223CE44(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _0223CF34 ; =ov70_022456F0
    // add r3, sp, #0x70
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // mov r0, #0x16
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // ldr r5, _0223CF38 ; =ov70_02245768
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223CF3C ; =ov70_02245730
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _0223CF40 ; =ov70_0224574C
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223CF44 ; =ov70_02245714
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_022391F0
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // _0223CF34: .word ov70_022456F0
    // _0223CF38: .word ov70_02245768
    // _0223CF3C: .word ov70_02245730
    // _0223CF40: .word ov70_0224574C
    // _0223CF44: .word ov70_02245714
    // TODO: decompile
}




void ov70_0223CF48(void) {
}




void ov70_0223CF74(void) {
    NARC_New(0x64, 0x3d);
    // str r1, [sp]
    // str r1, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(2, 0, 0);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPalFromOpenNarc(r4, 5, 4, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r6) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r5, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r5, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r4, 0xd, r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x1b, r5, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnDataFromOpenNarc(r4, 0x26, r5, 2);
    ov70_02239C6C(r6);
    ov70_02239CF8(r6);
    NARC_Delete(r4);
}




void ov70_0223D058(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x30
    // mov r2, #0xd6
    // add r7, r0, #0
    // lsl r2, r2, #4
    // add r0, sp, #0
    // add r1, r7, #0
    // add r2, r7, r2
    // mov r3, #1
    // bl ov70_02238B54
    // ldr r0, _0223D1E8 ; =0x00000122
    // ldrh r1, [r7, r0]
    // lsl r2, r1, #2
    // ldr r1, _0223D1EC ; =ov70_02245784
    // ldrh r1, [r1, r2]
    // lsl r1, r1, #0xc
    // str r1, [sp, #8]
    // ldrh r0, [r7, r0]
    // lsl r1, r0, #2
    // ldr r0, _0223D1F0 ; =ov70_02245786
    // ldrh r0, [r0, r1]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223D1F4 ; =0x00000DCC
    // str r0, [r7, r1]
    // ldr r0, [r7, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _0223D1F4 ; =0x00000DCC
    // mov r1, #4
    // ldr r0, [r7, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223D1E8 ; =0x00000122
    // ldrh r0, [r7, r0]
    // cmp r0, #0x1f
    // beq _0223D0B0
    // cmp r0, #5
    // bhi _0223D0BC
    // ldr r0, _0223D1F4 ; =0x00000DCC
    // mov r1, #0
    // ldr r0, [r7, r0]
    // bl Sprite_SetPriority
    // b _0223D0C6
    // ldr r0, _0223D1F4 ; =0x00000DCC
    // mov r1, #1
    // ldr r0, [r7, r0]
    // bl Sprite_SetPriority
    // ldr r4, _0223D1EC ; =ov70_02245784
    // mov r6, #0
    // add r5, r7, #0
    // ldrh r0, [r4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldrh r0, [r4, #2]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #0x14
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223D1F8 ; =0x00000DD8
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // add r1, r6, #6
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223D1F8 ; =0x00000DD8
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #0x1e
    // blt _0223D0CC
    // ldr r4, _0223D1EC ; =ov70_02245784
    // mov r6, #0
    // add r5, r7, #0
    // ldrh r0, [r4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldrh r0, [r4, #2]
    // add r0, r0, #6
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #0xa
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // mov r1, #0xe5
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0x28
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xe5
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #1
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #0x1e
    // blt _0223D10A
    // ldr r4, _0223D1EC ; =ov70_02245784
    // mov r6, #0
    // add r5, r7, #0
    // ldrh r0, [r4]
    // add r0, #8
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldrh r0, [r4, #2]
    // add r0, r0, #6
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // mov r0, #0xa
    // str r0, [sp, #0x24]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223D1FC ; =0x00000EC8
    // str r0, [r5, r1]
    // add r0, r1, #0
    // ldr r0, [r5, r0]
    // mov r1, #0x2a
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223D1FC ; =0x00000EC8
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #6
    // blt _0223D14E
    // ldr r4, _0223D200 ; =ov70_022456E8
    // mov r6, #0
    // add r5, r7, #0
    // ldrh r0, [r4]
    // lsl r0, r0, #0xc
    // str r0, [sp, #8]
    // ldrh r0, [r4, #2]
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223D204 ; =0x00000F04
    // str r0, [r5, r1]
    // add r0, r1, #0
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // add r1, #0x26
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223D204 ; =0x00000F04
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetPriority
    // add r6, r6, #1
    // add r4, r4, #4
    // add r5, r5, #4
    // cmp r6, #2
    // blt _0223D190
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // mov r2, #0x6a
    // ldr r0, [r7, r0]
    // mov r1, #0x37
    // lsl r2, r2, #2
    // bl ov70_02238F9C
    // add sp, #0x30
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223D1E8: .word 0x00000122
    // _0223D1EC: .word ov70_02245784
    // _0223D1F0: .word ov70_02245786
    // _0223D1F4: .word 0x00000DCC
    // _0223D1F8: .word 0x00000DD8
    // _0223D1FC: .word 0x00000EC8
    // _0223D200: .word ov70_022456E8
    // _0223D204: .word 0x00000F04
    // TODO: decompile
}




void ov70_0223D208(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // ldr r7, _0223D25C ; =0x00000F04
    // mov r6, #0
    // add r4, r5, #0
    // ldr r0, [r4, r7]
    // bl Sprite_Delete
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #2
    // blt _0223D212
    // ldr r0, _0223D260 ; =0x00000DCC
    // ldr r0, [r5, r0]
    // bl Sprite_Delete
    // mov r7, #0xe5
    // mov r6, #0
    // add r4, r5, #0
    // lsl r7, r7, #4
    // ldr r0, _0223D264 ; =0x00000DD8
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // ldr r0, [r4, r7]
    // bl Sprite_Delete
    // add r6, r6, #1
    // add r4, r4, #4
    // cmp r6, #0x1e
    // blt _0223D230
    // ldr r6, _0223D268 ; =0x00000EC8
    // mov r4, #0
    // ldr r0, [r5, r6]
    // bl Sprite_Delete
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #6
    // blt _0223D24A
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223D25C: .word 0x00000F04
    // _0223D260: .word 0x00000DCC
    // _0223D264: .word 0x00000DD8
    // _0223D268: .word 0x00000EC8
    // TODO: decompile
}




void ov70_0223D26C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #0xd
    // ldr r1, _0223D358 ; =0x00000F48
    // str r0, [sp, #4]
    // mov r2, #3
    // str r2, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r3, #4
    // bl AddWindowParameterized
    // ldr r0, _0223D358 ; =0x00000F48
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223D358 ; =0x00000F48
    // add r0, r4, r0
    // bl CopyWindowToVram
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // ldr r1, _0223D35C ; =0x00000F18
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // add r0, #0xfc
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r0, _0223D35C ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // ldr r0, _0223D360 ; =0x0000013F
    // ldr r1, _0223D364 ; =0x00001158
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _0223D364 ; =0x00001158
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0
    // str r0, [sp, #0xc]
    // ldr r0, _0223D368 ; =0x00000165
    // ldr r1, _0223D36C ; =0x00000F68
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #1
    // mov r3, #0x18
    // bl AddWindowParameterized
    // ldr r0, _0223D36C ; =0x00000F68
    // mov r1, #6
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r3, #1
    // ldr r0, _0223D370 ; =0x00010306
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r1, _0223D374 ; =0x00000BB8
    // ldr r0, _0223D36C ; =0x00000F68
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0
    // bl ov70_02245084
    // ldr r0, [r4, #0x24]
    // cmp r0, #5
    // bne _0223D34C
    // add r0, r4, #0
    // mov r1, #3
    // bl ov70_02239D44
    // add sp, #0x14
    // pop {r3, r4, pc}
    // add r0, r4, #0
    // mov r1, #1
    // bl ov70_02239D44
    // add sp, #0x14
    // pop {r3, r4, pc}
    // _0223D358: .word 0x00000F48
    // _0223D35C: .word 0x00000F18
    // _0223D360: .word 0x0000013F
    // _0223D364: .word 0x00001158
    // _0223D368: .word 0x00000165
    // _0223D36C: .word 0x00000F68
    // _0223D370: .word 0x00010306
    // _0223D374: .word 0x00000BB8
    // TODO: decompile
}




void ov70_0223D378(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223D3A8 ; =0x00001198
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0223D3AC ; =0x00001158
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0223D3B0 ; =0x00000F68
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0223D3B4 ; =0x00000F18
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0223D3B8 ; =0x00000F48
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _0223D3A8: .word 0x00001198
    // _0223D3AC: .word 0x00001158
    // _0223D3B0: .word 0x00000F68
    // _0223D3B4: .word 0x00000F18
    // _0223D3B8: .word 0x00000F48
    // TODO: decompile
}




void ov70_0223D3BC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x12
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223D400 ; =0x00000BB4
    // str r0, [r4, r1]
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223D404 ; =0x00000BBC
    // str r0, [r4, r1]
    // sub r1, #0x1c
    // ldr r0, [r4, r1]
    // mov r1, #0x6d
    // bl NewString_ReadMsgData
    // ldr r1, _0223D408 ; =0x00000BB8
    // str r0, [r4, r1]
    // ldr r0, _0223D40C ; =0x00000122
    // ldrh r1, [r4, r0]
    // cmp r1, #0x1e
    // bne _0223D3F2
    // mov r1, #0
    // strh r1, [r4, r0]
    // mov r0, #0x3d
    // mov r1, #0x78
    // bl Heap_Alloc
    // ldr r1, _0223D410 ; =0x000011F4
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _0223D400: .word 0x00000BB4
    // _0223D404: .word 0x00000BBC
    // _0223D408: .word 0x00000BB8
    // _0223D40C: .word 0x00000122
    // _0223D410: .word 0x000011F4
    // TODO: decompile
}




void ov70_0223D414(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223D43C ; =0x000011F4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0223D440 ; =0x00000BB4
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _0223D444 ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _0223D448 ; =0x00000BB8
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _0223D43C: .word 0x000011F4
    // _0223D440: .word 0x00000BB4
    // _0223D444: .word 0x00000BBC
    // _0223D448: .word 0x00000BB8
    // TODO: decompile
}




void ov70_0223D44C(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223D486
    // ldr r0, [r5, #0x24]
    // cmp r0, #5
    // bne _0223D464
    // mov r4, #0x15
    // b _0223D46A
    // cmp r0, #6
    // bne _0223D46A
    // mov r4, #0x11
    // ldr r0, _0223D48C ; =0x00000F0F
    // mov r3, #0
    // str r0, [sp]
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #1
    // str r3, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #1
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0223D48C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223D490(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _0223D578 ; =0x00000122
    // add r4, r0, #0
    // ldrh r1, [r4, r1]
    // cmp r1, #0x1e
    // bne _0223D4B4
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223D57C ; =0x000005DC
    // bl PlaySE
    // add sp, #8
    // pop {r4, pc}
    // cmp r1, #0x1f
    // beq _0223D572
    // ldr r0, _0223D57C ; =0x000005DC
    // bl PlaySE
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E5C8
    // cmp r0, #1
    // beq _0223D4DE
    // cmp r0, #2
    // beq _0223D556
    // add sp, #8
    // pop {r4, pc}
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E4DC
    // cmp r0, #0
    // beq _0223D536
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // add r2, r0, #0
    // ldr r0, _0223D580 ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl BufferBoxMonNickname
    // ldr r0, _0223D584 ; =0x00000F0F
    // mov r3, #0
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x16
    // mov r2, #1
    // str r3, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #7
    // bl ov70_02238D84
    // add sp, #8
    // pop {r4, pc}
    // ldr r0, _0223D584 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x1a
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // add sp, #8
    // pop {r4, pc}
    // ldr r0, _0223D584 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x1b
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0223D578: .word 0x00000122
    // _0223D57C: .word 0x000005DC
    // _0223D580: .word 0x00000B9C
    // _0223D584: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223D588(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // ldr r2, _0223D670 ; =0x00000122
    // add r5, r0, #0
    // ldrh r3, [r5, r2]
    // cmp r3, #0x1e
    // bne _0223D5A0
    // mov r1, #6
    // bl ov70_0223D690
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // cmp r3, #0x1f
    // beq _0223D66C
    // ldr r1, [r5]
    // sub r2, r2, #2
    // ldr r0, [r1, #8]
    // ldrh r2, [r5, r2]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E5C8
    // cmp r0, #0
    // beq _0223D666
    // cmp r0, #1
    // beq _0223D5C2
    // cmp r0, #2
    // beq _0223D666
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r5]
    // ldrh r2, [r5, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r5, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // mov r1, #0x35
    // lsl r1, r1, #4
    // add r3, r5, r1
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // ldr r2, [r5, r1]
    // sub r1, #8
    // mul r1, r2
    // add r1, r3, r1
    // add r4, r0, #0
    // bl ov70_0223E658
    // cmp r0, #0
    // beq _0223D65C
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r5]
    // ldrh r2, [r5, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r5, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E4DC
    // cmp r0, #0
    // beq _0223D63C
    // ldr r0, _0223D674 ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl BufferBoxMonNickname
    // ldr r0, _0223D678 ; =0x00000F0F
    // mov r3, #0
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x12
    // mov r2, #1
    // str r3, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #3
    // mov r2, #9
    // bl ov70_02238D84
    // ldr r0, _0223D67C ; =0x000005DC
    // bl PlaySE
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223D678 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x1a
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223D67C ; =0x000005DC
    // bl PlaySE
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // ldr r0, _0223D67C ; =0x000005DC
    // bl PlaySE
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0223D670: .word 0x00000122
    // _0223D674: .word 0x00000B9C
    // _0223D678: .word 0x00000F0F
    // _0223D67C: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223D680(void) {
    // ldr r3, _0223D688 ; =TouchscreenHitbox_FindRectAtTouchNew
    // ldr r0, _0223D68C ; =ov70_02245884
    // bx r3
    // nop
    // _0223D688: .word TouchscreenHitbox_FindRectAtTouchNew
    // _0223D68C: .word ov70_02245884
    // TODO: decompile
}




void ov70_0223D690(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // cmp r1, #5
    // bne _0223D6AC
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223D6C4 ; =0x000005DC
    // bl PlaySE
    // pop {r4, pc}
    // cmp r1, #6
    // bne _0223D6C2
    // mov r1, #3
    // mov r2, #0x11
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223D6C4 ; =0x000005DC
    // bl PlaySE
    // pop {r4, pc}
    // _0223D6C4: .word 0x000005DC
    // TODO: decompile
}




void ov70_0223D6C8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov70_0223D680
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _0223D79A
    // cmp r4, #0x1e
    // beq _0223D75A
    // cmp r4, #0x1f
    // beq _0223D6E8
    // cmp r4, #0x20
    // beq _0223D720
    // b _0223D772
    // ldr r0, _0223D7F0 ; =0x00000F04
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _0223D7F0 ; =0x00000F04
    // mov r1, #0x26
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // mov r1, #0x13
    // mov r2, #1
    // bl ov70_0223D924
    // mov r1, #0x12
    // lsl r1, r1, #4
    // strh r0, [r5, r1]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // bl ov70_0223E264
    // ldr r0, _0223D7F4 ; =0x000005DC
    // bl PlaySE
    // b _0223D7EC
    // ldr r0, _0223D7F8 ; =0x00000F08
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _0223D7F8 ; =0x00000F08
    // mov r1, #0x27
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x12
    // lsl r0, r0, #4
    // mov r1, #0x13
    // add r2, r1, #0
    // ldrh r0, [r5, r0]
    // sub r2, #0x14
    // bl ov70_0223D924
    // mov r1, #0x12
    // lsl r1, r1, #4
    // strh r0, [r5, r1]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // bl ov70_0223E264
    // ldr r0, _0223D7F4 ; =0x000005DC
    // bl PlaySE
    // b _0223D7EC
    // ldr r1, [r5, #0x24]
    // add r0, r5, #0
    // bl ov70_0223D690
    // ldr r1, _0223D7FC ; =0x00000122
    // ldr r0, _0223D800 ; =0x00000DCC
    // strh r4, [r5, r1]
    // ldrh r1, [r5, r1]
    // ldr r0, [r5, r0]
    // bl ov70_0223D8E8
    // b _0223D7EC
    // ldr r1, _0223D7FC ; =0x00000122
    // ldr r0, _0223D800 ; =0x00000DCC
    // strh r4, [r5, r1]
    // ldrh r1, [r5, r1]
    // ldr r0, [r5, r0]
    // bl ov70_0223D8E8
    // ldr r0, [r5, #0x24]
    // cmp r0, #5
    // bne _0223D78E
    // add r0, r5, #0
    // bl ov70_0223D490
    // b _0223D7EC
    // cmp r0, #6
    // bne _0223D7EC
    // add r0, r5, #0
    // bl ov70_0223D588
    // b _0223D7EC
    // add r0, r5, #0
    // bl ov70_0223D808
    // ldr r0, [r5, #0x24]
    // cmp r0, #5
    // bne _0223D7C8
    // ldr r0, _0223D804 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0223D7BA
    // add r0, r5, #0
    // mov r1, #5
    // bl ov70_0223D690
    // b _0223D7EC
    // mov r0, #1
    // tst r0, r1
    // beq _0223D7EC
    // add r0, r5, #0
    // bl ov70_0223D490
    // b _0223D7EC
    // cmp r0, #6
    // bne _0223D7EC
    // ldr r0, _0223D804 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #2
    // tst r0, r1
    // beq _0223D7E0
    // add r0, r5, #0
    // mov r1, #6
    // bl ov70_0223D690
    // b _0223D7EC
    // mov r0, #1
    // tst r0, r1
    // beq _0223D7EC
    // add r0, r5, #0
    // bl ov70_0223D588
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _0223D7F0: .word 0x00000F04
    // _0223D7F4: .word 0x000005DC
    // _0223D7F8: .word 0x00000F08
    // _0223D7FC: .word 0x00000122
    // _0223D800: .word 0x00000DCC
    // _0223D804: .word gSystem
    // TODO: decompile
}




void ov70_0223D808(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0223D8D0 ; =gSystem
    // mov r7, #0
    // ldr r0, [r0, #0x48]
    // mov r1, #0x40
    // add r4, r7, #0
    // tst r1, r0
    // beq _0223D820
    // mov r4, #1
    // b _0223D83C
    // mov r1, #0x80
    // tst r1, r0
    // beq _0223D82A
    // mov r4, #2
    // b _0223D83C
    // mov r1, #0x20
    // tst r1, r0
    // beq _0223D834
    // mov r4, #3
    // b _0223D83C
    // mov r1, #0x10
    // tst r0, r1
    // beq _0223D83C
    // mov r4, #4
    // cmp r4, #0
    // beq _0223D8B4
    // ldr r0, _0223D8D4 ; =0x00000122
    // ldr r1, _0223D8D8 ; =ov70_02245804
    // ldrh r3, [r5, r0]
    // sub r4, r4, #1
    // lsl r2, r3, #2
    // add r1, r1, r2
    // ldrb r4, [r4, r1]
    // cmp r4, r3
    // beq _0223D8B4
    // cmp r4, #0x63
    // beq _0223D85A
    // cmp r4, #0x65
    // bne _0223D8B0
    // cmp r4, #0x65
    // beq _0223D862
    // mov r0, #1
    // b _0223D864
    // mov r0, #0
    // lsl r0, r0, #0x18
    // lsr r6, r0, #0x18
    // ldr r0, _0223D8DC ; =0x00000F04
    // add r0, r5, r0
    // str r0, [sp]
    // lsl r0, r6, #2
    // ldr r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [r1, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r1, [sp]
    // ldr r0, [sp, #4]
    // add r6, #0x26
    // ldr r0, [r1, r0]
    // add r1, r6, #0
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x12
    // lsl r0, r0, #4
    // sub r4, #0x64
    // ldrh r0, [r5, r0]
    // mov r1, #0x13
    // add r2, r4, #0
    // bl ov70_0223D924
    // mov r1, #0x12
    // lsl r1, r1, #4
    // strh r0, [r5, r1]
    // ldrh r1, [r5, r1]
    // add r0, r5, #0
    // bl ov70_0223E264
    // ldr r0, _0223D8E0 ; =0x000005DC
    // bl PlaySE
    // b _0223D8B4
    // mov r7, #1
    // strh r4, [r5, r0]
    // cmp r7, #0
    // beq _0223D8BE
    // ldr r0, _0223D8E0 ; =0x000005DC
    // bl PlaySE
    // ldr r1, _0223D8D4 ; =0x00000122
    // ldr r0, _0223D8E4 ; =0x00000DCC
    // ldrh r1, [r5, r1]
    // ldr r0, [r5, r0]
    // bl ov70_0223D8E8
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223D8D0: .word gSystem
    // _0223D8D4: .word 0x00000122
    // _0223D8D8: .word ov70_02245804
    // _0223D8DC: .word 0x00000F04
    // _0223D8E0: .word 0x000005DC
    // _0223D8E4: .word 0x00000DCC
    // TODO: decompile
}




void ov70_0223D8E8(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, _0223D91C ; =ov70_02245784
    // lsl r3, r4, #2
    // ldr r2, _0223D920 ; =ov70_02245786
    // ldrh r1, [r1, r3]
    // ldrh r2, [r2, r3]
    // add r5, r0, #0
    // bl ov70_02238D8C
    // cmp r4, #0x1f
    // beq _0223D908
    // cmp r4, #0
    // blt _0223D912
    // cmp r4, #5
    // bgt _0223D912
    // add r0, r5, #0
    // mov r1, #0
    // bl Sprite_SetPriority
    // pop {r3, r4, r5, pc}
    // add r0, r5, #0
    // mov r1, #1
    // bl Sprite_SetPriority
    // pop {r3, r4, r5, pc}
    // _0223D91C: .word ov70_02245784
    // _0223D920: .word ov70_02245786
    // TODO: decompile
}




void ov70_0223D924(void) {
    // add r0, r0, r2
    // bpl _0223D92C
}




void ov70_0223D934(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0x3d
    // bl ListMenuItems_New
    // ldr r1, _0223D990 ; =0x000011AC
    // mov r2, #0x62
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ListMenuItems_AppendFromMsgData
    // ldr r0, _0223D990 ; =0x000011AC
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x63
    // mov r3, #2
    // bl ListMenuItems_AppendFromMsgData
    // ldr r0, _0223D990 ; =0x000011AC
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x64
    // mov r3, #3
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0xa
    // bl ov70_02238CAC
    // ldr r1, _0223D994 ; =0x000011D0
    // str r0, [r4, r1]
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223D990: .word 0x000011AC
    // _0223D994: .word 0x000011D0
    // TODO: decompile
}




void ov70_0223D998(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0223DB1C ; =0x000011D0
    // ldr r0, [r5, r0]
    // bl TouchscreenListMenu_HandleInput
    // cmp r0, #3
    // bhi _0223D9BA
    // cmp r0, #1
    // blo _0223D9B8
    // beq _0223D9C6
    // cmp r0, #2
    // beq _0223D9EE
    // cmp r0, #3
    // beq _0223D9C2
    // b _0223DB16
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223D9C4
    // b _0223DAFA
    // b _0223DB16
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DB20 ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldr r0, _0223DB24 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #8
    // mov r2, #5
    // bl ov70_02238E50
    // b _0223DB16
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DB20 ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r5]
    // ldrh r2, [r5, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r5, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // add r4, r0, #0
    // bl ov70_0223E4FC
    // cmp r0, #0
    // beq _0223DA38
    // ldr r0, _0223DB28 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x25
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DB16
    // add r0, r4, #0
    // bl ov70_0223E538
    // cmp r0, #0
    // beq _0223DA76
    // cmp r0, #1
    // ldr r0, _0223DB28 ; =0x00000F0F
    // bne _0223DA5A
    // str r0, [sp]
    // mov r2, #1
    // add r0, r5, #0
    // mov r1, #0xb1
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // b _0223DA6A
    // str r0, [sp]
    // mov r2, #1
    // add r0, r5, #0
    // mov r1, #0xb2
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DB16
    // add r0, r4, #0
    // bl ov70_0223E59C
    // cmp r0, #0
    // beq _0223DA9E
    // ldr r0, _0223DB28 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0xb3
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DB16
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // mov r4, #0
    // bl ov70_0223E490
    // cmp r0, #0
    // beq _0223DACC
    // ldr r1, _0223DB2C ; =0x00000122
    // ldr r0, [r5]
    // ldrh r1, [r5, r1]
    // ldr r0, [r0, #8]
    // bl Party_GetMonByIndex
    // mov r1, #0xa2
    // add r2, r4, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0223DACC
    // mov r0, #0xe
    // mov r4, #1
    // str r0, [r5, #0x2c]
    // cmp r4, #0
    // bne _0223DB16
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r5]
    // ldrh r2, [r5, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r5, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // mov r1, #0x49
    // lsl r1, r1, #2
    // str r0, [r5, r1]
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #6
    // mov r2, #0
    // bl ov70_02238E50
    // b _0223DB16
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DB20 ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldr r0, _0223DB24 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // mov r0, #3
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0223DB1C: .word 0x000011D0
    // _0223DB20: .word 0x000011AC
    // _0223DB24: .word 0x00000F18
    // _0223DB28: .word 0x00000F0F
    // _0223DB2C: .word 0x00000122
    // TODO: decompile
}




void ov70_0223DB30(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #3
    // mov r1, #0x3d
    // bl ListMenuItems_New
    // ldr r1, _0223DB8C ; =0x000011AC
    // mov r2, #0x57
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ListMenuItems_AppendFromMsgData
    // ldr r0, _0223DB8C ; =0x000011AC
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x58
    // mov r3, #2
    // bl ListMenuItems_AppendFromMsgData
    // ldr r0, _0223DB8C ; =0x000011AC
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // mov r2, #0x59
    // mov r3, #3
    // bl ListMenuItems_AppendFromMsgData
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0xa
    // bl ov70_02238CAC
    // ldr r1, _0223DB90 ; =0x000011D0
    // str r0, [r4, r1]
    // mov r0, #0xa
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223DB8C: .word 0x000011AC
    // _0223DB90: .word 0x000011D0
    // TODO: decompile
}




void ov70_0223DB94(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, _0223DCF8 ; =0x000011D0
    // ldr r0, [r5, r0]
    // bl TouchscreenListMenu_HandleInput
    // cmp r0, #3
    // bhi _0223DBB6
    // cmp r0, #1
    // blo _0223DBB4
    // beq _0223DBC2
    // cmp r0, #2
    // beq _0223DBE0
    // cmp r0, #3
    // beq _0223DBBE
    // b _0223DCF0
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223DBC0
    // b _0223DCD4
    // b _0223DCF0
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DCFC ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // mov r0, #2
    // str r0, [r5, #0x2c]
    // add r0, r5, #0
    // mov r1, #8
    // mov r2, #6
    // bl ov70_02238E50
    // b _0223DCF0
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DCFC ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldr r0, _0223DD00 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r5]
    // ldrh r2, [r5, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r5, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // add r4, r0, #0
    // bl ov70_0223E4FC
    // cmp r0, #0
    // beq _0223DC34
    // ldr r0, _0223DD04 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0x25
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DCF0
    // add r0, r4, #0
    // bl ov70_0223E538
    // cmp r0, #0
    // beq _0223DC72
    // cmp r0, #1
    // ldr r0, _0223DD04 ; =0x00000F0F
    // bne _0223DC56
    // str r0, [sp]
    // mov r2, #1
    // add r0, r5, #0
    // mov r1, #0xb1
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // b _0223DC66
    // str r0, [sp]
    // mov r2, #1
    // add r0, r5, #0
    // mov r1, #0xb2
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DCF0
    // add r0, r4, #0
    // bl ov70_0223E59C
    // cmp r0, #0
    // beq _0223DC9A
    // ldr r0, _0223DD04 ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // mov r1, #0xb3
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r5, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // b _0223DCF0
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldrh r0, [r5, r0]
    // mov r4, #0
    // bl ov70_0223E490
    // cmp r0, #0
    // beq _0223DCC8
    // ldr r1, _0223DD08 ; =0x00000122
    // ldr r0, [r5]
    // ldrh r1, [r5, r1]
    // ldr r0, [r0, #8]
    // bl Party_GetMonByIndex
    // mov r1, #0xa2
    // add r2, r4, #0
    // bl GetMonData
    // cmp r0, #0
    // beq _0223DCC8
    // mov r0, #0xb
    // mov r4, #1
    // str r0, [r5, #0x2c]
    // cmp r4, #0
    // bne _0223DCF0
    // add r0, r5, #0
    // bl ov70_0223DE6C
    // b _0223DCF0
    // add r0, r5, #0
    // bl ov70_02238D60
    // ldr r0, _0223DCFC ; =0x000011AC
    // ldr r0, [r5, r0]
    // bl ListMenuItems_Delete
    // ldr r0, _0223DD00 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r5, #0x2c]
    // mov r0, #3
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223DCF8: .word 0x000011D0
    // _0223DCFC: .word 0x000011AC
    // _0223DD00: .word 0x00000F18
    // _0223DD04: .word 0x00000F0F
    // _0223DD08: .word 0x00000122
    // TODO: decompile
}




void ov70_0223DD0C(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _0223DD20
    // cmp r0, #8
    // beq _0223DD20
    // cmp r0, #3
    // bne _0223DD40
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _0223DD64 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // b _0223DD58
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223DD64: .word 0x000011FC
    // TODO: decompile
}




void ov70_0223DD68(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r2, _0223DD8C ; =0x000001AD
    // mov r1, #0xc
    // mov r3, #8
    // bl ov70_02238C14
    // ldr r1, _0223DD90 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #6
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223DD8C: .word 0x000001AD
    // _0223DD90: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223DD94(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223DDB8
    // ldr r0, _0223DDCC ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #2
    // mov r1, #0
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // b _0223DDC8
    // cmp r0, #2
    // bne _0223DDC8
    // ldr r0, _0223DDCC ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223DDCC: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223DDD0(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _0223DDF8 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #1
    // mov r1, #0x19
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0xc
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0223DDF8: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223DDFC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r2, _0223DE20 ; =0x000001AD
    // mov r1, #0xa
    // mov r3, #8
    // bl ov70_02238C14
    // ldr r1, _0223DE24 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #0xd
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223DE20: .word 0x000001AD
    // _0223DE24: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223DE28(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223DE44
    // ldr r0, _0223DE64 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // add r0, r4, #0
    // bl ov70_0223DE6C
    // b _0223DE5E
    // cmp r0, #2
    // bne _0223DE5E
    // ldr r0, _0223DE64 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _0223DE68 ; =0x00001158
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223DE64: .word 0x000011C8
    // _0223DE68: .word 0x00001158
    // TODO: decompile
}




void ov70_0223DE6C(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r2, r4, r0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // mul r0, r1
    // add r0, r2, r0
    // bl ov70_0223E76C
    // cmp r0, #0
    // beq _0223DEC4
    // mov r0, #0x12
    // lsl r0, r0, #4
    // ldrh r0, [r4, r0]
    // cmp r0, #0x12
    // beq _0223DEC4
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _0223DEC4
    // ldr r0, _0223DF0C ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // add r0, r4, #0
    // mov r1, #0x1c
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #1
    // bl ov70_02238D84
    // add sp, #8
    // mov r0, #0
    // pop {r4, pc}
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // mov r1, #0x49
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223DF10 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #9
    // bl ov70_02238E50
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov70_0223E690
    // mov r0, #0x4a
    // mov r1, #0
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #1
    // add sp, #8
    // pop {r4, pc}
    // _0223DF0C: .word 0x00000F0F
    // _0223DF10: .word 0x000011FC
    // TODO: decompile
}




void ov70_0223DF14(void) {
    // push {r4, lr}
    // sub sp, #8
    // ldr r1, _0223DF3C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r2, #1
    // mov r1, #0x19
    // mov r3, #0
    // str r2, [sp, #4]
    // bl ov70_0223E01C
    // add r0, r4, #0
    // mov r1, #3
    // mov r2, #0xf
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0223DF3C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223DF40(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r2, _0223DF64 ; =0x000001AD
    // mov r1, #0xa
    // mov r3, #8
    // bl ov70_02238C14
    // ldr r1, _0223DF68 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #0x10
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223DF64: .word 0x000001AD
    // _0223DF68: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223DF6C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223DFAA
    // ldr r0, _0223DFC8 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r3, #0x12
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // mov r1, #0x49
    // lsl r1, r1, #2
    // str r0, [r4, r1]
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // bl ov70_02238E50
    // b _0223DFC4
    // cmp r0, #2
    // bne _0223DFC4
    // ldr r0, _0223DFC8 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _0223DFCC ; =0x00001158
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // mov r0, #1
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223DFC8: .word 0x000011C8
    // _0223DFCC: .word 0x00001158
    // TODO: decompile
}




void ov70_0223DFD0(void) {
}




void ov70_0223DFF0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xbf
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _0223E014
    // ldr r0, _0223E018 ; =0x00001158
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // ldr r0, [r4, #0x30]
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223E018: .word 0x00001158
    // TODO: decompile
}




void ov70_0223E01C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r6, r2, #0
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r1, _0223E084 ; =0x00000B9C
    // add r2, r7, #0
    // ldr r0, [r5, r1]
    // add r1, #0x20
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // bne _0223E048
    // ldr r0, _0223E088 ; =0x00000F18
    // b _0223E04A
    // ldr r0, _0223E08C ; =0x00001158
    // add r4, r5, r0
    // add r0, r4, #0
    // mov r1, #0xf
    // bl FillWindowPixelBuffer
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r6, [sp, #4]
    // ldr r2, _0223E090 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r4, #0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r7, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0223E084: .word 0x00000B9C
    // _0223E088: .word 0x00000F18
    // _0223E08C: .word 0x00001158
    // _0223E090: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223E094(void) {
    NARC_AllocAndReadWholeMember(r3);
    NNS_G2dGetUnpackedBGCharacterData(r5);
    Heap_Free(r4);
}




void ov70_0223E0BC(void) {
    // str r0, [sp]
    // ldr r4, [sp, #0x28]
    GetMonIconNaixEx(r2, r1);
    // ldr r0, [sp, #0x24]
    // add r2, sp, #8
    ov70_0223E094(r0, 0x3d);
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // add r1, #0xc
    MIi_CpuCopyFast(*((u32*)(r0 + 0x14)), r4, (2 << 8));
    // add r0, #0xc
    // str r0, [r4]
    // ldr r0, [sp, #0x20]
    *((u32*)(r4 + 8)) = ((r7 << 4) << 5);
    // ldr r0, [sp]
    GetMonIconPaletteEx(((r7 << 4) << 5), r5, r6);
    *((u32*)(r4 + 4)) = (r0 + 3);
    // ldr r0, [sp, #4]
    Heap_Free((r0 + 3));
}




void ov70_0223E114(void) {
}




void ov70_0223E120(void) {
    // ldr r5, [r0, r1]
    // str r0, [sp]
    // add r7, #0xc
    // add r0, #0xc
    DC_FlushRange(r5, (2 << 8));
    // add r0, #0xc
    GX_LoadOBJ(r5, *((u32*)r5), r6);
    Sprite_SetPaletteOverride(*((u32*)(r5 + 8)), *((u32*)(r5 + 4)));
    // add r5, r5, r7
    // ldr r0, [sp]
    // ldr r0, [r0, r1]
    Heap_Free((0x12 << 8));
}




void ov70_0223E170(void) {
    // str r1, [sp, #0xc]
    // ldr r4, [sp, #0x40]
    AcquireBoxMonLock();
    GetBoxMonData(r5, 0xac, 0);
    // str r0, [sp, #0x1c]
    GetBoxMonData(r5, 5, 0);
    // strh r0, [r6]
    GetBoxMonData(r5, 0x70, 0);
    // str r0, [sp, #0x10]
    GetBoxMonData(r5, 0x4c, 0);
    // str r0, [sp, #0x14]
    GetBoxMonData(r5, 6, 0);
    // str r0, [sp, #0x18]
    // ldrh r0, [r6]
    // strh r0, [r4]
    GetBoxMonData(r5, 0x6f, 0);
    *((u8*)(r4 + 2)) = (r0 + 1);
    // ldr r0, [sp, #0x14]
    *((u8*)(r4 + 3)) = 0;
    ReleaseBoxMonLock(r5, 1);
    // ldr r0, [sp, #0x1c]
    // ldr r0, [sp, #0xc]
    // ldr r1, [sp, #0x10]
    // str r0, [sp]
    // ldr r0, [sp, #0x3c]
    // ldr r2, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x44]
    // ldr r3, [sp, #0x38]
    // str r0, [sp, #8]
    // ldrh r0, [r6]
    ov70_0223E0BC();
    // ldr r0, [sp, #0xc]
    Sprite_SetDrawFlag(1);
    // ldr r0, [sp, #0x18]
    Sprite_SetDrawFlag(r7, 1);
    // ldr r0, [sp, #0x18]
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
    Sprite_SetAnimCtrlSeq(r7, 0x29);
    Sprite_SetAnimCtrlSeq(r7, 0x28);
    Sprite_SetDrawFlag(r7, 0);
    // ldr r0, [sp, #0xc]
    Sprite_SetDrawFlag(0);
    Sprite_SetDrawFlag(r7, 0);
    // ldr r0, [sp, #0x44]
    *((u32*)(r0 + 8)) = 0;
}




void ov70_0223E264(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x68
    // add r5, r0, #0
    // ldr r0, [r5]
    // str r1, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // ldr r1, _0223E46C ; =0x00003D68
    // str r0, [sp, #0x20]
    // mov r0, #3
    // bl Heap_AllocAtEnd
    // mov r1, #0x12
    // lsl r1, r1, #8
    // str r0, [r5, r1]
    // str r0, [sp, #0x18]
    // mov r0, #0x14
    // mov r1, #0x3d
    // bl NARC_New
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x10]
    // cmp r0, #0
    // blt _0223E326
    // cmp r0, #0x12
    // bge _0223E326
    // ldr r6, _0223E470 ; =0x000011F4
    // mov r4, #0
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    // add r2, r4, #0
    // bl PCStorage_GetMonByIndexPair
    // ldr r2, [r5, r6]
    // lsl r1, r4, #2
    // add r1, r2, r1
    // bl ov70_0223E114
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _0223E29A
    // mov r4, #0
    // ldr r0, _0223E470 ; =0x000011F4
    // lsl r6, r4, #2
    // ldr r1, [r5, r0]
    // mov r0, #0
    // strh r0, [r1, r6]
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    // add r2, r4, #0
    // add r7, r5, r6
    // bl PCStorage_GetMonByIndexPair
    // ldr r1, [sp, #0x1c]
    // str r4, [sp]
    // str r1, [sp, #4]
    // ldr r1, _0223E470 ; =0x000011F4
    // add r2, r4, #0
    // ldr r1, [r5, r1]
    // add r3, sp, #0x2c
    // add r1, r1, r6
    // str r1, [sp, #8]
    // mov r1, #0x83
    // lsl r1, r1, #2
    // mul r2, r1
    // ldr r1, [sp, #0x18]
    // lsl r6, r4, #1
    // add r1, r1, r2
    // str r1, [sp, #0xc]
    // ldr r1, _0223E474 ; =0x00000DD8
    // mov r2, #0xe5
    // lsl r2, r2, #4
    // ldr r1, [r7, r1]
    // ldr r2, [r7, r2]
    // add r3, r3, r6
    // bl ov70_0223E170
    // cmp r4, #6
    // bhs _0223E30E
    // ldr r0, _0223E478 ; =0x00000EC8
    // mov r1, #0
    // ldr r0, [r7, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _0223E2BA
    // ldr r2, _0223E47C ; =0x00000BB4
    // ldr r0, [sp, #0x20]
    // ldr r1, [sp, #0x10]
    // ldr r2, [r5, r2]
    // bl PCStorage_GetBoxName
    // b _0223E414
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // mov r4, #0
    // str r0, [sp, #0x14]
    // cmp r0, #0
    // ble _0223E3B6
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // bl Party_GetMonByIndex
    // str r0, [sp, #0x24]
    // bl Mon_GetBoxMon
    // ldr r1, _0223E470 ; =0x000011F4
    // lsl r6, r4, #2
    // ldr r1, [r5, r1]
    // str r0, [sp, #0x28]
    // add r1, r1, r6
    // bl ov70_0223E114
    // mov r2, #0xe5
    // ldr r0, [sp, #0x1c]
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r0, _0223E470 ; =0x000011F4
    // add r1, r4, #0
    // ldr r0, [r5, r0]
    // add r7, r5, r6
    // add r0, r0, r6
    // str r0, [sp, #8]
    // mov r0, #0x83
    // lsl r0, r0, #2
    // mul r1, r0
    // ldr r0, [sp, #0x18]
    // lsl r2, r2, #4
    // add r0, r0, r1
    // str r0, [sp, #0xc]
    // ldr r1, _0223E474 ; =0x00000DD8
    // ldr r0, [sp, #0x28]
    // ldr r1, [r7, r1]
    // ldr r2, [r7, r2]
    // lsl r6, r4, #1
    // add r3, sp, #0x2c
    // add r3, r3, r6
    // bl ov70_0223E170
    // ldr r0, [sp, #0x24]
    // mov r1, #0xa2
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // ldr r0, _0223E478 ; =0x00000EC8
    // beq _0223E3A2
    // ldr r0, [r7, r0]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // b _0223E3AA
    // ldr r0, [r7, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // ldr r0, [sp, #0x14]
    // cmp r4, r0
    // blt _0223E336
    // cmp r4, #0x1e
    // bhs _0223E404
    // mov r7, #0
    // ldr r0, _0223E470 ; =0x000011F4
    // lsl r1, r4, #2
    // ldr r0, [r5, r0]
    // add r6, r5, r1
    // strh r7, [r0, r1]
    // ldr r0, _0223E474 ; =0x00000DD8
    // add r1, r7, #0
    // ldr r0, [r6, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #0xe5
    // lsl r0, r0, #4
    // ldr r0, [r6, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x83
    // lsl r0, r0, #2
    // add r1, r4, #0
    // mul r1, r0
    // ldr r0, [sp, #0x18]
    // add r1, r0, r1
    // mov r0, #0
    // str r0, [r1, #8]
    // cmp r4, #6
    // bhs _0223E3FA
    // ldr r0, _0223E478 ; =0x00000EC8
    // mov r1, #0
    // ldr r0, [r6, r0]
    // bl Sprite_SetDrawFlag
    // add r0, r4, #1
    // lsl r0, r0, #0x10
    // lsr r4, r0, #0x10
    // cmp r4, #0x1e
    // blo _0223E3BC
    // mov r2, #0xba
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, #0x14
    // ldr r2, [r5, r2]
    // mov r1, #0x5c
    // bl ReadMsgDataIntoString
    // ldr r0, [sp, #0x1c]
    // bl NARC_Delete
    // ldr r0, _0223E480 ; =0x00000F48
    // mov r1, #0
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, _0223E484 ; =0x00010200
    // ldr r1, _0223E47C ; =0x00000BB4
    // str r0, [sp, #4]
    // ldr r0, _0223E480 ; =0x00000F48
    // ldr r1, [r5, r1]
    // add r0, r5, r0
    // mov r2, #0
    // mov r3, #5
    // bl ov70_02245084
    // ldr r0, [r5, #0x24]
    // cmp r0, #6
    // bne _0223E462
    // mov r2, #0x35
    // lsl r2, r2, #4
    // add r4, r5, r2
    // mov r2, #0x4b
    // lsl r2, r2, #2
    // ldr r0, _0223E470 ; =0x000011F4
    // ldr r3, [r5, r2]
    // ldr r1, _0223E474 ; =0x00000DD8
    // sub r2, #8
    // mul r2, r3
    // ldr r0, [r5, r0]
    // ldr r3, [sp, #0x18]
    // add r1, r5, r1
    // add r2, r4, r2
    // bl ov70_0223E738
    // ldr r1, _0223E488 ; =ov70_0223E120
    // ldr r0, _0223E48C ; =0x00001204
    // str r1, [r5, r0]
    // add sp, #0x68
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223E46C: .word 0x00003D68
    // _0223E470: .word 0x000011F4
    // _0223E474: .word 0x00000DD8
    // _0223E478: .word 0x00000EC8
    // _0223E47C: .word 0x00000BB4
    // _0223E480: .word 0x00000F48
    // _0223E484: .word 0x00010200
    // _0223E488: .word ov70_0223E120
    // _0223E48C: .word 0x00001204
    // TODO: decompile
}




void ov70_0223E490(void) {
    // cmp r0, #0x12
    // bne _0223E498
    // mov r0, #1
    // bx lr
    // mov r0, #0
    // bx lr
    // TODO: decompile
}




void ov70_0223E49C(void) {
    ov70_0223E490(r2);
    Party_GetCount(r5);
    Party_GetMonByIndex(r5, r4);
    Mon_GetBoxMon();
    PCStorage_GetMonByIndexPair(r7, r6, r4);
}




void ov70_0223E4DC(void) {
    ov70_0223E490(r2);
    Party_GetCount(r4);
}




void ov70_0223E4FC(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // mov r4, #0
    // bl AcquireBoxMonLock
    // ldr r5, _0223E534 ; =ov70_02245700
    // str r0, [sp]
    // add r6, r4, #0
    // ldrh r1, [r5]
    // add r0, r7, #0
    // mov r2, #0
    // bl GetBoxMonData
    // add r6, r6, #1
    // add r4, r4, r0
    // add r5, r5, #2
    // cmp r6, #0xa
    // blt _0223E50C
    // ldr r1, [sp]
    // add r0, r7, #0
    // bl ReleaseBoxMonLock
    // cmp r4, #0
    // beq _0223E530
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223E534: .word ov70_02245700
    // TODO: decompile
}




void ov70_0223E538(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // bl AcquireBoxMonLock
    // add r7, r0, #0
    // add r0, r5, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // add r4, r0, #0
    // add r0, r5, #0
    // mov r1, #0x70
    // mov r2, #0
    // bl GetBoxMonData
    // add r6, r0, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl ReleaseBoxMonLock
    // cmp r6, #0
    // ble _0223E592
    // ldr r1, _0223E598 ; =0x000001DF
    // cmp r4, r1
    // bgt _0223E574
    // bge _0223E58A
    // cmp r4, #0xac
    // beq _0223E58E
    // b _0223E592
    // add r0, r1, #0
    // add r0, #8
    // cmp r4, r0
    // bgt _0223E584
    // add r1, #8
    // cmp r4, r1
    // beq _0223E58A
    // b _0223E592
    // add r1, #0xd
    // cmp r4, r1
    // bne _0223E592
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #2
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223E598: .word 0x000001DF
    // TODO: decompile
}




void ov70_0223E59C(void) {
    AcquireBoxMonLock();
    GetBoxMonData(r5, 6, 0);
    ReleaseBoxMonLock(r5, r6);
}




void ov70_0223E5C8(void) {
    ov70_0223E49C();
    GetBoxMonData(0, 0xac, 0);
    GetBoxMonData(r4, 0xad, 0);
}




void ov70_0223E5FC(void) {
    // ldrsh r3, [r0, r4]
    // ldrsh r2, [r1, r4]
    // ldrsb r3, [r1, r2]
    // ldrsb r2, [r0, r2]
    // ldrsb r3, [r0, r2]
    // ldrsb r0, [r1, r2]
    // ldrsb r0, [r1, r0]
}




void ov70_0223E658(void) {
}




void ov70_0223E690(void) {
    // ldr r0, [r5, r0]
    GetBoxMonData((0x49 << 2), 5, 0);
    // add r1, sp, #0
    *((u16*)(r1 + 6)) = r0;
    // ldr r0, [r5, r0]
    GetBoxMonData((0x49 << 2), 0x6f, 0);
    // add r0, sp, #0
    *((u8*)(r0 + 8)) = (r0 + 1);
    // ldr r0, [r5, r0]
    CalcBoxMonLevel((0x49 << 2), (r0 + 1));
    // add r1, sp, #0
    *((u8*)(r1 + 9)) = r0;
    // add r0, #0xec
    // strh r2, [r0]
    // add r0, #0xee
    // strh r1, [r0]
    ov70_0223F6E4(r4, r5, *((u16*)(r1 + 6)));
    // add r2, r5, r0
    // ldr r1, [r5, r0]
    // sub r0, #8
    // mul r0, r1
    // add r0, r2, r0
    Mon_GetBoxMon((0x4b << 2));
    GetBoxMonData(5, 0);
    // add r1, sp, #0
    // strh r0, [r1]
    GetBoxMonData(r5, 0x6f, 0);
    // add r1, sp, #0
    *((u8*)(r1 + 2)) = (r0 + 1);
    *((u8*)(r1 + 3)) = 0;
    *((u8*)(r1 + 4)) = 0;
    // ldrh r2, [r1]
    // add r0, #0xf0
    // strh r2, [r0]
    // add r0, #0xf2
    // add r4, #0xf4
    // strh r2, [r0]
    // strh r0, [r4]
}




void ov70_0223E738(void) {
    // ldrsh r0, [r5, r0]
    ov70_0223E5FC(r0, r2);
    *((u32*)(r4 + 4)) = (*((u32*)(r4 + 4)) + 3);
    // add r4, r4, r0
}




void ov70_0223E76C(void) {
    GetMonData(6, 0);
    ItemIdIsMail(((r0 << 0x10) >> 0x10));
}




void ov70_0223E78C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x3c
    // add r4, r0, #0
    // bl ov70_0223ECCC
    // ldr r0, [r4, #4]
    // bl ov70_0223E954
    // add r0, r4, #0
    // bl ov70_0223EA6C
    // add r0, r4, #0
    // bl ov70_0223EB34
    // add r0, r4, #0
    // bl ov70_0223EC0C
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // mov r3, #0
    // bl BeginNormalPaletteFade
    // add r0, r4, #0
    // bl ov70_02245124
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #3
    // mov r2, #0xba
    // str r0, [sp, #4]
    // sub r0, r0, #4
    // lsl r2, r2, #4
    // str r0, [sp, #8]
    // add r1, r2, #4
    // ldr r0, [r4, r2]
    // sub r2, r2, #4
    // ldr r3, _0223E870 ; =0x00001058
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // add r3, r4, r3
    // bl ov70_0223F3D8
    // mov r1, #0x2e
    // lsl r1, r1, #6
    // add r0, r4, r1
    // str r0, [sp]
    // add r0, r1, #0
    // mov r3, #0x49
    // add r0, #0x20
    // add r1, #0x1c
    // ldr r2, _0223E874 ; =0x00001088
    // lsl r3, r3, #2
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r3, [r4, r3]
    // add r2, r4, r2
    // bl ov70_0223F508
    // ldr r0, [r4, #4]
    // mov r3, #0xba
    // ldr r2, _0223E878 ; =0x00000F58
    // str r0, [sp, #0xc]
    // add r0, r4, r2
    // str r0, [sp, #0x10]
    // ldr r0, _0223E87C ; =0x00001168
    // lsl r3, r3, #4
    // add r1, r4, r0
    // str r1, [sp, #0x14]
    // mov r1, #0xdd
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, #0x5c
    // str r1, [sp, #0x18]
    // add r1, r2, #0
    // sub r1, #0x54
    // ldr r1, [r4, r1]
    // sub r2, #0x50
    // str r1, [sp, #0x1c]
    // ldr r1, [r4, r2]
    // mov r2, #0
    // str r2, [sp, #0x24]
    // str r1, [sp, #0x20]
    // ldr r1, [r4, r3]
    // str r1, [sp, #0x28]
    // add r1, r3, #4
    // ldr r1, [r4, r1]
    // add r3, #0x10
    // str r1, [sp, #0x2c]
    // ldr r1, [r4, r3]
    // str r1, [sp, #0x30]
    // ldr r1, [r4]
    // ldr r1, [r1, #0x10]
    // str r1, [sp, #0x34]
    // ldr r0, [r4, r0]
    // mov r1, #2
    // ldr r0, [r0, #0x14]
    // str r0, [sp, #0x38]
    // add r0, sp, #0xc
    // bl ov70_02242014
    // ldr r1, _0223E880 ; =0x000011A8
    // str r0, [r4, r1]
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0x3c
    // pop {r3, r4, pc}
    // nop
    // _0223E870: .word 0x00001058
    // _0223E874: .word 0x00001088
    // _0223E878: .word 0x00000F58
    // _0223E87C: .word 0x00001168
    // _0223E880: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223E884(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238E44
    // bl sub_0203A930
    // ldr r1, [r4, #0x2c]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _0223E8A0 ; =ov70_02246614
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // nop
    // _0223E8A0: .word ov70_02246614
    // TODO: decompile
}




void ov70_0223E8A4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl sub_0203A914
    // add r0, r4, #0
    // bl ov70_0223ECA4
    // ldr r0, _0223E8E4 ; =0x000011A8
    // ldr r0, [r4, r0]
    // bl ov70_0224212C
    // add r0, r4, #0
    // bl ov70_0223ED24
    // add r0, r4, #0
    // bl ov70_0223EBD4
    // ldr r0, [r4, #4]
    // bl ov70_0223EA40
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0223E8E4: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223E8E8(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #0xba
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // add r4, r2, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r1, _0223E948 ; =0x00000B9C
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, #0x20
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // ldr r0, _0223E94C ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _0223E94C ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _0223E94C ; =0x00000F18
    // ldr r2, _0223E950 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r6, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _0223E948: .word 0x00000B9C
    // _0223E94C: .word 0x00000F18
    // _0223E950: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223E954(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x80
    // ldr r5, _0223EA30 ; =ov70_02245970
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x64
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223EA34 ; =ov70_0224598C
    // add r3, sp, #0x48
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // ldr r5, _0223EA38 ; =ov70_02245954
    // add r3, sp, #0x2c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r2, #0
    // str r2, [sp]
    // mov r0, #0x20
    // str r0, [sp, #4]
    // mov r0, #0x18
    // str r0, [sp, #8]
    // add r0, r4, #0
    // mov r1, #2
    // add r3, r2, #0
    // str r2, [sp, #0xc]
    // bl FillBgTilemapRect
    // add r0, r4, #0
    // mov r1, #2
    // bl BgCommitTilemapBufferToVram
    // ldr r5, _0223EA3C ; =ov70_02245938
    // add r3, sp, #0x10
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #3
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #3
    // bl BgClearTilemapBufferAndCommit
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #3
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_022391F0
    // add sp, #0x80
    // pop {r3, r4, r5, pc}
    // _0223EA30: .word ov70_02245970
    // _0223EA34: .word ov70_0224598C
    // _0223EA38: .word ov70_02245954
    // _0223EA3C: .word ov70_02245938
    // TODO: decompile
}




void ov70_0223EA40(void) {
}




void ov70_0223EA6C(void) {
    NARC_New(0x64, 0x3d);
    // str r0, [sp]
    // str r0, [sp, #4]
    GfGfxLoader_GXLoadPal(0x64, 1, 0, 0);
    LoadFontPal1(0, (0x1a << 4), 0x3d);
    Options_GetFrame(*((u32*)(*((u32*)r5) + 0x24)));
    // str r0, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx2(r4, 0, 1, 0xe);
    // str r1, [sp]
    // str r0, [sp, #4]
    LoadUserFrameGfx1(r4, 0, 0x1f, 0xb);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharData(0x64, 0xc, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadScrnData(0x64, 0x1a, r4, 1);
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    GfGfxLoader_LoadCharDataFromOpenNarc(r6, 0xf, r4, 2);
    ov70_02239CF8(r5);
    NARC_Delete(r6);
}




void ov70_0223EB34(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r0, [sp, #0x14]
    // mov r0, #0x15
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r3, #2
    // str r3, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r0, [sp, #0x14]
    // ldr r2, _0223EBC8 ; =0x00000F18
    // ldr r1, [sp, #0x14]
    // ldr r0, [r0, #4]
    // add r1, r1, r2
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r1, _0223EBC8 ; =0x00000F18
    // ldr r0, [sp, #0x14]
    // add r0, r0, r1
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // ldr r1, _0223EBCC ; =0x00001058
    // ldr r0, [sp, #0x14]
    // ldr r4, _0223EBD0 ; =ov70_02245920
    // mov r7, #0
    // mov r6, #0x96
    // add r5, r0, r1
    // ldrh r0, [r4, #2]
    // add r1, r5, #0
    // mov r2, #3
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // lsl r0, r6, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldrh r3, [r4]
    // ldr r0, [sp, #0x14]
    // lsl r3, r3, #0x18
    // ldr r0, [r0, #4]
    // lsr r3, r3, #0x18
    // bl AddWindowParameterized
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r0, r5, #0
    // bl CopyWindowToVram
    // add r7, r7, #1
    // add r6, #0x16
    // add r4, r4, #4
    // add r5, #0x10
    // cmp r7, #6
    // blt _0223EB76
    // ldr r0, [sp, #0x14]
    // mov r1, #3
    // bl ov70_02239D44
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223EBC8: .word 0x00000F18
    // _0223EBCC: .word 0x00001058
    // _0223EBD0: .word ov70_02245920
    // TODO: decompile
}




void ov70_0223EBD4(void) {
    // push {r4, r5, r6, lr}
    // add r6, r0, #0
    // ldr r0, _0223EC00 ; =0x00001198
    // add r0, r6, r0
    // bl RemoveWindow
    // ldr r0, _0223EC04 ; =0x00001058
    // mov r4, #0
    // add r5, r6, r0
    // add r0, r5, #0
    // bl RemoveWindow
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #6
    // blt _0223EBE6
    // ldr r0, _0223EC08 ; =0x00000F18
    // add r0, r6, r0
    // bl RemoveWindow
    // pop {r4, r5, r6, pc}
    // nop
    // _0223EC00: .word 0x00001198
    // _0223EC04: .word 0x00001058
    // _0223EC08: .word 0x00000F18
    // TODO: decompile
}




void ov70_0223EC0C(void) {
    // push {r4, lr}
    // sub sp, #0x30
    // mov r2, #0xd6
    // add r4, r0, #0
    // lsl r2, r2, #4
    // add r0, sp, #0
    // add r1, r4, #0
    // add r2, r4, r2
    // mov r3, #1
    // bl ov70_02238B54
    // mov r0, #0xa
    // lsl r0, r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #2
    // lsl r0, r0, #0x10
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // mov r1, #0xdd
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x2f
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x39
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // mov r0, #0x75
    // lsl r0, r0, #0xc
    // str r0, [sp, #0xc]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223EC9C ; =0x00000F04
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x26
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223EC9C ; =0x00000F04
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #0x23
    // lsl r0, r0, #0xe
    // str r0, [sp, #8]
    // add r0, sp, #0
    // bl Sprite_CreateAffine
    // ldr r1, _0223ECA0 ; =0x00000F08
    // str r0, [r4, r1]
    // ldr r0, [r4, r1]
    // mov r1, #0x27
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _0223ECA0 ; =0x00000F08
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // add sp, #0x30
    // pop {r4, pc}
    // _0223EC9C: .word 0x00000F04
    // _0223ECA0: .word 0x00000F08
    // TODO: decompile
}




void ov70_0223ECA4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xdd
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // ldr r0, _0223ECC4 ; =0x00000F04
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // ldr r0, _0223ECC8 ; =0x00000F08
    // ldr r0, [r4, r0]
    // bl Sprite_Delete
    // pop {r4, pc}
    // _0223ECC4: .word 0x00000F04
    // _0223ECC8: .word 0x00000F08
    // TODO: decompile
}




void ov70_0223ECCC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _0223ED1C ; =0x00000BBC
    // str r0, [r4, r1]
    // mov r0, #0x3d
    // mov r1, #0x30
    // bl Heap_Alloc
    // ldr r1, _0223ED20 ; =0x000011C4
    // mov r2, #0x30
    // str r0, [r4, r1]
    // ldr r1, [r4, r1]
    // mov r0, #0
    // bl MIi_CpuClearFast
    // ldr r2, _0223ED20 ; =0x000011C4
    // mov r0, #0x3d
    // ldr r2, [r4, r2]
    // mov r1, #0
    // add r2, #0x1c
    // bl ov70_0223F634
    // ldr r1, _0223ED20 ; =0x000011C4
    // ldr r1, [r4, r1]
    // str r0, [r1, #0x18]
    // mov r0, #0x3d
    // bl ov70_0223F684
    // ldr r1, _0223ED20 ; =0x000011C4
    // ldr r2, [r4, r1]
    // add r1, #0x70
    // str r0, [r2, #0x14]
    // add r0, r4, r1
    // bl ov70_0223F948
    // pop {r4, pc}
    // _0223ED1C: .word 0x00000BBC
    // _0223ED20: .word 0x000011C4
    // TODO: decompile
}




void ov70_0223ED24(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223ED50 ; =0x000011C4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x14]
    // bl Heap_Free
    // ldr r0, _0223ED50 ; =0x000011C4
    // ldr r0, [r4, r0]
    // ldr r0, [r0, #0x18]
    // bl Heap_Free
    // ldr r0, _0223ED50 ; =0x000011C4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0223ED54 ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // nop
    // _0223ED50: .word 0x000011C4
    // _0223ED54: .word 0x00000BBC
    // TODO: decompile
}




void ov70_0223ED58(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl IsPaletteFadeFinished
    // cmp r0, #0
    // beq _0223ED80
    // ldr r0, _0223ED88 ; =0x00000F0F
    // mov r1, #9
    // str r0, [sp]
    // add r0, r4, #0
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223E8E8
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #1
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0223ED88: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223ED8C(void) {
    // push {r4, lr}
    // ldr r1, _0223EDAC ; =gSystem
    // add r4, r0, #0
    // ldr r2, [r1, #0x48]
    // mov r1, #2
    // tst r1, r2
    // beq _0223EDA6
    // mov r1, #5
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // str r0, [r4, #0x2c]
    // pop {r4, pc}
    // _0223EDAC: .word gSystem
    // TODO: decompile
}




void ov70_0223EDB0(void) {
}




void ov70_0223EDCC(void) {
}




void ov70_0223EDD8(void) {
}




void ov70_0223EDE4(void) {
    *((u8*)(r0 + 2)) = 1;
    *((u8*)(1 + 2)) = 2;
    *((u8*)(1 + 2)) = 3;
}




void ov70_0223EE10(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223EED0 ; =0x000011A8
    // ldr r0, [r4, r0]
    // bl ov70_02242144
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // beq _0223EE2E
    // add r1, r1, #1
    // cmp r0, r1
    // beq _0223EECA
    // b _0223EE5E
    // ldr r0, _0223EED4 ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // mov r1, #5
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223EED8 ; =0x000011C4
    // ldr r3, [r4, r0]
    // add r0, #0x70
    // ldrh r2, [r3, #6]
    // ldrh r1, [r3, #4]
    // add r0, r4, r0
    // add r1, r2, r1
    // ldrh r2, [r3, #0xa]
    // ldrh r3, [r3, #8]
    // bl ov70_0223F960
    // b _0223EECA
    // ldr r1, _0223EEDC ; =0x00000B84
    // strh r0, [r4, r1]
    // mov r1, #0x12
    // bl GetMonBaseStat
    // ldr r1, _0223EED8 ; =0x000011C4
    // ldr r2, [r4, r1]
    // str r0, [r2, #0x20]
    // ldr r1, [r4, r1]
    // ldr r0, _0223EEDC ; =0x00000B84
    // ldr r1, [r1, #0x20]
    // add r0, r4, r0
    // bl ov70_0223EDE4
    // cmp r0, #0
    // beq _0223EE88
    // mov r0, #0xa
    // str r0, [r4, #0x2c]
    // ldr r0, _0223EEE0 ; =0x00000B86
    // ldrsb r1, [r4, r0]
    // b _0223EE8E
    // mov r0, #7
    // str r0, [r4, #0x2c]
    // mov r1, #3
    // ldr r2, _0223EEDC ; =0x00000B84
    // ldr r3, _0223EEE4 ; =0x00001058
    // ldrsh r0, [r4, r2]
    // add r3, r4, r3
    // str r0, [sp]
    // mov r0, #0
    // str r1, [sp, #4]
    // mvn r0, r0
    // str r0, [sp, #8]
    // add r0, r2, #0
    // add r1, r2, #0
    // add r0, #0x1c
    // add r1, #0x20
    // add r2, #0x18
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl ov70_0223F3D8
    // ldr r0, _0223EED8 ; =0x000011C4
    // ldr r3, [r4, r0]
    // add r0, #0x70
    // ldrh r2, [r3, #6]
    // ldrh r1, [r3, #4]
    // add r0, r4, r0
    // add r1, r2, r1
    // ldrh r2, [r3, #0xa]
    // ldrh r3, [r3, #8]
    // bl ov70_0223F960
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0223EED0: .word 0x000011A8
    // _0223EED4: .word 0x00000F18
    // _0223EED8: .word 0x000011C4
    // _0223EEDC: .word 0x00000B84
    // _0223EEE0: .word 0x00000B86
    // _0223EEE4: .word 0x00001058
    // TODO: decompile
}




void ov70_0223EEE8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223EF0C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xa
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223E8E8
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #8
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223EF0C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223EF10(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x46
    // ldr r1, _0223EF30 ; =0x0000FFFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // ldr r0, _0223EF34 ; =0x000011A8
    // mov r1, #1
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223EF30: .word 0x0000FFFF
    // _0223EF34: .word 0x000011A8
    // TODO: decompile
}




void ov70_0223EF38(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223EFA8 ; =0x000011A8
    // ldr r0, [r4, r0]
    // bl ov70_02242144
    // cmp r0, #2
    // bhi _0223EF58
    // cmp r0, #0
    // beq _0223EF70
    // cmp r0, #1
    // beq _0223EF70
    // cmp r0, #2
    // beq _0223EF70
    // b _0223EFA0
    // mov r1, #1
    // mvn r1, r1
    // cmp r0, r1
    // bne _0223EFA0
    // ldr r0, _0223EFAC ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // b _0223EFA0
    // ldr r2, _0223EFB0 ; =0x00000B86
    // add r0, r0, #1
    // strb r0, [r4, r2]
    // mov r1, #0xa
    // str r1, [r4, #0x2c]
    // sub r0, r2, #2
    // ldrsh r0, [r4, r0]
    // ldr r3, _0223EFB4 ; =0x00001058
    // sub r1, #0xb
    // str r0, [sp]
    // ldrsb r0, [r4, r2]
    // add r3, r4, r3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r0, r2, #0
    // add r1, r2, #0
    // add r0, #0x1a
    // add r1, #0x1e
    // add r2, #0x16
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl ov70_0223F3D8
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223EFA8: .word 0x000011A8
    // _0223EFAC: .word 0x00000F18
    // _0223EFB0: .word 0x00000B86
    // _0223EFB4: .word 0x00001058
    // TODO: decompile
}




void ov70_0223EFB8(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223EFDC ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xb
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223E8E8
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #0xb
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223EFDC: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223EFE0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223F000 ; =0x000011A8
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl ov70_022420C4
    // mov r0, #0x46
    // ldr r1, _0223F004 ; =0x0000FFFF
    // lsl r0, r0, #2
    // strh r1, [r4, r0]
    // mov r0, #0xc
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223F000: .word 0x000011A8
    // _0223F004: .word 0x0000FFFF
    // TODO: decompile
}




void ov70_0223F008(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, _0223F09C ; =0x000011A8
    // ldr r0, [r4, r0]
    // bl ov70_02242144
    // add r1, r0, #0
    // cmp r1, #0xc
    // beq _0223F02C
    // mov r0, #1
    // mvn r0, r0
    // cmp r1, r0
    // beq _0223F02C
    // add r0, r0, #1
    // cmp r1, r0
    // beq _0223F096
    // b _0223F054
    // ldr r0, _0223F0A0 ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl ClearFrameAndWindow2
    // ldr r1, _0223F0A4 ; =0x000011C4
    // ldr r0, _0223F0A8 ; =0x00000B84
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // ldr r1, [r1, #0x20]
    // bl ov70_0223EDE4
    // cmp r0, #0
    // beq _0223F04E
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // b _0223F096
    // mov r0, #7
    // str r0, [r4, #0x2c]
    // b _0223F096
    // ldr r0, _0223F0A8 ; =0x00000B84
    // mov r2, #0
    // add r0, r4, r0
    // bl ov70_0223F828
    // mov r0, #0xd
    // ldr r1, _0223F0AC ; =0x00000B87
    // str r0, [r4, #0x2c]
    // ldrsb r0, [r4, r1]
    // add r1, r1, #1
    // ldrsb r1, [r4, r1]
    // mov r2, #0
    // bl ov70_0223F864
    // ldr r2, _0223F0A8 ; =0x00000B84
    // ldr r3, _0223F0B0 ; =0x00001058
    // ldrsh r1, [r4, r2]
    // add r3, r4, r3
    // str r1, [sp]
    // add r1, r2, #2
    // ldrsb r1, [r4, r1]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // add r0, r2, #0
    // add r1, r2, #0
    // add r0, #0x1c
    // add r1, #0x20
    // add r2, #0x18
    // ldr r0, [r4, r0]
    // ldr r1, [r4, r1]
    // ldr r2, [r4, r2]
    // bl ov70_0223F3D8
    // mov r0, #3
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0223F09C: .word 0x000011A8
    // _0223F0A0: .word 0x00000F18
    // _0223F0A4: .word 0x000011C4
    // _0223F0A8: .word 0x00000B84
    // _0223F0AC: .word 0x00000B87
    // _0223F0B0: .word 0x00001058
    // TODO: decompile
}




void ov70_0223F0B4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0223F0D8 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0x17
    // mov r2, #1
    // mov r3, #0
    // bl ov70_0223E8E8
    // add r0, r4, #0
    // mov r1, #0x10
    // mov r2, #0xe
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223F0D8: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0223F0DC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0
    // str r0, [sp]
    // ldr r0, [r4, #4]
    // ldr r2, _0223F100 ; =0x0000011A
    // mov r1, #0xc
    // mov r3, #3
    // bl ov70_02238C14
    // ldr r1, _0223F104 ; =0x000011C8
    // str r0, [r4, r1]
    // mov r0, #0xf
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223F100: .word 0x0000011A
    // _0223F104: .word 0x000011C8
    // TODO: decompile
}




void ov70_0223F108(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _0223F13E
    // ldr r0, _0223F15C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r1, #7
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // ldr r0, _0223F160 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // add r1, r4, #0
    // bl ov70_0223F7A4
    // b _0223F158
    // cmp r0, #2
    // bne _0223F158
    // ldr r0, _0223F15C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r1, #5
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #2
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _0223F15C: .word 0x000011C8
    // _0223F160: .word 0x000011FC
    // TODO: decompile
}




void ov70_0223F164(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // bne _0223F190
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, _0223F1B4 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // b _0223F1A8
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0223F1B4: .word 0x000011FC
    // TODO: decompile
}




void ov70_0223F1B8(void) {
}




void ov70_0223F1D8(void) {
    NewString_ReadMsgData(r1, r2);
    // ldr r0, [sp, #0x1c]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r3, [sp, #0x18]
    ov70_02245084(r6, r0, 0);
    String_Delete(r4);
}




void ov70_0223F20C(void) {
    NewString_ReadMsgData(r1, r2);
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r6, 0, r0, 0);
    String_Delete(r4);
}




void ov70_0223F244(void) {
    NewString_ReadMsgData(r1, r3);
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    ov70_02245084(r4, r0, 0);
    String_Delete(r5);
    NewString_ReadMsgData(r2, 0xad);
    // ldr r0, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // str r0, [sp]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #4]
    ov70_02245084(r4, r0, 0);
    String_Delete(r5);
}




void ov70_0223F2A0(void) {
    // cmp r0, #1
    // bne _0223F2AA
    // ldr r0, _0223F2B8 ; =ov70_022465EC
    // ldr r0, [r0]
    // bx lr
    // cmp r0, #2
    // bne _0223F2B2
    // ldr r0, _0223F2B8 ; =ov70_022465EC
    // ldr r1, [r0, #4]
    // add r0, r1, #0
    // bx lr
    // nop
    // _0223F2B8: .word ov70_022465EC
    // TODO: decompile
}




void ov70_0223F2BC(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r3, #0
    // bne _0223F2CC
    // cmp r5, #3
    // beq _0223F31C
    // add r0, r1, #0
    // ldr r1, _0223F320 ; =ov70_02245910
    // lsl r2, r5, #2
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, [sp, #0x1c]
    // cmp r0, #3
    // ble _0223F2FC
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // bl ov70_0223F2A0
    // mov r1, #0
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov70_02245084
    // b _0223F316
    // ldr r1, [sp, #0x20]
    // add r0, r5, #0
    // bl ov70_0223F2A0
    // ldr r1, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r1, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // add r1, r4, #0
    // mov r2, #0
    // bl ov70_02245084
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0223F320: .word ov70_02245910
    // TODO: decompile
}




void ov70_0223F324(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r5, r2, #0
    // cmp r3, #0
    // bne _0223F334
    // cmp r5, #3
    // beq _0223F368
    // add r0, r1, #0
    // ldr r1, _0223F36C ; =ov70_02245910
    // lsl r2, r5, #2
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r1, [sp, #0x28]
    // add r0, r5, #0
    // bl ov70_0223F2A0
    // ldr r1, [sp, #0x24]
    // ldr r3, [sp, #0x20]
    // str r1, [sp]
    // mov r1, #0xff
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r4, #0
    // str r1, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _0223F36C: .word ov70_02245910
    // TODO: decompile
}




void ov70_0223F370(void) {
}




void ov70_0223F38C(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // add r5, r3, #0
    // cmp r2, r0
    // beq _0223F3CC
    // ldr r0, [sp, #0x24]
    // cmp r0, #0
    // bne _0223F3A6
    // ldr r3, _0223F3D0 ; =ov70_02245A4C
    // b _0223F3A8
    // ldr r3, _0223F3D4 ; =ov70_022459F4
    // add r0, r1, #0
    // lsl r1, r2, #3
    // ldr r1, [r3, r1]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, [sp, #0x20]
    // str r5, [sp]
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x18]
    // ldr r3, [sp, #0x1c]
    // add r0, r6, #0
    // add r1, r4, #0
    // bl ov70_02245084
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r4, r5, r6, pc}
    // _0223F3D0: .word ov70_02245A4C
    // _0223F3D4: .word ov70_022459F4
    // TODO: decompile
}




void ov70_0223F3D8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp, #0x10]
    // mov r1, #0x65
    // str r0, [sp, #0xc]
    // add r6, r3, #0
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // mov r2, #0
    // ldr r0, _0223F468 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r5, r6, #0
    // mov r4, #1
    // add r5, #0x10
    // mov r7, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _0223F404
    // mov r3, #0
    // ldr r0, _0223F46C ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // add r0, #0x10
    // bl ov70_0223F1D8
    // ldr r2, [sp, #0x34]
    // sub r0, r2, #1
    // cmp r0, #1
    // bhi _0223F446
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x46
    // str r0, [sp, #4]
    // ldr r0, _0223F46C ; =0x00010200
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r0, #0x10
    // bl ov70_0223F2BC
    // mov r1, #0
    // ldr r0, _0223F46C ; =0x00010200
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // add r6, #0x20
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x38]
    // add r0, r6, #0
    // mov r3, #2
    // bl ov70_0223F370
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223F468: .word 0x000F0200
    // _0223F46C: .word 0x00010200
    // TODO: decompile
}




void ov70_0223F470(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x18
    // str r1, [sp, #0x10]
    // mov r1, #0x65
    // str r0, [sp, #0xc]
    // add r6, r3, #0
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x14]
    // mov r2, #0
    // ldr r0, _0223F500 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x14]
    // add r0, r6, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r5, r6, #0
    // mov r4, #1
    // add r5, #0x10
    // mov r7, #0
    // add r0, r5, #0
    // add r1, r7, #0
    // bl FillWindowPixelBuffer
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _0223F49C
    // mov r3, #0
    // ldr r0, _0223F504 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r0, r6, #0
    // ldr r1, [sp, #0x10]
    // ldr r2, [sp, #0x30]
    // add r0, #0x10
    // bl ov70_0223F1D8
    // ldr r2, [sp, #0x34]
    // sub r0, r2, #1
    // cmp r0, #1
    // bhi _0223F4DE
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x46
    // str r0, [sp, #4]
    // ldr r0, _0223F504 ; =0x00010200
    // ldr r1, [sp, #0xc]
    // str r0, [sp, #8]
    // add r0, r6, #0
    // add r0, #0x10
    // bl ov70_0223F2BC
    // mov r3, #0
    // ldr r0, _0223F504 ; =0x00010200
    // str r3, [sp]
    // str r0, [sp, #4]
    // add r6, #0x20
    // ldr r1, [sp, #0xc]
    // ldr r2, [sp, #0x38]
    // add r0, r6, #0
    // str r3, [sp, #8]
    // bl ov70_0223F370
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // add sp, #0x18
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223F500: .word 0x000F0200
    // _0223F504: .word 0x00010200
    // TODO: decompile
}




void ov70_0223F508(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x24
    // add r4, r0, #0
    // add r5, r1, #0
    // mov r0, #0xb
    // mov r1, #0x3d
    // str r2, [sp, #8]
    // str r3, [sp, #0xc]
    // ldr r7, [sp, #0x38]
    // bl String_New
    // str r0, [sp, #0x18]
    // mov r0, #0xb
    // mov r1, #0x3d
    // bl String_New
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
    // mov r1, #0x77
    // bl GetBoxMonData
    // ldr r0, [sp, #0xc]
    // mov r1, #0x6f
    // mov r2, #0
    // bl GetBoxMonData
    // add r6, r0, #1
    // ldr r0, [sp, #0xc]
    // bl CalcBoxMonLevel
    // str r0, [sp, #0x10]
    // add r0, r4, #0
    // mov r1, #0x68
    // bl NewString_ReadMsgData
    // str r0, [sp, #0x20]
    // mov r0, #0
    // str r0, [sp]
    // mov r0, #1
    // mov r1, #3
    // str r0, [sp, #4]
    // ldr r2, [sp, #0x10]
    // add r0, r5, #0
    // add r3, r1, #0
    // bl BufferIntegerAsString
    // add r0, r5, #0
    // add r1, r4, #0
    // mov r2, #0x6c
    // mov r3, #0x3d
    // bl ReadMsgData_ExpandPlaceholders
    // str r0, [sp, #0x1c]
    // cmp r6, #3
    // beq _0223F586
    // ldr r1, _0223F624 ; =ov70_02245910
    // lsl r2, r6, #2
    // ldr r1, [r1, r2]
    // ldr r2, [sp, #0x14]
    // add r0, r4, #0
    // bl ReadMsgDataIntoString
    // ldr r5, [sp, #8]
    // mov r4, #0
    // add r0, r5, #0
    // mov r1, #0
    // bl FillWindowPixelBuffer
    // add r4, r4, #1
    // add r5, #0x10
    // cmp r4, #3
    // blt _0223F58A
    // mov r2, #0
    // ldr r0, _0223F628 ; =0x000F0200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x20]
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r2, #0
    // ldr r0, _0223F62C ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x18]
    // add r0, #0x10
    // add r3, r2, #0
    // bl ov70_02245084
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _0223F62C ; =0x00010200
    // mov r2, #0
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // ldr r1, [sp, #0x1c]
    // add r0, #0x20
    // add r3, r2, #0
    // bl ov70_02245084
    // cmp r6, #3
    // beq _0223F5F6
    // sub r0, r6, #1
    // mov r3, #0
    // lsl r1, r0, #2
    // ldr r0, _0223F630 ; =ov70_022465EC
    // str r3, [sp]
    // ldr r0, [r0, r1]
    // ldr r1, [sp, #0x14]
    // str r0, [sp, #4]
    // ldr r0, [sp, #8]
    // mov r2, #0x46
    // add r0, #0x10
    // str r0, [sp, #8]
    // bl ov70_02245084
    // ldr r0, [sp, #0xc]
    // mov r1, #5
    // mov r2, #0
    // bl GetBoxMonData
    // strh r0, [r7]
    // ldr r0, [sp, #0x10]
    // strb r6, [r7, #2]
    // strb r0, [r7, #3]
    // ldr r0, [sp, #0x1c]
    // bl String_Delete
    // ldr r0, [sp, #0x14]
    // bl String_Delete
    // ldr r0, [sp, #0x18]
    // bl String_Delete
    // ldr r0, [sp, #0x20]
    // bl String_Delete
    // add sp, #0x24
    // pop {r4, r5, r6, r7, pc}
    // _0223F624: .word ov70_02245910
    // _0223F628: .word 0x000F0200
    // _0223F62C: .word 0x00010200
    // _0223F630: .word ov70_022465EC
    // TODO: decompile
}




void ov70_0223F634(void) {
}




void ov70_0223F658(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r2, #0
    // lsl r2, r1, #2
    // ldr r1, _0223F680 ; =ov70_02245AAC
    // add r3, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // add r0, sp, #8
    // ldr r1, [r1, r2]
    // str r0, [sp, #4]
    // mov r0, #0x4a
    // mov r2, #0
    // bl GfGfxLoader_LoadFromNarc_GetSizeOut
    // ldr r1, [sp, #8]
    // lsr r1, r1, #1
    // str r1, [r4]
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _0223F680: .word ov70_02245AAC
    // TODO: decompile
}




void ov70_0223F684(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // ldr r1, _0223F6DC ; =0x000001EE
    // add r5, r0, #0
    // mov r0, #0x3d
    // bl Heap_Alloc
    // add r4, r0, #0
    // ldr r2, _0223F6DC ; =0x000001EE
    // mov r0, #0
    // add r1, r4, #0
    // bl MIi_CpuClearFast
    // mov r2, #0
    // str r2, [sp]
    // add r0, sp, #8
    // str r0, [sp, #4]
    // mov r0, #0x4a
    // mov r1, #0xc
    // add r3, r5, #0
    // bl GfGfxLoader_LoadFromNarc_GetSizeOut
    // add r7, r0, #0
    // ldr r0, [sp, #8]
    // ldr r5, _0223F6E0 ; =0x00000000
    // lsr r3, r0, #1
    // beq _0223F6D0
    // ldr r0, _0223F6DC ; =0x000001EE
    // add r6, r7, #0
    // mov r1, #1
    // ldrh r2, [r6]
    // cmp r2, r0
    // bhs _0223F6C8
    // strb r1, [r4, r2]
    // add r5, r5, #1
    // add r6, r6, #2
    // cmp r5, r3
    // blo _0223F6C0
    // add r0, r7, #0
    // bl Heap_Free
    // add r0, r4, #0
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _0223F6DC: .word 0x000001EE
    // _0223F6E0: .word 0x00000000
    // TODO: decompile
}




void ov70_0223F6E4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x12
    // add r4, r1, #0
    // lsl r0, r0, #4
    // ldrh r0, [r4, r0]
    // bl ov70_0223E490
    // cmp r0, #0
    // beq _0223F718
    // mov r0, #0x49
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl Mon_UpdateShayminForm
    // bl SizeOfStructPokemon
    // add r2, r0, #0
    // mov r0, #0x49
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl MIi_CpuCopyFast
    // b _0223F730
    // mov r0, #0x49
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // mov r1, #0
    // bl BoxMon_UpdateShayminForm
    // mov r0, #0x49
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // add r1, r5, #0
    // bl CopyBoxPokemonToPokemon
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetNamePtr
    // add r1, r0, #0
    // mov r0, #0x43
    // lsl r0, r0, #2
    // add r0, r5, r0
    // mov r2, #8
    // bl CopyU16StringArrayN
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetTrainerID_VisibleHalf
    // mov r1, #0x47
    // lsl r1, r1, #2
    // strh r0, [r5, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x18]
    // bl WifiHistory_GetPlayerCountry
    // ldr r1, _0223F798 ; =0x0000011E
    // strb r0, [r5, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x18]
    // bl WiFiHistory_GetPlayerRegion
    // ldr r1, _0223F79C ; =0x0000011F
    // strb r0, [r5, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetAvatar
    // mov r1, #0x12
    // lsl r1, r1, #4
    // strb r0, [r5, r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x1c]
    // bl PlayerProfile_GetTrainerGender
    // add r1, r5, #0
    // add r1, #0xf6
    // strb r0, [r1]
    // ldr r0, _0223F7A0 ; =0x00000122
    // mov r1, #GAME_VERSION
    // strb r1, [r5, r0]
    // mov r1, #2
    // add r0, r0, #1
    // strb r1, [r5, r0]
    // pop {r3, r4, r5, pc}
    // nop
    // _0223F798: .word 0x0000011E
    // _0223F79C: .word 0x0000011F
    // _0223F7A0: .word 0x00000122
    // TODO: decompile
}




void ov70_0223F7A4(void) {
    ov70_0223F6E4();
    // ldrh r2, [r4, r0]
    // add r1, #0xec
    // strh r2, [r1]
    // ldrh r2, [r4, r1]
    // add r1, #0xee
    // strh r2, [r1]
    // ldrh r2, [r4, r1]
    // add r1, #0xf0
    // strh r2, [r1]
    // ldrh r2, [r4, r1]
    // add r1, #0xf2
    // strh r2, [r1]
    // add r0, #8
    // ldrh r0, [r4, r0]
    // add r5, #0xf4
    // strh r0, [r5]
}




void ov70_0223F7E4(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // str r1, [sp]
    // cmp r2, #0
    // bne _0223F7F4
    // ldr r5, _0223F820 ; =ov70_02245A4C
    // mov r6, #0xc
    // b _0223F7F8
    // ldr r5, _0223F824 ; =ov70_022459F4
    // mov r6, #0xb
    // add r0, r6, #0
    // mov r1, #0x3d
    // bl ListMenuItems_New
    // mov r4, #0
    // str r0, [r7]
    // cmp r6, #0
    // ble _0223F81C
    // ldr r0, [r7]
    // ldr r1, [sp]
    // ldr r2, [r5]
    // add r3, r4, #0
    // bl ListMenuItems_AppendFromMsgData
    // add r4, r4, #1
    // add r5, #8
    // cmp r4, r6
    // blt _0223F808
    // add r0, r6, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // _0223F820: .word ov70_02245A4C
    // _0223F824: .word ov70_022459F4
    // TODO: decompile
}




void ov70_0223F828(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // cmp r2, #0
    // bne _0223F83E
    // ldr r6, _0223F85C ; =ov70_02245A4C
    // cmp r4, #0xc
    // blt _0223F848
    // bl GF_AssertFail
    // b _0223F848
    // ldr r6, _0223F860 ; =ov70_022459F4
    // cmp r4, #0xb
    // blt _0223F848
    // bl GF_AssertFail
    // lsl r0, r4, #3
    // add r1, r6, r0
    // mov r0, #4
    // ldrsh r0, [r1, r0]
    // strb r0, [r5, #3]
    // mov r0, #6
    // ldrsh r0, [r1, r0]
    // strb r0, [r5, #4]
    // pop {r4, r5, r6, pc}
    // nop
    // _0223F85C: .word ov70_02245A4C
    // _0223F860: .word ov70_022459F4
    // TODO: decompile
}




void ov70_0223F864(void) {
    // push {r4, r5, r6, r7}
    // cmp r2, #0
    // bne _0223F870
    // ldr r4, _0223F8A0 ; =ov70_02245A4C
    // mov r3, #0xc
    // b _0223F874
    // ldr r4, _0223F8A4 ; =ov70_022459F4
    // mov r3, #0xb
    // mov r2, #0
    // cmp r3, #0
    // ble _0223F898
    // mov r5, #6
    // mov r6, #4
    // ldrsh r7, [r4, r6]
    // cmp r0, r7
    // bne _0223F890
    // ldrsh r7, [r4, r5]
    // cmp r1, r7
    // bne _0223F890
    // add r0, r2, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // add r2, r2, #1
    // add r4, #8
    // cmp r2, r3
    // blt _0223F87E
    // mov r0, #0
    // pop {r4, r5, r6, r7}
    // bx lr
    // nop
    // _0223F8A0: .word ov70_02245A4C
    // _0223F8A4: .word ov70_022459F4
    // TODO: decompile
}




void ov70_0223F8A8(void) {
    // cmp r1, #0
    // bne _0223F8B4
    // ldr r1, _0223F8C8 ; =0x000012CC
    // mov r2, #0
    // str r2, [r0, r1]
    // bx lr
    // sub r1, r1, #1
    // cmp r1, #0x82
    // bhs _0223F8C4
    // lsl r2, r1, #1
    // ldr r1, _0223F8CC ; =ov70_02245B5C
    // ldrh r2, [r1, r2]
    // ldr r1, _0223F8C8 ; =0x000012CC
    // str r2, [r0, r1]
    // bx lr
    // nop
    // _0223F8C8: .word 0x000012CC
    // _0223F8CC: .word ov70_02245B5C
    // TODO: decompile
}




void ov70_0223F8D0(void) {
    // push {r3, r4}
    // ldr r3, _0223F900 ; =ov70_022459C8
    // mov r4, #0
    // ldrb r2, [r3, #1]
    // cmp r0, r2
    // bne _0223F8F0
    // ldr r3, _0223F900 ; =ov70_022459C8
    // lsl r0, r4, #1
    // ldrb r2, [r3, r0]
    // add r0, r4, #1
    // lsl r0, r0, #1
    // str r2, [r1]
    // ldrb r0, [r3, r0]
    // sub r0, r0, r2
    // pop {r3, r4}
    // bx lr
    // add r4, r4, #1
    // add r3, r3, #2
    // cmp r4, #0x16
    // blo _0223F8D6
    // mov r0, #0
    // pop {r3, r4}
    // bx lr
    // nop
    // _0223F900: .word ov70_022459C8
    // TODO: decompile
}




void ov70_0223F904(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // str r1, [sp]
    // add r0, r2, #0
    // add r1, sp, #4
    // bl ov70_0223F8D0
    // mov r1, #0x3d
    // add r7, r0, #0
    // bl ListMenuItems_New
    // str r0, [r5]
    // mov r4, #0
    // b _0223F938
    // ldr r2, [sp, #4]
    // ldr r0, [r5]
    // add r3, r2, r4
    // lsl r6, r3, #1
    // ldr r2, _0223F944 ; =ov70_02245B5C
    // ldr r1, [sp]
    // ldrh r2, [r2, r6]
    // add r3, r3, #1
    // bl ListMenuItems_AppendFromMsgData
    // add r4, r4, #1
    // cmp r4, r7
    // blt _0223F922
    // add r0, r7, #0
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0223F944: .word ov70_02245B5C
    // TODO: decompile
}




void ov70_0223F948(void) {
    *((u16*)(r0 + 4)) = 0;
    *((u16*)(r0 + 0x18)) = 0;
    // strh r1, [r0]
    *((u16*)(r0 + 2)) = 0;
}




void ov70_0223F960(void) {
    // add r0, r0, r1
    *((u16*)(r0 + 4)) = r2;
    *((u16*)(r0 + 0x18)) = r3;
}




void ov70_0223F96C(void) {
    ov70_0223FC40();
    ov70_0223FA08(*((u32*)(r4 + 4)));
    ov70_0223FB60(r4);
    ov70_0223FBF4(r4);
    ov70_02241358(r4);
    // str r0, [sp]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    BeginNormalPaletteFade(3, 1, 1, 0);
    ov70_02245124(r4);
    *((u32*)(r4 + 0x2c)) = 0;
}




void ov70_0223F9B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238E44
    // bl sub_0203A930
    // ldr r1, [r4, #0x2c]
    // add r0, r4, #0
    // lsl r2, r1, #2
    // ldr r1, _0223F9D0 ; =ov70_02246658
    // ldr r1, [r1, r2]
    // blx r1
    // pop {r4, pc}
    // nop
    // _0223F9D0: .word ov70_02246658
    // TODO: decompile
}




void ov70_0223F9D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0223FA04 ; =0x0400106C
    // bl GXx_GetMasterBrightness_
    // cmp r0, #0
    // beq _0223F9E8
    // add r0, r4, #0
    // bl ov70_02241380
    // add r0, r4, #0
    // bl ov70_0223FC58
    // add r0, r4, #0
    // bl ov70_0223FC30
    // ldr r0, [r4, #4]
    // bl ov70_0223FB34
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // _0223FA04: .word 0x0400106C
    // TODO: decompile
}




void ov70_0223FA08(void) {
    // push {r4, r5, lr}
    // sub sp, #0x9c
    // ldr r5, _0223FB1C ; =ov70_02245C60
    // add r3, sp, #0x8c
    // add r4, r0, #0
    // add r2, r3, #0
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // add r0, r2, #0
    // bl SetBothScreensModesAndDisable
    // ldr r5, _0223FB20 ; =ov70_02245CA8
    // add r3, sp, #0x70
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223FB24 ; =ov70_02245C8C
    // add r3, sp, #0x54
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #1
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223FB28 ; =ov70_02245CE0
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #2
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #2
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223FB2C ; =ov70_02245CC4
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0223FB30 ; =ov70_02245C70
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #1
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #0x10
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x9c
    // pop {r4, r5, pc}
    // nop
    // _0223FB1C: .word ov70_02245C60
    // _0223FB20: .word ov70_02245CA8
    // _0223FB24: .word ov70_02245C8C
    // _0223FB28: .word ov70_02245CE0
    // _0223FB2C: .word ov70_02245CC4
    // _0223FB30: .word ov70_02245C70
    // TODO: decompile
}




void ov70_0223FB34(void) {
}




void ov70_0223FB60(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r4, [r5, #4]
    // mov r0, #0x60
    // mov r1, #0
    // str r0, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // mov r0, #0x64
    // add r2, r1, #0
    // add r3, r1, #0
    // bl GfGfxLoader_GXLoadPal
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x3d
    // bl LoadFontPal1
    // ldr r0, [r5]
    // ldr r0, [r0, #0x24]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl LoadUserFrameGfx2
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x1f
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // ldr r0, _0223FBF0 ; =0x000011DC
    // ldrh r0, [r5, r0]
    // cmp r0, #0
    // bne _0223FBD8
    // mov r0, #4
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #5
    // mov r1, #0
    // bl ToggleBgLayer
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // ldr r0, [r5, #0x20]
    // cmp r0, #9
    // bne _0223FBEA
    // add r0, r5, #0
    // bl ov70_02239C6C
    // add r0, r5, #0
    // bl ov70_02239CF8
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FBF0: .word 0x000011DC
    // TODO: decompile
}




void ov70_0223FBF4(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // add r4, r0, #0
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // ldr r1, _0223FC2C ; =0x00000F18
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _0223FC2C ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _0223FC2C: .word 0x00000F18
    // TODO: decompile
}




void ov70_0223FC30(void) {
    // ldr r1, _0223FC38 ; =0x00000F18
    // ldr r3, _0223FC3C ; =RemoveWindow
    // add r0, r0, r1
    // bx r3
    // _0223FC38: .word 0x00000F18
    // _0223FC3C: .word RemoveWindow
    // TODO: decompile
}




void ov70_0223FC40(void) {
}




void ov70_0223FC58(void) {
    // ldr r1, _0223FC60 ; =0x00000BBC
    // ldr r3, _0223FC64 ; =String_Delete
    // ldr r0, [r0, r1]
    // bx r3
    // _0223FC60: .word 0x00000BBC
    // _0223FC64: .word String_Delete
    // TODO: decompile
}




void ov70_0223FC68(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r1, [r4, #0x24]
    // cmp r1, #0xc
    // bhi _0223FD4C
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FC80: ; jump table
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x18
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #2
    // bl ov70_02238D84
    // b _0223FD50
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x18
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #7
    // bl ov70_02238D84
    // b _0223FD50
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x18
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0xc
    // bl ov70_02238D84
    // b _0223FD50
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x18
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0x12
    // bl ov70_02238D84
    // ldr r0, _0223FD60 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // b _0223FD50
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x18
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #0
    // bl ov70_02244FA4
    // mov r0, #0x18
    // str r0, [r4, #0x2c]
    // b _0223FD50
    // ldr r1, _0223FD5C ; =0x00000F0F
    // mov r2, #0x94
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // mov r0, #1
    // str r0, [r4, #0x18]
    // mov r0, #0x1d
    // str r0, [r4, #0x2c]
    // b _0223FD50
    // bl GF_AssertFail
    // add r0, r4, #0
    // bl ov70_02238F64
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0223FD5C: .word 0x00000F0F
    // _0223FD60: .word 0x000011FC
    // TODO: decompile
}




void ov70_0223FD64(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Pokemon_RemoveCapsule
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_02237F64
    // mov r0, #3
    // str r0, [r4, #0x2c]
    // ldr r0, _0223FD94 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #4
    // mov r2, #6
    // bl ov70_02240D44
    // mov r0, #3
    // pop {r4, pc}
    // _0223FD94: .word 0x00001604
    // TODO: decompile
}




void ov70_0223FD98(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0223FE20
    // bl ov70_02237F58
    // ldr r1, _0223FE3C ; =0x00001604
    // mov r2, #0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf
    // cmp r1, #0xf
    // bhi _0223FE36
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FDC2: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // bl ov70_022409C0
    // ldr r0, [r4]
    // mov r1, #0x2d
    // ldr r0, [r0, #0x28]
    // bl GameStats_Inc
    // mov r0, #0x1e
    // str r0, [r4, #0x2c]
    // b _0223FE36
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _0223FE36
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _0223FE36
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _0223FE36
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _0223FE36
    // bl sub_020399EC
    // b _0223FE36
    // ldr r0, _0223FE3C ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _0223FE36
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223FE3C: .word 0x00001604
    // TODO: decompile
}




void ov70_0223FE40(void) {
}




void ov70_0223FE60(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0223FEC6
    // bl ov70_02237F58
    // ldr r1, _0223FEE0 ; =0x00001604
    // mov r2, #0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf
    // cmp r1, #0xf
    // bhi _0223FEDC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FE8A: ; jump table
    // mov r0, #0x21
    // str r0, [r4, #0x2c]
    // b _0223FEDC
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _0223FEDC
    // mov r0, #4
    // bl sub_02039AD8
    // b _0223FEDC
    // bl sub_020399EC
    // b _0223FEDC
    // ldr r0, _0223FEE0 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _0223FEDC
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // _0223FEE0: .word 0x00001604
    // TODO: decompile
}




void ov70_0223FEE4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_02238008
    // mov r0, #8
    // str r0, [r4, #0x2c]
    // ldr r0, _0223FF0C ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // mov r1, #9
    // mov r2, #0xb
    // bl ov70_02240D44
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0223FF0C: .word 0x00001604
    // TODO: decompile
}




void ov70_0223FF10(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0223FFA8
    // bl ov70_02237F58
    // ldr r1, _0223FFC4 ; =0x00001604
    // mov r2, #0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf
    // cmp r1, #0xf
    // bhi _0223FFBE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0223FF3A: ; jump table
    // ldr r0, _0223FFC8 ; =0x0000025D
    // ldrsb r5, [r4, r0]
    // cmp r5, #0
    // beq _0223FF68
    // mov r0, #0x18
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0202DBA0
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r4, r1
    // add r3, r5, #0
    // bl ov70_02240A7C
    // mov r0, #0x1e
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _0223FFBE
    // bl sub_020399EC
    // b _0223FFBE
    // ldr r0, _0223FFC4 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _0223FFBE
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // nop
    // _0223FFC4: .word 0x00001604
    // _0223FFC8: .word 0x0000025D
    // TODO: decompile
}




void ov70_0223FFCC(void) {
}




void ov70_0223FFE8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0224004C
    // bl ov70_02237F58
    // ldr r1, _02240068 ; =0x00001604
    // mov r2, #0
    // add r0, #0xf
    // str r2, [r4, r1]
    // cmp r0, #0xf
    // bhi _02240062
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02240010: ; jump table
    // mov r0, #0x21
    // str r0, [r4, #0x2c]
    // b _02240062
    // mov r0, #3
    // bl sub_02039AD8
    // b _02240062
    // mov r0, #4
    // bl sub_02039AD8
    // b _02240062
    // bl sub_020399EC
    // b _02240062
    // ldr r0, _02240068 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02240062
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02240068: .word 0x00001604
    // TODO: decompile
}




void ov70_0224006C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Pokemon_RemoveCapsule
    // mov r1, #0x4b
    // lsl r1, r1, #2
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #8
    // mul r0, r2
    // add r2, r4, r0
    // mov r0, #0xda
    // lsl r0, r0, #2
    // ldr r0, [r2, r0]
    // ldr r2, _022400B4 ; =0x00000A5C
    // add r1, #0x10
    // add r1, r4, r1
    // add r2, r4, r2
    // bl ov70_02238208
    // add r0, r4, #0
    // mov r1, #0xe
    // mov r2, #0x10
    // bl ov70_02240D44
    // mov r0, #0xd
    // str r0, [r4, #0x2c]
    // ldr r0, _022400B8 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _022400B4: .word 0x00000A5C
    // _022400B8: .word 0x00001604
    // TODO: decompile
}




void ov70_022400BC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0224015E
    // bl ov70_02237F58
    // ldr r2, _02240178 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r2]
    // add r2, r0, #0
    // add r2, #0xf
    // cmp r2, #0xf
    // bhi _02240174
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _022400E6: ; jump table
    // mov r0, #0x1e
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // bl ov70_022409C0
    // mov r2, #0x12
    // lsl r2, r2, #4
    // ldr r1, _0224017C ; =0x00000A5C
    // ldrh r2, [r4, r2]
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov70_02240B9C
    // ldr r0, [r4]
    // ldr r1, _0224017C ; =0x00000A5C
    // ldr r0, [r0, #0x18]
    // add r1, r4, r1
    // bl ov70_02240CE4
    // ldr r1, _0224017C ; =0x00000A5C
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov70_02240500
    // b _02240174
    // str r0, [r4, #0x3c]
    // mov r0, #0x11
    // str r0, [r4, #0x2c]
    // b _02240174
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _02240174
    // str r0, [r4, #0x3c]
    // mov r0, #0x27
    // str r0, [r4, #0x2c]
    // b _02240174
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _02240174
    // bl sub_020399EC
    // b _02240174
    // ldr r0, _02240178 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02240174
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // _02240178: .word 0x00001604
    // _0224017C: .word 0x00000A5C
    // TODO: decompile
}




void ov70_02240180(void) {
}




void ov70_0224019C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _02240200
    // bl ov70_02237F58
    // ldr r1, _0224021C ; =0x00001604
    // mov r2, #0
    // add r0, #0xf
    // str r2, [r4, r1]
    // cmp r0, #0xf
    // bhi _02240216
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022401C4: ; jump table
    // mov r0, #0x21
    // str r0, [r4, #0x2c]
    // b _02240216
    // mov r0, #3
    // bl sub_02039AD8
    // b _02240216
    // mov r0, #4
    // bl sub_02039AD8
    // b _02240216
    // bl sub_020399EC
    // b _02240216
    // ldr r0, _0224021C ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02240216
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _0224021C: .word 0x00001604
    // TODO: decompile
}




void ov70_02240220(void) {
}




void ov70_02240240(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // bne _0224024E
    // b _022403D0
    // bl ov70_02237F58
    // ldr r1, _022403EC ; =0x00001604
    // mov r2, #0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf
    // cmp r1, #0x10
    // bhi _022402B0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _0224026C: ; jump table
    // mov r0, #0x1a
    // str r0, [r4, #0x2c]
    // b _022403E6
    // mov r1, #0x4f
    // mov r0, #1
    // lsl r1, r1, #2
    // strh r0, [r4, #0x36]
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov70_02240D00
    // cmp r0, #0
    // beq _022402FE
    // cmp r0, #1
    // beq _022402B2
    // cmp r0, #2
    // beq _022402D8
    // b _022403E6
    // add r0, r4, #0
    // bl ov70_02238F80
    // ldr r0, _022403F0 ; =0x00000F0F
    // mov r1, #0xba
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x1d
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0x1c
    // bl ov70_02238D84
    // b _022403E6
    // add r0, r4, #0
    // bl ov70_02238F80
    // ldr r0, _022403F0 ; =0x00000F0F
    // mov r1, #0xba
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x23
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0x1c
    // bl ov70_02238D84
    // b _022403E6
    // mov r0, #0x12
    // str r0, [r4, #0x2c]
    // ldr r0, _022403F4 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // b _022403E6
    // strh r2, [r4, #0x36]
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0202DB54
    // cmp r0, #0
    // beq _0224036A
    // mov r0, #0x3d
    // bl AllocMonZeroed
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // ldr r0, [r0]
    // bl sub_0202DB64
    // add r0, r5, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _022403F8 ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl BufferBoxMonNickname
    // mov r0, #2
    // str r0, [r4, #0x28]
    // mov r0, #0x22
    // str r0, [r4, #0x2c]
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0202DBA0
    // add r2, r0, #0
    // add r0, r4, #0
    // add r1, r5, #0
    // mov r3, #0
    // bl ov70_02240A7C
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0]
    // bl sub_0202DB5C
    // add r0, r5, #0
    // bl Heap_Free
    // b _022403E6
    // add r0, r4, #0
    // bl ov70_022404D4
    // b _022403E6
    // strh r2, [r4, #0x36]
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0202DB54
    // cmp r0, #0
    // beq _022403E6
    // mov r0, #0x3d
    // bl AllocMonZeroed
    // add r5, r0, #0
    // ldr r0, [r4]
    // add r1, r5, #0
    // ldr r0, [r0]
    // bl sub_0202DB64
    // add r0, r5, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, _022403F8 ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl BufferBoxMonNickname
    // mov r0, #3
    // str r0, [r4, #0x28]
    // mov r0, #0x22
    // str r0, [r4, #0x2c]
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0]
    // bl sub_0202DB5C
    // add r0, r5, #0
    // bl Heap_Free
    // b _022403E6
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // b _022403E6
    // mov r0, #3
    // mov r1, #1
    // bl ShowCommunicationError
    // b _022403CE
    // ldr r0, _022403EC ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _022403E6
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // nop
    // _022403EC: .word 0x00001604
    // _022403F0: .word 0x00000F0F
    // _022403F4: .word 0x000011FC
    // _022403F8: .word 0x00000B9C
    // TODO: decompile
}




void ov70_022403FC(void) {
}




void ov70_02240410(void) {
}




void ov70_02240430(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _022404B4
    // bl ov70_02237F58
    // ldr r2, _022404D0 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r2]
    // add r2, r0, #0
    // add r2, #0xf
    // cmp r2, #0xf
    // bhi _022404AC
    // add r2, r2, r2
    // add r2, pc
    // ldrh r2, [r2, #6]
    // lsl r2, r2, #0x10
    // asr r2, r2, #0x10
    // add pc, r2
    // _0224045A: ; jump table
    // add r0, r4, #0
    // bl ov70_02240D54
    // cmp r0, #0
    // beq _02240490
    // mov r0, #0x16
    // str r0, [r4, #0x2c]
    // mov r0, #0
    // strh r0, [r4, #0x36]
    // mov r0, #3
    // pop {r4, pc}
    // mov r0, #1
    // strh r0, [r4, #0x36]
    // b _022404AC
    // strh r1, [r4, #0x36]
    // b _022404AC
    // str r0, [r4, #0x3c]
    // mov r0, #0x26
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // add r0, r4, #0
    // bl ov70_022404D4
    // b _022404CA
    // ldr r0, _022404D0 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _022404CA
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _022404D0: .word 0x00001604
    // TODO: decompile
}




void ov70_022404D4(void) {
    ov70_02238E50(1, 0);
    *((u32*)(r4 + 0x2c)) = 0x24;
    ov70_02238E50(0x24, 2, 3);
    *((u32*)(r4 + 0x2c)) = 0x24;
}




void ov70_02240500(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // ldr r0, [r0, #0x28]
    // mov r1, #0x18
    // bl GameStats_AddScore
    // ldr r0, [r5]
    // mov r1, #0x19
    // ldr r0, [r0, #0x28]
    // bl GameStats_Inc
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _0224053C ; =gGameLanguage
    // ldrb r1, [r1]
    // cmp r1, r0
    // beq _0224053A
    // ldr r0, [r5]
    // ldr r0, [r0, #0x20]
    // bl Save_Pokewalker_Get
    // mov r1, #0x14
    // bl Pokewalker_UnlockCourse
    // pop {r3, r4, r5, pc}
    // _0224053C: .word gGameLanguage
    // TODO: decompile
}




void ov70_02240540(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0]
    // bl sub_0202DBA0
    // ldr r3, _02240594 ; =0x0000025D
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // add r2, r0, #0
    // ldrsb r3, [r4, r3]
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov70_02240A7C
    // ldr r0, [r4]
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // ldr r0, [r0, #0x18]
    // add r1, r4, r1
    // bl ov70_02240CE4
    // mov r1, #0x4f
    // lsl r1, r1, #2
    // add r0, r4, #0
    // add r1, r4, r1
    // bl ov70_02240500
    // ldr r0, [r4]
    // mov r1, #0
    // ldr r0, [r0]
    // bl sub_0202DB5C
    // mov r0, #0x1e
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // mov r1, #0x13
    // mov r2, #0xb
    // bl ov70_02240D44
    // mov r0, #3
    // pop {r4, pc}
    // _02240594: .word 0x0000025D
    // TODO: decompile
}




void ov70_02240598(void) {
}




void ov70_022405B4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0224061C
    // bl ov70_02237F58
    // ldr r1, _02240638 ; =0x00001604
    // mov r2, #0
    // str r2, [r4, r1]
    // add r1, r0, #0
    // add r1, #0xf
    // cmp r1, #0xf
    // bhi _02240632
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022405DE: ; jump table
    // mov r0, #0x21
    // str r0, [r4, #0x2c]
    // b _02240632
    // mov r0, #3
    // bl sub_02039AD8
    // b _02240632
    // str r0, [r4, #0x3c]
    // mov r0, #4
    // bl sub_02039AD8
    // b _02240632
    // bl sub_020399EC
    // b _02240632
    // ldr r0, _02240638 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02240632
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02240638: .word 0x00001604
    // TODO: decompile
}




u8 ov70_0224063C(void) {
}




void ov70_02240640(void) {
}




void ov70_02240658(void) {
}




void ov70_02240670(void) {
}




void ov70_02240684(void) {
}




void ov70_0224069C(void) {
}




void ov70_022406B8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _0224072A
    // bl ov70_02237F58
    // ldr r1, _02240744 ; =0x00001604
    // mov r2, #0
    // add r0, #0xf
    // str r2, [r4, r1]
    // cmp r0, #0xf
    // bhi _02240740
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022406E0: ; jump table
    // add r0, r4, #0
    // bl ov70_022404D4
    // b _02240740
    // add r0, r4, #0
    // bl ov70_022404D4
    // add r0, r4, #0
    // bl ov70_022404D4
    // mov r0, #3
    // bl sub_02039AD8
    // b _02240740
    // mov r0, #4
    // bl sub_02039AD8
    // b _02240740
    // bl sub_020399EC
    // b _02240740
    // ldr r0, _02240744 ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02240740
    // bl sub_020399EC
    // mov r0, #3
    // pop {r4, pc}
    // _02240744: .word 0x00001604
    // TODO: decompile
}




void ov70_02240748(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _02240788 ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #0x93
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0x24
    // bl ov70_02238D84
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // add r0, r4, #0
    // bl ov70_02238F80
    // add r0, r4, #0
    // bl ov70_02241234
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02240788: .word 0x00000F0F
    // TODO: decompile
}




void ov70_0224078C(void) {
    // push {r3, lr}
    // ldr r1, [r0, #0x3c]
    // mov r2, #0x9a
    // add r1, #0xf
    // cmp r1, #0xe
    // bhi _022407CC
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022407A4: ; jump table
    // mov r2, #0x1a
    // b _022407CC
    // mov r2, #0x97
    // b _022407CC
    // mov r2, #0x9c
    // ldr r1, _022407E0 ; =0x00000F0F
    // mov r3, #1
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r0, r1]
    // bl ov70_02244FA4
    // pop {r3, pc}
    // nop
    // _022407E0: .word 0x00000F0F
    // TODO: decompile
}




u32 ov70_022407E4(void) {
}




u32 ov70_0224080C(void) {
}




u32 ov70_02240838(void) {
}




void ov70_02240854(void) {
    SetAllPCBoxesModified();
    Save_PrepareForAsyncWrite(*((u32*)(*((u32*)r4) + 0x20)), 2);
    *((u32*)(r4 + 0x2c)) = 0x1f;
    LCRandom(0x1f);
    _s32_div_f(0x3c);
    // str r1, [r4, r0]
}




void ov70_02240884(void) {
    // ldr r2, [r0, r1]
    // str r2, [r0, r1]
    // ldr r1, [r0, r1]
    *((u32*)(r0 + 0x2c)) = 0x20;
}




void ov70_0224089C(void) {
}




void ov70_022408BC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl Save_WriteFileAsync
    // cmp r0, #2
    // bne _022408D8
    // ldr r0, _022408DC ; =0x000011D6
    // ldrh r0, [r4, r0]
    // str r0, [r4, #0x2c]
    // add r0, r4, #0
    // bl ov70_02238F80
    // mov r0, #3
    // pop {r4, pc}
    // _022408DC: .word 0x000011D6
    // TODO: decompile
}




u32 ov70_022408E0(void) {
}




void ov70_022408FC(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl Save_WriteFileAsync
    // cmp r0, #2
    // bne _0224093C
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // add r0, r4, #0
    // bl ov70_02238F80
    // ldr r0, _02240944 ; =0x00000F0F
    // mov r1, #0xba
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // ldr r2, [r4, #0x28]
    // add r0, r4, #0
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x25
    // mov r2, #0x1c
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02240944: .word 0x00000F0F
    // TODO: decompile
}




void ov70_02240948(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_02238F80
    // bl sub_0203A914
    // ldr r0, _0224099C ; =0x000011FC
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bne _02240978
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // b _02240990
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #0
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #3
    // add r2, r1, #0
    // add r3, r1, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _0224099C: .word 0x000011FC
    // TODO: decompile
}




void ov70_022409A0(void) {
}




void ov70_022409C0(void) {
    // push {r4, r5, r6, lr}
    // add r6, r1, #0
    // mov r1, #0x12
    // add r5, r0, #0
    // lsl r1, r1, #4
    // ldrh r0, [r5, r1]
    // cmp r0, #0x12
    // beq _02240A1A
    // mov r0, #0x3d
    // bl AllocMonZeroed
    // mov r2, #0x12
    // lsl r2, r2, #4
    // add r4, r0, #0
    // ldr r0, [r5]
    // ldrh r1, [r5, r2]
    // add r2, r2, #2
    // ldrh r2, [r5, r2]
    // ldr r0, [r0, #0xc]
    // bl PCStorage_GetMonByIndexPair
    // add r1, r4, #0
    // bl CopyBoxPokemonToPokemon
    // mov r2, #0x12
    // ldr r0, [r5]
    // lsl r2, r2, #4
    // ldrh r2, [r5, r2]
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl sub_0202DB70
    // mov r2, #0x12
    // lsl r2, r2, #4
    // ldr r0, [r5]
    // ldrh r1, [r5, r2]
    // add r2, r2, #2
    // ldrh r2, [r5, r2]
    // ldr r0, [r0, #0xc]
    // bl PCStorage_DeleteBoxMonByIndexPair
    // add r0, r4, #0
    // bl Heap_Free
    // b _02240A62
    // ldr r0, [r5]
    // add r1, r1, #2
    // ldrh r1, [r5, r1]
    // ldr r0, [r0, #8]
    // bl Party_GetMonByIndex
    // add r4, r0, #0
    // bl Pokemon_RemoveCapsule
    // mov r2, #0x12
    // ldr r0, [r5]
    // lsl r2, r2, #4
    // ldrh r2, [r5, r2]
    // ldr r0, [r0]
    // add r1, r4, #0
    // bl sub_0202DB70
    // ldr r1, _02240A74 ; =0x00000122
    // ldr r0, [r5]
    // ldrh r1, [r5, r1]
    // ldr r0, [r0, #8]
    // bl Party_RemoveMon
    // ldr r0, [r5]
    // ldr r1, _02240A78 ; =0x000001B9
    // ldr r0, [r0, #8]
    // bl Party_HasMon
    // cmp r0, #0
    // bne _02240A62
    // ldr r0, [r5]
    // ldr r0, [r0, #0x20]
    // bl Save_Chatot_Get
    // bl Chatot_Invalidate
    // cmp r6, #0
    // beq _02240A70
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0]
    // bl sub_0202DB5C
    // pop {r4, r5, r6, pc}
    // nop
    // _02240A74: .word 0x00000122
    // _02240A78: .word 0x000001B9
    // TODO: decompile
}




void ov70_02240A7C(void) {
    // push {r0, r1, r2, r3}
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r4, r1, #0
    // add r5, r0, #0
    // add r0, r4, #0
    // mov r1, #6
    // mov r2, #0
    // add r6, r3, #0
    // bl GetMonData
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #0x20]
    // bl UpdatePokedexWithReceivedSpecies
    // mov r0, #0x12
    // str r0, [sp, #0x20]
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _02240AB0
    // mov r0, #0
    // str r0, [sp, #0x20]
    // cmp r6, #0
    // beq _02240B2C
    // mov r1, #0x46
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02240B98 ; =0x000001ED
    // cmp r0, r1
    // bne _02240B0E
    // add r0, r4, #0
    // mov r1, #0x6e
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02240AF4
    // add r0, r4, #0
    // mov r1, #0x99
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0x56
    // bne _02240B0E
    // add r0, r4, #0
    // mov r1, #0x6e
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02240B0E
    // ldr r0, [r5]
    // ldr r0, [r0, #0x20]
    // bl Save_VarsFlags_Get
    // add r6, r0, #0
    // bl Save_VarsFlags_GetVar404C
    // cmp r0, #0
    // bne _02240B0E
    // add r0, r6, #0
    // mov r1, #1
    // bl Save_VarsFlags_SetVar404C
    // add r0, r4, #0
    // mov r1, #9
    // add r2, sp, #0
    // bl SetMonData
    // add r0, r4, #0
    // mov r1, #0x6f
    // mov r2, #0
    // bl SetMonData
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0]
    // bl ov70_02240CA0
    // ldr r0, [sp, #0x20]
    // cmp r0, #0x12
    // bne _02240B54
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // bl Party_AddMon
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // mov r1, #0x4d
    // mov r2, #0x12
    // lsl r1, r1, #2
    // str r2, [r5, r1]
    // sub r2, r0, #1
    // add r0, r1, #4
    // str r2, [r5, r0]
    // b _02240B84
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r1, sp, #0x20
    // ldr r0, [r0, #0xc]
    // add r2, sp, #4
    // bl PCStorage_FindFirstEmptySlot
    // add r0, r4, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5]
    // ldr r1, [sp, #0x20]
    // ldr r0, [r0, #0xc]
    // bl PCStorage_PlaceMonInBoxFirstEmptySlot
    // mov r0, #0x4d
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r1, [sp, #4]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, [r5]
    // mov r1, #0
    // ldr r0, [r0]
    // bl sub_0202DB5C
    // add sp, #8
    // pop {r4, r5, r6}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // _02240B98: .word 0x000001ED
    // TODO: decompile
}




void ov70_02240B9C(void) {
    // push {r0, r1, r2, r3}
    // push {r4, r5, r6, lr}
    // sub sp, #8
    // add r5, r0, #0
    // ldr r0, [r5]
    // add r4, r1, #0
    // ldr r0, [r0, #0x20]
    // bl UpdatePokedexWithReceivedSpecies
    // mov r0, #0x12
    // str r0, [sp, #0x20]
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _02240BC2
    // mov r0, #0
    // str r0, [sp, #0x20]
    // add r0, r4, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // ldr r1, _02240C9C ; =0x000001ED
    // cmp r0, r1
    // bne _02240C16
    // add r0, r4, #0
    // mov r1, #0x6e
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02240BFC
    // add r0, r4, #0
    // mov r1, #0x99
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0x56
    // bne _02240C16
    // add r0, r4, #0
    // mov r1, #0x6e
    // mov r2, #0
    // bl GetMonData
    // cmp r0, #0
    // bne _02240C16
    // ldr r0, [r5]
    // ldr r0, [r0, #0x20]
    // bl Save_VarsFlags_Get
    // add r6, r0, #0
    // bl Save_VarsFlags_GetVar404C
    // cmp r0, #0
    // bne _02240C16
    // add r0, r6, #0
    // mov r1, #1
    // bl Save_VarsFlags_SetVar404C
    // mov r1, #0x46
    // add r0, sp, #0
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r1, #9
    // add r2, sp, #0
    // bl SetMonData
    // add r0, r4, #0
    // mov r1, #0x6f
    // mov r2, #0
    // bl SetMonData
    // ldr r0, [sp, #0x20]
    // cmp r0, #0x12
    // bne _02240C58
    // ldr r0, [r5]
    // add r1, r4, #0
    // ldr r0, [r0, #8]
    // bl Party_AddMon
    // ldr r0, [r5]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // mov r1, #0x4d
    // mov r2, #0x12
    // lsl r1, r1, #2
    // str r2, [r5, r1]
    // sub r2, r0, #1
    // add r0, r1, #4
    // str r2, [r5, r0]
    // b _02240C88
    // mov r0, #0
    // str r0, [sp, #4]
    // ldr r0, [r5]
    // add r1, sp, #0x20
    // ldr r0, [r0, #0xc]
    // add r2, sp, #4
    // bl PCStorage_FindFirstEmptySlot
    // add r0, r4, #0
    // bl Mon_GetBoxMon
    // add r2, r0, #0
    // ldr r0, [r5]
    // ldr r1, [sp, #0x20]
    // ldr r0, [r0, #0xc]
    // bl PCStorage_PlaceMonInBoxFirstEmptySlot
    // mov r0, #0x4d
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #2
    // str r1, [r5, r0]
    // ldr r1, [sp, #4]
    // add r0, r0, #4
    // str r1, [r5, r0]
    // ldr r0, [r5]
    // mov r1, #1
    // ldr r0, [r0]
    // bl ov70_02240CA0
    // add sp, #8
    // pop {r4, r5, r6}
    // pop {r3}
    // add sp, #0x10
    // bx r3
    // _02240C9C: .word 0x000001ED
    // TODO: decompile
}




void ov70_02240CA0(void) {
    // add r0, sp, #0xc
    // add r1, sp, #0
    ov00_021ECB94();
    // ldr r0, [sp, #0x14]
    // ldr r3, [sp, #0x10]
    // ldr r0, [sp, #0xc]
    // ldr r2, [sp, #0x18]
    // orr r0, r3
    // orr r0, r1
    // orr r1, r0
    sub_0202DB98(r5, r2, ((r3 << 0x18) >> 8));
    sub_0202DB88(r5);
}




void ov70_02240CE4(void) {
}




void ov70_02240D00(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // add r0, r1, #0
    // bl ov70_0223E76C
    // cmp r0, #0
    // beq _02240D1E
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _02240D1E
    // mov r0, #2
    // pop {r4, pc}
    // ldr r0, _02240D40 ; =0x000011F8
    // ldrh r1, [r4, r0]
    // mov r0, #0x87
    // lsl r0, r0, #2
    // cmp r1, r0
    // bne _02240D3A
    // ldr r0, [r4]
    // ldr r0, [r0, #8]
    // bl Party_GetCount
    // cmp r0, #6
    // bne _02240D3A
    // mov r0, #1
    // pop {r4, pc}
    // mov r0, #0
    // pop {r4, pc}
    // nop
    // _02240D40: .word 0x000011F8
    // TODO: decompile
}




void ov70_02240D44(void) {
    // ldr r3, _02240D50 ; =0x000011D4
    // strh r1, [r0, r3]
    // add r1, r3, #2
    // strh r2, [r0, r1]
    // bx lr
    // nop
    // _02240D50: .word 0x000011D4
    // TODO: decompile
}




void ov70_02240D54(void) {
}




void ov70_02240D74(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x34
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov70_0224127C
    // ldr r2, _02240ED8 ; =0x00000D84
    // add r0, sp, #4
    // add r1, r5, #0
    // add r2, r5, r2
    // mov r3, #2
    // bl ov70_02238B54
    // mov r0, #2
    // str r0, [sp, #0x2c]
    // lsl r0, r0, #0x12
    // str r0, [sp, #0xc]
    // ldr r0, _02240EDC ; =0x00182000
    // str r0, [sp, #0x10]
    // add r0, sp, #4
    // bl Sprite_CreateAffine
    // ldr r1, _02240EE0 ; =0x00000EE4
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _02240EE0 ; =0x00000EE4
    // mov r1, #2
    // ldr r0, [r5, r0]
    // bl Sprite_SetPriority
    // ldr r0, _02240EE0 ; =0x00000EE4
    // mov r1, #7
    // mul r1, r4
    // ldr r0, [r5, r0]
    // add r1, r1, #3
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02240EE0 ; =0x00000EE4
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #0
    // ldr r6, _02240EE4 ; =ov70_02245D0A
    // str r0, [sp]
    // add r4, r5, #0
    // mov r7, #0xe
    // add r0, sp, #4
    // bl Sprite_CreateAffine
    // ldr r1, _02240EE8 ; =0x00000EE8
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r0, [r4, r0]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _02240EE8 ; =0x00000EE8
    // add r1, r7, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02240EE8 ; =0x00000EE8
    // mov r1, #0
    // ldr r0, [r4, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02240EE8 ; =0x00000EE8
    // ldrh r1, [r6]
    // ldrh r2, [r6, #2]
    // ldr r0, [r4, r0]
    // bl ov70_022410F0
    // ldr r0, _02240EE8 ; =0x00000EE8
    // mov r1, #2
    // ldr r0, [r4, r0]
    // bl Sprite_SetPriority
    // ldr r0, [sp]
    // add r4, r4, #4
    // add r0, r0, #1
    // add r7, r7, #4
    // add r6, r6, #4
    // str r0, [sp]
    // cmp r0, #7
    // blt _02240DD8
    // add r0, sp, #4
    // bl Sprite_CreateAffine
    // ldr r1, _02240EEC ; =0x00000F0C
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // ldr r0, _02240EEC ; =0x00000F0C
    // mov r1, #0x2b
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02240EEC ; =0x00000F0C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // ldr r0, _02240EEC ; =0x00000F0C
    // mov r1, #0x80
    // ldr r0, [r5, r0]
    // mov r2, #0x56
    // bl ov70_022410F0
    // ldr r0, _02240EEC ; =0x00000F0C
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetPriority
    // add r0, sp, #4
    // bl Sprite_CreateAffine
    // mov r1, #0xf1
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // mov r1, #1
    // bl Sprite_SetAnimActiveFlag
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0x2a
    // bl Sprite_SetAnimCtrlSeq
    // mov r2, #0xf1
    // lsl r2, r2, #4
    // ldr r0, [r5, r2]
    // add r2, r2, #4
    // ldr r3, [r5, r2]
    // mov r2, #0x6a
    // lsl r2, r2, #2
    // mov r1, #0x37
    // add r2, r3, r2
    // bl ov70_02238F9C
    // mov r0, #0xf1
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r7, _02240EF0 ; =0x0000120C
    // mov r4, #0
    // add r6, r7, #2
    // ldr r0, _02240EE0 ; =0x00000EE4
    // ldr r0, [r5, r0]
    // bl Sprite_GetMatrixPtr
    // ldr r1, [r0]
    // add r4, r4, #1
    // asr r2, r1, #0xb
    // lsr r2, r2, #0x14
    // add r2, r1, r2
    // asr r1, r2, #0xc
    // strh r1, [r5, r7]
    // ldr r1, [r0, #4]
    // asr r0, r1, #0xb
    // lsr r0, r0, #0x14
    // add r0, r1, r0
    // asr r0, r0, #0xc
    // strh r0, [r5, r6]
    // add r5, r5, #4
    // cmp r4, #8
    // blt _02240EAA
    // add sp, #0x34
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02240ED8: .word 0x00000D84
    // _02240EDC: .word 0x00182000
    // _02240EE0: .word 0x00000EE4
    // _02240EE4: .word ov70_02245D0A
    // _02240EE8: .word 0x00000EE8
    // _02240EEC: .word 0x00000F0C
    // _02240EF0: .word 0x0000120C
    // TODO: decompile
}




void ov70_02240EF4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // bl ov70_02240D74
    // ldr r0, _02240F30 ; =ov70_02240F58
    // mov r1, #0x10
    // mov r2, #5
    // mov r3, #0x3d
    // bl CreateSysTaskAndEnvironment
    // ldr r1, _02240F34 ; =0x000011D8
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // bl SysTask_GetData
    // mov r1, #0
    // add r2, r1, #0
    // str r1, [r0]
    // sub r2, #0x28
    // str r2, [r0, #4]
    // str r4, [r0, #8]
    // str r5, [r0, #0xc]
    // bl ov70_02240F3C
    // ldr r0, _02240F38 ; =0x0000062E
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // nop
    // _02240F30: .word ov70_02240F58
    // _02240F34: .word 0x000011D8
    // _02240F38: .word 0x0000062E
    // TODO: decompile
}




void ov70_02240F3C(void) {
    // add r3, r0, #0
    // ldr r2, [r3, #0xc]
    // ldr r0, _02240F50 ; =0x00000EE4
    // ldr r3, [r3, #8]
    // ldr r0, [r2, r0]
    // mov r2, #7
    // mul r2, r3
    // ldr r3, _02240F54 ; =sub_020248F0
    // add r1, r1, r2
    // bx r3
    // _02240F50: .word 0x00000EE4
    // _02240F54: .word Sprite_SetAnimCtrlSeq
    // TODO: decompile
}




void ov70_02240F58(void) {
    // push {r4, r5, r6, lr}
    // add r4, r1, #0
    // add r6, r0, #0
    // ldr r0, [r4]
    // ldr r5, [r4, #0xc]
    // cmp r0, #3
    // bhi _02240FF6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02240F72: ; jump table
    // ldr r0, [r4, #4]
    // cmp r0, #0xa0
    // ble _02240F8E
    // mov r0, #0xa0
    // str r0, [r4, #4]
    // mov r1, #1
    // add r0, r4, #0
    // str r1, [r4]
    // bl ov70_02240F3C
    // ldr r0, [r4, #4]
    // mov r1, #0x80
    // add r2, r0, #5
    // ldr r0, _02240FF8 ; =0x00000EE4
    // str r2, [r4, #4]
    // ldr r0, [r5, r0]
    // bl ov70_022410F0
    // pop {r4, r5, r6, pc}
    // ldr r0, _02240FF8 ; =0x00000EE4
    // ldr r0, [r5, r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _02240FF6
    // add r0, r4, #0
    // mov r1, #2
    // bl ov70_02240F3C
    // mov r0, #2
    // str r0, [r4]
    // pop {r4, r5, r6, pc}
    // ldr r0, [r4, #4]
    // cmp r0, #0x8a
    // bgt _02240FD0
    // mov r0, #0x8a
    // str r0, [r4, #4]
    // mov r1, #3
    // add r0, r4, #0
    // str r1, [r4]
    // bl ov70_02240F3C
    // b _02240FD4
    // sub r0, r0, #2
    // str r0, [r4, #4]
    // ldr r0, _02240FF8 ; =0x00000EE4
    // ldr r2, [r4, #4]
    // ldr r0, [r5, r0]
    // mov r1, #0x80
    // bl ov70_022410F0
    // pop {r4, r5, r6, pc}
    // ldr r0, _02240FFC ; =0x0000060C
    // bl PlaySE
    // ldr r1, [r4, #0xc]
    // ldr r0, _02241000 ; =0x000011DC
    // mov r2, #1
    // strh r2, [r1, r0]
    // add r0, r6, #0
    // bl DestroySysTaskAndEnvironment
    // pop {r4, r5, r6, pc}
    // _02240FF8: .word 0x00000EE4
    // _02240FFC: .word 0x0000060C
    // _02241000: .word 0x000011DC
    // TODO: decompile
}




void ov70_02241004(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r0, _0224103C ; =ov70_02241048
    // mov r1, #0x10
    // mov r2, #5
    // mov r3, #0x3d
    // bl CreateSysTaskAndEnvironment
    // ldr r1, _02241040 ; =0x000011D8
    // str r0, [r5, r1]
    // ldr r0, [r5, r1]
    // bl SysTask_GetData
    // mov r1, #0
    // str r1, [r0]
    // mov r1, #0x8a
    // str r1, [r0, #4]
    // str r4, [r0, #8]
    // mov r1, #5
    // str r5, [r0, #0xc]
    // bl ov70_02240F3C
    // ldr r0, _02241044 ; =0x0000060D
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // nop
    // _0224103C: .word ov70_02241048
    // _02241040: .word 0x000011D8
    // _02241044: .word 0x0000060D
    // TODO: decompile
}




void ov70_02241048(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // ldr r1, [r4]
    // ldr r5, [r4, #0xc]
    // cmp r1, #3
    // bhi _022410E0
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02241060: ; jump table
    // ldr r0, [r4, #4]
    // cmp r0, #0xa0
    // ble _0224107E
    // mov r0, #0xa0
    // str r0, [r4, #4]
    // mov r0, #1
    // str r0, [r4]
    // add r0, r4, #0
    // mov r1, #6
    // bl ov70_02240F3C
    // ldr r0, [r4, #4]
    // mov r1, #0x80
    // add r2, r0, #2
    // ldr r0, _022410E4 ; =0x00000EE4
    // str r2, [r4, #4]
    // ldr r0, [r5, r0]
    // bl ov70_022410F0
    // pop {r3, r4, r5, pc}
    // ldr r0, _022410E4 ; =0x00000EE4
    // ldr r0, [r5, r0]
    // bl Sprite_IsAnimated
    // cmp r0, #0
    // bne _022410E0
    // add r0, r4, #0
    // mov r1, #0
    // bl ov70_02240F3C
    // mov r0, #2
    // str r0, [r4]
    // ldr r0, _022410E8 ; =0x0000062F
    // bl PlaySE
    // pop {r3, r4, r5, pc}
    // mov r0, #0x13
    // ldr r1, [r4, #4]
    // mvn r0, r0
    // cmp r1, r0
    // bge _022410C4
    // mov r1, #3
    // add r0, r4, #0
    // str r1, [r4]
    // bl ov70_02240F3C
    // ldr r0, [r4, #4]
    // mov r1, #0x80
    // sub r2, r0, #5
    // ldr r0, _022410E4 ; =0x00000EE4
    // str r2, [r4, #4]
    // ldr r0, [r5, r0]
    // bl ov70_022410F0
    // pop {r3, r4, r5, pc}
    // ldr r1, _022410EC ; =0x000011DC
    // mov r2, #1
    // strh r2, [r5, r1]
    // bl DestroySysTaskAndEnvironment
    // pop {r3, r4, r5, pc}
    // nop
    // _022410E4: .word 0x00000EE4
    // _022410E8: .word 0x0000062F
    // _022410EC: .word 0x000011DC
    // TODO: decompile
}




void ov70_022410F0(void) {
    _fflt((r1 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r1 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // sub r5, #8
    // str r0, [sp]
    _fflt((r5 << 0xc));
    _fadd((0x3f << 0x18), r0);
    _fflt((r5 << 0xc));
    _fsub((0x3f << 0x18));
    _ffix();
    // add r0, r0, r1
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // add r1, sp, #0
    Sprite_SetMatrix(r4, (1 << 0x14));
}




void ov70_02241164(void) {
}




void ov70_02241184(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x14
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // str r2, [sp, #0xc]
    // add r0, r1, #0
    // beq _0224119E
    // add r0, r2, #0
    // cmp r0, #1
    // bne _0224119E
    // ldr r0, _02241218 ; =0x0000064E
    // bl PlaySE
    // ldr r4, [sp, #4]
    // mov r0, #0xe
    // mov r6, #0
    // str r0, [sp, #0x10]
    // add r5, r4, #0
    // mov r7, #0x11
    // ldr r0, [sp, #8]
    // cmp r6, r0
    // bge _022411F4
    // ldr r0, _0224121C ; =0x00000356
    // ldr r1, [sp, #4]
    // ldrb r0, [r4, r0]
    // mov r3, #0xe
    // add r2, r1, #0
    // str r0, [sp]
    // ldr r0, _02241220 ; =0x000011E4
    // lsl r3, r3, #6
    // ldr r0, [r1, r0]
    // ldr r1, _02241224 ; =0x000011EC
    // ldrb r3, [r4, r3]
    // ldr r1, [r2, r1]
    // add r2, r6, #0
    // bl ov70_022412C8
    // ldr r0, [sp, #0xc]
    // cmp r0, #0
    // ldr r0, _02241228 ; =0x00000EE8
    // beq _022411E0
    // ldr r0, [r5, r0]
    // ldr r1, [sp, #0x10]
    // bl Sprite_SetAnimCtrlSeq
    // b _022411E8
    // ldr r0, [r5, r0]
    // add r1, r7, #0
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, _02241228 ; =0x00000EE8
    // mov r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // b _022411FE
    // ldr r0, _02241228 ; =0x00000EE8
    // mov r1, #0
    // ldr r0, [r5, r0]
    // bl Sprite_SetDrawFlag
    // mov r0, #0x49
    // lsl r0, r0, #2
    // add r4, r4, r0
    // ldr r0, [sp, #0x10]
    // add r6, r6, #1
    // add r0, r0, #4
    // str r0, [sp, #0x10]
    // add r5, r5, #4
    // add r7, r7, #4
    // cmp r6, #7
    // blt _022411AA
    // add sp, #0x14
    // pop {r4, r5, r6, r7, pc}
    // _02241218: .word 0x0000064E
    // _0224121C: .word 0x00000356
    // _02241220: .word 0x000011E4
    // _02241224: .word 0x000011EC
    // _02241228: .word 0x00000EE8
    // TODO: decompile
}




void ov70_0224122C(void) {
    // add r0, #0xe
}




void ov70_02241234(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _02241278 ; =0x00000EE8
    // add r5, r0, #0
    // mov r4, #0
    // ldr r0, [r5, r7]
    // bl Sprite_GetDrawFlag
    // cmp r0, #0
    // beq _0224126E
    // ldr r0, _02241278 ; =0x00000EE8
    // ldr r0, [r5, r0]
    // bl Sprite_GetAnimationNumber
    // add r6, r0, #0
    // add r0, r4, #0
    // bl ov70_0224122C
    // add r0, r0, #1
    // cmp r6, r0
    // beq _0224126E
    // add r0, r4, #0
    // bl ov70_0224122C
    // add r1, r0, #0
    // ldr r0, _02241278 ; =0x00000EE8
    // add r1, r1, #1
    // ldr r0, [r5, r0]
    // bl Sprite_SetAnimCtrlSeq
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #7
    // blt _0224123C
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241278: .word 0x00000EE8
    // TODO: decompile
}




void ov70_0224127C(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r2, _022412BC ; =0x000011EC
    // add r4, r0, #0
    // mov r0, #0x54
    // mov r1, #0xb
    // add r2, r4, r2
    // mov r3, #0x3d
    // bl GfGfxLoader_GetPlttData
    // ldr r3, _022412C0 ; =0x000011E8
    // mov r1, #0xc
    // str r0, [r4, r3]
    // mov r0, #0x3d
    // sub r3, r3, #4
    // str r0, [sp]
    // mov r0, #0x54
    // mov r2, #1
    // add r3, r4, r3
    // bl GfGfxLoader_GetCharData
    // ldr r1, _022412C4 ; =0x000011E0
    // str r0, [r4, r1]
    // add r0, r1, #4
    // mov r1, #2
    // ldr r0, [r4, r0]
    // lsl r1, r1, #0xe
    // bl DC_FlushRange
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _022412BC: .word 0x000011EC
    // _022412C0: .word 0x000011E8
    // _022412C4: .word 0x000011E0
    // TODO: decompile
}




void ov70_022412C8(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r7, r0, #0
    // add r6, r1, #0
    // ldr r0, [sp, #0x18]
    // add r1, r3, #0
    // add r5, r2, #0
    // bl SpriteToUnionRoomAvatarIdx
    // add r4, r0, #0
    // mov r0, #6
    // lsl r0, r0, #8
    // ldr r1, [r7, #0x14]
    // mul r0, r4
    // add r0, r1, r0
    // ldr r1, _02241304 ; =ov70_02245CFC
    // lsl r2, r5, #1
    // ldrh r1, [r1, r2]
    // mov r2, #2
    // ldr r6, [r6, #0xc]
    // lsl r2, r2, #8
    // bl GXS_LoadOBJ
    // lsl r0, r4, #5
    // add r1, r5, #2
    // add r0, r6, r0
    // lsl r1, r1, #5
    // mov r2, #0x20
    // bl GXS_LoadOBJPltt
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241304: .word ov70_02245CFC
    // TODO: decompile
}




void ov70_02241308(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02241328 ; =0x000011DC
    // ldrh r1, [r4, r0]
    // cmp r1, #0
    // beq _02241324
    // add r0, #0xc
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // ldr r0, _0224132C ; =0x000011E0
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // pop {r4, pc}
    // nop
    // _02241328: .word 0x000011DC
    // _0224132C: .word 0x000011E0
    // TODO: decompile
}




void ov70_02241330(void) {
    // push {r4, lr}
    // lsl r4, r1, #2
    // ldr r1, _0224134C ; =0x00000F0C
    // ldr r3, _02241350 ; =ov70_02245D0C
    // ldr r0, [r0, r1]
    // ldr r1, _02241354 ; =ov70_02245D0A
    // ldrh r3, [r3, r4]
    // ldrh r1, [r1, r4]
    // add r3, #0x20
    // add r2, r2, r3
    // bl ov70_022410F0
    // pop {r4, pc}
    // nop
    // _0224134C: .word 0x00000F0C
    // _02241350: .word ov70_02245D0C
    // _02241354: .word ov70_02245D0A
    // TODO: decompile
}




void ov70_02241358(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _02241378 ; =0x0000120C
    // add r5, r0, #0
    // mov r4, #0
    // add r6, r7, #2
    // ldr r0, _0224137C ; =0x00000EE4
    // ldrsh r1, [r5, r7]
    // ldrsh r2, [r5, r6]
    // ldr r0, [r5, r0]
    // bl ov70_02238F9C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #8
    // blt _02241362
    // pop {r3, r4, r5, r6, r7, pc}
    // _02241378: .word 0x0000120C
    // _0224137C: .word 0x00000EE4
    // TODO: decompile
}




void ov70_02241380(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r7, _022413A4 ; =0x0000120C
    // add r5, r0, #0
    // mov r4, #0
    // add r6, r7, #2
    // ldr r0, _022413A8 ; =0x00000EE4
    // ldrsh r2, [r5, r6]
    // ldrsh r1, [r5, r7]
    // ldr r0, [r5, r0]
    // add r2, #0x20
    // bl ov70_02238F9C
    // add r4, r4, #1
    // add r5, r5, #4
    // cmp r4, #8
    // blt _0224138A
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _022413A4: .word 0x0000120C
    // _022413A8: .word 0x00000EE4
    // TODO: decompile
}




void ov70_022413AC(void) {
    // push {r4, lr}
    // mov r3, #0x12
    // add r4, r0, #0
    // lsl r3, r3, #4
    // ldr r1, [r4]
    // ldrh r2, [r4, r3]
    // add r3, r3, #2
    // ldr r0, [r1, #8]
    // ldrh r3, [r4, r3]
    // ldr r1, [r1, #0xc]
    // bl ov70_0223E49C
    // add r1, r4, #0
    // add r1, #0xbc
    // str r0, [r1]
    // add r0, r4, #0
    // mov r1, #2
    // add r0, #0xcd
    // strb r1, [r0]
    // add r0, r4, #0
    // mov r2, #1
    // add r0, #0xcf
    // strb r2, [r0]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0xd0
    // strb r1, [r0]
    // add r0, r4, #0
    // add r0, #0xce
    // strb r2, [r0]
    // add r0, r4, #0
    // add r0, #0xd4
    // strh r1, [r0]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl sub_02088288
    // add r1, r4, #0
    // add r1, #0xe8
    // str r0, [r1]
    // ldr r0, [r4]
    // ldr r1, [r0, #0x30]
    // add r0, r4, #0
    // add r0, #0xd8
    // str r1, [r0]
    // ldr r0, [r4]
    // ldr r1, [r0, #0x24]
    // add r0, r4, #0
    // add r0, #0xc0
    // str r1, [r0]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl Save_SpecialRibbons_Get
    // add r1, r4, #0
    // add r1, #0xdc
    // str r0, [r1]
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl sub_0208828C
    // add r1, r4, #0
    // add r1, #0xf0
    // str r0, [r1]
    // add r0, r4, #0
    // ldr r1, _02241460 ; =ov70_02245D48
    // add r0, #0xbc
    // bl sub_02089D40
    // ldr r1, [r4]
    // add r0, r4, #0
    // ldr r1, [r1, #0x1c]
    // add r0, #0xbc
    // bl sub_0208AD34
    // add r1, r4, #0
    // ldr r0, _02241464 ; =gOverlayTemplate_PokemonSummary
    // add r1, #0xbc
    // mov r2, #0x3d
    // bl OverlayManager_New
    // add r1, r4, #0
    // add r1, #0xb8
    // str r0, [r1]
    // mov r0, #0x45
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #2
    // pop {r4, pc}
    // _02241460: .word ov70_02245D48
    // _02241464: .word gOverlayTemplate_PokemonSummary
    // TODO: decompile
}




void ov70_02241468(void) {
    // add r0, #0xb8
    OverlayManager_Run(*((u32*)r0));
    // add r0, #0xb8
    OverlayManager_Delete(*((u32*)r5));
    ov70_02238E50(r5, 5, *((u32*)(r5 + 0x24)));
}




void ov70_02241494(void) {
}




void ov70_022414A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x3d
    // bl AllocMonZeroed
    // ldr r1, _02241640 ; =0x000011F0
    // str r0, [r4, r1]
    // ldr r0, [r4, #0x24]
    // cmp r0, #0xa
    // bls _022414B6
    // b _02241618
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _022414C2: ; jump table
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xf8
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xf8
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0xfc
    // str r1, [r0]
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_0224182C
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // add r0, r1, #0
    // mov r2, #3
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // mov r0, #2
    // sub r1, #0x28
    // str r0, [r4, r1]
    // b _02241618
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xfc
    // str r0, [r1]
    // add r0, r4, #0
    // add r0, #0xfc
    // ldr r1, [r0]
    // add r0, r4, #0
    // add r0, #0xf8
    // str r1, [r0]
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_0224182C
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // add r0, r1, #0
    // mov r2, #3
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // mov r0, #4
    // sub r1, #0x28
    // str r0, [r4, r1]
    // b _02241618
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xfc
    // str r0, [r1]
    // ldr r0, [r4]
    // ldr r1, _02241640 ; =0x000011F0
    // ldr r0, [r0]
    // ldr r1, [r4, r1]
    // bl sub_0202DB64
    // ldr r0, _02241640 ; =0x000011F0
    // ldr r0, [r4, r0]
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xf8
    // str r0, [r1]
    // mov r0, #0x4f
    // lsl r0, r0, #2
    // add r0, r4, r0
    // bl ov70_0224182C
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // add r0, r1, #0
    // mov r2, #3
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // mov r0, #1
    // sub r1, #0x28
    // str r0, [r4, r1]
    // b _02241618
    // ldr r0, [r4]
    // ldr r1, [r4, r1]
    // ldr r0, [r0]
    // bl sub_0202DB64
    // ldr r0, _02241640 ; =0x000011F0
    // ldr r0, [r4, r0]
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xf8
    // str r0, [r1]
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r2, r4, r0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // mul r0, r1
    // add r0, r2, r0
    // bl Mon_GetBoxMon
    // add r1, r4, #0
    // add r1, #0xfc
    // str r0, [r1]
    // mov r0, #0x26
    // lsl r0, r0, #4
    // add r2, r4, r0
    // mov r0, #0x4b
    // lsl r0, r0, #2
    // ldr r1, [r4, r0]
    // sub r0, #8
    // mul r0, r1
    // add r0, r2, r0
    // bl ov70_0224182C
    // mov r1, #0x13
    // lsl r1, r1, #4
    // str r0, [r4, r1]
    // add r0, r1, #0
    // ldr r2, [r4, r1]
    // sub r0, #0x30
    // str r2, [r4, r0]
    // add r0, r1, #0
    // mov r2, #3
    // sub r0, #0x2c
    // str r2, [r4, r0]
    // mov r0, #1
    // sub r1, #0x28
    // str r0, [r4, r1]
    // ldr r0, [r4]
    // mov r2, #0x3d
    // ldr r1, [r0, #0x24]
    // mov r0, #0x43
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // add r1, r4, #0
    // ldr r0, _02241644 ; =ov70_02245D50
    // add r1, #0xf8
    // bl OverlayManager_New
    // add r1, r4, #0
    // add r1, #0xb8
    // str r0, [r1]
    // mov r0, #0x45
    // mov r1, #1
    // lsl r0, r0, #2
    // str r1, [r4, r0]
    // mov r0, #2
    // pop {r4, pc}
    // _02241640: .word 0x000011F0
    // _02241644: .word ov70_02245D50
    // TODO: decompile
}




void ov70_02241648(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r5, r0, #0
    // ldr r0, [r5, #0x2c]
    // mov r4, #3
    // cmp r0, #0
    // beq _0224165E
    // cmp r0, #1
    // bne _0224165C
    // b _022417C8
    // b _022417FE
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl OverlayManager_Run
    // cmp r0, #0
    // bne _0224166E
    // b _022417FE
    // add r0, r5, #0
    // add r0, #0xb8
    // ldr r0, [r0]
    // bl OverlayManager_Delete
    // ldr r1, [r5, #0x24]
    // cmp r1, #9
    // bne _022416E8
    // add r0, r5, #0
    // bl ov70_02241868
    // mov r1, #6
    // mov r2, #0
    // add r6, r0, #0
    // bl GetMonData
    // add r3, r0, #0
    // add r0, sp, #0x28
    // lsl r3, r3, #0x10
    // str r0, [sp]
    // mov r0, #0
    // add r1, r6, #0
    // mov r2, #1
    // lsr r3, r3, #0x10
    // bl GetMonEvolution
    // add r2, r0, #0
    // beq _022416DA
    // ldr r3, [r5]
    // add r1, r6, #0
    // ldr r0, [r3, #0x38]
    // str r0, [sp]
    // ldr r0, [r3, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [r3, #0x2c]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x28]
    // str r0, [sp, #0x10]
    // mov r0, #4
    // str r0, [sp, #0x14]
    // mov r0, #0x3d
    // str r0, [sp, #0x18]
    // ldr r3, [r3, #0x24]
    // mov r0, #0
    // bl sub_02075A7C
    // mov r1, #0x11
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [r5, #0x2c]
    // b _022417FE
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r4, #4
    // b _022417FE
    // cmp r1, #8
    // beq _022416F0
    // cmp r1, #0xa
    // bne _022417BA
    // add r0, r5, #0
    // bl ov70_02241868
    // add r6, r0, #0
    // mov r0, #0x3d
    // bl AllocMonZeroed
    // add r7, r0, #0
    // ldr r0, [r5]
    // add r1, r7, #0
    // ldr r0, [r0]
    // bl sub_0202DB64
    // add r0, r6, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // str r0, [sp, #0x1c]
    // add r0, r7, #0
    // mov r1, #5
    // mov r2, #0
    // bl GetMonData
    // ldr r1, [sp, #0x1c]
    // cmp r1, r0
    // bne _02241742
    // mov r1, #0
    // add r0, r6, #0
    // add r2, r1, #0
    // bl GetMonData
    // mov r1, #0
    // str r0, [sp, #0x20]
    // add r0, r7, #0
    // add r2, r1, #0
    // bl GetMonData
    // ldr r1, [sp, #0x20]
    // cmp r1, r0
    // beq _022417A6
    // add r0, r6, #0
    // mov r1, #6
    // mov r2, #0
    // bl GetMonData
    // add r3, r0, #0
    // add r0, sp, #0x24
    // lsl r3, r3, #0x10
    // str r0, [sp]
    // mov r0, #0
    // add r1, r6, #0
    // mov r2, #1
    // lsr r3, r3, #0x10
    // bl GetMonEvolution
    // add r2, r0, #0
    // beq _02241798
    // ldr r3, [r5]
    // add r1, r6, #0
    // ldr r0, [r3, #0x38]
    // str r0, [sp]
    // ldr r0, [r3, #0x10]
    // str r0, [sp, #4]
    // ldr r0, [r3, #0x2c]
    // str r0, [sp, #8]
    // ldr r0, [r3, #0x28]
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x24]
    // str r0, [sp, #0x10]
    // mov r0, #4
    // str r0, [sp, #0x14]
    // mov r0, #0x3d
    // str r0, [sp, #0x18]
    // ldr r3, [r3, #0x24]
    // mov r0, #0
    // bl sub_02075A7C
    // mov r1, #0x11
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #1
    // str r0, [r5, #0x2c]
    // b _022417B2
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r4, #4
    // b _022417B2
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r4, #4
    // add r0, r7, #0
    // bl Heap_Free
    // b _022417FE
    // add r0, r5, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r4, #4
    // b _022417FE
    // mov r0, #0x11
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_02075D3C
    // cmp r0, #0
    // beq _022417FE
    // mov r0, #0x11
    // lsl r0, r0, #4
    // ldr r0, [r5, r0]
    // bl sub_02075D4C
    // add r0, r5, #0
    // bl ov70_022418A4
    // mov r2, #1
    // lsl r2, r2, #0x1a
    // ldr r1, [r2]
    // ldr r0, _02241804 ; =0xFFFF1FFF
    // and r0, r1
    // str r0, [r2]
    // add r0, r5, #0
    // mov r1, #7
    // mov r2, #0xc
    // bl ov70_02238E50
    // mov r4, #4
    // add r0, r4, #0
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // _02241804: .word 0xFFFF1FFF
    // TODO: decompile
}




void ov70_02241808(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02241828 ; =0x000011F0
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // mov r0, #0x13
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // bl Heap_Free
    // add r0, r4, #0
    // bl ov70_02238E58
    // mov r0, #1
    // pop {r4, pc}
    // _02241828: .word 0x000011F0
    // TODO: decompile
}




void ov70_0224182C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // mov r0, #0x3d
    // bl PlayerProfile_New
    // add r4, r0, #0
    // bl PlayerProfile_Init
    // mov r1, #0x43
    // lsl r1, r1, #2
    // add r0, r4, #0
    // add r1, r5, r1
    // bl Save_Profile_PlayerName_Set
    // ldr r1, _02241860 ; =0x00000122
    // add r0, r4, #0
    // ldrb r1, [r5, r1]
    // bl PlayerProfile_SetVersion
    // ldr r1, _02241864 ; =0x00000123
    // add r0, r4, #0
    // ldrb r1, [r5, r1]
    // bl PlayerProfile_SetLanguage
    // add r0, r4, #0
    // pop {r3, r4, r5, pc}
    // _02241860: .word 0x00000122
    // _02241864: .word 0x00000123
    // TODO: decompile
}




void ov70_02241868(void) {
    // add r2, r0, r1
    // ldr r0, [r0, r1]
    // sub r1, #8
    // mul r1, r0
    // add r0, r2, r1
    // add r0, r0, r1
    // add r0, r0, r1
    GF_AssertFail((0x4f << 2));
}




void ov70_022418A4(void) {
    ov70_02241868(*((u32*)(r0 + 0x24)));
    // ldr r0, [r5, r2]
    // ldr r1, [r5, r1]
    Party_GetMonByIndex(*((u32*)(*((u32*)r5) + 8)), ((0x4d << 2) + 4), (0x4d << 2));
    CopyPokemonToPokemon(r4, r0);
    // str r0, [sp, #4]
    // str r0, [sp]
    // ldr r1, [r5, r2]
    // ldr r2, [r5, r2]
    PCStorage_DeleteBoxMonByIndexPair(*((u32*)(*((u32*)r5) + 0xc)), (r2 + 4));
    // add r1, sp, #4
    // add r2, sp, #0
    PCStorage_FindFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)));
    Mon_GetBoxMon(r4);
    // ldr r1, [sp, #4]
    PCStorage_PlaceMonInBoxFirstEmptySlot(*((u32*)(*((u32*)r5) + 0xc)), r0);
}




void ov70_0224190C(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x2c
    // add r4, r0, #0
    // cmp r1, #6
    // bls _02241918
    // b _02241DAA
    // add r0, r1, r1
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241924: ; jump table
    // mov r0, #0
    // ldr r6, _02241C68 ; =ov70_02245E0E
    // str r0, [sp, #0x28]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x28]
    // add r7, r7, #6
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, #0x10
    // str r0, [sp, #0x28]
    // cmp r0, #9
    // blt _0224193C
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _02241C6C ; =0x0000012F
    // mov r3, #9
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r1, #2
    // str r1, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r3, #1
    // str r3, [sp, #0xc]
    // mov r0, #0x30
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r0, [r4]
    // lsl r2, r2, #0x18
    // ldr r1, [r4, #4]
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // bl FillWindowPixelBuffer
    // ldr r6, _02241C70 ; =ov70_02245E10
    // mov r7, #1
    // mov r5, #0x10
    // sub r0, r6, #1
    // ldrb r0, [r0]
    // sub r3, r6, #2
    // str r0, [sp]
    // mov r0, #2
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // sub r0, r7, #1
    // lsl r0, r0, #2
    // add r0, #0x36
    // lsl r0, r0, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r3]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // add r7, r7, #1
    // add r6, r6, #2
    // add r5, #0x10
    // cmp r7, #4
    // blt _022419E0
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _02241C6C ; =0x0000012F
    // mov r3, #9
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldr r6, _02241C74 ; =ov70_02245DA2
    // str r0, [sp, #0x14]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x14]
    // add r7, #0x10
    // add r0, r0, #1
    // add r6, r6, #3
    // add r5, #0x10
    // str r0, [sp, #0x14]
    // cmp r0, #4
    // blt _02241A62
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0x70
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0x40
    // lsr r2, r2, #0x18
    // mov r3, #6
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _02241C6C ; =0x0000012F
    // mov r3, #9
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldr r6, _02241C68 ; =ov70_02245E0E
    // str r0, [sp, #0x18]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #3
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x18]
    // add r7, r7, #6
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, #0x10
    // str r0, [sp, #0x18]
    // cmp r0, #9
    // blt _02241B10
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _02241C6C ; =0x0000012F
    // mov r3, #9
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // mov r3, #2
    // str r3, [sp]
    // mov r0, #9
    // str r0, [sp, #4]
    // str r3, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x66
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xf0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xf0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldr r6, _02241C78 ; =ov70_02245D96
    // str r0, [sp, #0x1c]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #0x17
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x1c]
    // add r7, #0x2e
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, #0x10
    // str r0, [sp, #0x1c]
    // cmp r0, #5
    // blt _02241BBC
    // mov r0, #0x10
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // ldr r0, _02241C7C ; =0x00000116
    // mov r3, #0xd
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0x50
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0x50
    // bl FillWindowPixelBuffer
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // ldr r0, _02241C6C ; =0x0000012F
    // mov r3, #0x18
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldr r6, _02241C80 ; =ov70_02245D60
    // b _02241C84
    // nop
    // _02241C68: .word ov70_02245E0E
    // _02241C6C: .word 0x0000012F
    // _02241C70: .word ov70_02245E10
    // _02241C74: .word ov70_02245DA2
    // _02241C78: .word ov70_02245D96
    // _02241C7C: .word 0x00000116
    // _02241C80: .word ov70_02245D60
    // str r0, [sp, #0x20]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #8
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x20]
    // add r7, #0x10
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, #0x10
    // str r0, [sp, #0x20]
    // cmp r0, #3
    // blt _02241C8A
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0x60
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // mov r3, #9
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // mov r0, #0
    // ldr r6, _02241DB0 ; =ov70_02245D6E
    // str r0, [sp, #0x24]
    // mov r7, #0x30
    // add r5, r0, #0
    // ldrb r0, [r6, #1]
    // str r0, [sp]
    // mov r0, #0xb
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // lsl r0, r7, #0x10
    // lsr r0, r0, #0x10
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldrb r3, [r6]
    // ldr r0, [r4]
    // add r1, r1, r5
    // lsr r2, r2, #0x18
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, r0, r5
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #0x24]
    // add r7, #0x16
    // add r0, r0, #1
    // add r6, r6, #2
    // add r5, #0x10
    // str r0, [sp, #0x24]
    // cmp r0, #4
    // blt _02241D0A
    // mov r0, #0xe
    // str r0, [sp]
    // mov r0, #5
    // str r0, [sp, #4]
    // mov r0, #1
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    // mov r0, #0x88
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0x40
    // lsr r2, r2, #0x18
    // mov r3, #6
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0x40
    // bl FillWindowPixelBuffer
    // mov r0, #0x11
    // str r0, [sp]
    // mov r0, #6
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #1
    // str r0, [sp, #0xc]
    // mov r0, #0xa1
    // str r0, [sp, #0x10]
    // ldr r2, [r4, #0x54]
    // ldr r1, [r4, #4]
    // lsl r2, r2, #0x18
    // ldr r0, [r4]
    // add r1, #0xe0
    // lsr r2, r2, #0x18
    // mov r3, #9
    // bl AddWindowParameterized
    // ldr r0, [r4, #4]
    // mov r1, #0x22
    // add r0, #0xe0
    // bl FillWindowPixelBuffer
    // add sp, #0x2c
    // pop {r4, r5, r6, r7, pc}
    // nop
    // _02241DB0: .word ov70_02245D6E
    // TODO: decompile
}




void ov70_02241DB4(void) {
    // add r2, sp, #0x10
    // add r2, #1
    // add r3, sp, #0x10
    sub_02019B1C(*((u32*)(r0 + 0x1c)), 0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02241DDC: ; jump table
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r0, r0, r5
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 5, 0x11);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r0, r0, r5
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 5, 0x11);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r0, r0, r5
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 5, 0x11);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r0, r0, r5
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 5, 0x11);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, #0xf0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    FillWindowPixelBuffer(*((u32*)(r4 + 4)), 0x22);
    // add r0, r0, r5
    CopyWindowPixelsToVram_TextMode(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, sp, #0x10
    // ldrsb r0, [r0, r1]
    // sub r0, #0x10
    // asr r0, r0, #0x18
    // str r1, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // str r0, [sp, #0xc]
    FillBgTilemapRect(*((u32*)r4), 2, 5, 0x12);
    BgCommitTilemapBufferToVram(*((u32*)r4), 2);
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r0, r0, r5
    RemoveWindow(*((u32*)(r4 + 4)));
    // add r5, #0x10
    // add r0, #0xe0
    RemoveWindow(*((u32*)(r4 + 4)));
}




void ov70_02242014(void) {
    Heap_Alloc(0x3d, 0x80);
    // str r0, [r4]
    *((u32*)(r0 + 4)) = *((u32*)(r5 + 4));
    *((u32*)(r0 + 8)) = *((u32*)(r5 + 8));
    *((u32*)(r0 + 0xc)) = *((u32*)(r5 + 0xc));
    *((u32*)(r0 + 0x10)) = *((u32*)(r5 + 0x10));
    *((u32*)(r0 + 0x14)) = *((u32*)(r5 + 0x14));
    *((u32*)(r0 + 0x18)) = *((u32*)(r5 + 0x18));
    *((u32*)(r0 + 0x24)) = *((u32*)(r5 + 0x1c));
    *((u32*)(r0 + 0x28)) = *((u32*)(r5 + 0x20));
    *((u32*)(r0 + 0x2c)) = *((u32*)(r5 + 0x24));
    *((u32*)(r0 + 0x20)) = *((u32*)(r5 + 0x28));
    *((u32*)(r0 + 0x30)) = *((u32*)(r5 + 0x2c));
    *((u32*)(r0 + 0x54)) = r6;
    *((u32*)(r0 + 0x60)) = r7;
    *((u16*)(r0 + 0x3c)) = 0;
    *((u16*)(r0 + 0x3e)) = 0;
    // add r0, #0x40
    // strh r1, [r0]
    // add r0, #0x42
    // strh r1, [r0]
    // add r0, #0x44
    // strb r1, [r0]
    // add r0, #0x45
    // strb r1, [r0]
    *((u32*)(r0 + 0x48)) = 0;
    // add r0, #0x7e
    // strb r1, [r0]
    *((u32*)(r0 + 0x4c)) = 0;
    sub_0201956C(*((u32*)r0), 2, 1, 0x3d);
    *((u32*)(r4 + 0x1c)) = r0;
    // str r0, [sp]
    sub_020195F4(*((u32*)(r4 + 0x1c)), 0, 2, 0x20);
    ov70_02238F9C(*((u32*)(r4 + 0xc)), 0x88, 0x28);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x2f);
    MessagePrinter_New(0xf, 0xe, 2, 0x3d);
    *((u32*)(r4 + 0x38)) = r0;
}




void ov70_022420C4(void) {
    // add r2, #0x58
    // strh r1, [r2]
    // add r1, r1, r1
    // add r1, pc
    // asr r1, r1, #0x10
    // add pc, r1
    // _022420DA: ; jump table
    *((u32*)(r0 + 0x48)) = 0;
    // add r1, #0x7e
    // strb r2, [r1]
    *((u16*)(r0 + 0x3c)) = 0;
    *((u16*)(r0 + 0x3e)) = 0;
    *((u32*)(r0 + 0x4c)) = 4;
    *((u32*)(r0 + 0x48)) = 0;
    // add r1, #0x7e
    // strb r2, [r1]
    *((u16*)(r0 + 0x3c)) = 0;
    *((u16*)(r0 + 0x3e)) = 0;
    *((u32*)(r0 + 0x4c)) = 0x10;
    *((u32*)(r0 + 0x48)) = 0;
    // add r1, #0x7e
    // strb r2, [r1]
    *((u32*)(r0 + 0x4c)) = 0x1c;
    *((u32*)(r0 + 0x48)) = 0;
    // add r1, #0x7e
    // strb r2, [r1]
    *((u32*)(r0 + 0x4c)) = 0x1f;
}




void ov70_0224212C(void) {
}




void ov70_02242144(void) {
}




void ov70_02242164(void) {
    // push {r3, lr}
    // cmp r1, #7
    // bhi _022421B4
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02242176: ; jump table
    // ldr r0, _022421B8 ; =ov70_02245ED0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // ldr r0, _022421BC ; =ov70_02245F28
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // ldr r0, _022421C0 ; =ov70_02245E3E
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // ldr r0, _022421C4 ; =ov70_02245DD0
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // ldr r0, _022421C8 ; =ov70_02245E5E
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // ldr r0, _022421CC ; =ov70_02245DE4
    // bl TouchscreenHitbox_FindRectAtTouchNew
    // pop {r3, pc}
    // nop
    // _022421B8: .word ov70_02245ED0
    // _022421BC: .word ov70_02245F28
    // _022421C0: .word ov70_02245E3E
    // _022421C4: .word ov70_02245DD0
    // _022421C8: .word ov70_02245E5E
    // _022421CC: .word ov70_02245DE4
    // TODO: decompile
}




void ov70_022421D0(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x48]
    // cmp r1, #9
    // bge _022421E0
    // add r0, #0x7e
    // strb r1, [r0]
    // ldr r0, _02242344 ; =gSystem
    // mov r2, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r2, r0
    // beq _022421F6
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242348 ; =ov70_02245EA8
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _0224222A
    // mov r2, #0x80
    // tst r2, r0
    // beq _02242208
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _0224234C ; =ov70_02245EA9
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _0224222A
    // mov r2, #0x20
    // tst r2, r0
    // beq _0224221A
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242350 ; =ov70_02245EAA
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _0224222A
    // mov r2, #0x10
    // tst r0, r2
    // beq _0224222A
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242354 ; =ov70_02245EAB
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // cmp r1, #9
    // blt _02242282
    // ldr r0, [r5, #0x48]
    // cmp r0, #9
    // bge _02242282
    // ldr r0, _02242344 ; =gSystem
    // ldr r2, [r0, #0x4c]
    // mov r0, #0x40
    // tst r0, r2
    // beq _02242260
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrb r0, [r0]
    // str r0, [r5, #0x48]
    // add r0, r0, #4
    // cmp r0, #9
    // bge _02242282
    // add r0, r5, #0
    // add r0, #0x48
    // ldr r2, [r0]
    // add r2, r2, #4
    // str r2, [r0]
    // ldr r2, [r5, #0x48]
    // add r2, r2, #4
    // cmp r2, #9
    // blt _02242250
    // b _02242282
    // mov r0, #0x80
    // tst r0, r2
    // beq _02242282
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrb r0, [r0]
    // str r0, [r5, #0x48]
    // sub r0, r0, #4
    // bmi _02242282
    // add r0, r5, #0
    // add r0, #0x48
    // ldr r2, [r0]
    // sub r2, r2, #4
    // str r2, [r0]
    // ldr r2, [r5, #0x48]
    // sub r2, r2, #4
    // bpl _02242276
    // ldr r0, [r5, #0x48]
    // cmp r1, r0
    // beq _022422BC
    // ldr r0, _02242358 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // ldr r1, _0224235C ; =ov70_02245E26
    // lsl r2, r0, #1
    // ldrb r1, [r1, r2]
    // ldr r3, _02242360 ; =ov70_02245E27
    // ldr r0, [r5, #0xc]
    // ldrb r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #9
    // ldr r0, [r5, #0xc]
    // bne _022422B6
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _022422BC
    // mov r1, #0x3d
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #4
    // bl ov70_02242164
    // add r6, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r6, r0
    // beq _022422F8
    // cmp r6, #9
    // bne _022422DE
    // ldr r0, _02242358 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // blo _022422E4
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _022422EE
    // ldrb r0, [r4, r6]
    // cmp r0, #0
    // beq _0224233C
    // ldr r0, _02242358 ; =0x000005DC
    // bl PlaySE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _02242344 ; =gSystem
    // ldr r2, [r0, #0x48]
    // mov r0, #1
    // add r1, r2, #0
    // tst r1, r0
    // beq _0224232A
    // ldr r1, [r5, #0x48]
    // cmp r1, #9
    // bne _0224230E
    // sub r0, r0, #3
    // pop {r4, r5, r6, pc}
    // blt _02242314
    // bl GF_AssertFail
    // cmp r4, #0
    // beq _02242320
    // ldr r0, [r5, #0x48]
    // ldrb r0, [r4, r0]
    // cmp r0, #0
    // beq _0224233C
    // ldr r0, _02242358 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r0, r2
    // beq _0224233C
    // ldr r0, _02242358 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // nop
    // _02242344: .word gSystem
    // _02242348: .word ov70_02245EA8
    // _0224234C: .word ov70_02245EA9
    // _02242350: .word ov70_02245EAA
    // _02242354: .word ov70_02245EAB
    // _02242358: .word 0x000005DC
    // _0224235C: .word ov70_02245E26
    // _02242360: .word ov70_02245E27
    // TODO: decompile
}




void ov70_02242364(void) {
    // cmp r1, #3
    // beq _02242386
    // mov r2, #0x3c
    // ldrsh r0, [r0, r2]
    // cmp r0, #8
    // bgt _02242382
    // lsl r3, r0, #3
    // ldr r0, _0224238C ; =ov70_02245F5C
    // ldr r0, [r0, r3]
    // cmp r1, r0
    // blt _0224237E
    // add r1, r2, #0
    // sub r1, #0x3d
    // add r0, r1, #0
    // bx lr
    // add r0, r1, #0
    // bx lr
    // mov r0, #1
    // mvn r0, r0
    // bx lr
    // _0224238C: .word ov70_02245F5C
    // TODO: decompile
}




void ov70_02242390(void) {
    // push {r4, r5, r6, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x48]
    // cmp r1, #3
    // bge _022423A0
    // add r0, #0x7e
    // strb r1, [r0]
    // ldr r0, _022424E4 ; =gSystem
    // mov r2, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r2, r0
    // beq _022423B6
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _022424E8 ; =ov70_02245DC0
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _022423EA
    // mov r2, #0x80
    // tst r2, r0
    // beq _022423C8
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _022424EC ; =ov70_02245DC1
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _022423EA
    // mov r2, #0x20
    // tst r2, r0
    // beq _022423DA
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _022424F0 ; =ov70_02245DC2
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _022423EA
    // mov r2, #0x10
    // tst r0, r2
    // beq _022423EA
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _022424F4 ; =ov70_02245DC3
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // cmp r1, #3
    // bne _022423FC
    // ldr r0, [r5, #0x48]
    // cmp r0, #3
    // bge _022423FC
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrb r0, [r0]
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x48]
    // cmp r1, r0
    // beq _02242440
    // ldr r0, _022424F8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #3
    // bne _02242422
    // ldr r0, [r5, #0xc]
    // mov r1, #0xc0
    // mov r2, #0x88
    // bl ov70_02238F9C
    // ldr r0, [r5, #0xc]
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _02242440
    // ldr r1, _022424FC ; =ov70_02245E26
    // lsl r2, r0, #1
    // ldrb r1, [r1, r2]
    // ldr r3, _02242500 ; =ov70_02245E27
    // ldr r0, [r5, #0xc]
    // ldrb r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r5, #0xc]
    // mov r1, #0x2f
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #5
    // bl ov70_02242164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02242488
    // add r0, r5, #0
    // bl ov70_02242364
    // mov r1, #0
    // add r6, r0, #0
    // mvn r1, r1
    // cmp r6, r1
    // beq _022424E0
    // sub r0, r1, #1
    // cmp r6, r0
    // beq _0224247E
    // cmp r4, #0
    // beq _0224247E
    // mov r0, #0x3c
    // ldrsh r0, [r5, r0]
    // lsl r1, r0, #2
    // ldr r0, _02242504 ; =ov70_02245E84
    // ldr r1, [r0, r1]
    // add r0, r4, r6
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _022424DC
    // ldr r0, _022424F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // ldr r0, _022424E4 ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _022424CA
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov70_02242364
    // mov r1, #0
    // add r6, r0, #0
    // mvn r1, r1
    // cmp r6, r1
    // beq _022424E0
    // sub r0, r1, #1
    // cmp r6, r0
    // beq _022424C0
    // cmp r4, #0
    // beq _022424C0
    // mov r0, #0x3c
    // ldrsh r0, [r5, r0]
    // lsl r1, r0, #2
    // ldr r0, _02242504 ; =ov70_02245E84
    // ldr r1, [r0, r1]
    // add r0, r4, r6
    // ldrb r0, [r1, r0]
    // cmp r0, #0
    // beq _022424DC
    // ldr r0, _022424F8 ; =0x000005DC
    // bl PlaySE
    // add r0, r6, #0
    // pop {r4, r5, r6, pc}
    // mov r0, #2
    // tst r0, r1
    // beq _022424DC
    // ldr r0, _022424F8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, r5, r6, pc}
    // nop
    // _022424E4: .word gSystem
    // _022424E8: .word ov70_02245DC0
    // _022424EC: .word ov70_02245DC1
    // _022424F0: .word ov70_02245DC2
    // _022424F4: .word ov70_02245DC3
    // _022424F8: .word 0x000005DC
    // _022424FC: .word ov70_02245E26
    // _02242500: .word ov70_02245E27
    // _02242504: .word ov70_02245E84
    // TODO: decompile
}




void ov70_02242508(void) {
}




void ov70_0224251C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // cmp r1, #4
    // beq _0224252E
    // cmp r1, #5
    // beq _02242534
    // cmp r1, #6
    // beq _02242542
    // b _0224254E
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // mvn r1, r1
    // bl ov70_02242574
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // bl ov70_02242574
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x5a
    // ldrsh r2, [r5, r0]
    // lsl r2, r2, #2
    // add r4, r1, r2
    // ldr r1, [r5, #0x5c]
    // cmp r4, r1
    // bge _0224256C
    // ldr r0, _02242570 ; =0x000005DC
    // bl PlaySE
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // pop {r3, r4, r5, pc}
    // sub r0, #0x5b
    // pop {r3, r4, r5, pc}
    // _02242570: .word 0x000005DC
    // TODO: decompile
}




void ov70_02242574(void) {
    ov70_02242508(*((u32*)(r0 + 0x5c)), 4);
    PlaySE((0x5e << 4));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x14)), 0x27);
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r4, [r0]
    PlaySE((0x5e << 4), (0x5a - 1));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x10)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x10)), 0x26);
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r5, r1]
    ov70_022434C0(r5, 0x5a, *((u32*)(r5 + 0x5c)));
    ov70_02242508(*((u32*)(r5 + 0x5c)), 4);
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // add r2, #0x40
    ov70_02243F00(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x38)), *((u32*)(r5 + 4)), 0x5a);
}




void ov70_0224261C(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _022426E4 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x4c]
    // mov r1, #0x40
    // ldr r4, [r5, #0x48]
    // tst r1, r2
    // beq _0224263C
    // cmp r4, #0
    // beq _02242636
    // sub r0, r4, #1
    // str r0, [r5, #0x48]
    // b _0224266E
    // mov r0, #4
    // str r0, [r5, #0x48]
    // b _0224266E
    // mov r1, #0x80
    // tst r1, r2
    // beq _02242652
    // cmp r4, #4
    // beq _0224264C
    // add r0, r4, #1
    // str r0, [r5, #0x48]
    // b _0224266E
    // mov r0, #0
    // str r0, [r5, #0x48]
    // b _0224266E
    // mov r1, #0x20
    // add r3, r2, #0
    // tst r3, r1
    // beq _02242662
    // sub r1, #0x21
    // bl ov70_02242574
    // b _0224266E
    // mov r1, #0x10
    // tst r1, r2
    // beq _0224266E
    // mov r1, #1
    // bl ov70_02242574
    // ldr r0, [r5, #0x48]
    // cmp r4, r0
    // beq _022426A2
    // ldr r0, _022426E8 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // ldr r1, _022426EC ; =ov70_02245D76
    // lsl r3, r0, #1
    // ldr r2, _022426F0 ; =ov70_02245D77
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #4
    // ldr r0, [r5, #0xc]
    // bne _0224269C
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _022426A2
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #0
    // bl ov70_02242164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _022426BC
    // add r0, r5, #0
    // bl ov70_0224251C
    // pop {r3, r4, r5, pc}
    // ldr r1, _022426E4 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _022426D0
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov70_0224251C
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _022426E0
    // ldr r0, _022426E8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // nop
    // _022426E4: .word gSystem
    // _022426E8: .word 0x000005DC
    // _022426EC: .word ov70_02245D76
    // _022426F0: .word ov70_02245D77
    // TODO: decompile
}




void ov70_022426F4(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // ldr r0, _022427B0 ; =gSystem
    // ldr r4, [r5, #0x48]
    // ldr r1, [r0, #0x4c]
    // mov r0, #0x40
    // tst r0, r1
    // beq _0224271C
    // ldr r0, _022427B4 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // beq _02242716
    // sub r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242738
    // mov r0, #3
    // str r0, [r5, #0x48]
    // b _02242738
    // mov r0, #0x80
    // tst r0, r1
    // beq _02242738
    // ldr r0, _022427B4 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #3
    // beq _02242734
    // add r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242738
    // mov r0, #0
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x48]
    // cmp r4, r0
    // beq _02242764
    // ldr r1, _022427B8 ; =ov70_02245D66
    // lsl r3, r0, #1
    // ldr r2, _022427BC ; =ov70_02245D67
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #3
    // ldr r0, [r5, #0xc]
    // bne _0224275E
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _02242764
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #1
    // bl ov70_02242164
    // add r4, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r4, r0
    // beq _02242784
    // ldr r0, _022427B4 ; =0x000005DC
    // bl PlaySE
    // ldr r0, _022427C0 ; =ov70_02245DB0
    // lsl r1, r4, #2
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // ldr r1, _022427B0 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _0224279E
    // ldr r0, _022427B4 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // lsl r1, r0, #2
    // ldr r0, _022427C0 ; =ov70_02245DB0
    // ldr r0, [r0, r1]
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _022427AE
    // ldr r0, _022427B4 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // _022427B0: .word gSystem
    // _022427B4: .word 0x000005DC
    // _022427B8: .word ov70_02245D66
    // _022427BC: .word ov70_02245D67
    // _022427C0: .word ov70_02245DB0
    // TODO: decompile
}




void ov70_022427C4(void) {
    PlaySE((0x5e << 4));
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x14)), 0x27);
    // ldrsh r0, [r4, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    PlaySE((0x5e << 4), 2);
    Sprite_SetAnimActiveFlag(*((u32*)(r4 + 0x10)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0x10)), 0x26);
    // ldrsh r0, [r4, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r4, r1]
    ov70_022434C0(r4, 0x5a, *((u32*)(r4 + 0x5c)));
    ov70_02242508(*((u32*)(r4 + 0x5c)), 4);
    // str r0, [sp]
    // ldrsh r3, [r4, r3]
    // add r2, #0x40
    ov70_02243F00(*((u32*)(r4 + 0x1c)), *((u32*)(r4 + 0x38)), *((u32*)(r4 + 4)), 0x5a);
}




void ov70_02242860(void) {
    // push {r3, r4, r5, lr}
    // add r4, r1, #0
    // add r5, r0, #0
    // cmp r4, #4
    // beq _02242874
    // cmp r4, #5
    // beq _02242880
    // cmp r4, #6
    // beq _0224288E
    // b _0224289A
    // ldr r0, _022428BC ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // mvn r1, r1
    // bl ov70_022427C4
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // bl ov70_022427C4
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x5a
    // ldrsh r1, [r5, r0]
    // lsl r1, r1, #2
    // add r2, r4, r1
    // ldr r1, [r5, #0x5c]
    // cmp r2, r1
    // bge _022428B8
    // ldr r0, _022428BC ; =0x000005DC
    // bl PlaySE
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // pop {r3, r4, r5, pc}
    // sub r0, #0x5b
    // pop {r3, r4, r5, pc}
    // _022428BC: .word 0x000005DC
    // TODO: decompile
}




void ov70_022428C0(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02242990 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x4c]
    // mov r1, #0x40
    // ldr r4, [r5, #0x48]
    // tst r1, r2
    // beq _022428E8
    // ldr r0, _02242994 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // beq _022428E2
    // sub r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242922
    // mov r0, #4
    // str r0, [r5, #0x48]
    // b _02242922
    // mov r1, #0x80
    // tst r1, r2
    // beq _02242906
    // ldr r0, _02242994 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #4
    // beq _02242900
    // add r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242922
    // mov r0, #0
    // str r0, [r5, #0x48]
    // b _02242922
    // mov r1, #0x20
    // add r3, r2, #0
    // tst r3, r1
    // beq _02242916
    // sub r1, #0x21
    // bl ov70_022427C4
    // b _02242922
    // mov r1, #0x10
    // tst r1, r2
    // beq _02242922
    // mov r1, #1
    // bl ov70_022427C4
    // ldr r0, [r5, #0x48]
    // cmp r4, r0
    // beq _0224294E
    // ldr r1, _02242998 ; =ov70_02245D80
    // lsl r3, r0, #1
    // ldr r2, _0224299C ; =ov70_02245D81
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #4
    // ldr r0, [r5, #0xc]
    // bne _02242948
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _0224294E
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #2
    // bl ov70_02242164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02242968
    // add r0, r5, #0
    // bl ov70_02242860
    // pop {r3, r4, r5, pc}
    // ldr r1, _02242990 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _0224297C
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov70_02242860
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _0224298C
    // ldr r0, _02242994 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // nop
    // _02242990: .word gSystem
    // _02242994: .word 0x000005DC
    // _02242998: .word ov70_02245D80
    // _0224299C: .word ov70_02245D81
    // TODO: decompile
}




void ov70_022429A0(void) {
    // mvn r0, r0
}




void ov70_022429B8(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // add r4, r1, #0
    // ldr r1, [r5, #0x48]
    // cmp r1, #9
    // bge _022429C8
    // add r0, #0x7e
    // strb r1, [r0]
    // ldr r0, _02242B3C ; =gSystem
    // mov r2, #0x40
    // ldr r0, [r0, #0x4c]
    // tst r2, r0
    // beq _022429DE
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242B40 ; =ov70_02245EFC
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _02242A12
    // mov r2, #0x80
    // tst r2, r0
    // beq _022429F0
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242B44 ; =ov70_02245EFD
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _02242A12
    // mov r2, #0x20
    // tst r2, r0
    // beq _02242A02
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242B48 ; =ov70_02245EFE
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // b _02242A12
    // mov r2, #0x10
    // tst r0, r2
    // beq _02242A12
    // ldr r0, [r5, #0x48]
    // lsl r2, r0, #2
    // ldr r0, _02242B4C ; =ov70_02245EFF
    // ldrb r0, [r0, r2]
    // str r0, [r5, #0x48]
    // cmp r1, #9
    // blt _02242A6A
    // ldr r0, [r5, #0x48]
    // cmp r0, #9
    // bge _02242A6A
    // ldr r0, _02242B3C ; =gSystem
    // ldr r2, [r0, #0x4c]
    // mov r0, #0x40
    // tst r0, r2
    // beq _02242A48
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrb r0, [r0]
    // str r0, [r5, #0x48]
    // add r0, r0, #4
    // cmp r0, #9
    // bge _02242A6A
    // add r0, r5, #0
    // add r0, #0x48
    // ldr r2, [r0]
    // add r2, r2, #4
    // str r2, [r0]
    // ldr r2, [r5, #0x48]
    // add r2, r2, #4
    // cmp r2, #9
    // blt _02242A38
    // b _02242A6A
    // mov r0, #0x80
    // tst r0, r2
    // beq _02242A6A
    // add r0, r5, #0
    // add r0, #0x7e
    // ldrb r0, [r0]
    // str r0, [r5, #0x48]
    // sub r0, r0, #4
    // bmi _02242A6A
    // add r0, r5, #0
    // add r0, #0x48
    // ldr r2, [r0]
    // sub r2, r2, #4
    // str r2, [r0]
    // ldr r2, [r5, #0x48]
    // sub r2, r2, #4
    // bpl _02242A5E
    // ldr r0, [r5, #0x48]
    // cmp r1, r0
    // beq _02242AB6
    // ldr r0, _02242B50 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // ldr r1, _02242B54 ; =ov70_02245DF8
    // lsl r2, r0, #1
    // ldrb r1, [r1, r2]
    // ldr r3, _02242B58 ; =ov70_02245DF9
    // ldr r0, [r5, #0xc]
    // ldrb r2, [r3, r2]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #9
    // beq _02242A9A
    // cmp r0, #0xa
    // beq _02242AA4
    // b _02242AAE
    // ldr r0, [r5, #0xc]
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _02242AB6
    // ldr r0, [r5, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // b _02242AB6
    // ldr r0, [r5, #0xc]
    // mov r1, #0x3d
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #6
    // bl ov70_02242164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02242AF0
    // add r0, r5, #0
    // bl ov70_022429A0
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // beq _02242AE6
    // cmp r5, #0xb
    // beq _02242AE6
    // cmp r4, #0
    // beq _02242AE6
    // ldrb r0, [r4, r5]
    // cmp r0, #0
    // beq _02242B36
    // ldr r0, _02242B50 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // ldr r0, _02242B3C ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // beq _02242B24
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov70_022429A0
    // add r5, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r5, r0
    // beq _02242B1A
    // cmp r5, #0xb
    // beq _02242B1A
    // cmp r4, #0
    // beq _02242B1A
    // ldrb r0, [r4, r5]
    // cmp r0, #0
    // beq _02242B36
    // ldr r0, _02242B50 ; =0x000005DC
    // bl PlaySE
    // add r0, r5, #0
    // pop {r3, r4, r5, pc}
    // mov r0, #2
    // tst r0, r1
    // beq _02242B36
    // ldr r0, _02242B50 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // _02242B3C: .word gSystem
    // _02242B40: .word ov70_02245EFC
    // _02242B44: .word ov70_02245EFD
    // _02242B48: .word ov70_02245EFE
    // _02242B4C: .word ov70_02245EFF
    // _02242B50: .word 0x000005DC
    // _02242B54: .word ov70_02245DF8
    // _02242B58: .word ov70_02245DF9
    // TODO: decompile
}




void ov70_02242B5C(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // cmp r1, #5
    // beq _02242B6E
    // cmp r1, #6
    // beq _02242B7A
    // cmp r1, #7
    // beq _02242B88
    // b _02242B94
    // ldr r0, _02242BB8 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #0
    // mvn r1, r1
    // bl ov70_02242BBC
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r1, #1
    // bl ov70_02242BBC
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // mov r0, #0x5a
    // ldrsh r3, [r5, r0]
    // lsl r2, r3, #2
    // add r2, r3, r2
    // add r4, r1, r2
    // ldr r1, [r5, #0x5c]
    // cmp r4, r1
    // bge _02242BB4
    // ldr r0, _02242BB8 ; =0x000005DC
    // bl PlaySE
    // ldr r1, [r5, #0x34]
    // lsl r0, r4, #3
    // add r0, r1, r0
    // ldr r0, [r0, #4]
    // pop {r3, r4, r5, pc}
    // sub r0, #0x5b
    // pop {r3, r4, r5, pc}
    // _02242BB8: .word 0x000005DC
    // TODO: decompile
}




void ov70_02242BBC(void) {
    ov70_02242508(*((u32*)(r0 + 0x5c)), 5);
    PlaySE((0x5e << 4));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x14)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x14)), 0x27);
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r4, [r0]
    PlaySE((0x5e << 4), (0x5a - 1));
    Sprite_SetAnimActiveFlag(*((u32*)(r5 + 0x10)), 1);
    Sprite_SetAnimCtrlSeq(*((u32*)(r5 + 0x10)), 0x26);
    // ldrsh r0, [r5, r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // add r0, #0x5a
    // strh r1, [r0]
    // ldrsh r1, [r5, r1]
    ov70_0224352C(r5, 0x5a, *((u32*)(r5 + 0x5c)));
    ov70_02242508(*((u32*)(r5 + 0x5c)), 5);
    // str r0, [sp]
    // ldrsh r3, [r5, r3]
    // add r2, #0x50
    ov70_02243F00(*((u32*)(r5 + 0x1c)), *((u32*)(r5 + 0x38)), *((u32*)(r5 + 4)), 0x5a);
}




void ov70_02242C64(void) {
    // push {r3, r4, r5, lr}
    // ldr r1, _02242D34 ; =gSystem
    // add r5, r0, #0
    // ldr r2, [r1, #0x4c]
    // mov r1, #0x40
    // ldr r4, [r5, #0x48]
    // tst r1, r2
    // beq _02242C8C
    // ldr r0, _02242D38 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #0
    // beq _02242C86
    // sub r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242CC6
    // mov r0, #5
    // str r0, [r5, #0x48]
    // b _02242CC6
    // mov r1, #0x80
    // tst r1, r2
    // beq _02242CAA
    // ldr r0, _02242D38 ; =0x000005DC
    // bl PlaySE
    // ldr r0, [r5, #0x48]
    // cmp r0, #5
    // beq _02242CA4
    // add r0, r0, #1
    // str r0, [r5, #0x48]
    // b _02242CC6
    // mov r0, #0
    // str r0, [r5, #0x48]
    // b _02242CC6
    // mov r1, #0x20
    // add r3, r2, #0
    // tst r3, r1
    // beq _02242CBA
    // sub r1, #0x21
    // bl ov70_02242BBC
    // b _02242CC6
    // mov r1, #0x10
    // tst r1, r2
    // beq _02242CC6
    // mov r1, #1
    // bl ov70_02242BBC
    // ldr r0, [r5, #0x48]
    // cmp r4, r0
    // beq _02242CF2
    // ldr r1, _02242D3C ; =ov70_02245D8A
    // lsl r3, r0, #1
    // ldr r2, _02242D40 ; =ov70_02245D8B
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r5, #0x48]
    // cmp r0, #5
    // ldr r0, [r5, #0xc]
    // bne _02242CEC
    // mov r1, #0x30
    // bl Sprite_SetAnimCtrlSeq
    // b _02242CF2
    // mov r1, #0x32
    // bl Sprite_SetAnimCtrlSeq
    // add r0, r5, #0
    // mov r1, #3
    // bl ov70_02242164
    // add r1, r0, #0
    // mov r0, #0
    // mvn r0, r0
    // cmp r1, r0
    // beq _02242D0C
    // add r0, r5, #0
    // bl ov70_02242B5C
    // pop {r3, r4, r5, pc}
    // ldr r1, _02242D34 ; =gSystem
    // ldr r2, [r1, #0x48]
    // mov r1, #1
    // tst r1, r2
    // beq _02242D20
    // ldr r1, [r5, #0x48]
    // add r0, r5, #0
    // bl ov70_02242B5C
    // pop {r3, r4, r5, pc}
    // mov r1, #2
    // tst r1, r2
    // beq _02242D30
    // ldr r0, _02242D38 ; =0x000005DC
    // bl PlaySE
    // mov r0, #1
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // nop
    // _02242D34: .word gSystem
    // _02242D38: .word 0x000005DC
    // _02242D3C: .word ov70_02245D8A
    // _02242D40: .word ov70_02245D8B
    // TODO: decompile
}




void ov70_02242D44(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // str r1, [sp, #4]
    // str r2, [sp, #8]
    // cmp r0, #6
    // bne _02242D58
    // mov r3, #0x21
    // b _02242D5A
    // mov r3, #0x22
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // bl sub_02019688
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // ldr r1, [sp, #4]
    // add r0, r5, #0
    // bl ov70_0224190C
    // add r0, r5, #0
    // add r0, #0x64
    // mov r1, #1
    // mov r2, #0x1a
    // bl MI_CpuFill8
    // mov r4, #0
    // add r6, r4, #0
    // add r1, r4, #0
    // ldr r0, [r5, #0x24]
    // add r1, #0x6e
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, [sp, #4]
    // cmp r0, #4
    // bne _02242DBE
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_02243F7C
    // cmp r0, #1
    // bne _02242DB2
    // add r2, r5, r4
    // add r2, #0x64
    // mov r1, #1
    // ldr r0, _02242E50 ; =0x000F0E02
    // strb r1, [r2]
    // b _02242DE0
    // add r2, r5, r4
    // add r2, #0x64
    // mov r1, #0
    // ldr r0, _02242E54 ; =0x00080902
    // strb r1, [r2]
    // b _02242DE0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_02243FE0
    // cmp r0, #1
    // bne _02242DD6
    // add r2, r5, r4
    // add r2, #0x64
    // mov r1, #1
    // ldr r0, _02242E50 ; =0x000F0E02
    // strb r1, [r2]
    // b _02242DE0
    // add r2, r5, r4
    // ldr r0, _02242E54 ; =0x00080902
    // add r2, #0x64
    // mov r1, #0
    // strb r1, [r2]
    // str r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // add r1, r1, r6
    // add r2, r7, #0
    // mov r3, #2
    // bl ov70_02242FC4
    // add r0, r7, #0
    // bl String_Delete
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #9
    // blt _02242D88
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // ldr r0, [sp, #4]
    // cmp r0, #6
    // bne _02242E34
    // ldr r0, [r5, #0x24]
    // mov r1, #0xae
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // ldr r0, _02242E50 ; =0x000F0E02
    // add r2, r4, #0
    // str r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // add r1, #0xf0
    // mov r3, #2
    // bl ov70_02242FC4
    // add r0, r4, #0
    // bl String_Delete
    // ldr r2, [sp, #8]
    // mov r1, #0
    // lsl r2, r2, #0x18
    // ldr r0, [r5, #0x1c]
    // asr r2, r2, #0x18
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_020197F4
    // add sp, #0xc
    // pop {r4, r5, r6, r7, pc}
    // _02242E50: .word 0x000F0E02
    // _02242E54: .word 0x00080902
    // TODO: decompile
}




void ov70_02242E58(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x1f
    // bl sub_02019688
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r5, #0
    // mov r1, #1
    // bl ov70_0224190C
    // mov r6, #0
    // add r4, r6, #0
    // add r1, r6, #0
    // ldr r0, [r5, #0x24]
    // add r1, #0x7c
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // ldr r0, _02242EE0 ; =0x000F0E02
    // add r2, r7, #0
    // str r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // add r1, r1, r4
    // mov r3, #2
    // bl ov70_02242FC4
    // add r0, r7, #0
    // bl String_Delete
    // add r6, r6, #1
    // add r4, #0x10
    // cmp r6, #3
    // blt _02242E80
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r5, #0x1c]
    // mov r2, #0x20
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_020197F4
    // mov r1, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // sub r2, r1, #4
    // add r3, r1, #0
    // bl sub_020198FC
    // pop {r3, r4, r5, r6, r7, pc}
    // _02242EE0: .word 0x000F0E02
    // TODO: decompile
}




void ov70_02242EE4(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x23
    // bl sub_02019688
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r4, #0
    // mov r1, #2
    // bl ov70_0224190C
    // ldr r0, [r4, #0x60]
    // cmp r0, #1
    // bne _02242F20
    // add r0, r4, #0
    // ldr r1, [r4, #0x24]
    // add r0, #0x34
    // mov r2, #1
    // bl ov70_0223F7E4
    // str r0, [r4, #0x5c]
    // b _02242F32
    // cmp r0, #0
    // bne _02242F32
    // add r0, r4, #0
    // ldr r1, [r4, #0x24]
    // add r0, #0x34
    // mov r2, #0
    // bl ov70_0223F7E4
    // str r0, [r4, #0x5c]
    // ldr r2, [r4, #0x5c]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov70_022434C0
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r0, [r4, #0x5c]
    // mov r1, #4
    // bl ov70_02242508
    // str r0, [sp]
    // mov r3, #0x5a
    // ldr r2, [r4, #4]
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x38]
    // add r2, #0x40
    // bl ov70_02243F00
    // ldr r2, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r4, #0x1c]
    // mov r2, #0x20
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r4, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // mov r1, #0
    // add r0, r4, #0
    // str r1, [r4, #0x48]
    // add r0, #0x7e
    // strb r1, [r0]
    // ldr r0, [r4, #0x48]
    // ldr r1, _02242FBC ; =ov70_02245D76
    // lsl r3, r0, #1
    // ldr r2, _02242FC0 ; =ov70_02245D77
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl sub_020197F4
    // mov r1, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, [r4, #0x1c]
    // sub r2, r1, #4
    // add r3, r1, #0
    // bl sub_020198FC
    // mov r0, #0x20
    // str r0, [r4, #0x4c]
    // add sp, #4
    // pop {r3, r4, pc}
    // _02242FBC: .word ov70_02245D76
    // _02242FC0: .word ov70_02245D77
    // TODO: decompile
}




void ov70_02242FC4(void) {
    // str r1, [sp]
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x20]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r1, 0);
    CopyWindowPixelsToVram_TextMode(r4);
    sub_02019A60(r5, 0, r4);
}




void ov70_02242FF4(void) {
    // mvn r0, r0
}




void ov70_02242FFC(void) {
    sub_020199E4(*((u32*)(r0 + 0x1c)), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 1);
    // ldrsh r0, [r4, r0]
    ov70_02238F9C(*((u32*)(r4 + 0x10)), 0xe4, 0x78);
    ov70_02238F9C(*((u32*)(r4 + 0x14)), 0x9a, 0x78);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x10)), 1);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x14)), 1);
    *((u32*)(r4 + 0x4c)) = *((u32*)(r4 + 0x50));
    // mvn r0, r0
}




void ov70_0224304C(void) {
}




void ov70_02243068(void) {
    sub_020199E4(*((u32*)(r0 + 0x1c)), 0);
    sub_0201980C(*((u32*)(r4 + 0x1c)), 0);
    *((u32*)(r4 + 0x4c)) = *((u32*)(r4 + 0x50));
    // mvn r0, r0
}




void ov70_0224308C(void) {
    ov70_02242D44(4, 0x20);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x3d);
    ov70_02238F9C(*((u32*)(r4 + 0xc)), 0x88, 0x28);
    // str r0, [sp]
    sub_020198FC(*((u32*)(r4 + 0x1c)), 0, (0 - 4), 0);
    *((u32*)(r4 + 0x4c)) = 1;
    *((u32*)(r4 + 0x50)) = 5;
    *((u16*)(r4 + 0x3c)) = (5 - 6);
}




void ov70_022430CC(void) {
    // add r1, #0x64
    ov70_022421D0(r0);
    // mvn r0, r0
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    *((u32*)(r5 + 0x4c)) = 6;
    *((u16*)(r5 + 0x3c)) = r4;
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 6;
    *((u16*)(r5 + 0x3c)) = (6 - 7);
    // mvn r0, r0
}




void ov70_02243120(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #4
    // bl ov70_02241DB4
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x3c
    // ldrsh r1, [r4, r0]
    // cmp r1, #0
    // blt _0224315C
    // cmp r1, #8
    // ble _02243142
    // bl GF_AssertFail
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #3
    // ldr r0, _02243168 ; =ov70_02245F5C
    // ldr r0, [r0, r1]
    // cmp r0, #1
    // bne _02243158
    // mov r0, #0
    // strh r0, [r4, #0x3e]
    // mov r0, #0xc
    // b _02243160
    // mov r0, #8
    // b _02243160
    // sub r0, #0x3e
    // pop {r4, pc}
    // str r0, [r4, #0x4c]
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // _02243168: .word ov70_02245F5C
    // TODO: decompile
}




void ov70_0224316C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x22
    // bl sub_02019688
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r5, #0
    // mov r1, #4
    // bl ov70_0224190C
    // add r0, r5, #0
    // add r0, #0x64
    // mov r1, #1
    // mov r2, #0x1a
    // bl MI_CpuFill8
    // mov r4, #0
    // add r6, r4, #0
    // add r1, r4, #0
    // ldr r0, [r5, #0x24]
    // add r1, #0x6e
    // bl NewString_ReadMsgData
    // add r7, r0, #0
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_02243F7C
    // cmp r0, #1
    // bne _022431C2
    // add r2, r5, r4
    // ldr r0, _02243244 ; =0x000F0E02
    // add r2, #0x64
    // mov r1, #1
    // b _022431CA
    // add r2, r5, r4
    // ldr r0, _02243248 ; =0x00080902
    // add r2, #0x64
    // mov r1, #0
    // strb r1, [r2]
    // str r0, [sp]
    // ldr r1, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // add r1, r1, r6
    // add r2, r7, #0
    // mov r3, #2
    // bl ov70_02242FC4
    // add r0, r7, #0
    // bl String_Delete
    // add r4, r4, #1
    // add r6, #0x10
    // cmp r4, #9
    // blt _022431A0
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r5, #0x1c]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_020197F4
    // ldr r0, [r5, #0xc]
    // mov r1, #0x3d
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x3c
    // ldrsh r0, [r5, r0]
    // ldr r1, _0224324C ; =ov70_02245E26
    // ldr r2, _02243250 ; =ov70_02245E27
    // lsl r3, r0, #1
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // mov r0, #0x3c
    // ldrsh r0, [r5, r0]
    // mov r1, #1
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0xc]
    // bl Sprite_SetDrawFlag
    // mov r0, #5
    // str r0, [r5, #0x4c]
    // sub r0, r0, #6
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243244: .word 0x000F0E02
    // _02243248: .word 0x00080902
    // _0224324C: .word ov70_02245E26
    // _02243250: .word ov70_02245E27
    // TODO: decompile
}




void ov70_02243254(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x20
    // bl sub_02019688
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r5, #0
    // mov r1, #5
    // bl ov70_0224190C
    // add r0, r5, #0
    // add r0, #0x64
    // mov r1, #1
    // mov r2, #0x1a
    // bl MI_CpuFill8
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _02243388 ; =0x000F0E02
    // mov r3, #0x3c
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // ldr r2, [r5, #4]
    // add r3, #0x6e
    // bl ov70_02243E8C
    // mov r0, #0x3c
    // ldrsh r1, [r5, r0]
    // ldr r0, _0224338C ; =ov70_02245F5C
    // mov r4, #1
    // lsl r2, r1, #3
    // ldr r0, [r0, r2]
    // cmp r0, #1
    // blt _0224332C
    // mov r7, #0x10
    // lsl r2, r1, #2
    // ldr r1, _02243390 ; =ov70_02245E84
    // add r0, r5, #0
    // ldr r1, [r1, r2]
    // add r1, r4, r1
    // sub r1, r1, #1
    // bl ov70_02243F54
    // cmp r0, #0
    // ble _022432DA
    // mov r1, #0x3c
    // ldrsh r1, [r5, r1]
    // ldr r0, _02243388 ; =0x000F0E02
    // lsl r2, r1, #2
    // ldr r1, _02243390 ; =ov70_02245E84
    // ldr r2, [r1, r2]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // mov r1, #1
    // b _022432EE
    // mov r1, #0x3c
    // ldrsh r1, [r5, r1]
    // ldr r0, _02243394 ; =0x00080902
    // lsl r2, r1, #2
    // ldr r1, _02243390 ; =ov70_02245E84
    // ldr r2, [r1, r2]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // mov r1, #0
    // strb r1, [r2]
    // mov r1, #5
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r3, #0x3c
    // ldrsh r3, [r5, r3]
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // lsl r6, r3, #3
    // ldr r3, _02243398 ; =ov70_02245F58
    // ldr r1, [r5, #0x24]
    // ldr r3, [r3, r6]
    // add r2, r2, r7
    // add r3, r4, r3
    // lsl r6, r3, #2
    // ldr r3, _0224339C ; =ov70_02245FA0
    // add r3, r3, r6
    // sub r3, r3, #4
    // ldr r3, [r3]
    // bl ov70_02243E8C
    // mov r0, #0x3c
    // ldrsh r1, [r5, r0]
    // ldr r0, _02243398 ; =ov70_02245F58
    // add r4, r4, #1
    // lsl r2, r1, #3
    // add r0, r0, r2
    // ldr r0, [r0, #4]
    // add r7, #0x10
    // cmp r4, r0
    // ble _022432B0
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r5, #0x1c]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r5, #0xc]
    // mov r1, #0x2f
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x3e
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bge _0224335A
    // mov r0, #0
    // b _0224335A
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x48]
    // ldr r1, _022433A0 ; =ov70_02245E26
    // lsl r3, r0, #1
    // ldr r2, _022433A4 ; =ov70_02245E27
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #9
    // str r0, [r5, #0x4c]
    // sub r0, #0xa
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02243388: .word 0x000F0E02
    // _0224338C: .word ov70_02245F5C
    // _02243390: .word ov70_02245E84
    // _02243394: .word 0x00080902
    // _02243398: .word ov70_02245F58
    // _0224339C: .word ov70_02245FA0
    // _022433A0: .word ov70_02245E26
    // _022433A4: .word ov70_02245E27
    // TODO: decompile
}




void ov70_022433A8(void) {
    // add r1, #0x64
    ov70_02242390(r0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022433C6: ; jump table
    // mvn r0, r0
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x4c)) = 0xa;
    *((u16*)(r4 + 0x3e)) = r5;
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x4c)) = 0xa;
    // sub r0, #0xb
    *((u16*)(r4 + 0x3e)) = 0xa;
    // mvn r0, r0
}




void ov70_02243400(void) {
    ov70_02241DB4(5);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x4c)) = 7;
    // mvn r0, r0
}




void ov70_02243420(void) {
    *((u32*)(r0 + 0x4c)) = 8;
    // sub r1, #9
}




void ov70_0224342C(void) {
    // str r1, [sp]
    // ldrh r1, [r5]
    // ldr r0, [sp]
    Pokedex_CheckMonSeenFlag();
}




void ov70_02243458(void) {
    // str r1, [sp]
    // ldr r1, [sp, #0x28]
    // add r2, sp, #0xc
    // ldr r7, [sp, #0x2c]
    ov70_0223F658(0x3d);
    // str r0, [sp, #4]
    // ldr r2, [sp, #0xc]
    // ldr r3, [sp, #4]
    ov70_0224342C(r4, r7);
    // str r0, [sp, #8]
    ListMenuItems_New((r0 + 1), 0x3d);
    // str r0, [r6]
    // ldr r0, [sp, #0xc]
    // ldr r5, [sp, #4]
    // ldrh r1, [r5]
    Pokedex_CheckMonSeenFlag(r7);
    // ldrh r2, [r5]
    // ldr r1, [sp]
    ListMenuItems_AppendFromMsgData(*((u32*)r6), r2);
    // ldr r0, [sp, #0xc]
    // ldr r0, [sp, #4]
    Heap_Free();
    // ldr r0, [sp, #8]
}




void ov70_022434C0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // lsl r7, r1, #2
    // mov r4, #0
    // add r5, r0, #0
    // lsl r0, r7, #3
    // str r2, [sp, #4]
    // str r4, [sp, #0xc]
    // add r6, r4, #0
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // mov r1, #0x22
    // add r0, r0, r4
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #4]
    // cmp r7, r0
    // bge _022434FE
    // ldr r0, _02243528 ; =0x000F0E02
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r3, [r5, #0x34]
    // ldr r1, [r5, #4]
    // add r2, r2, r3
    // ldr r0, [r5, #0x1c]
    // ldr r2, [r6, r2]
    // add r1, r1, r4
    // mov r3, #0
    // bl ov70_02242FC4
    // b _02243512
    // ldr r0, [r5, #4]
    // add r0, r0, r4
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // add r2, r2, r4
    // bl sub_02019A60
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // add r0, r0, #1
    // add r7, r7, #1
    // add r6, #8
    // str r0, [sp, #0xc]
    // cmp r0, #4
    // blt _022434D4
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02243528: .word 0x000F0E02
    // TODO: decompile
}




void ov70_0224352C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #0x10
    // add r5, r0, #0
    // lsl r0, r1, #2
    // mov r4, #0
    // add r7, r1, r0
    // lsl r0, r7, #3
    // str r2, [sp, #4]
    // str r4, [sp, #0xc]
    // add r6, r4, #0
    // str r0, [sp, #8]
    // ldr r0, [r5, #4]
    // mov r1, #0x22
    // add r0, r0, r4
    // bl FillWindowPixelBuffer
    // ldr r0, [sp, #4]
    // cmp r7, r0
    // bge _0224356C
    // ldr r0, _02243594 ; =0x000F0E02
    // ldr r2, [sp, #8]
    // str r0, [sp]
    // ldr r3, [r5, #0x34]
    // ldr r1, [r5, #4]
    // add r2, r2, r3
    // ldr r0, [r5, #0x1c]
    // ldr r2, [r6, r2]
    // add r1, r1, r4
    // mov r3, #0
    // bl ov70_02242FC4
    // b _02243580
    // ldr r0, [r5, #4]
    // add r0, r0, r4
    // bl CopyWindowPixelsToVram_TextMode
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // add r2, r2, r4
    // bl sub_02019A60
    // ldr r0, [sp, #0xc]
    // add r4, #0x10
    // add r0, r0, #1
    // add r7, r7, #1
    // add r6, #8
    // str r0, [sp, #0xc]
    // cmp r0, #5
    // blt _02243542
    // add sp, #0x10
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243594: .word 0x000F0E02
    // TODO: decompile
}




void ov70_02243598(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x23
    // bl sub_02019688
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r4, #0
    // mov r1, #0
    // bl ov70_0224190C
    // mov r0, #0x3e
    // ldrsh r2, [r4, r0]
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #2
    // ldr r0, _0224367C ; =ov70_02245E84
    // ldr r0, [r0, r1]
    // add r0, r2, r0
    // str r0, [sp]
    // ldr r0, [r4, #0x20]
    // str r0, [sp, #4]
    // add r0, r4, #0
    // ldr r1, [r4, #0x28]
    // ldr r2, [r4, #0x24]
    // ldr r3, [r4, #0x30]
    // add r0, #0x34
    // bl ov70_02243458
    // str r0, [r4, #0x5c]
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r2, [r4, #0x5c]
    // add r0, r4, #0
    // bl ov70_022434C0
    // ldr r0, [r4, #0x5c]
    // mov r1, #4
    // bl ov70_02242508
    // str r0, [sp]
    // mov r3, #0x5a
    // ldr r2, [r4, #4]
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x38]
    // add r2, #0x40
    // bl ov70_02243F00
    // ldr r2, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r4, #0x1c]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r4, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0
    // ldr r1, _02243680 ; =ov70_02245D76
    // lsl r3, r0, #1
    // ldr r2, _02243684 ; =ov70_02245D77
    // str r0, [r4, #0x48]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x10]
    // mov r1, #0xe4
    // mov r2, #0x78
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x9a
    // mov r2, #0x78
    // bl ov70_02238F9C
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0xd
    // str r0, [r4, #0x4c]
    // sub r0, #0xe
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _0224367C: .word ov70_02245E84
    // _02243680: .word ov70_02245D76
    // _02243684: .word ov70_02245D77
    // TODO: decompile
}




void ov70_02243688(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov70_0224261C
    // add r4, r0, #0
    // mov r0, #1
    // mvn r0, r0
    // cmp r4, r0
    // beq _022436A2
    // add r0, r0, #1
    // cmp r4, r0
    // beq _022436F6
    // b _022436C4
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, _022436FC ; =0x000005DC
    // bl PlaySE
    // mov r0, #0xe
    // str r0, [r5, #0x4c]
    // sub r0, #0xf
    // add r5, #0x40
    // strh r0, [r5]
    // b _022436F6
    // mov r2, #4
    // str r2, [sp]
    // mov r1, #0
    // ldr r0, [r5, #0x1c]
    // add r3, r1, #0
    // bl sub_020198FC
    // ldr r0, [r5, #0xc]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x10]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x14]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #3
    // str r0, [r5, #0x4c]
    // mov r0, #0xf
    // str r0, [r5, #0x50]
    // add r5, #0x40
    // strh r4, [r5]
    // mov r0, #0
    // mvn r0, r0
    // pop {r3, r4, r5, pc}
    // _022436FC: .word 0x000005DC
    // TODO: decompile
}




void ov70_02243700(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4, #0x10]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x14]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // add r0, r4, #0
    // mov r1, #0
    // bl ov70_02241DB4
    // ldr r0, [r4, #0x34]
    // bl ListMenuItems_Delete
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // cmp r0, #8
    // ble _0224372E
    // bl GF_AssertFail
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #3
    // ldr r0, _0224374C ; =ov70_02245F5C
    // ldr r0, [r0, r1]
    // cmp r0, #1
    // bne _02243740
    // mov r0, #7
    // b _02243742
    // mov r0, #0xb
    // str r0, [r4, #0x4c]
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // nop
    // _0224374C: .word ov70_02245F5C
    // TODO: decompile
}




void ov70_02243750(void) {
    ov70_02241DB4(0);
    ListMenuItems_Delete(*((u32*)(r4 + 0x34)));
    // ldrsh r0, [r4, r0]
}




void ov70_02243768(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #6
    // mov r2, #0x20
    // add r4, r0, #0
    // bl ov70_02242D44
    // mov r1, #0
    // mov r0, #4
    // str r0, [sp]
    // ldr r0, [r4, #0x1c]
    // sub r2, r1, #4
    // add r3, r1, #0
    // bl sub_020198FC
    // mov r0, #1
    // str r0, [r4, #0x4c]
    // mov r0, #0x11
    // str r0, [r4, #0x50]
    // mov r0, #0xa
    // str r0, [r4, #0x48]
    // sub r0, #0xb
    // strh r0, [r4, #0x3c]
    // ldr r0, [r4, #0x48]
    // ldr r1, _022437C0 ; =ov70_02245DF8
    // lsl r3, r0, #1
    // ldr r2, _022437C4 ; =ov70_02245DF9
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r4, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0
    // mvn r0, r0
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _022437C0: .word ov70_02245DF8
    // _022437C4: .word ov70_02245DF9
    // TODO: decompile
}




void ov70_022437C8(void) {
    // add r1, #0x64
    ov70_022429B8(r0);
    // mvn r0, r0
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x12;
    // sub r0, #0x13
    *((u16*)(r5 + 0x3c)) = 0x12;
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x12;
    // sub r0, #0x14
    *((u16*)(r5 + 0x3c)) = 0x12;
    GF_AssertFail(0x12);
    *((u16*)(r5 + 0x3c)) = r4;
    *((u32*)(r5 + 0x4c)) = 0x12;
    // mvn r0, r0
}




void ov70_02243848(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r1, #6
    // bl ov70_02241DB4
    // ldr r0, [r4, #0xc]
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // mov r0, #0x3c
    // ldrsh r2, [r4, r0]
    // cmp r2, #0
    // bge _0224387E
    // add r1, r0, #0
    // sub r1, #0x3d
    // cmp r2, r1
    // bne _02243872
    // add sp, #4
    // sub r0, #0x3e
    // pop {r3, r4, pc}
    // sub r0, #0x3e
    // cmp r2, r0
    // bne _022438C8
    // add sp, #4
    // mov r0, #0
    // pop {r3, r4, pc}
    // cmp r2, #8
    // ble _02243886
    // bl GF_AssertFail
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #3
    // ldr r0, _022438D0 ; =ov70_02245F5C
    // ldr r0, [r0, r1]
    // cmp r0, #1
    // bne _022438C4
    // mov r1, #0
    // strh r1, [r4, #0x3e]
    // mov r2, #3
    // str r2, [sp]
    // ldr r0, [r4, #0x1c]
    // sub r2, r2, #7
    // add r3, r1, #0
    // bl sub_020198FC
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _022438B2
    // mov r1, #0
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0xc]
    // mov r1, #0x32
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #2
    // str r0, [r4, #0x4c]
    // mov r0, #0x18
    // str r0, [r4, #0x50]
    // b _022438C8
    // mov r0, #0x14
    // str r0, [r4, #0x4c]
    // mov r0, #0
    // mvn r0, r0
    // add sp, #4
    // pop {r3, r4, pc}
    // _022438D0: .word ov70_02245F5C
    // TODO: decompile
}




void ov70_022438D4(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #6
    // mov r2, #0x10
    // bl ov70_02242D44
    // ldr r0, [r4, #0xc]
    // mov r1, #0x3d
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // ldr r1, _02243920 ; =ov70_02245DF8
    // ldr r2, _02243924 ; =ov70_02245DF9
    // lsl r3, r0, #1
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // str r0, [r4, #0x48]
    // add r1, #0x10
    // ldr r0, [r4, #0xc]
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x18]
    // cmp r0, #0
    // beq _02243918
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x11
    // str r0, [r4, #0x4c]
    // sub r0, #0x12
    // pop {r4, pc}
    // _02243920: .word ov70_02245DF8
    // _02243924: .word ov70_02245DF9
    // TODO: decompile
}




void ov70_02243928(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x20
    // bl sub_02019688
    // ldr r0, [r5, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r5, #0
    // mov r1, #5
    // bl ov70_0224190C
    // add r0, r5, #0
    // add r0, #0x64
    // mov r1, #1
    // mov r2, #0x1a
    // bl MI_CpuFill8
    // mov r0, #2
    // str r0, [sp]
    // ldr r0, _02243A50 ; =0x000F0E02
    // mov r3, #0x3c
    // str r0, [sp, #4]
    // ldrsh r3, [r5, r3]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // ldr r2, [r5, #4]
    // add r3, #0x6e
    // bl ov70_02243E8C
    // mov r4, #1
    // mov r7, #0x10
    // mov r1, #0x3c
    // ldrsh r1, [r5, r1]
    // add r0, r5, #0
    // lsl r2, r1, #2
    // ldr r1, _02243A54 ; =ov70_02245E84
    // ldr r1, [r1, r2]
    // add r1, r4, r1
    // sub r1, r1, #1
    // bl ov70_02243FD4
    // cmp r0, #0
    // ble _022439A4
    // mov r1, #0x3c
    // ldrsh r1, [r5, r1]
    // ldr r0, _02243A50 ; =0x000F0E02
    // lsl r2, r1, #2
    // ldr r1, _02243A54 ; =ov70_02245E84
    // ldr r2, [r1, r2]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // mov r1, #1
    // b _022439B8
    // mov r1, #0x3c
    // ldrsh r1, [r5, r1]
    // ldr r0, _02243A58 ; =0x00080902
    // lsl r2, r1, #2
    // ldr r1, _02243A54 ; =ov70_02245E84
    // ldr r2, [r1, r2]
    // add r1, r5, r4
    // add r2, r2, r1
    // add r2, #0x63
    // mov r1, #0
    // strb r1, [r2]
    // mov r1, #5
    // str r1, [sp]
    // str r0, [sp, #4]
    // mov r3, #0x3c
    // ldrsh r3, [r5, r3]
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // lsl r6, r3, #3
    // ldr r3, _02243A5C ; =ov70_02245F58
    // ldr r1, [r5, #0x24]
    // ldr r3, [r3, r6]
    // add r2, r2, r7
    // add r3, r4, r3
    // lsl r6, r3, #2
    // ldr r3, _02243A60 ; =ov70_02245FA0
    // add r3, r3, r6
    // sub r3, r3, #4
    // ldr r3, [r3]
    // bl ov70_02243E8C
    // add r4, r4, #1
    // add r7, #0x10
    // cmp r4, #4
    // blt _02243976
    // ldr r2, [r5, #4]
    // ldr r0, [r5, #0x1c]
    // ldr r1, [r5, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r5, #0x1c]
    // mov r2, #0x10
    // add r3, r1, #0
    // bl sub_020196E8
    // ldr r0, [r5, #0xc]
    // mov r1, #0x2f
    // bl Sprite_SetAnimCtrlSeq
    // mov r0, #0x3e
    // ldrsh r0, [r5, r0]
    // cmp r0, #0
    // bge _02243A18
    // mov r0, #0
    // b _02243A18
    // str r0, [r5, #0x48]
    // ldr r0, [r5, #0x48]
    // ldr r1, _02243A64 ; =ov70_02245E26
    // lsl r3, r0, #1
    // ldr r2, _02243A68 ; =ov70_02245E27
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r5, #0xc]
    // add r1, #0x10
    // lsl r1, r1, #3
    // lsl r2, r2, #3
    // bl ov70_02238F9C
    // ldr r0, [r5, #0xc]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r5, #0x18]
    // cmp r0, #0
    // beq _02243A46
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x15
    // str r0, [r5, #0x4c]
    // sub r0, #0x16
    // add sp, #8
    // pop {r3, r4, r5, r6, r7, pc}
    // _02243A50: .word 0x000F0E02
    // _02243A54: .word ov70_02245E84
    // _02243A58: .word 0x00080902
    // _02243A5C: .word ov70_02245F58
    // _02243A60: .word ov70_02245FA0
    // _02243A64: .word ov70_02245E26
    // _02243A68: .word ov70_02245E27
    // TODO: decompile
}




void ov70_02243A6C(void) {
    // add r1, #0x64
    ov70_02242390(r0);
    // add r0, r5, r5
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _02243A8A: ; jump table
    // mvn r0, r0
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x4c)) = 0x16;
    *((u16*)(r4 + 0x3e)) = r5;
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    *((u32*)(r4 + 0x4c)) = 0x16;
    // sub r0, #0x17
    *((u16*)(r4 + 0x3e)) = 0x16;
    // mvn r0, r0
}




void ov70_02243AC4(void) {
    ov70_02241DB4(5);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0xc)), 0);
    // ldrsh r0, [r4, r0]
    *((u32*)(r4 + 0x4c)) = 0x13;
    // str r0, [sp]
    sub_020198FC(*((u32*)(r4 + 0x1c)), 0, (0 - 4), 0);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 0);
    Sprite_SetAnimCtrlSeq(*((u32*)(r4 + 0xc)), 0x32);
    *((u32*)(r4 + 0x4c)) = 2;
    *((u32*)(r4 + 0x50)) = 0x18;
    // mvn r0, r0
}




void ov70_02243B1C(void) {
    *((u32*)(r0 + 0x4c)) = 0x14;
    // ldrsh r2, [r0, r1]
    // sub r1, #0x3f
    *((u32*)(r0 + 0x48)) = r2;
}




void ov70_02243B2C(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // mov r0, #1
    // str r0, [sp]
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // mov r2, #0x64
    // mov r3, #0x1e
    // bl sub_02019688
    // ldr r0, [r4, #0x1c]
    // mov r1, #0
    // bl sub_02019B08
    // add r0, r4, #0
    // mov r1, #3
    // bl ov70_0224190C
    // mov r3, #0x3c
    // ldrsh r3, [r4, r3]
    // mov r2, #0x3e
    // add r0, r4, #0
    // lsl r5, r3, #2
    // ldr r3, _02243BFC ; =ov70_02245E84
    // ldrsh r2, [r4, r2]
    // ldr r3, [r3, r5]
    // ldr r1, [r4, #0x2c]
    // add r0, #0x34
    // add r2, r2, r3
    // bl ov70_0223F904
    // str r0, [r4, #0x5c]
    // ldr r2, [r4, #0x5c]
    // add r0, r4, #0
    // mov r1, #0
    // bl ov70_0224352C
    // add r0, r4, #0
    // mov r1, #0
    // add r0, #0x5a
    // strh r1, [r0]
    // ldr r0, [r4, #0x5c]
    // mov r1, #5
    // bl ov70_02242508
    // str r0, [sp]
    // mov r3, #0x5a
    // ldr r2, [r4, #4]
    // ldrsh r3, [r4, r3]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x38]
    // add r2, #0x50
    // bl ov70_02243F00
    // ldr r2, [r4, #4]
    // ldr r0, [r4, #0x1c]
    // ldr r1, [r4, #0x24]
    // add r2, #0xe0
    // mov r3, #0x44
    // bl ov70_02243EB8
    // mov r1, #0
    // ldr r0, [r4, #0x1c]
    // mov r2, #1
    // add r3, r1, #0
    // bl sub_020196E8
    // mov r0, #0
    // ldr r1, _02243C00 ; =ov70_02245D8A
    // lsl r3, r0, #1
    // ldr r2, _02243C04 ; =ov70_02245D8B
    // str r0, [r4, #0x48]
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x10]
    // mov r1, #0xb0
    // mov r2, #0x88
    // bl ov70_02238F9C
    // ldr r0, [r4, #0x14]
    // mov r1, #0x58
    // mov r2, #0x88
    // bl ov70_02238F9C
    // ldr r0, [r4, #0xc]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x10]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // ldr r0, [r4, #0x14]
    // mov r1, #1
    // bl Sprite_SetDrawFlag
    // mov r0, #0x19
    // str r0, [r4, #0x4c]
    // sub r0, #0x1a
    // pop {r3, r4, r5, pc}
    // nop
    // _02243BFC: .word ov70_02245E84
    // _02243C00: .word ov70_02245D8A
    // _02243C04: .word ov70_02245D8B
    // TODO: decompile
}




void ov70_02243C08(void) {
    ov70_02242C64();
    // mvn r0, r0
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u32*)(r5 + 0x4c)) = 2;
    *((u32*)(r5 + 0x50)) = 0x1a;
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 6, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x1b;
    // add r5, #0x42
    // strh r4, [r5]
    // mvn r0, r0
}




void ov70_02243C8C(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #3
    // bl ov70_02241DB4
    // ldr r0, [r4, #0x34]
    // bl ListMenuItems_Delete
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // cmp r0, #8
    // ble _02243CA8
    // bl GF_AssertFail
    // mov r0, #0x3c
    // ldrsh r0, [r4, r0]
    // lsl r1, r0, #3
    // ldr r0, _02243CC4 ; =ov70_02245F5C
    // ldr r0, [r0, r1]
    // cmp r0, #1
    // bne _02243CBA
    // mov r0, #0x13
    // b _02243CBC
    // mov r0, #0x17
    // str r0, [r4, #0x4c]
    // mov r0, #0
    // mvn r0, r0
    // pop {r4, pc}
    // _02243CC4: .word ov70_02245F5C
    // TODO: decompile
}




void ov70_02243CC8(void) {
    ov70_02241DB4(3);
    Sprite_SetDrawFlag(*((u32*)(r4 + 0x18)), 1);
    ListMenuItems_Delete(*((u32*)(r4 + 0x34)));
    // ldrsh r0, [r4, r0]
}




void ov70_02243CEC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0
    // str r1, [r4, #0x48]
    // bl ov70_02242E58
    // ldr r0, [r4, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x48]
    // ldr r1, _02243D20 ; =ov70_02245D66
    // lsl r3, r0, #1
    // ldr r2, _02243D24 ; =ov70_02245D67
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // bl ov70_02238F9C
    // mov r0, #1
    // str r0, [r4, #0x4c]
    // mov r0, #0x1d
    // str r0, [r4, #0x50]
    // sub r0, #0x1e
    // pop {r4, pc}
    // nop
    // _02243D20: .word ov70_02245D66
    // _02243D24: .word ov70_02245D67
    // TODO: decompile
}




void ov70_02243D28(void) {
    ov70_022426F4();
    // mvn r0, r0
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x1e;
    // sub r0, #0x20
    // add r5, #0x44
    // strb r0, [r5]
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x1e;
    // add r5, #0x44
    // strb r4, [r5]
    // mvn r0, r0
}




void ov70_02243D90(void) {
}




void ov70_02243DA0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r1, #0
    // str r1, [r4, #0x48]
    // bl ov70_02242EE4
    // ldr r0, [r4, #0xc]
    // mov r1, #0x31
    // bl Sprite_SetAnimCtrlSeq
    // ldr r0, [r4, #0x48]
    // ldr r1, _02243DD4 ; =ov70_02245D80
    // lsl r3, r0, #1
    // ldr r2, _02243DD8 ; =ov70_02245D81
    // ldrb r1, [r1, r3]
    // ldrb r2, [r2, r3]
    // ldr r0, [r4, #0xc]
    // bl ov70_02238F9C
    // mov r0, #1
    // str r0, [r4, #0x4c]
    // mov r0, #0x20
    // str r0, [r4, #0x50]
    // sub r0, #0x21
    // pop {r4, pc}
    // nop
    // _02243DD4: .word ov70_02245D80
    // _02243DD8: .word ov70_02245D81
    // TODO: decompile
}




void ov70_02243DDC(void) {
    ov70_022428C0();
    // mvn r0, r0
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x21;
    // sub r0, #0x23
    // add r5, #0x45
    // strb r0, [r5]
    // str r2, [sp]
    sub_020198FC(*((u32*)(r5 + 0x1c)), 0, 4, 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0xc)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x10)), 0);
    Sprite_SetDrawFlag(*((u32*)(r5 + 0x14)), 0);
    *((u32*)(r5 + 0x4c)) = 3;
    *((u32*)(r5 + 0x50)) = 0x21;
    // ldrsh r0, [r5, r0]
    // add r5, #0x45
    // add r0, r4, r0
    // add r0, r1, r0
    // strb r0, [r5]
    // mvn r0, r0
}




void ov70_02243E74(void) {
    ov70_02241DB4(2);
    ListMenuItems_Delete(*((u32*)(r4 + 0x34)));
    // ldrsb r0, [r4, r0]
}




void ov70_02243E8C(void) {
    NewString_ReadMsgData(r1, r3);
    // ldr r0, [sp, #0x1c]
    // ldr r3, [sp, #0x18]
    // str r0, [sp]
    ov70_02242FC4(r5, r6, r0);
    String_Delete(r4);
}




void ov70_02243EB8(void) {
    // push {r4, r5, r6, lr}
    // sub sp, #0x10
    // add r6, r0, #0
    // add r0, r1, #0
    // add r1, r3, #0
    // add r5, r2, #0
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0xff
    // str r0, [sp, #4]
    // ldr r0, _02243EFC ; =0x000F0E02
    // mov r1, #4
    // str r0, [sp, #8]
    // add r0, r5, #0
    // add r2, r4, #0
    // str r3, [sp, #0xc]
    // bl AddTextPrinterParameterizedWithColor
    // add r0, r5, #0
    // bl CopyWindowPixelsToVram_TextMode
    // add r0, r6, #0
    // mov r1, #0
    // add r2, r5, #0
    // bl sub_02019A60
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0x10
    // pop {r4, r5, r6, pc}
    // _02243EFC: .word 0x000F0E02
    // TODO: decompile
}




void ov70_02243F00(void) {
    // str r4, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    PrintUIntOnWindow(r1, (r3 + 1), 2, 1);
    // str r1, [sp]
    sub_0200CDAC(r5, 0, r4, 0x10);
    // str r4, [sp]
    // str r0, [sp, #4]
    // ldr r1, [sp, #0x20]
    // str r3, [sp, #8]
    PrintUIntOnWindow(r5, 2, 0);
    CopyWindowPixelsToVram_TextMode(r4);
    sub_02019A60(r6, 0, r4);
}




void ov70_02243F54(void) {
    // add r2, sp, #0
    ov70_0223F658(0x3d);
    // ldr r2, [sp]
    ov70_0224342C(*((u32*)(r4 + 0x30)), *((u32*)(r4 + 0x20)), r0);
    Heap_Free(r5);
}




void ov70_02243F7C(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _02243FC8 ; =ov70_02245E84
    // lsl r3, r1, #2
    // ldr r4, [r2, r3]
    // ldr r2, _02243FCC ; =ov70_02245F5C
    // lsl r1, r1, #3
    // ldr r2, [r2, r1]
    // add r7, r0, #0
    // cmp r2, #0
    // ble _02243FB4
    // mov r5, #0
    // cmp r2, #0
    // ble _02243FC2
    // ldr r0, _02243FD0 ; =ov70_02245F58
    // add r6, r0, r1
    // add r0, r7, #0
    // add r1, r4, r5
    // bl ov70_02243F54
    // cmp r0, #0
    // ble _02243FAA
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r6, #4]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02243F9A
    // b _02243FC2
    // add r1, r4, #0
    // bl ov70_02243F54
    // cmp r0, #0
    // ble _02243FC2
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _02243FC8: .word ov70_02245E84
    // _02243FCC: .word ov70_02245F5C
    // _02243FD0: .word ov70_02245F58
    // TODO: decompile
}




void ov70_02243FD4(void) {
}




void ov70_02243FE0(void) {
    // push {r3, r4, r5, r6, r7, lr}
    // ldr r2, _0224402C ; =ov70_02245E84
    // lsl r3, r1, #2
    // ldr r4, [r2, r3]
    // ldr r2, _02244030 ; =ov70_02245F5C
    // lsl r1, r1, #3
    // ldr r2, [r2, r1]
    // add r7, r0, #0
    // cmp r2, #0
    // ble _02244018
    // mov r5, #0
    // cmp r2, #0
    // ble _02244026
    // ldr r0, _02244034 ; =ov70_02245F58
    // add r6, r0, r1
    // add r0, r7, #0
    // add r1, r4, r5
    // bl ov70_02243FD4
    // cmp r0, #0
    // ble _0224400E
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // ldr r0, [r6, #4]
    // add r5, r5, #1
    // cmp r5, r0
    // blt _02243FFE
    // b _02244026
    // add r1, r4, #0
    // bl ov70_02243FD4
    // cmp r0, #0
    // ble _02244026
    // mov r0, #1
    // pop {r3, r4, r5, r6, r7, pc}
    // mov r0, #0
    // pop {r3, r4, r5, r6, r7, pc}
    // nop
    // _0224402C: .word ov70_02245E84
    // _02244030: .word ov70_02245F5C
    // _02244034: .word ov70_02245F58
    // TODO: decompile
}




void ov70_02244038(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl ov70_02244670
    // ldr r2, _02244114 ; =0x04000304
    // ldr r0, _02244118 ; =0xFFFF7FFF
    // ldrh r1, [r2]
    // and r0, r1
    // strh r0, [r2]
    // mov r0, #6
    // str r0, [sp]
    // mov r1, #1
    // str r1, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r2, r1, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // ldr r0, [r4, #4]
    // bl ov70_022441A4
    // add r0, r4, #0
    // bl ov70_022442B4
    // add r0, r4, #0
    // bl ov70_0224458C
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // mov r0, #1
    // add r1, r0, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #2
    // mov r1, #1
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #4
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #8
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // bl ov00_021EC5B4
    // cmp r0, #0
    // bne _022440FA
    // ldr r1, [r4]
    // ldr r0, [r1, #0x3c]
    // cmp r0, #0
    // beq _022440EE
    // ldr r0, [r1, #0x20]
    // bl sub_02039418
    // ldr r0, _0224411C ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // ldr r1, _02244120 ; =0x00000BA8
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r3, r2, #0
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #2
    // bl ov70_02238D84
    // add r0, r4, #0
    // bl ov70_02238F64
    // b _0224410C
    // mov r0, #4
    // bl Sys_ClearSleepDisableFlag
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // b _0224410C
    // ldr r0, [r4]
    // ldr r0, [r0, #0x20]
    // bl sub_02039418
    // add r0, r4, #0
    // bl ov70_02245124
    // mov r0, #0x11
    // str r0, [r4, #0x2c]
    // mov r0, #2
    // add sp, #0xc
    // pop {r3, r4, pc}
    // nop
    // _02244114: .word 0x04000304
    // _02244118: .word 0xFFFF7FFF
    // _0224411C: .word 0x00000F0F
    // _02244120: .word 0x00000BA8
    // TODO: decompile
}




void ov70_02244124(void) {
    // push {r3, r4, r5, lr}
    // add r5, r0, #0
    // bl ov70_02238E44
    // bl sub_0203A930
    // ldr r4, [r5, #0x2c]
    // ldr r1, _02244150 ; =ov70_02246780
    // lsl r2, r4, #2
    // ldr r1, [r1, r2]
    // add r0, r5, #0
    // blx r1
    // ldr r1, [r5, #0x2c]
    // cmp r4, r1
    // beq _0224414E
    // mov r1, #0x16
    // mov r2, #0
    // lsl r1, r1, #8
    // strh r2, [r5, r1]
    // add r1, r1, #2
    // strh r2, [r5, r1]
    // pop {r3, r4, r5, pc}
    // _02244150: .word ov70_02246780
    // TODO: decompile
}




void ov70_02244154(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _0224419C ; =0x000012D0
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _0224416E
    // bl SysTask_Destroy
    // ldr r0, _0224419C ; =0x000012D0
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r0, #4
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov70_022446A8
    // add r0, r4, #0
    // bl ov70_02244644
    // ldr r0, [r4, #4]
    // bl ov70_02244290
    // ldr r0, _022441A0 ; =0x000012D4
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r4, #0
    // bl ov70_02238E58
    // ldr r0, [r4, #0x14]
    // cmp r0, #0
    // bne _02244196
    // mov r0, #5
    // pop {r4, pc}
    // mov r0, #1
    // pop {r4, pc}
    // nop
    // _0224419C: .word 0x000012D0
    // _022441A0: .word 0x000012D4
    // TODO: decompile
}




void ov70_022441A4(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #0x70
    // ldr r5, _02244280 ; =ov70_02246058
    // add r4, r0, #0
    // ldmia r5!, {r0, r1}
    // add r3, sp, #0x54
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #0
    // str r0, [r3]
    // add r0, r4, #0
    // add r3, r1, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // add r0, r4, #0
    // mov r1, #0
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _02244284 ; =ov70_0224603C
    // add r3, sp, #0x38
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #1
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineATogglePlanes
    // ldr r5, _02244288 ; =ov70_02246020
    // add r3, sp, #0x1c
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #4
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #1
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add r0, r4, #0
    // mov r1, #4
    // bl BgClearTilemapBufferAndCommit
    // ldr r5, _0224428C ; =ov70_02246074
    // add r3, sp, #0
    // ldmia r5!, {r0, r1}
    // add r2, r3, #0
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldmia r5!, {r0, r1}
    // stmia r3!, {r0, r1}
    // ldr r0, [r5]
    // mov r1, #5
    // str r0, [r3]
    // add r0, r4, #0
    // mov r3, #0
    // bl InitBgFromTemplate
    // mov r0, #2
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // mov r0, #0
    // mov r1, #0x20
    // add r2, r0, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #4
    // mov r1, #0x20
    // mov r2, #0
    // mov r3, #0x3d
    // bl BG_ClearCharDataRange
    // mov r0, #0x10
    // mov r1, #0
    // bl GfGfx_EngineBTogglePlanes
    // add sp, #0x70
    // pop {r3, r4, r5, pc}
    // nop
    // _02244280: .word ov70_02246058
    // _02244284: .word ov70_0224603C
    // _02244288: .word ov70_02246020
    // _0224428C: .word ov70_02246074
    // TODO: decompile
}




void ov70_02244290(void) {
}




void ov70_022442B4(void) {
    // push {r4, r5, r6, r7, lr}
    // sub sp, #0x3c
    // str r0, [sp, #0x10]
    // ldr r4, [r0, #4]
    // mov r0, #0x58
    // mov r1, #0x3d
    // bl NARC_New
    // mov r2, #0
    // str r2, [sp]
    // mov r1, #0x3d
    // str r1, [sp, #4]
    // mov r1, #3
    // add r3, r2, #0
    // str r0, [sp, #0x2c]
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r3, #0
    // str r3, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // ldr r0, [sp, #0x2c]
    // mov r1, #3
    // mov r2, #4
    // bl GfGfxLoader_GXLoadPalFromOpenNarc
    // mov r1, #0x1a
    // mov r0, #0
    // lsl r1, r1, #4
    // mov r2, #0x3d
    // bl LoadFontPal1
    // mov r1, #0x1a
    // mov r0, #4
    // lsl r1, r1, #4
    // mov r2, #0x3d
    // bl LoadFontPal1
    // ldr r0, [sp, #0x10]
    // ldr r0, [r0]
    // ldr r0, [r0, #0x24]
    // bl Options_GetFrame
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r1, #0
    // mov r2, #1
    // mov r3, #0xe
    // bl LoadUserFrameGfx2
    // mov r1, #0
    // str r1, [sp]
    // mov r0, #0x3d
    // str r0, [sp, #4]
    // add r0, r4, #0
    // mov r2, #0x1f
    // mov r3, #0xb
    // bl LoadUserFrameGfx1
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x3d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #2
    // add r2, r4, #0
    // mov r3, #1
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // mov r0, #6
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x3d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #6
    // add r2, r4, #0
    // mov r3, #1
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // str r0, [sp]
    // str r0, [sp, #4]
    // str r0, [sp, #8]
    // mov r0, #0x3d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xb
    // add r2, r4, #0
    // mov r3, #5
    // bl GfGfxLoader_LoadCharDataFromOpenNarc
    // mov r1, #0
    // mov r0, #6
    // str r1, [sp]
    // lsl r0, r0, #8
    // str r0, [sp, #4]
    // str r1, [sp, #8]
    // mov r0, #0x3d
    // str r0, [sp, #0xc]
    // ldr r0, [sp, #0x2c]
    // mov r1, #0xc
    // add r2, r4, #0
    // mov r3, #5
    // bl GfGfxLoader_LoadScrnDataFromOpenNarc
    // mov r0, #0
    // add r1, r0, #0
    // bl BG_SetMaskColor
    // mov r0, #4
    // mov r1, #0
    // bl BG_SetMaskColor
    // mov r2, #0x33
    // ldr r1, _022444CC ; =0x000012D0
    // ldr r0, [sp, #0x10]
    // lsl r2, r2, #4
    // add r0, r0, r1
    // mov r1, #0
    // bl MI_CpuFill8
    // ldr r0, [sp, #0x2c]
    // mov r1, #5
    // add r2, sp, #0x38
    // mov r3, #0x3d
    // bl GfGfxLoader_GetPlttDataFromOpenNarc
    // add r4, r0, #0
    // ldr r0, [sp, #0x38]
    // ldr r2, _022444D0 ; =0x000012D8
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // add r1, r1, r2
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // ldr r0, [sp, #0x38]
    // ldr r2, _022444D4 ; =0x00001358
    // ldr r1, [sp, #0x10]
    // ldr r0, [r0, #0xc]
    // add r1, r1, r2
    // mov r2, #0x80
    // bl MIi_CpuCopy16
    // add r0, r4, #0
    // bl Heap_Free
    // mov r0, #0
    // str r0, [sp, #0x24]
    // str r0, [sp, #0x28]
    // ldr r1, _022444D4 ; =0x00001358
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x10]
    // sub r1, #0x80
    // add r0, r0, r1
    // str r0, [sp, #0x14]
    // mov r0, #0
    // str r0, [sp, #0x20]
    // str r0, [sp, #0x1c]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // lsl r1, r0, #5
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // str r0, [sp, #0x30]
    // ldr r0, [sp, #0x24]
    // cmp r0, #0x15
    // blt _02244420
    // bl GF_AssertFail
    // ldr r0, [sp, #0x30]
    // mov r7, #1
    // add r4, r0, #2
    // ldr r0, [sp, #0x18]
    // add r6, r0, #2
    // ldr r0, [sp, #0x14]
    // add r5, r0, #2
    // ldr r0, [sp, #0x20]
    // asr r0, r0, #8
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // str r0, [sp, #0x34]
    // ldr r0, _022444D0 ; =0x000012D8
    // ldr r3, [sp, #0x34]
    // ldrh r0, [r4, r0]
    // add r1, r6, #0
    // mov r2, #1
    // str r0, [sp]
    // add r0, r5, #0
    // bl BlendPalette
    // add r7, r7, #1
    // add r4, r4, #2
    // add r6, r6, #2
    // add r5, r5, #2
    // cmp r7, #0x10
    // blt _02244438
    // ldr r0, [sp, #0x18]
    // add r0, #0x20
    // str r0, [sp, #0x18]
    // ldr r0, [sp, #0x24]
    // add r0, r0, #1
    // str r0, [sp, #0x24]
    // ldr r0, [sp, #0x1c]
    // cmp r0, #1
    // beq _02244482
    // mov r0, #3
    // ldr r1, [sp, #0x20]
    // lsl r0, r0, #8
    // add r1, r1, r0
    // mov r0, #1
    // lsl r0, r0, #0xc
    // str r1, [sp, #0x20]
    // cmp r1, r0
    // blt _02244416
    // str r0, [sp, #0x20]
    // mov r0, #1
    // str r0, [sp, #0x1c]
    // b _02244416
    // ldr r0, [sp, #0x14]
    // add r0, #0x20
    // str r0, [sp, #0x14]
    // ldr r0, [sp, #0x28]
    // add r0, r0, #1
    // str r0, [sp, #0x28]
    // cmp r0, #3
    // blt _02244404
    // ldr r1, _022444D4 ; =0x00001358
    // ldr r0, [sp, #0x10]
    // add r0, r0, r1
    // mov r1, #0x2a
    // lsl r1, r1, #4
    // bl DC_FlushRange
    // ldr r1, _022444D8 ; =0x000012D4
    // ldr r0, [sp, #0x10]
    // mov r2, #1
    // str r2, [r0, r1]
    // ldr r2, _022444DC ; =0x000015FC
    // mov r3, #0
    // str r3, [r0, r2]
    // sub r2, r1, #4
    // ldr r1, [sp, #0x10]
    // ldr r0, _022444E0 ; =ov70_022444E4
    // add r1, r1, r2
    // mov r2, #0x14
    // bl SysTask_CreateOnVBlankQueue
    // ldr r2, _022444CC ; =0x000012D0
    // ldr r1, [sp, #0x10]
    // str r0, [r1, r2]
    // ldr r0, [sp, #0x2c]
    // bl NARC_Delete
    // add sp, #0x3c
    // pop {r4, r5, r6, r7, pc}
    // _022444CC: .word 0x000012D0
    // _022444D0: .word 0x000012D8
    // _022444D4: .word 0x00001358
    // _022444D8: .word 0x000012D4
    // _022444DC: .word 0x000015FC
    // _022444E0: .word ov70_022444E4
    // TODO: decompile
}




void ov70_022444E4(void) {
    // push {r4, lr}
    // add r4, r1, #0
    // ldr r0, [r4, #4]
    // cmp r0, #0
    // beq _02244582
    // ldr r1, _02244584 ; =0x0000032B
    // mov r0, #1
    // ldrb r2, [r4, r1]
    // eor r2, r0
    // strb r2, [r4, r1]
    // ldrb r2, [r4, r1]
    // tst r0, r2
    // bne _02244582
    // add r0, r1, #1
    // ldr r0, [r4, r0]
    // cmp r0, #1
    // bhi _0224451A
    // sub r0, r1, #3
    // ldrsh r0, [r4, r0]
    // add r2, r4, #0
    // add r2, #0x88
    // lsl r0, r0, #5
    // add r0, r2, r0
    // mov r1, #0
    // mov r2, #0x20
    // bl GX_LoadBGPltt
    // mov r0, #0xcb
    // lsl r0, r0, #2
    // ldr r0, [r4, r0]
    // cmp r0, #0
    // beq _02244528
    // cmp r0, #2
    // bne _0224453E
    // mov r0, #0xca
    // lsl r0, r0, #2
    // ldrsh r0, [r4, r0]
    // add r1, r4, #0
    // add r1, #0x88
    // lsl r0, r0, #5
    // add r0, r1, r0
    // mov r1, #0
    // mov r2, #0x20
    // bl GXS_LoadBGPltt
    // ldr r0, _02244588 ; =0x0000032A
    // ldrsb r1, [r4, r0]
    // cmp r1, #0
    // bne _02244566
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // add r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // cmp r1, #0x15
    // blt _02244582
    // mov r2, #0x13
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsb r2, [r4, r0]
    // mov r1, #1
    // eor r1, r2
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // sub r1, r0, #2
    // ldrsh r1, [r4, r1]
    // sub r2, r1, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsh r1, [r4, r1]
    // cmp r1, #0
    // bge _02244582
    // mov r2, #1
    // sub r1, r0, #2
    // strh r2, [r4, r1]
    // ldrsb r1, [r4, r0]
    // eor r1, r2
    // strb r1, [r4, r0]
    // pop {r4, pc}
    // _02244584: .word 0x0000032B
    // _02244588: .word 0x0000032A
    // TODO: decompile
}




void ov70_0224458C(void) {
    // push {r3, r4, lr}
    // sub sp, #0x14
    // mov r3, #4
    // add r4, r0, #0
    // str r3, [sp]
    // mov r0, #0x17
    // str r0, [sp, #4]
    // mov r0, #0x10
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x94
    // ldr r1, _02244634 ; =0x00000F48
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // bl AddWindowParameterized
    // ldr r0, _02244634 ; =0x00000F48
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r0, #1
    // str r0, [sp]
    // mov r0, #0x18
    // str r0, [sp, #4]
    // mov r0, #2
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x81
    // lsl r0, r0, #2
    // ldr r1, _02244638 ; =0x00000F38
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #4
    // bl AddWindowParameterized
    // ldr r0, _02244638 ; =0x00000F38
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // mov r3, #1
    // mov r1, #0x2f
    // ldr r0, _0224463C ; =0x000F0E00
    // str r3, [sp]
    // str r0, [sp, #4]
    // ldr r0, _02244638 ; =0x00000F38
    // lsl r1, r1, #6
    // ldr r1, [r4, r1]
    // add r0, r4, r0
    // mov r2, #0
    // bl ov70_02245050
    // mov r0, #0x13
    // str r0, [sp]
    // mov r0, #0x1b
    // str r0, [sp, #4]
    // mov r0, #4
    // str r0, [sp, #8]
    // mov r0, #0xd
    // str r0, [sp, #0xc]
    // mov r0, #0x28
    // ldr r1, _02244640 ; =0x00000F18
    // str r0, [sp, #0x10]
    // ldr r0, [r4, #4]
    // add r1, r4, r1
    // mov r2, #0
    // mov r3, #2
    // bl AddWindowParameterized
    // ldr r0, _02244640 ; =0x00000F18
    // mov r1, #0
    // add r0, r4, r0
    // bl FillWindowPixelBuffer
    // add sp, #0x14
    // pop {r3, r4, pc}
    // nop
    // _02244634: .word 0x00000F48
    // _02244638: .word 0x00000F38
    // _0224463C: .word 0x000F0E00
    // _02244640: .word 0x00000F18
    // TODO: decompile
}




void ov70_02244644(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02244664 ; =0x00000F18
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _02244668 ; =0x00000F38
    // add r0, r4, r0
    // bl RemoveWindow
    // ldr r0, _0224466C ; =0x00000F48
    // add r0, r4, r0
    // bl RemoveWindow
    // pop {r4, pc}
    // nop
    // _02244664: .word 0x00000F18
    // _02244668: .word 0x00000F38
    // _0224466C: .word 0x00000F48
    // TODO: decompile
}




void ov70_02244670(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0xb4
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _022446A0 ; =0x00000BBC
    // str r0, [r4, r1]
    // mov r0, #1
    // lsl r0, r0, #8
    // mov r1, #0x3d
    // bl String_New
    // ldr r1, _022446A4 ; =0x00000BEC
    // str r0, [r4, r1]
    // sub r1, #0x4c
    // ldr r0, [r4, r1]
    // mov r1, #0x1f
    // bl NewString_ReadMsgData
    // mov r1, #0x2f
    // lsl r1, r1, #6
    // str r0, [r4, r1]
    // pop {r4, pc}
    // _022446A0: .word 0x00000BBC
    // _022446A4: .word 0x00000BEC
    // TODO: decompile
}




void ov70_022446A8(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // mov r0, #0x2f
    // lsl r0, r0, #6
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _022446C8 ; =0x00000BEC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // ldr r0, _022446CC ; =0x00000BBC
    // ldr r0, [r4, r0]
    // bl String_Delete
    // pop {r4, pc}
    // _022446C8: .word 0x00000BEC
    // _022446CC: .word 0x00000BBC
    // TODO: decompile
}




void ov70_022446D0(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _022446FC ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _02244700 ; =0x00000BAC
    // mov r2, #0x11
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #1
    // bl ov70_02238D84
    // ldr r0, _02244704 ; =0x000011FA
    // mov r1, #1
    // strh r1, [r4, r0]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _022446FC: .word 0x00000F0F
    // _02244700: .word 0x00000BAC
    // _02244704: .word 0x000011FA
    // TODO: decompile
}




void ov70_02244708(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _02244742
    // ldr r0, _02244768 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // ldr r0, _0224476C ; =0x00000F0F
    // mov r2, #1
    // str r0, [sp]
    // ldr r1, _02244770 ; =0x00000BA8
    // add r0, r4, #0
    // ldr r1, [r4, r1]
    // add r3, r2, #0
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #2
    // bl ov70_02238D84
    // add r0, r4, #0
    // bl ov70_02238F64
    // b _02244760
    // cmp r0, #2
    // bne _02244760
    // ldr r0, _02244768 ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // bl sub_0203946C
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02244768: .word 0x000011C8
    // _0224476C: .word 0x00000F0F
    // _02244770: .word 0x00000BA8
    // TODO: decompile
}




void ov70_02244774(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0224479C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r2, #7
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xd
    // mov r2, #0x10
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _0224479C: .word 0x00000F0F
    // TODO: decompile
}




void ov70_022447A0(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02244800 ; =0x000011B0
    // mov r1, #0x3d
    // ldr r0, [r4, r0]
    // bl Handle2dMenuInput_DeleteOnFinish
    // mov r1, #0
    // mvn r1, r1
    // cmp r0, r1
    // beq _022447FC
    // sub r1, r1, #1
    // cmp r0, r1
    // bne _022447DE
    // bl ov00_021EC5B4
    // cmp r0, #0
    // bne _022447CA
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // b _022447FC
    // add r0, r4, #0
    // mov r1, #7
    // mov r2, #0xb
    // bl ov70_02238E50
    // mov r0, #1
    // str r0, [r4, #0x1c]
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // b _022447FC
    // bl ov00_021EC5B4
    // cmp r0, #0
    // beq _022447EA
    // bl ov00_021EC8D8
    // bl sub_0203946C
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _02244800: .word 0x000011B0
    // TODO: decompile
}




void ov70_02244804(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // ldr r1, _0224482C ; =0x00000F0F
    // add r4, r0, #0
    // str r1, [sp]
    // ldr r1, _02244830 ; =0x00000BAC
    // mov r2, #0x1a
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x12
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _0224482C: .word 0x00000F0F
    // _02244830: .word 0x00000BAC
    // TODO: decompile
}




u32 ov70_02244834(void) {
}




void ov70_02244854(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // bl sub_0203A914
    // ldr r0, _02244880 ; =0x00000F0F
    // ldr r1, _02244884 ; =0x00000BAC
    // str r0, [sp]
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r2, #0x1b
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0x14
    // mov r2, #0xb
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _02244880: .word 0x00000F0F
    // _02244884: .word 0x00000BAC
    // TODO: decompile
}




void ov70_02244888(void) {
}




void ov70_022448C0(void) {
    ov00_021EC60C();
    ov00_021EC5B4();
    ov00_021EC724();
    // add r0, r0, r0
    // add r0, pc
    // asr r0, r0, #0x10
    // add pc, r0
    // _022448E6: ; jump table
    // add r0, sp, #8
    // add r1, sp, #4
    ov00_021EC11C((*((u16*)(r0 + 6)) << 0x10));
    *((u32*)(r4 + 0x40)) = r0;
    // ldr r0, [sp, #8]
    *((u32*)(r4 + 0x44)) = r0;
    // ldr r0, [sp, #4]
    *((u32*)(r4 + 0x48)) = r0;
    ov00_021EC210();
    ov00_021EC8D8();
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x2c)) = 0x17;
    // add r0, sp, #0
    ov00_021EC0FC(0x17);
    ov70_02238F80(r4);
    *((u32*)(r4 + 0x2c)) = 0x15;
    // sub r0, #0x17
    *((u32*)(r4 + 0x3c)) = 0x15;
    // add r0, sp, #0xc
    ov00_021EC9E0(0x15);
    *((u32*)(r4 + 0x2c)) = 4;
}




void ov70_02244944(void) {
}




void ov70_02244954(void) {
    // push {r4, lr}
    // sub sp, #8
    // add r4, r0, #0
    // bl ov00_021ECDC8
    // cmp r0, #5
    // bhi _022449F4
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _0224496E: ; jump table
    // mov r0, #6
    // str r0, [r4, #0x2c]
    // b _022449F4
    // add r0, r4, #0
    // bl ov70_02238F80
    // add r0, sp, #4
    // add r1, sp, #0
    // bl ov00_021EC11C
    // str r0, [r4, #0x40]
    // ldr r0, [sp, #4]
    // str r0, [r4, #0x44]
    // bl ov00_021EC210
    // bl ov00_021EC8D8
    // mov r0, #0x17
    // str r0, [r4, #0x2c]
    // ldr r1, [sp]
    // cmp r1, #7
    // bhi _022449E2
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _022449B2: ; jump table
    // str r0, [r4, #0x2c]
    // b _022449E2
    // bl ov00_021FA0D8
    // mov r0, #0x17
    // str r0, [r4, #0x2c]
    // b _022449E2
    // str r0, [r4, #0x2c]
    // b _022449E2
    // bl ov00_021ED9B4
    // mov r0, #0x17
    // str r0, [r4, #0x2c]
    // b _022449E2
    // bl sub_020399EC
    // ldr r1, [sp, #4]
    // ldr r0, _022449FC ; =0xFFFFB1E0
    // cmp r1, r0
    // bge _022449F4
    // ldr r0, _02244A00 ; =0xFFFF8AD1
    // cmp r1, r0
    // blt _022449F4
    // mov r0, #0x17
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #8
    // pop {r4, pc}
    // nop
    // _022449FC: .word 0xFFFFB1E0
    // _02244A00: .word 0xFFFF8AD1
    // TODO: decompile
}




void ov70_02244A04(void) {
    sub_0202C08C(*((u32*)(*((u32*)r0) + 0x14)));
    Save_SysInfo_GetDwcProfileId(*((u32*)(*((u32*)r5) + 4)));
    Save_SysInfo_SetDwcProfileId(*((u32*)(*((u32*)r5) + 4)), *((u32*)(*((u32*)r5) + 0x34)));
    Save_SysInfo_GetDwcProfileId(*((u32*)(*((u32*)r5) + 4)));
    DWC_CreateFriendKey(r4);
    ov70_022378C0(r6, r0, r1, r0);
    *((u32*)(r5 + 0x2c)) = 7;
}




void ov70_02244A4C(void) {
}




void ov70_02244A68(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // beq _02244B02
    // bl ov70_02237F58
    // add r5, r0, #0
    // ldr r0, _02244B1C ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r5, #0
    // add r0, #0xf
    // cmp r0, #0x11
    // bhi _02244AF6
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244A94: ; jump table
    // mov r0, #9
    // str r0, [r4, #0x2c]
    // b _02244B18
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244B18
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244B18
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244B18
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244B18
    // add r0, r4, #0
    // bl ov70_02238F80
    // bl sub_020399EC
    // b _02244B18
    // ldr r0, _02244B1C ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02244B18
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _02244B1C: .word 0x00001604
    // TODO: decompile
}




void ov70_02244B20(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, [r4]
    // ldr r1, _02244B4C ; =0x00001260
    // ldr r0, [r0, #0x20]
    // add r1, r4, r1
    // bl sub_0203189C
    // ldr r1, _02244B4C ; =0x00001260
    // add r0, r4, r1
    // add r1, #0x64
    // add r1, r4, r1
    // bl ov70_02238304
    // mov r0, #0xa
    // str r0, [r4, #0x2c]
    // ldr r0, _02244B50 ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02244B4C: .word 0x00001260
    // _02244B50: .word 0x00001604
    // TODO: decompile
}




void ov70_02244B54(void) {
    // push {r3, r4, r5, lr}
    // add r4, r0, #0
    // bl ov70_02237F38
    // cmp r0, #0
    // bne _02244B62
    // b _02244C72
    // bl ov70_02237F58
    // add r5, r0, #0
    // ldr r0, _02244C8C ; =0x00001604
    // mov r1, #0
    // str r1, [r4, r0]
    // add r0, r5, #0
    // add r0, #0xf
    // cmp r0, #0x11
    // bhi _02244C66
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244B82: ; jump table
    // add r0, r4, #0
    // bl ov70_02238F80
    // ldr r0, _02244C90 ; =0x000012C4
    // ldr r1, [r4, r0]
    // cmp r1, #0
    // beq _02244BBE
    // cmp r1, #1
    // beq _02244C0E
    // cmp r1, #2
    // beq _02244C18
    // b _02244C22
    // add r0, r0, #4
    // ldr r0, [r4, r0]
    // cmp r0, #3
    // bhi _02244C08
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244BD2: ; jump table
    // add r0, r4, #0
    // mov r1, #1
    // mov r2, #0
    // bl ov70_02238E50
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // b _02244C88
    // ldr r0, _02244C94 ; =0xFFFFEC75
    // str r0, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // ldr r0, _02244C98 ; =0xFFFFEC78
    // str r0, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // ldr r0, _02244C9C ; =0xFFFFEC77
    // str r0, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // bl sub_020399EC
    // b _02244C88
    // ldr r0, _02244CA0 ; =0xFFFFEC74
    // str r0, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // ldr r0, _02244CA4 ; =0xFFFFEC73
    // str r0, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // bl sub_020399EC
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // str r5, [r4, #0x3c]
    // mov r0, #0x15
    // str r0, [r4, #0x2c]
    // b _02244C88
    // add r0, r4, #0
    // bl ov70_02238F80
    // bl sub_020399EC
    // b _02244C88
    // ldr r0, _02244C8C ; =0x00001604
    // ldr r1, [r4, r0]
    // add r1, r1, #1
    // str r1, [r4, r0]
    // ldr r1, [r4, r0]
    // mov r0, #0xe1
    // lsl r0, r0, #4
    // cmp r1, r0
    // bne _02244C88
    // bl sub_020399EC
    // mov r0, #3
    // pop {r3, r4, r5, pc}
    // _02244C8C: .word 0x00001604
    // _02244C90: .word 0x000012C4
    // _02244C94: .word 0xFFFFEC75
    // _02244C98: .word 0xFFFFEC78
    // _02244C9C: .word 0xFFFFEC77
    // _02244CA0: .word 0xFFFFEC74
    // _02244CA4: .word 0xFFFFEC73
    // TODO: decompile
}




void ov70_02244CA8(void) {
    // neg r0, r0
    ov00_021E6A70(*((u32*)(r0 + 0x44)), *((u32*)(r0 + 0x48)));
    // neg r2, r2
    ov70_022451A8(r4, r0, *((u32*)(r4 + 0x44)));
    *((u32*)(r4 + 0x2c)) = 0x18;
}




void ov70_02244CCC(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // ldr r0, _02244CFC ; =gSystem
    // ldr r1, [r0, #0x48]
    // mov r0, #1
    // tst r0, r1
    // bne _02244CE8
    // mov r0, #2
    // tst r0, r1
    // bne _02244CE8
    // ldr r0, _02244D00 ; =gSystem + 0x40
    // ldrh r0, [r0, #0x24]
    // cmp r0, #0
    // beq _02244CF6
    // ldr r0, _02244D04 ; =0x00000F48
    // mov r1, #0
    // add r0, r4, r0
    // bl sub_0200E5D4
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // nop
    // _02244CFC: .word gSystem
    // _02244D00: .word gSystem + 0x40
    // _02244D04: .word 0x00000F48
    // TODO: decompile
}




void ov70_02244D08(void) {
    // push {r3, r4, lr}
    // sub sp, #0xc
    // add r4, r0, #0
    // bl sub_0203A914
    // add r0, r4, #0
    // bl ov70_02238F80
    // mov r0, #6
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // mov r0, #0x3d
    // str r0, [sp, #8]
    // mov r0, #0
    // add r1, r0, #0
    // add r2, r0, #0
    // add r3, r0, #0
    // bl BeginNormalPaletteFade
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // ldr r0, _02244D40 ; =0x000011FC
    // mov r1, #1
    // str r1, [r4, r0]
    // mov r0, #4
    // add sp, #0xc
    // pop {r3, r4, pc}
    // _02244D40: .word 0x000011FC
    // TODO: decompile
}




void ov70_02244D44(void) {
    // push {r4, lr}
    // add r4, r0, #0
    // bl ov70_02238C8C
    // cmp r0, #1
    // bne _02244D68
    // ldr r0, _02244D7C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // b _02244D78
    // cmp r0, #2
    // bne _02244D78
    // ldr r0, _02244D7C ; =0x000011C8
    // ldr r0, [r4, r0]
    // bl YesNoPrompt_Destroy
    // mov r0, #0
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // pop {r4, pc}
    // _02244D7C: .word 0x000011C8
    // TODO: decompile
}




void ov70_02244D80(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r2, #0xd
    // ldr r0, [r4, #0x3c]
    // mvn r2, r2
    // cmp r0, r2
    // bgt _02244DBE
    // bge _02244DFA
    // ldr r1, _02244E38 ; =0xFFFFEC78
    // cmp r0, r1
    // bgt _02244DB6
    // ldr r1, _02244E3C ; =0x0000138D
    // add r1, r0, r1
    // bmi _02244DFE
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02244DAA: ; jump table
    // mov r1, #0xe
    // mvn r1, r1
    // cmp r0, r1
    // b _02244DFE
    // add r1, r2, #0
    // add r1, #9
    // cmp r0, r1
    // bgt _02244DD4
    // add r1, r2, #0
    // add r1, #9
    // cmp r0, r1
    // bge _02244DFE
    // add r1, r2, #2
    // cmp r0, r1
    // b _02244DFE
    // add r0, r0, #3
    // cmp r0, #5
    // bhi _02244DFE
    // add r0, r0, r0
    // add r0, pc
    // ldrh r0, [r0, #6]
    // lsl r0, r0, #0x10
    // asr r0, r0, #0x10
    // add pc, r0
    // _02244DE6: ; jump table
    // mov r2, #0x96
    // b _02244E14
    // mov r2, #0x97
    // b _02244E14
    // mov r2, #0x9c
    // b _02244E14
    // mov r2, #0x9b
    // b _02244E14
    // mov r2, #0xb9
    // b _02244E14
    // mov r2, #0xb6
    // b _02244E14
    // mov r2, #0xb6
    // b _02244E14
    // mov r2, #0xb7
    // b _02244E14
    // mov r2, #0xb8
    // ldr r0, _02244E40 ; =0x00000F0F
    // mov r1, #0xba
    // str r0, [sp]
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // add r0, r4, #0
    // mov r3, #1
    // bl ov70_02244FA4
    // add r0, r4, #0
    // mov r1, #0xc
    // mov r2, #0x16
    // bl ov70_02238D84
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02244E38: .word 0xFFFFEC78
    // _02244E3C: .word 0x0000138D
    // _02244E40: .word 0x00000F0F
    // TODO: decompile
}




void ov70_02244E44(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // mov r1, #0x16
    // add r4, r0, #0
    // lsl r1, r1, #8
    // ldrsh r1, [r4, r1]
    // cmp r1, #3
    // bhi _02244EE8
    // add r1, r1, r1
    // add r1, pc
    // ldrh r1, [r1, #6]
    // lsl r1, r1, #0x10
    // asr r1, r1, #0x10
    // add pc, r1
    // _02244E60: ; jump table
    // ldr r1, _02244F0C ; =0x00000F0F
    // mov r2, #0xba
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // mov r0, #0x16
    // lsl r0, r0, #8
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _02244F04
    // mov r0, #0xbf
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02244F04
    // bl sub_0203946C
    // bl ov00_021EC8D8
    // mov r0, #0x16
    // lsl r0, r0, #8
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _02244F04
    // ldr r1, _02244F0C ; =0x00000F0F
    // mov r2, #0xbb
    // str r1, [sp]
    // mov r1, #0xba
    // lsl r1, r1, #4
    // ldr r1, [r4, r1]
    // mov r3, #1
    // bl ov70_02244FA4
    // mov r0, #0x16
    // lsl r0, r0, #8
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _02244F04
    // mov r0, #0xbf
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02244F04
    // mov r0, #0x16
    // lsl r0, r0, #8
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // b _02244F04
    // ldr r0, _02244F10 ; =0x00001602
    // ldrsh r1, [r4, r0]
    // add r1, r1, #1
    // strh r1, [r4, r0]
    // ldrsh r0, [r4, r0]
    // cmp r0, #0x1e
    // ble _02244F04
    // mov r1, #0
    // add r0, r4, #0
    // add r2, r1, #0
    // bl ov70_02238E50
    // mov r0, #0xb
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // nop
    // _02244F0C: .word 0x00000F0F
    // _02244F10: .word 0x00001602
    // TODO: decompile
}




void ov70_02244F14(void) {
}




void ov70_02244F34(void) {
    // ldr r0, [r4, r0]
    TextPrinterCheckActive((((0xbf << 4) << 0x18) >> 0x18));
    // ldr r0, [r4, r0]
    *((u32*)(r4 + 0x2c)) = *((u32*)(r4 + 0x30));
    // ldr r1, [r4, r0]
    // str r1, [r4, r0]
}




void ov70_02244F68(void) {
    // push {r3, r4, lr}
    // sub sp, #4
    // add r4, r0, #0
    // mov r0, #0xbf
    // lsl r0, r0, #4
    // ldr r0, [r4, r0]
    // lsl r0, r0, #0x18
    // lsr r0, r0, #0x18
    // bl TextPrinterCheckActive
    // cmp r0, #0
    // bne _02244F9A
    // mov r0, #0
    // str r0, [sp]
    // mov r2, #0x8d
    // ldr r0, [r4, #4]
    // mov r1, #0xa
    // lsl r2, r2, #2
    // mov r3, #8
    // bl ov70_02238C14
    // ldr r1, _02244FA0 ; =0x000011C8
    // str r0, [r4, r1]
    // ldr r0, [r4, #0x30]
    // str r0, [r4, #0x2c]
    // mov r0, #3
    // add sp, #4
    // pop {r3, r4, pc}
    // _02244FA0: .word 0x000011C8
    // TODO: decompile
}




void ov70_02244FA4(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // add r0, r1, #0
    // add r1, r2, #0
    // add r4, r3, #0
    // bl NewString_ReadMsgData
    // add r6, r0, #0
    // ldr r1, _0224500C ; =0x00000B9C
    // add r2, r6, #0
    // ldr r0, [r5, r1]
    // add r1, #0x20
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // add r0, r6, #0
    // bl String_Delete
    // ldr r0, _02245010 ; =0x00000F18
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _02245010 ; =0x00000F18
    // mov r1, #0
    // add r0, r5, r0
    // mov r2, #1
    // mov r3, #0xe
    // bl DrawFrameAndWindow2
    // mov r3, #0
    // str r3, [sp]
    // str r4, [sp, #4]
    // ldr r0, _02245010 ; =0x00000F18
    // ldr r2, _02245014 ; =0x00000BBC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // mov r0, #0x47
    // mov r1, #0
    // lsl r0, r0, #6
    // str r1, [r5, r0]
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // nop
    // _0224500C: .word 0x00000B9C
    // _02245010: .word 0x00000F18
    // _02245014: .word 0x00000BBC
    // TODO: decompile
}




void ov70_02245018(void) {
    // ldr r0, [sp, #0xc]
    FontID_String_GetWidth(0);
    // sub r1, r1, r0
    // add r0, r1, r0
    // asr r2, r0, #1
    // ldr r0, [sp, #0xc]
    FontID_String_GetWidth(((*((u8*)(r4 + 7)) << 3) >> 0x1f), (*((u8*)(r4 + 7)) << 3), 0);
    // sub r2, r1, r0
}




void ov70_02245050(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov70_02245018(1);
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 1, r6, r0);
}




void ov70_02245084(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov70_02245018(0);
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 0, r6, r0);
}




void ov70_022450B8(void) {
    // ldr r3, [sp, #0x24]
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r3, [sp, #0x20]
    ov70_02245018(0);
    // str r4, [sp]
    // ldr r0, [sp, #0x24]
    // str r1, [sp, #4]
    // str r0, [sp, #8]
    // str r1, [sp, #0xc]
    AddTextPrinterParameterizedWithColor(r5, 4, r6, r0);
}




void ov70_022450EC(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // add r0, r1, #0
    // ldr r1, _0224511C ; =ov70_0224600C
    // lsl r2, r2, #2
    // ldr r1, [r1, r2]
    // bl NewString_ReadMsgData
    // add r4, r0, #0
    // mov r2, #0
    // ldr r0, _02245120 ; =0x00010200
    // str r2, [sp]
    // str r0, [sp, #4]
    // add r0, r5, #0
    // add r1, r4, #0
    // add r3, r2, #0
    // bl ov70_02245084
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _0224511C: .word ov70_0224600C
    // _02245120: .word 0x00010200
    // TODO: decompile
}




void ov70_02245124(void) {
}




void ov70_0224512C(void) {
    // push {r3, r4, r5, r6, lr}
    // sub sp, #0xc
    // add r5, r0, #0
    // mov r0, #1
    // add r6, r1, #0
    // lsl r0, r0, #8
    // mov r1, #0x3d
    // bl String_New
    // add r4, r0, #0
    // ldr r0, _02245198 ; =0x00000BAC
    // add r1, r6, #0
    // ldr r0, [r5, r0]
    // add r2, r4, #0
    // bl ReadMsgDataIntoString
    // ldr r1, _0224519C ; =0x00000B9C
    // add r2, r4, #0
    // ldr r0, [r5, r1]
    // add r1, #0x50
    // ldr r1, [r5, r1]
    // bl StringExpandPlaceholders
    // ldr r0, _022451A0 ; =0x00000F48
    // mov r1, #0xf
    // add r0, r5, r0
    // bl FillWindowPixelBuffer
    // ldr r0, _022451A0 ; =0x00000F48
    // mov r1, #1
    // add r0, r5, r0
    // mov r2, #0x1f
    // mov r3, #0xb
    // bl DrawFrameAndWindow1
    // mov r3, #0
    // str r3, [sp]
    // str r3, [sp, #4]
    // ldr r0, _022451A0 ; =0x00000F48
    // ldr r2, _022451A4 ; =0x00000BEC
    // str r3, [sp, #8]
    // ldr r2, [r5, r2]
    // add r0, r5, r0
    // mov r1, #1
    // bl AddTextPrinterParameterized
    // mov r1, #0xbf
    // lsl r1, r1, #4
    // str r0, [r5, r1]
    // add r0, r4, #0
    // bl String_Delete
    // add sp, #0xc
    // pop {r3, r4, r5, r6, pc}
    // _02245198: .word 0x00000BAC
    // _0224519C: .word 0x00000B9C
    // _022451A0: .word 0x00000F48
    // _022451A4: .word 0x00000BEC
    // TODO: decompile
}




void ov70_022451A8(void) {
    // push {r3, r4, r5, lr}
    // sub sp, #8
    // add r5, r0, #0
    // mov r0, #0
    // add r4, r1, #0
    // mvn r0, r0
    // cmp r4, r0
    // bne _022451BA
    // mov r4, #0xb
    // mov r0, #2
    // str r0, [sp]
    // mov r0, #1
    // str r0, [sp, #4]
    // ldr r0, _022451E4 ; =0x00000B9C
    // mov r1, #0
    // ldr r0, [r5, r0]
    // mov r3, #5
    // bl BufferIntegerAsString
    // ldr r0, _022451E8 ; =0x00000F18
    // mov r1, #1
    // add r0, r5, r0
    // bl ClearFrameAndWindow2
    // add r0, r5, #0
    // add r1, r4, #0
    // bl ov70_0224512C
    // add sp, #8
    // pop {r3, r4, r5, pc}
    // _022451E4: .word 0x00000B9C
    // _022451E8: .word 0x00000F18
    // TODO: decompile
}



