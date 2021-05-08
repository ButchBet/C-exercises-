#include <stdio.h>


int main () {
    int cost = 10000, show_cost = 300000, p_each_client = 2000, x, total;
    
    printf("\nEnter the number of clients to this function: "); scanf("%i",&x);
    printf("\n");
    cost *= x;
    p_each_client *= x;
    total = cost - p_each_client-show_cost;
    
    printf("The profit is: $%i \n\n", total);
    return 0;
}