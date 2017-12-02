//
// Created by xuhui on 2017/12/2.
//
#include "list.h"
#define INIT_SIZE 100
#define PLUS 10
#define true 1
#define false 0

int main(){
    struct List lis;
    int x = initList(lis);
    printf("List:%d\n", lis.elem);
    printf("List:%d\n", lis.size);
    printf("List:%d", INIT_SIZE * sizeof(int));
    return 0;
}

int initList(list &l){
    l.elem = (int *)malloc(INIT_SIZE * sizeof(int));
    if(! l.elem) {
        return (int)false;
    }
    l.length = 0;
    l.size = INIT_SIZE;
    return (int)true;
}