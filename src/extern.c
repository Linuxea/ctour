#include<stdio.h>

extern int count = 0;

void increaseCount(){
    count++;
}

int main(void){

    increaseCount();
    printf("count is %d\n", count);
    increaseCount();
    printf("count is %d\n", count);
    return 0;
}
