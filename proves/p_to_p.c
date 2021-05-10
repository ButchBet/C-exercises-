#include <stdio.h>

int main(){
    float x;

    /* Declare and inicialize a pointer to a valiable */
    float *p_1 = &x;

    printf("%f\n", *p_1);
    /* Create a pointer to *p_1 pointer and inicialize the value */
    float *p_2 = p_1;
    *p_2 = 100;

    printf("%f\n", *p_2);

    return 0;
}