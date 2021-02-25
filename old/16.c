#include <stdio.h> // input-output library
#include <math.h> // math operations library

int main (){
    int dt = 128,a, b, t = 0;
    
    a = sqrt(144-dt)/4;
    printf("\nWhen the distance of the object is %i the time in second is: %im. \n",dt,a);
    
    b = 144*t-16*pow(t,2);
    printf("When the distance traveled is 0m the time that has passed is: %is. \n\n",b);
    
    return 0;
}