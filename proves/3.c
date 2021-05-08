#include <stdio.h>

void prove(void);

int x = 999;

void main(void){
    int x = 100;
    printf("%i.\n", x);
    prove();
}

void prove(void){
    printf("%i.\n", x);
}

