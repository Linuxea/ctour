#include<stdio.h>

int main(void){

    int num;
    scanf("%d", &num);
    switch(num){
        case 1: printf("is 1\n");break;
	case 2: printf("is 2\n");break;
	case 3: printf("is 3\n");break;
	default : printf("defaut\n");break;
    }
    return 0;
}
