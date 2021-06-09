#include<stdio.h>

int main(void){

    char chs[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for(int i = 0; i < 10; i++){
        printf("%C ", chs[i]);
    }
    printf("\n");




    // 字符串字面量
    char chs2[20] = {"abcdefghijklmn"};
    for(int i = 0;i < 10; i++) {
        printf("%C ", chs2[i]);
    }
    printf("\n");

    return 0;
}
