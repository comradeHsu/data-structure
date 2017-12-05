//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"

int main(){
    LinkedList list;
    create(list,5);
    printf("%d",list);
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