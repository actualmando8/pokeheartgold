#ifndef POKEHEARTGOLD_UNK_020689C8_H
#define POKEHEARTGOLD_UNK_020689C8_H

#include "sys_task.h"

/* Entity array management functions */
typedef void (*EntityCallback)(void *entity);

void *sub_020689C8(void *header, void *data);
void sub_020689E8(void *header);
void sub_020689F8(void *header);
void *sub_02068A08(void *header, void *params, u32 a2, u32 a3);
void sub_02068B0C(void *header, void *params);
void sub_02068B48(void *entity);
void sub_02068B80(void *header);
void sub_02068BAC(void *header);
SysTask *sub_02068BDC(void *entity, u32 param);
void sub_02068BFC(void *entity);

/* Accessor helpers */
u32 sub_02068CC4(void *header);
u32 sub_02068CC8(void *header);
BOOL sub_02068CCC(void *entity);
void sub_02068CD8(void *entity);
void sub_02068CE4(void *entity, u32 flag);
u32 sub_02068CEC(void *entity, u32 mask);

/* Callback setters/getters at offsets 0xB0-0xC4 */
void sub_02068CF4(void *entity, EntityCallback cb);   /* offset 0xB0 */
void sub_02068CFC(void *entity);                       /* calls callback at 0xB0 */
void sub_02068D10(void *entity, EntityCallback cb);   /* offset 0xB4 */
void sub_02068D18(void *entity);                       /* calls callback at 0xB4 */
void sub_02068D2C(void *entity, EntityCallback cb);   /* offset 0xB8 */
void sub_02068D34(void *entity);                       /* calls callback at 0xB8 */
void sub_02068D48(void *entity, EntityCallback cb);   /* offset 0xBC */
void sub_02068D50(void *entity);                       /* calls callback at 0xBC */
void sub_02068D64(void *entity, EntityCallback cb);   /* offset 0xC0 */
void sub_02068D6C(void *entity, EntityCallback cb);   /* offset 0xC4 */

/* Data accessors */
void sub_02068D78(void *entity, void *src);
void sub_02068D8C(void *entity, u32 value);
u32 sub_02068D90(void *entity);
void sub_02068D94(void *entity, u32 value);
u32 sub_02068D98(void *entity);
void sub_02068D9C(void *entity, u32 value);
u32 sub_02068DA0(void *entity);
void sub_02068DA4(void *entity, u32 value);
void sub_02068DA8(void *entity, void *src);
void sub_02068DB8(void *entity, void *dst);

/* Default callbacks */
u32 sub_02068DC8(void);
void sub_02068DCC(void);
void sub_02068DD0(void);
void sub_02068DD4(void);
void sub_02068DD8(void);
void sub_02068DDC(void);

#endif // POKEHEARTGOLD_UNK_020689C8_H
