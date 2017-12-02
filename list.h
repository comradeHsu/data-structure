//
// Created by xuhui on 2017/12/2.
//
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#ifndef LEARN_LIST_H
#define LEARN_LIST_H
typedef struct List{
    int * elem;
    int length;
    int size;
} list;
int initList(list &l);
#endif //LEARN_LIST_H
