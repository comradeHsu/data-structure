//
// Created by xuhui on 2017/12/12.
//
#include "linkedQuene.h"
int main(){
    LinkedQuene * quene;
    initQuene(&quene);
    printf("data:%d",quene->front);
    return 0;
}

int initQuene(LinkedQuene ** quene){ //传递指针的指针，如果只是指针则作用不到原地址上
    *quene = (LinkedQuene *)malloc(sizeof(LinkedQuene));
    (*quene)->front = NULL;
    (*quene)->rear = NULL;
    return true;
}
