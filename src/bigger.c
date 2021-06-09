#include<stdio.h>

int main(void){

    int a,b;
    scanf("%d,%d", &a, &b);
    int bigger = a > b ? a : b;
    printf("the bigger number is %d\n", bigger);

    return 0;
}
