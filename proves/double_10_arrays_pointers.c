#include <stdio.h>
#include <stdlib.h>

/* 1 */
void sorting(double *array[], int n);
void show_array(double *array[], int n);

int main(){
    /* 2 */
    double array[2];
    double *index[3];
    /* 2.1 */
    for(int i = 0; i < 3; i++){
        printf("--> ");
        index[i] = (double *)malloc(sizeof(double));
        scanf("%lf", &array);
        index[i] = (double *)&array;
    }

    printf("index[%i] = {", 3);
    for(int i = 0; i < 3; i++){
        if(i == 2){
        printf("%lf}.\n", index[i]);
        }else{
        printf("%lf, ", index[i]);
        }
    }

    /* 2.2 */
    sorting(index, 3);
    //index -= 10;
    printf("\n\n");

    /* 2.3 */
    show_array(index, 3);

    return 0;
}



void sorting(double *array[], int n){
    /* 3 */
    double *x;

    /* 3.1 */
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n-1; j++){
            if(array[i] > array[j]){
                x = array[j];
                array[j] = array[i];
               array[i] = x;
            }
        }
    }
}

void show_array(double *array[], int n){
    /* 4 */
    printf("array[%i] = {", n);
    for(int i = 0; i < n; i++){
        if(i == n -1){
        printf("%lf}.\n", array[i]);
        }else{
        printf("%lf, ", array[i]);
        }
    }
}
