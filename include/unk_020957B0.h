#ifndef GUARD_UNK_020957B0_H
#define GUARD_UNK_020957B0_H

#include "global.h"

// Easy Chat handler structure
struct EasyChatHandler
{
    const u8 *param_table;
    void (*handler)(void *, void *, void *, s8);
    void (*encoder)(u8 *, u8 *, u8 *);
};

// Function declarations
void sub_020957B0(void *, void *, void *, s8);
void sub_02095838(u8 *, u8 *, u8 *);
void sub_020958C0(void *, void *, void *, s8);
void sub_02095920(u8 *);
void sub_0209592C(void *, void *, void *, s8);
void sub_020959D8(u8 *, u8 *, u8 *);
void sub_02095A34(void *, void *, void *, s8);
void sub_02095A78(void);
void sub_02095A7C(void *, void *, void *, s8);
void sub_02095AF8(u8 *);
void sub_02095B04(void *, void *, void *, s8);
void sub_02095B88(u8 *, u8 *, u8 *);
void *sub_02095CE0(void *, void *);
void sub_02095D1C(void *, u8);
void sub_02095D2C(void *);
void sub_02095D40(void *, u8, void *, u8);
u8 sub_02095D88(void *, u8, void *, u8);
u8 sub_02095DD8(void *);
u8 sub_02095DE8(void *);

// Data tables
extern const u8 _0210841C[4];
extern const u8 _02108420[4];
extern const u8 _02108424[4];
extern const u8 _02108428[4];
extern const u8 _0210842C[4];
extern const u8 _02108430[4];
extern const struct EasyChatHandler _02108434[];

#endif // GUARD_UNK_020957B0_H
