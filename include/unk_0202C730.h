#ifndef GUARD_UNK_0202C730_H
#define GUARD_UNK_0202C730_H

#include "global.h"
#include "friend_group.h"

extern u32 _021D2AF0;

u32 Save_FriendGroup_sizeof(void);
void sub_0202C738(void *dst, u32 dstIdx, void *src, u32 srcIdx);
void sub_0202C78C(void *group, u32 count);
u32 Save_FriendGroup_GetGroupId(void *group, u32 idx);
void sub_0202C7C0(void *group, u32 idx, u32 groupId);
void sub_0202C7F8(void *group, u32 idx, u32 isForm, u16 *str);
void sub_0202C824(void *group, u32 idx, u8 form);
void sub_0202C848(void *group, u32 idx, u8 val);
u32 sub_0202C860(void *group, u32 idx);
u32 sub_0202C878(void *group, u32 idx, void *other);
u32 sub_0202C88C(void *group, void *name);
u32 sub_0202C8C4(void *entry);
u32 sub_0202C8E4(void *a, void *b);

#endif
