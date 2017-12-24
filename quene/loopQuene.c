//
// Created by xuhui on 2017/12/22.
//
#include "loopQuene.h"

int main(){
    loopQuene quene;
    initQuene(&quene);
    printf("data:%d",size(quene));
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
