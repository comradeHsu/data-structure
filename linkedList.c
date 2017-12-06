//
// Created by xuhui on 2017/12/4.
//
#include "linkedList.h"
int size;
int main(){
    LinkedList list;
    create(&list,5);
//    while((list->next) != NULL){
//        printf("data:%d\n",(*list).data);
//        printf("next:%d\n",(*list).next);
//        list = list->next;
//    }
    printf("---------");
    insert(&list,3,9);
    while((list->next) != NULL){
        printf("data:%d\n",(*list).data);
        printf("next:%d\n",(*list).next);
        list = list->next;
    }
    int h = 1;
    get(&list,3,&h);
    printf("%d",h);
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
    LinkedList p = l ->next;
    int j = 0;
    while(p && j < i+2){
        p = l ->next;
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