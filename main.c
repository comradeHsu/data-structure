#include <stdio.h>
#include <malloc.h>
#include "list/list.h"
#define LIST_INIT_SIZE 100;
#define LISTINCREMENT 10;

int main() {
    //外层循环变量,控制行
    int i = 0;
    //内层循环变量,控制列
    int j = 0;
    for(i=1;i<=9;i++){
//        for(j=1;j<=i;j++){
//            printf("%dx%d=%d\t",j,i,i*j);
//        }
//        //每行输出完后换行
//        printf("\n");
        printf("%d",next(i));
        plus();
    }
    return 0;
}
//typedef struct {
//    int * elem;
//    int length;
//    int listsize;
//} list;
//
//bool InitList_Sq(list &L){
//    L.elem = (int *)malloc(100 * 4);
//}
void plus(){
    printf("123");
}
