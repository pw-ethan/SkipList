 /*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: SkipList.c
 *  简要描述: 
 *
 *  创建日期: 2017年03月06日
 *  作者: pw-ethan
 *  说明: 
 *
 *  修改日期: 
 *  作者: 
 *  说明: 
 ******************************************************************/

#include "SkipList.h"

NODE *create_node(int level, const keyType &key, const valueType &value)
{
    NODE *p = new_node(level);
    if(NULL == p){
        return NULL;
    }
    p->key = key;
    p->value = value;
    return p;
}

SKIPLIST *create_skip_list()
{
    SKIPLIST *list = (SKIPLIST *)malloc(sizeof(SKIPLIST));
    if(NULL == list){
        return NULL;
    }

    sl->level = 0;

    NODE *head = create_node(MAX_LEVEL_NUMBER, 0, 0);
    if(NULL == head){
        free(list);
        return NULL;
    }
    list->header = head;

    for(int i = 0; i < MAX_LEVEL_NUMBER; i++){
        head->forward[i] = NULL;
    }


}


