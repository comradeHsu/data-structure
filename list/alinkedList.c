//
// Created by xuhui on 2017/12/10.
//
#include "alinkedList.h"

int main(){
    LinkedList * list;
    initList(list);
    return 0;
}

int initList(LinkedList * L){
    L = (LinkedList *)malloc(sizeof(LinkedList));
    L->length = 0;
    L->head = NULL;
    L -> tail = NULL;
    return true;
}

int first(LinkedList list){
    Link link = list.head;
    return link ->data;
}