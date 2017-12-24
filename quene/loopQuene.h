//
// Created by xuhui on 2017/12/22.
//

#ifndef DATA_STRUCTURE_C_LOOPQUENE_H
#define DATA_STRUCTURE_C_LOOPQUENE_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define true 1
#define false 0
#define MAXSIZE 100
typedef struct {
    int * base;
    int front;
    int rear;
} loopQuene;

int initQuene(loopQuene * quene);

int size(loopQuene quene);
#endif //DATA_STRUCTURE_C_LOOPQUENE_H
