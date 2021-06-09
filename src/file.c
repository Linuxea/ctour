#include<stdio.h>


int main(){

    FILE *fp = fopen("/home/linuxea/Desktop/code/ctour/src/filedemo.txt", "a");
    fprintf(fp, "%s\n", "蔡依林《今天我要嫁给你》");
    fclose(fp);
    return 0;

}
