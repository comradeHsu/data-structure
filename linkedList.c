//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"

int main(){
    LNode list;
    create(&list,5);
    printf("%d",list);
}

void create(LNode *l,int n){
    l = (LNode *)malloc(sizeof(LNode));
    l -> next = NULL;
    for(int i = n;i> 0;--i){
        LNode * p = (LNode *)malloc(sizeof(LNode));
        p ->data = 0;
        p -> next = l -> next;l -> next = p;
    }
}