#include <stdio.h>/// include input-output library 
#include <math.h>/// include math operators 

int main(void){
    float dollar, dtocop;
    printf("\nEnter the quatity of dollar to make the exchage: ");scanf("%f", &dollar);
    
    dtocop = dollar*3547.33;
    
    printf("\nThe divise exchage is: %.3f \n\n", dtocop);
}