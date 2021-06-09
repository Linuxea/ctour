#include "add.c"
#include<stdio.h>

int main(){

    int a,b;
    scanf("%d,%d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a,b));
    return 0;
}
