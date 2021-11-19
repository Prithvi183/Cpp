#include <stdio.h>

int main(){

    int a = 50;
    int *b = NULL;
    b = &a;

    int c;
    c = *b + 40;
    printf("%d\n", c);
    c += *b;
    printf("%d\n", c);
    *b = c;
    printf("%d\n", *b);

    (*b)++;
    printf("%d\n", *b);

    
    return 0;
}