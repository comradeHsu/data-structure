//
// Created by xuhui on 2017/12/10.
//
#include "alinkedList.h"

int main(){
    LinkedList * list;
    initList(&list);
    add(list,5);
    add(list,4);
    int data = delFirst(list);
    printf("data:%d",first(*list));
    return 0;
}

int initList(LinkedList * *L){
    *L = (LinkedList *)malloc(sizeof(LinkedList));
    (*L)->length = 0;
    (*L)->head = NULL;
    (*L) -> tail = NULL;
    return true;
}

int size(LinkedList list){
    return list.length;
}

int first(LinkedList list){
    Link link = list.head;
    return link ->data;
}

int delFirst(LinkedList * list){
    Link link = list->head;
    list->head = link->next;
    if(list->length == 1){
        list->tail = NULL;
    }
    list->length = list->length-1;
    int data = link->data;
    free(link);
    return data;
}

int last(LinkedList list){
    Link link = list.tail;
    return link ->data;
}

int add(LinkedList * list, int ele){
    Link link;
    if(list->head == NULL){
        link = (Link)malloc(sizeof(Node));
        list->head = link;
        list->tail = link;
        list->length = 1;
        link->data = ele;
        link->next = NULL;
        return true;
    }
    Link next = (Link)malloc(sizeof(Node));
    next->next = NULL;
    next->data = ele;
    link = list->tail;
    link->next = next;
    list->tail=next;
    list->length = list->length+1;
    return 1;
}