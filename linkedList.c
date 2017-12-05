//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"
int size;
int main(){
    LinkedList list;
    create(list,5);
    while((list->next) != NULL){
        printf("data:%d",(*list).data);
        list = list->next;
    }
    insert(list,3,9);
    int h = 3;
    get(list,3,&h);
    printf("%d",h);
    return 0;
}

void create(LinkedList l,int n){
    l = (LinkedList)malloc(sizeof(LNode));
    l -> next = NULL;
    l -> data = 0;
    for(int i = n;i> 0;--i){
        LinkedList p = (LinkedList)malloc(sizeof(LNode));
        p ->data = 0;
        p -> next = l -> next;
        l -> next = p;
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

int insert(LinkedList l,int i,int e){
    LinkedList p = l;
    while(l->next){
        printf("data:%d",(*l).data);
        l = l->next;
    }
    int j = 0;
    while(p && j < i-1){
        p = p ->next;
        ++j;
        printf("data:%d",p);
    }
    if(!p || j > i-1){
        printf("if");
        return -99;
    }
    LinkedList s = (LinkedList)malloc(sizeof(LNode));
    s ->data = e;
    s ->next = p ->next;
    p ->next = s;
    return 1;
}