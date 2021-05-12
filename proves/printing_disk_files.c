#include <stdio.h>
#include <stdlib.h>

/* 0 */
void sorting(float array[], int n);

void main(){
    /* 1 */
    FILE *file;

    /* 1.1 */
    char file_name[40];
    float data[5];
    int count = 0;

    /* 1.2 */
    puts("Enter 5 float numbers please");
    for(count = 0; count < 5; count++){
        scanf("%f", &data[count]);
    }

    /* 1.3 */
    sorting(data, 5);

    /* 1.4 */ 
    fflush(stdin);
    puts("Enter a name for the file.");
    gets(file_name);

    /* 1.5 */
    if((file = fopen(file_name, "w")) == NULL){
        fprintf(stderr, "Errro opening file %s.", file_name);
        exit(1);
    }

    /* 1.6 */
    fprintf(file,"The array has been sorted successfully.\n");
    fprintf(stdout,"The array has been sorted successfully.\n");
    for(count = 0; count < 5; count++){
        fprintf(file, "data[%d] = %f\n", count, data[count]);
        fprintf(stdout, "data[%d] = %f\n", count, data[count]);
    }
    fclose(file);
}


void sorting(float array[], int n){
    /* 2 */
    float x;

    /* 2.1 */
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n-1; j++){
            if(array[i] > array[j]){
                x = array[i];
                array[i] = array[j];
                array[j] = x;
            }
        }
    }
}
