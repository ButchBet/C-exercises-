#include <stdio.h>

/* 1 */
#define ROW 12
#define COLUMN 12


int main(){
    /* 2 */
    char array[ROW][COLUMN];

    /* 3 */
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN; j++){
            if((j+1)%2 == 0){
                array[i][j] = 'X';
            }else{
                array[i][j] = '0';
            }
        }
        
    }

    /* 3.1 */
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN; j++){
            if(j == COLUMN -1){
                printf("%c\n\n\n", array[i][j]);
            }else{
                printf("%c\t", array[i][j]);
            }
        }
        
    }

    /* 3.2 */
    for(int i = 0; i < 5; i++){
        printf("\n");
    }

    /* 4 */
    char (* p_array)[COLUMN] = array;
    
    /* 4.1 */
    for(int i = 0; i < ROW; i++){
        /* 4.2 */
        char *p_array_index = *p_array++;
        for(int j = 0; j < COLUMN; j++){
            if(j == COLUMN -1){
                printf("%c\n\n\n", *p_array_index++);
            }else{
                printf("%c\t", *p_array_index++);

            }
        }
    }
}

/* 1 : Header constant vaiables to can indicate the post multidimentional array the size of the rows and columns 
   2 : Declaration of the array with the 1 indications
   3 : Nested loop to fill the array with a normal indication
   3.1 : Nested loop to show the elements with 3 line jumps after each row end
   4 : Declaration and initialization of the array pointer to can acces to the column elements
   4.1: Nested loop to show the content of the array 
   4.2 : Declaration and initialization of one pointer to the first element of the 4 first and sucesive elements 
*/