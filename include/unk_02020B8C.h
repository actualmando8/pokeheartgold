#ifndef POKEHEARTGOLD_UNK_02020B8C_H
#define POKEHEARTGOLD_UNK_02020B8C_H

#include "global.h"
#include "nitro/fx/fx_vec.h"
#include "nitro/gx/gx.h"

/* Math utility functions */
fx32 sub_02020B8C(fx32 a, fx32 b);           /* Returns min(a, b) */
fx32 sub_02020B94(fx32 a, fx32 b);           /* Returns max(a, b) */
fx32 GetDistanceFromPointToLine(VecFx32 *point, VecFx32 *lineStart, VecFx32 *lineEnd);
u16 CalcAngleBetweenVecs(VecFx32 *vec1, VecFx32 *vec2);
void sub_02020D2C(MtxFx33 *result, u32 *angles);  /* angles[0]=pitch, [1]=yaw, [2]=roll */
void sub_02020DA4(MtxFx33 *result, u16 pitch, u16 yaw, u16 roll);
void sub_02020E10(u16 angle, fx32 cosIn, fx32 sinIn, fx32 *cosOut, fx32 *sinOut);
BOOL sub_02020E80(VecFx32 *a, VecFx32 *b, VecFx32 *c);
BOOL sub_02020EB0(VecFx32 *a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
void sub_02020EF4(fx32 *result, fx32 y1, fx32 y2, fx32 x);
BOOL sub_02020F4C(u32 *result, VecFx32 *a, VecFx32 *b, VecFx32 *c, u32 *flags);

#endif // POKEHEARTGOLD_UNK_02020B8C_H
