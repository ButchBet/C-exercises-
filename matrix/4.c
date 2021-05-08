#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

void main(void){
    const int N = 4;
    int array[N][N];
    int saving_matrix[N];
    char option = 'z';

    /* Read the option */
    while(option != 'a' && option != 'b' && option != 'c' && option != 'd' && option != 'e' && option != 'f'){
        printf("Menu\n");
        printf("a. Put zeros in both diagonals.\n");
        printf("b. Put zeros in the first and second column and row.\n");
        printf("c. Fill the matrix [i][j] = i+j.\n");
        printf("d. Fill the main diagonal with the numbers 1,2,3....N.\n");
        printf("e. Fill the pair raws with 1,2,3..N and the odds row with N, N-1, N-2,..1.\n");
        printf("f. Save the addition of each row in a matrix inside other array consecutively.\n");
        scanf("%c", &option);
    }

    system("cls");
    /* Check the choose */
    switch ((int)option){
    case 97:
        /* Fill the array at the main diagonals*/
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j){
                    array[i][j] = 0;
                }else{
                    array[i][j] = 1;
                }
            }
        }

        /* Fill the second diagonal */
        for(int i = 0, j = N-1; i < N && j >= 0; i++, j--){
            array[i][j] = 0;
        }

        /* Show the array */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }else{
                    printf("%i, ", array[i][j]);
                }
            }
        }
        break;
    case 98:

        break;
    case 99:
        /* Fill the matrix */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                array[i][j] = i+j;

                /* Show the array */
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }else{
                    printf("%i, ", array[i][j]);
                }
            }
        }
        break;
    case 100:
        /* Fill the matrix */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j){
                    array[i][j] = i+1;
                }
                else{
                    array[i][j] = 0;
                }
                /* Show the array */
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }else{
                    printf("%i, ", array[i][j]);
                }
            }
        }
        break;
    case 101:
         /* Fill the matrix */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if((i+1)%2 == 0){
                    array[i][j] = j+1;
                }
                else{
                    array[i][j] = N-j;
                }
                /* Show the array */
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }else{
                    printf("%i, ", array[i][j]);
                }
            }
        }
        break;
    default: /* 102 */
    /* Fill the values with only 0 */
        for(int i = 0; i < N; i++){
            saving_matrix[i] = 0;
        }

        srand(time(NULL));
        /* Save the elements */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                /* Generatiiing a random values to each index bettween 1 and 100 */
                array[i][j] = (rand()%99)+1;

                saving_matrix[i] += array[i][j];
                /* Show the array */
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }else{
                    printf("%i, ", array[i][j]);
                }
            }
        }

        /* Show the saved values */
        printf("The addition values are: ");
        for(int i = 0; i < N; i++){
            if(i == N-1){
                printf("%i.\n", saving_matrix[i]);
            }else{
                printf("%i, ", saving_matrix[i]);
            }
        }
        break;
    }
}