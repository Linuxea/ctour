#include<stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void){

    int a,b;
    scanf("%d,%d", &a, &b);
    printf("%d vs %d and the %d is winner\n", a, b, max(a,b));
    return 0;
}
