#include <stdio.h>

int main(){
    int months=0, lapsus_time=0, new_lapsus=0, contribution=1, new_contribution=0;
    double init_amount=0, final_amount=0, amount_contribution=0;
    float porcent=0, change=0;

    /* Require all of the data */
    printf("Enter the initial amount: "); scanf("%lf", &init_amount);
    printf("\nEnter the number of months and the lapsus: "); scanf("%i%i", &months, &lapsus_time);
    printf("\nEnter the porcentage: "); scanf("%f", &porcent);

    /* Evalueate that enter a correc moth reference respect with the lapsus */
    printf("\nEnter the contribution lapsus:  "); scanf("%d", &contribution);
    printf("\nEnter the contribution amount: "); scanf("%lf", &amount_contribution);
    printf("\n");
    

    /* Evaluate option */

    /* Make the calculation */
    final_amount = init_amount; 
    change = (porcent+100)/100;
    new_lapsus = months / lapsus_time;
    new_contribution = contribution/lapsus_time;

    for(int i = 1; i <= new_lapsus; i++){
        if(i%new_contribution == 0){
            final_amount += amount_contribution;
            final_amount *= change;
        }else{
            final_amount *= change;
        }
    }

    /* Show the final amount */
    printf("Initial amount = %.0lf.\n", init_amount);
    printf("Months = %i.\n", months);
    printf("Lapsus = %i.\n", lapsus_time);
    printf("Porcentage =  %.2f.\n", porcent);
    printf("Contribution lapsus = %d.\n", contribution);
    printf("Contribution amount = %.0lf.\n", amount_contribution);
    printf("Final amount = %.0lf.\n", final_amount);
    return 0;
}