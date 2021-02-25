#include <stdio.h>

int main() {
    float years_entrance;
    printf("\nEnter the year entrance: ");scanf("%f",&years_entrance);printf("\n");
    
    printf("._______________________________________________.\n");
    printf("|\tArea\t\t|    Budget porcentage\t|\n");
    printf("|_______________________________________________|\n");
    printf("|\tGynecology\t|\t%.1f\t| \n", years_entrance*0.40);
    printf("|_______________________________________________|\n");
    printf("|\tTraumatology\t|\t%.1f\t| \n", years_entrance*0.30);
    printf("|_______________________________________________|\n");
    printf("|\tPediatrics\t|\t%.1f\t| \n", years_entrance*0.30);
    printf("*************************************************\n");
    return 0;
}