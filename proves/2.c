#include <stdio.h>

char prove(void);

int x = 999;

void main(void){
    printf("%i.\n", x);
    extern int x;
    prove();
}

char prove(void){
    extern int x;
    printf("%i.\n", x);
}