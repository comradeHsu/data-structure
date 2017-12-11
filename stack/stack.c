//
// Created by xuhui on 2017/12/11.
//
#include "stack.h"

int main(){
    struct Stack stack;
    initStack(&stack);
    printf("size:%d",stack.size);
    return 0;
}

int initStack(Stack * stack){
    stack->base = (int *)malloc(STACK_INIT_SIZE * sizeof(int));
    if(!stack->base){
        return false;
    }
    stack->top = stack->base;
    stack->size = STACK_INIT_SIZE;
    return true;
}