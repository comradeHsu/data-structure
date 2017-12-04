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
    struct List a;
    struct List c;
    int x = initList(&lis);
    int q = insert(&lis,1,2);
    insert(&lis,2,3);
    insert(&lis,3,9);
    initList(&a);
    insert(&lis,1,5);
    merge(lis,a,&c);
//    int c = locate(lis,5, compare);
//    printf("List:%d\n", lis.elem[2]);
//    printf("List:%d\n", lis.size);
//    printf("List:%d\n", lis.length);
    printf("ccc:%d",c);
    for(int i = 0; i<c.length; i++){
        printf("q:%d,v:%d\n",get(c,i),i);
    }
    return 0;
}

int initList(list *l){
    (*l).elem = (int *)malloc(INIT_SIZE * sizeof(int));
    if(! (*l).elem) {
        return (int)false;
    }
    (*l).length = 0;
    (*l).size = INIT_SIZE;
    return (int)true;
}

int insert(list *l, int i, int ele){
    int *newbase;
    if(i < 1 || i> (*l).length + 1){
        return (int)false;
    }
    if((*l).length >= (*l).size){
        newbase= (int *)realloc((*l).elem,((*l).size+PLUS)* sizeof(int));
        if(!newbase){
            exit(0);
        }
        (*l).elem = newbase;
        (*l).size += PLUS;
    }
    int *q = &((*l).elem[i-1]);
    for(int *p = &((*l).elem[(*l).length-1]); p>=q;--p) *(p+1) = *p;
    *q = ele;
    ++(*l).length;
    return (int)true;
}

int get(list l, int i){
    return l.elem[i];
}

int removeList(list *l,int i){
    if(i < 1 || i> (*l).length + 1){
        return (int)false;
    }
    int * p = &((*l).elem[i-1]);
    int * q = (*l).elem+(*l).length-1;
    for(++p; p <= q;++p){
        *(p-1) = *p;
    }
    --(*l).length;
    return (int)true;
}

int locate(list l,int e, int (* compare)(int,int)){
    int i = 1;
    int * p = l.elem;
    while(i <= l.length && (* compare)(*p++,e) != 1) ++i;
    if(i <= l.length){
        return i;
    } else {
        return -1;
    }
}

int compare(int ele, int to){
    return ele == to;
}

void merge(list a, list b, list * n){ //此方法合并会打乱原有list顺序
    int * pa = a.elem;
    int * pb = b.elem;
    n -> size = n -> length = a.length + b.length;
    int * pc = (*n).elem = (int *) malloc(n -> size * sizeof(int));
    if(! n ->elem){
        exit(0);
    }
    int * pa_last = a.elem + a.length - 1;
    int * pb_last = b.elem + b.length -1;
    while(pa <= pa_last && pb <= pb_last){
        if(* pa <= *pb) {
            * pc ++ = *pa++;
        } else {
            * pc ++ = *pb++;
        }
    }
    while(pa <= pa_last){
        * pc ++ = *pa++;
    }
    while(pb <= pb_last){
        * pc ++ = *pb++;
    }
}