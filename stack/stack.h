//
// Created by xuhui on 2017/12/11.
//

#ifndef DATA_STRUCTURE_C_STACK_H
#define DATA_STRUCTURE_C_STACK_H
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define true 1
#define false 0
#define STACK_INIT_SIZE 100
#define STACK_PLUS 10

typedef struct Stack{
    int * base;
    int * top;
    int size;
} Stack;

int initStack(Stack * stack);

int push(Stack * stack,int ele);
#endif //DATA_STRUCTURE_C_STACK_H
