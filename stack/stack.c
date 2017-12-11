//
// Created by xuhui on 2017/12/11.
//
#include "stack.h"

int main(){
    struct Stack stack;
    initStack(&stack);
    push(&stack,1);
    printf("size:%d",*(stack.top));
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

int push(Stack * stack,int ele){
    if(stack->top - stack->base >= stack->size){
        stack->base = (int *)realloc(stack->base,(stack->size+STACK_PLUS)* sizeof(int));
        stack->top = stack->base + stack->size;
        stack->size += STACK_PLUS;
    }
    (stack->top)++;
    *(stack->top) = ele;
    return  true;
}
