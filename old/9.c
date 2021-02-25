#include <stdio.h>/// include input-output library 
#include <math.h>/// include math operators 


 int main () {
    short fixed_cost = 5000;
    short variable_cost = 850;
    
    short first = fixed_cost/100; /// fixed cost per computer
    float second = (float)variable_cost/100; /// variable cost per computer
    int x;
    
    /// require a keyboard input to assign a valute to x (number of computers)
    printf(" \nIntroduce the quantity of computer to calculate: "); scanf("%i",&x);
    printf("\n\n");
    
    float total_cost = (first+second)*(float)x;
    
    printf("The total produced cost per %i computers is: %.2f. \n\n",x,total_cost);

    
    float unitary_cost = first+second;
    
    printf("The total produced cost per computer is: %.2f. \n\n",unitary_cost);
    
    return 0;
}