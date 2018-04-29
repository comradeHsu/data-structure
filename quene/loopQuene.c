//
// Created by xuhui on 2017/12/22.
//
#include "loopQuene.h"

int main(){
    loopQuene quene;
    initQuene(&quene);
    append(&quene,3);
    append(&quene,4);
    printf("sss:%d",NULL == 0);
    printf("data:%d",deleteHead(&quene));
    printf("data:%d",getHead(quene));
    return 0;
}

int initQuene(loopQuene * quene){
    quene->base = (int *) malloc(MAXSIZE * sizeof(int));
    if(!quene->base){  //内存分配失败
        fprintf(stderr, "eroor...\n");
        exit(EXIT_FAILURE);
    }
    quene->front = quene->rear = 0;
    return true;
}

int size(loopQuene quene){
    return (quene.rear - quene.front);
}

int append(loopQuene * quene, int data){
    if((quene->rear + 1) % MAXSIZE == quene->front){ //已解决
        fprintf(stderr, "Overflow...\n");
        exit(EXIT_FAILURE);
    }
    quene->base[quene->rear] = data;
    quene->rear = (quene->rear+1) % MAXSIZE;/*//此处有bug，要修复*/  /*已修复*/
    return true;
}

int getHead(loopQuene quene){
    return quene.base[quene.front];
}

int deleteHead(loopQuene * quene){
    if(quene->front == quene->rear){
        fprintf(stderr, "The quene is null...\n");
        exit(EXIT_FAILURE);
    }
    int data = quene->base[quene->front];
    quene->front = (quene->front + 1) % MAXSIZE;
    return data;
}
