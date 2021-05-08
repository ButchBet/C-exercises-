#include <stdio.h>

int x = 999;

void prove(void);

int main(){
    extern int x;
    x = 100;
    printf("%i.\n", x);
    prove();
    return 0;
}

void prove(void){
    extern int x;
    printf("%i.\n", x);
}