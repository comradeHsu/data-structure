//
// Created by xuhui on 2017/12/7.
//

#ifndef DATA_STRUCTURE_C_DOUBLYLINKEDLIST_H
#define DATA_STRUCTURE_C_DOUBLYLINKEDLIST_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
typedef struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
}DuNode, * DuLinkedList;
#endif //DATA_STRUCTURE_C_DOUBLYLINKEDLIST_H
