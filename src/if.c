#include<stdio.h>

int main(void){

    int a,b;
    scanf("%d,%d", &a, &b);
    printf("%d vs %d\n", a, b);
    if(a > b) {
        printf("the bigger is a\n");
    } else if (a < b) {
        printf("the bigger is b\n");
    } else {
        printf("there are equal\n");
    }
    return 0;
}
