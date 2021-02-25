#include <stdio.h>/// include input-output library 


int main(void) {
    int c = 520000; /// cost to produce x newspapers
    int x = (c-200000)/400;
    printf("The quantity of newspapers produced is: %i. \n\n", x);
    return 0;
}