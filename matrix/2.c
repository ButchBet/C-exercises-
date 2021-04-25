#include <stdio.h>

int main(){
    int array[8][7], one_cont = 0, zero_cont = 0, cultivated = 0, not_cultivated = 0;
    float perimeter = 0;

    /* set 3 as value to all of the matrix positions */
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 7; j++){
            array[i][j] = 3;
        }
    }

    /* Introcide the data */
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 7; j++){
            while(array[i][j] != 0  && array[i][j] != 1){
                printf("Enter if the area %i with %i is cultivated, 1 : yes, 0 : not --> ", i+1, j+1); scanf("%i", &array[i][j]);
            }
            /* Evaluate if the area is cultivated or not and calculate the final result*/
            if(array[i][j] == 1){
                cultivated += 10;
                one_cont++;
            }
            else{
                not_cultivated += 10;
                zero_cont++;
            }
        }
    }

    /* calculate the perimeter of the cultivated area */
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 7; j++){
            if(array[i][j] == 1){
                /* Check the cultivated perimeter */
                if(array[i-1][j] != 1){
                    perimeter++;
                }
                if(array[i][j-1] != 1){
                    perimeter++;
                }
                if(array[i+1][j] != 1){
                    perimeter++;
                }
                if(array[i][j+1]){
                    perimeter++;
                }
            }
        }
    }


    /* Show each result */
    printf("The cultivated area : %dm^2.\n", cultivated);
    printf("Not-cultivated area : %dm^2.\n", not_cultivated);
    printf("The perimeter of the cultivated area : %.2fmt", perimeter*3.17);
    return 0;
}