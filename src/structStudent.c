#include<stdio.h>

struct student{
    char* name;
    int age;
};

int main(void){

    struct student me;
    me.name = "linuxea";
    me.age = 12;

    printf("My name is %s and my age is %d\n", me.name, me.age);


    struct student *you = &me;
    you->age = 13;


    printf("my name age is %d\n", me.age);

    return 0;
}

