#include<stdio.h>
#define MAX(a,b) a > b ? a : b

int main(void){

    int a, b;
    scanf("%d,%d",&a, &b);
    printf("%d vs %d and bigger is %d\n", a, b, MAX(a,b));
    return 0;

}

