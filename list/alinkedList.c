//
// Created by xuhui on 2017/12/10.
//
#include "alinkedList.h"

int main(){
    LinkedList * list;
    LinkedList * a;
    initList(&list);
    initList(&a);
    add(list,5);
    add(list,4);
    add(list,3);
    add(a,2);
    add(a,1);
    concat(list,a);
    int index = indexOf(*list,4,&compare);
    printf("data:%d",get(*list,3));
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

int delLast(LinkedList * list){
    Link tail = list->tail;
    int data = tail->data;
    Link head = list->head;
    while(head->next){
        head = head->next;
    }
    head->next = NULL;
    list->tail = head;
    free(tail);
    return data;
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

int get(LinkedList list, int index){
    if(index >= list.length){
        return false;
    }
    Link head = list.head;
    int curIndex = 0;
    while(head && curIndex < index){
        head = head->next;
        ++curIndex;
    }
    int data = head->data;
    return data;
}

int set(LinkedList * list, int index, int data){
    if(index >= list->length){
        return false;
    }
    Link head = list->head;
    int curIndex = 0;
    while(head && curIndex < index){
        head = head->next;
        ++curIndex;
    }
    head->data = data;
    return true;
}

int delIndex(LinkedList * list, int index){
    int data;
    if(index >= list->length){
        return false;
    }
    if(index == 0){
        data = delFirst(list);
        return data;
    }
    if(index == list->length-1){
        data = delLast(list);
        return data;
    }
    Link head = list->head;
    int curIndex = 0;
    while(head && curIndex < index-1){
        head = head->next;
        ++curIndex;
    }
    Node * curNode = head->next;
    head->next = curNode->next;
    data = curNode->data;
    return data;
}

int indexOf(LinkedList list, int ele ,int (* compare)(int,int)){
    Link head = list.head;
    int index = 0;
    while(head){
        if((* compare)(head->data,ele) == 1){
            return index;
        }
        head = head->next;
        ++index;
    }
    return -1;
}

int compare(int ele, int to){
    return ele == to;
}

int concat(LinkedList * list,LinkedList * alist){
    Link head = list->head;
    while(head->next){
        head = head->next;
    }
    head->next = alist->head;
    list->length = list->length + alist->length;
    list->tail = alist->tail;
    free(alist);
    return true;
}