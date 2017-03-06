/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved..
 *
 *  文件名称: SkipList.h
 *  简要描述:.
 *
 *  创建日期: 2017年03月06日
 *  作者: pw-ethan
 *  说明:.
 *
 *  修改日期:.
 *  作者:.
 *  说明:.
 ******************************************************************/
#ifndef SKIPLIST_H
#define SKIPLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEVEL_NUMBER 16
#define MAX_LEVEL (MAX_LEVEL_NUMBER - 1)

#define new_node(n) ((NODE *)malloc(sizeof(NODE) + n * sizeof(NODE *)))

typedef int keyType;
typedef int valueType;

struct NODE
{
    keyType key;
    valueType value;
    struct NODE *forward[1];
};

typedef struct SKIPLIST
{
    int level;
    struct NODE *header;
};

NODE *create_node(int level, const keyType &key, const valueType &value);

SKIPLIST *create_skip_list();

int randomLevel();

bool sl_insert(SKIPLIST *list, const keyType &key, const valueType &value);

bool sl_delete(SKIPLIST *list, const keyType &key, const valueType &value)

valueType *sl_search(SKIPLIST *list, const keyType &key);

void sl_print(SKIPLIST *list);

void sl_free(SKIPLIST *list);

#endif

