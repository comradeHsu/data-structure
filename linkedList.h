//
// Created by xuhui on 2017/12/4.
//

#ifndef DATA_STRUCTURE_C_LINKEDLIST_H
#define DATA_STRUCTURE_C_LINKEDLIST_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct LNode{
    int data;
    struct LNode * next;
} LNode, * LinkedList; //* LinkedList是这个结构体的结构指针
void create(LinkedList *l,int n);
int get(LinkedList l, int i, int *ele);
int insert(LinkedList *l,int i,int e);
int removeEle(LinkedList * L,int i);
int concat(LinkedList * a, LinkedList * b,LinkedList * n);
#endif //DATA_STRUCTURE_C_LINKEDLIST_H
