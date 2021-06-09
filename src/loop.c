#include<stdio.h>

int main(void){


    int num;
    scanf("%d", &num);
    while(num > 0) {
        printf("the num decrease %d\n", num);
	num -= 1;
    }



    for(int i = 0;i < 20;i++) {
        printf("i is %d\n", i);
    }


    return 0;
}
