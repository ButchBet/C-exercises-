#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLES  2
#define ROWS    5
#define COLS    2

void elements(int (*a)[]);
void columns(int (*a)[3]);
void total_elements(int ())


int main(){
    int elem[TABLES][ROWS][COLS];

    /* Fill the array with random elements */
    srand(time(NULL));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                elem[i][j][k] = rand()%(99)+1;
            }
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 4; k++){
                printf("%i.\n", elem[i][j][k]);
            }
        }
    }

    printf("\n\n\n");

    int (*p_elem)[3][4];
    p_elem = elem;

    
    /* Point to the first and second row of the array 
    for(int i = 0; i < 2; i++){
        columns(p_elem++);
    }*/
    
    return 0;
}

/* Function to get the array raws and opoint to the column with other pointer to the row pointer */
void columns(int (*a)[3]){
    int (*p_elem)[4] = (int *)a;

    for(int i = 0; i < 3; i++){
        elements(p_elem++);
    }
}

/* Function to show the elemtnes form each column */
void elements(int (*a)[4]){
    int **p_elem = (int **)a;
    
    for(int i = 0; i < 4; i++){
        printf("%i.\n", *p_elem++);
    }
}