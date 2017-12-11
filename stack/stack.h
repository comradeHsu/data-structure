//
// Created by xuhui on 2017/12/11.
//

#ifndef DATA_STRUCTURE_C_STACK_H
#define DATA_STRUCTURE_C_STACK_H
#define STACK_INIT_SIZE 100;
#define STACK_PLUS 10;
typedef struct {
    int * base;
    int * top;
    int size;
} Stack;
#endif //DATA_STRUCTURE_C_STACK_H
