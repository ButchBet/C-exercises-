#include <stdio.h> /// input-output library

int main() {
    float m_cost, re_cost;
    printf("\n Enter the initial cost: ");scanf("%f",&m_cost);printf("\n");
    re_cost = m_cost*0.30+m_cost;
    printf("The recomended cost to sell this object is: $%.2f. \n",re_cost);
    
    return 0;
}