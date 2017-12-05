//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"

int main(){
    LinkedList list;
    create(list,5);
    int h = 3;
    get(list,2,&h);
    printf("%d",h);
}

void create(LinkedList l,int n){
    l = (LinkedList)malloc(sizeof(LNode));
    l -> next = NULL;
    for(int i = n;i> 0;--i){
        LinkedList p = (LinkedList)malloc(sizeof(LNode));
        p ->data = 0;
        p -> next = l -> next;l -> next = p;
    }
}

int get(LinkedList l, int i, int *ele){
    LinkedList p = l ->next;
    int j = 1;
    while(p && j < i){
        p = l ->next;
        ++ j;
    }
    if(!p || j > i){
        return 0;
    }
    (*ele) = p->data;
    return 1;
}