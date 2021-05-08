#include <stdio.h>

void print_letter2(void);

int ctr;
char letter1 = 'X';
char letter2 = '=';

void main(void){
    for(ctr = 0; ctr < 25; ctr++){
        printf("%c", letter1);
        print_letter2();
    }
}

void print_letter2(void){
    for(int ctr = 0; ctr < 2; ctr++){
        printf("%c", letter2);
    }
}