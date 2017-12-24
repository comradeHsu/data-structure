//
// Created by xuhui on 2017/12/22.
//
#include "loopQuene.h"

int main(){
    loopQuene quene;
    initQuene(&quene);
    append(&quene,3);
    printf("data:%d",quene.rear);
    append(&quene,4);
    printf("data:%d",getHead(quene));
    return 0;
}

int initQuene(loopQuene * quene){
    quene->base = (int *) malloc(MAXSIZE * sizeof(int));
    if(!quene->base){
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
    if((quene->rear + 1) % MAXSIZE == quene->front){
        fprintf(stderr, "Overflow...\n");
        exit(EXIT_FAILURE);
    }
    quene->base[quene->rear] = data;
    quene->rear = (quene->rear+1) % MAXSIZE;
    return true;
}

int getHead(loopQuene quene){
    return quene.base[quene.front];
}
