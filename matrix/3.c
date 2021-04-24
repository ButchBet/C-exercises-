#include <stdbool.h>
#include <stdio.h>


int main(){
    bool available = false;
    int n = 0, m = 0;

    /* Enter the quantity of rows and columns */
    printf("Enter the rows and columns quantity: "); scanf("%i %i", &n, &m); printf("\n");
    int quantity_matches[n+m];
    int array[n][m];

    /* Enter the data and calculate the addition of each row */
    int counter = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            printf("Enter the n: %i, m: %i position --> ", i+1, j+1); scanf("%i", &array[i][j]); printf("\n");
            quantity_matches[counter] += array[i][j];
        }
        counter++;
    }

    /* Calculate the addition of each column */
    for(int i = 0; i < m; i++){
        for(int j = 0; i < n; j++){
            quantity_matches[counter] += array[j][i];
        }
        counter++;
    }
    printf("Hello world");

     /* Check if all of the quantity_matches values are the same 
    for(int i = 0; i < counter-2; i++){
        if(i == counter-2 && quantity_matches[i] == quantity_matches[i++]){
            printf("This is a magic matrix.\n");
        }
        else if(quantity_matches[i] != quantity_matches[i++]){
            printf("This is not a magic matrix.\n");
            break;
        }
    } */

    return 0;
}