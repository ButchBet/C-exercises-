#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    bool available = false;
    int n = 0, m = 0;

    /* Enter the quantity of rows and columns */
    printf("Enter the rows and columns quantity: "); scanf("%i %i", &n, &m); printf("\n");
    int quantity_matches[n+m];
    int array[n][m];

    /* Full all of the quantity_matches with 0 */
    for(int i = 0; i < n+m; i++){
        quantity_matches[i] = 0;
    }

    /* Enter the data and calculate the addition of each row */
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter the n: %i, m: %i position --> ", i+1, j+1); scanf("%i", &array[i][j]); printf("\n");
            quantity_matches[i] += array[i][j];
            printf("%i.\n", quantity_matches[i]);
        }
    }

     /* Check if all of the quantity_matches values are the same */
    for(int i = 0; i < n; i++){
        if(i == n-1){
            /* Generate the column addition values */
            int column = n;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    quantity_matches[column] += array[j][i];
                }
                column++;
            }

            /* Check if the other quantities are equal too */
            for(int i = n; i < n+m; i++){
                if(i == n+m-1){
                    printf("This is a magic matrix.\n");
                }
                else if(quantity_matches[i] != quantity_matches[i+1]){
                    printf("This is not a magic matrix.\n");
                    break;
                }
            }
        }
        else if(quantity_matches[i] != quantity_matches[i+1]){
            printf("This is not a magic matrix.\n");
            break;
        }
    }

    return 0;
}