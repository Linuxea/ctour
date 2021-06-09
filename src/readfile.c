#include<stdio.h>


int main(void){

    FILE* fp;
    fp = fopen("/home/linuxea/Desktop/code/ctour/src/readfile.c", "r");

    // 定义一个用来接收内容的数组
    char str[100];
    fscanf(fp, "%s", str);

    for(int i = 0; i < 100;i++) {
        printf("%c", str[i]);
    }



    fclose(fp);
    return 0;
}
