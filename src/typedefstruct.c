#include<stdio.h>

struct person{
    char *name ;
};

typedef struct simplePerson{
    char *name;
}sp;


int main(void){

    struct person p;
    p.name = "complicate name";
    printf("p.name: %s\n", p.name);

    // simple person typedef
    sp spp;
    spp.name = "simplify name";
    printf("spp.name %s\n", spp.name);
    return 0;
}

