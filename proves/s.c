#include <stdio.h>
#include <math.h>

int main(void){
    double result;
    float a1, a2, a3, avg;
    
    printf("Enter the average value: "); scanf("%f", &avg);
    printf("Enter the a1, a2 and a3: "); scanf("%f%f%f",&a1, &a2, &a3);

    result = sqrt((pow(a1-avg, 2) + pow(a2-avg, 2) + pow(a2-avg, 2))/2);

    printf("The result is: %.11lf\n", result);
}