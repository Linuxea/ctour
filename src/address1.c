#include<stdio.h>

int main(void){

    int num = 10;
    int* numP = &num;

    *numP = 20;

    printf("%d\n", num);
    printf("%d\n", *numP);
    return 0;

}
