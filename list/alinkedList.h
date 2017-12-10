//
// Created by xuhui on 2017/12/10.
//

#ifndef DATA_STRUCTURE_C_ALINKEDLIST_H
#define DATA_STRUCTURE_C_ALINKEDLIST_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct Node {
    int data;
    struct Node * next;
} *Link, *Position;

typedef struct {
    Link head,tail;
    int length;
} LinkedList;
#endif //DATA_STRUCTURE_C_ALINKEDLIST_H
