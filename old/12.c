#include <stdio.h> // include input-output library

int main() {
    const short N = 5;
    /// que coins's valuew                   the quantity of coins
    int c_values[5] = {20, 50, 100, 200, 500},coins[5], total = 0, i, a = 97;
        
    for (i = 0; i < N; i++){
        printf("The $%i quantity is: ",c_values[i]);
        scanf("%i. \n",&coins[i]);
    }
    
    for (i = 0; i < N; i++) {
        total += c_values[i]*coins[i]; 
    }
    
    printf("\nThe total addition is: $%i. \n\n", total);
    
    return 0;
}