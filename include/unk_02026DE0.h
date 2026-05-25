#ifndef POKEHEARTGOLD_UNK_02026DE0_H
#define POKEHEARTGOLD_UNK_02026DE0_H

#include "global.h"

struct Unk_02026DE0_Struct {
    u16 *array;
    u8 *byteArr1;
    u8 *byteArr2;
    u32 count;
};

struct Unk_02026E18_Source {
    u32 count;
    /* u16 data[count] follows */
};

struct Unk_02026E18_Dest {
    u32 array;
    u32 offset;
    u32 end;
    u32 count;
};

u16 sub_02026DE0(struct Unk_02026DE0_Struct *p, u16 value);
void sub_02026E18(struct Unk_02026E18_Source *src, struct Unk_02026E18_Dest *dest);

#endif // POKEHEARTGOLD_UNK_02026DE0_H
