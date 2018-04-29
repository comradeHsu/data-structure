//
// Created by xuhui on 2017/12/25.
//
#include "string.h"

int main(){
    String a = "123";
    String b = "456";
    String c = concat(a,b);
    printf("长度:%d",c);
    return 0;
}

//String concat(String a,String b){
//    if(a[0] + b[0] <= MAXLENGTH){
//        struct String string;
//        string[1..a[0]] = a[1..a[0]];
//        string[a[0]+1..a[0]+b[0]] = b[1..b[0]];
//        string[0] = a[0]+b[0];
//        return string;
//    } else {
//        fprintf(stderr, "the String too long...\n");
//        exit(EXIT_FAILURE);
//    }
//}