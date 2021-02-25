#include <stdio.h>
#include <math.h>

int main() {
    int m_cost = 50000, years = 40, a_add = 1;
    float a, b, c;
    
    a = (float)m_cost*pow(1+(float)a_add/100, years);
    printf("\nThe cost of the object in %i years with a growth rate of %i%c is: $%.1f. \n",years,a_add,37,a);
    
    b = (float)m_cost*pow(1+(float)a_add/100,years-9);
    printf("\nThe cost of the object in %i years with a growth rate of %i%c is: $%.1f. \n",years-9,a_add,37,b);
    
    for (int i = 1; i <= years; i++ ){
        c = (float)m_cost*pow(1+(float)a_add/100, i);
        
        if (c==55500){
            printf("\n %i.\n\n",i);
            break;
        }
        else {
            continue;
        }
    }
    return 0;
}