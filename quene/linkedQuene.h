//
// Created by xuhui on 2017/12/12.
//

#ifndef DATA_STRUCTURE_C_LINKEDQUENE_H
#define DATA_STRUCTURE_C_LINKEDQUENE_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define true 1
#define false 0

typedef struct QueneNode{
    int data;
    struct QueneNode * next;
} queneNode, *QuenePtr;

typedef struct {
    QuenePtr front;//队头指针
    QuenePtr rear; //队尾指针
} LinkedQuene;

int initQuene(LinkedQuene ** quene);
#endif //DATA_STRUCTURE_C_LINKEDQUENE_H
