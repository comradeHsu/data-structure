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
int initList(list *l);
int insert(list *l, int i, int ele);
int get(list l, int i);
int removeList(list *l,int i);
#endif //LEARN_LIST_H