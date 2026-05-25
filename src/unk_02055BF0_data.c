#include "global.h"

/* Map enter/exit routine tables */
extern void sub_02056530(void);
extern void sub_020565FC(void);
extern void sub_02056680(void);
extern void sub_020566F8(void);
extern void sub_020567B4(void);
extern void sub_0205681C(void);
extern void sub_02056938(void);
extern void sub_02056004(void);
extern void sub_02056040(void);
extern void sub_020560C4(void);
extern void sub_0205613C(void);
extern void sub_02056220(void);
extern void sub_02056268(void);
extern void sub_020562B0(void);
extern void sub_02056424(void);
extern void sub_02056A54(void);
extern void sub_02056AEC(void);
extern void sub_02056BC8(void);
extern void sub_02056C64(void);

void (*const sMapEnterRoutines[])(void) = {
    sub_02056530,
    sub_020565FC,
    sub_02056680,
    sub_020566F8,
    sub_020565FC,
    sub_020567B4,
    sub_020565FC,
    sub_0205681C,
    sub_02056938,
};

void (*const sMapExitRoutines[])(void) = {
    sub_02056004,
    sub_02056040,
    sub_020560C4,
    sub_0205613C,
    sub_02056220,
    sub_02056268,
    sub_02056004,
    sub_020562B0,
    sub_02056424,
};

void (*const _020FC76C[])(void) = {
    0,
    0,
    sub_02056A54,
    sub_02056AEC,
    0,
    0,
    0,
    sub_02056BC8,
    sub_02056C64,
};
