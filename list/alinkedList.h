//
// Created by xuhui on 2017/12/10.
//

#ifndef DATA_STRUCTURE_C_ALINKEDLIST_H
#define DATA_STRUCTURE_C_ALINKEDLIST_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define true 1;
#define false 0;
typedef struct Node {
    int data;
    struct Node * next;
}Node, * Link, *Position;

typedef struct {
    Link head,tail;
    int length;
} LinkedList;

int initList(LinkedList ** L);

int size(LinkedList list);

int first(LinkedList list);

int last(LinkedList list);

int add(LinkedList * list, int ele);

int delFirst(LinkedList * list);

int delLast(LinkedList * list);

int get(LinkedList list, int index);

int set(LinkedList * list, int index, int data);

int delIndex(LinkedList * list, int index);

int indexOf(LinkedList list, int ele ,int (* compare)(int,int));

int compare(int ele, int to);

int concat(LinkedList * list,LinkedList * alist);

int addAfterIndex(LinkedList * list, int ele,int index);
#endif //DATA_STRUCTURE_C_ALINKEDLIST_H
