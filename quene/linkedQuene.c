//
// Created by xuhui on 2017/12/12.
//
#include "linkedQuene.h"
int main(){
    LinkedQuene * quene;
    initQuene(&quene);
    append(quene,1);
    append(quene,3);
    printf("data:%d",getHead(*quene));
    return 0;
}

int initQuene(LinkedQuene ** quene){ //传递指针的指针，如果只是指针则作用不到原地址上
    *quene = (LinkedQuene *)malloc(sizeof(LinkedQuene));
    (*quene)->front = NULL;
    (*quene)->rear = NULL;
    return true;
}

int size(LinkedQuene quene){
    int size = 0;
    QuenePtr front = quene.front;
    while(front){
        front = front->next;
        ++size;
    }
    return size;
}

int append(LinkedQuene * quene,int data){//添加元素至队尾
    QuenePtr last = (QuenePtr)malloc(sizeof(queneNode));
    if(!last){
        return false;
    }
    last->next = NULL;
    last->data = data;
    QuenePtr rear = quene->rear;
    if(!rear){
        quene->front = last;
        quene->rear = last;
        return true;
    }
    rear->next = last;
    quene->rear = last;
    return true;
}

int getHead(LinkedQuene quene){
    if(quene.front == NULL){
        fprintf(stderr, "The quene is NULL...\n");
        exit(EXIT_FAILURE);
    }
    return (quene.front)->data;
}
