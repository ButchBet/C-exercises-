#include <stdio.h>
#include <math.h> 
int main () {
    int h, min, rem, N, s;
    printf("\nIntroduce the second here --> "); scanf("%i",&N);
    s = N%60;
    min = (N/60)%60;
    h = (N/60)/60;
    printf("Hour: %i min: %i s: %i. \n\n",h,min,s);
    return 0;
}