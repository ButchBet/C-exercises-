#include <stdlib.h>
#include <stdio.h>

void main(void){
    const int N = 4;
    int array[N][N];
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

    /* Check the choose */
    switch ((int)option){
    case 97:
        /* Fill the array */
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j || j = N-i){
                    array[i][j] = 0;
                }
                else{
                    array[i][j] = 1;
                }

                /* Show the array */
                if(j == N-1){
                    printf("%i\n", array[i][j]);
                }
                else{
                    printf("%i, ", array[i][j]);
                }
            }
        }
        break;
    case 98:

        break;
    case 99:

        break;
    case 100:

        break;
    case 101:

        break;
    default: /* 102 */
        
        break;
    }
}