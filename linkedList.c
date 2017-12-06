//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"
int size;
int main(){
    LinkedList list;
    LinkedList a;
    LinkedList b;
    create(&b,5);
    create(&a,5);
    insert(&a,3,9);
    concat(&a,&b,&list);
//    int h = 1;
//    get(list,3,&h);
//    removeEle(&list,3);

    while(list ->next){
        printf("data:%d\n",list->data);
        list = list ->next;
    }
//    printf("%d",0);
    return 0;
}

void create(LinkedList *l,int n){ //????????
    (*l) = (LinkedList)malloc(sizeof(LNode));
    (*l) -> next = NULL;
    (*l) -> data = 0;
    for(int i = n;i> 0;--i){
        LinkedList p = (LinkedList)malloc(sizeof(LNode));
        p ->data = 0;
        p -> next = (*l)->next;
        (*l) -> next = p;
    }
}

int get(LinkedList l, int i, int *ele){
    LinkedList p =l;
    int j = 0;
    while(p && j < i){
        p = p ->next;
        ++ j;
    }
    if(!p || j > i){
        return 0;
    }
    (*ele) = p->data;
    return 1;
}

int insert(LinkedList *l,int i,int e){
    LinkedList p = *l;
    int j = 0;
    while(p && j < i-1){
        p = p ->next;
        ++j;
    }
    if(p == NULL || j > i-1){
        return -99;
    }
    LinkedList s = (LinkedList)malloc(sizeof(LNode));
    s ->data = e;
    s ->next = p ->next;
    p ->next = s;
    return 1;
}

int removeEle(LinkedList * L,int i){
    LinkedList p = *L;
    int j = 0;
    while(p->next && j < i-1){
        p = p -> next;
        ++j;
    }
    if(!(p ->next) || j > i-1){
        return 0;
    }
    LinkedList q = p ->next;
    p->next = q ->next;
    int e = q ->data;
    free(q);
    return e;
}

int concat(LinkedList * a, LinkedList * b,LinkedList * n){
    printf("start");
    LinkedList p;
    *n = p = *a;
    while((*a)->next){
        p->next = *a;
        *a = (*a) ->next;
        printf("start");
    }
    p->next = *b;
//    free(*b);
    return 1;
}