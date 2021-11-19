#include <stdio.h>

int main(){

    int a=69;
    int *p=NULL;
    p = &a;

    printf("The address of a is %x\n", &a);
    printf("p contians address %x\n", p);
    printf("The value of a is %d\n", a);
    printf("p is pointing to value %d\n", *p);

    return 0;
}
