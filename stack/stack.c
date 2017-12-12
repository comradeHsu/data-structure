//
// Created by xuhui on 2017/12/11.
//
#include "stack.h"

int main(){
    struct Stack stack;
    initStack(&stack);
    push(&stack,1);
    push(&stack,2);
    int data = pop(&stack);
    printf("size:%d",getTop(stack));
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

int getTop(Stack stack){
    if(stack.top == stack.base){
        return false;
    }
    return *(stack.top);
}

int pop(Stack * stack){
    if(stack->top == stack->base){
        return false;
    }
    int data = *(stack->top);
    --(stack->top);
    return data;
}