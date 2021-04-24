#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
    int counter = 1, x = 1, y = 1, iterations = 0;
    int N_times_M[5][5] = {{1,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};

    while(counter < 25){ // Max iterations time
        /* Show the board */
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                if(j == 4){
                    printf("|\t%i\t|\n\n\n\n", N_times_M[i][j]);
                    for(int k = 0; k < 81; k++){
                        //if(k == 80){
                          //  printf("-\n\n");
                        //}else{
                          //  printf("-");
                        //}
                    }
                }else{
                    printf("|\t%i\t", N_times_M[i][j]);
                }
            }
        }
        fflush(stdin); // Use this built-in function to can clear the buffer and can read reading againg
        srand(time(NULL));
        int D1 = (rand()%(6-1))+1, D2 = (rand()%(6-1))+1;
        
        /* check if the space is 0 */
        if(N_times_M[D1-1][D2-1] == 0){
          /* check the posible cases to can change to the next case */
          if(abs(D1-x) == 2 && abs(D2-y) == 1 || abs(D1-x) == 1 && abs(D2-y) == 2){
            counter++;
            iterations = 0;
            N_times_M[D1-1][D2-1] = counter;
            x = D1, y = D2;
          }
        }
        
        iterations++;
        /* To indicate if it´s the last iteration and the goal has been aproached and control if
        the program has been repited more that 499 times*/
        if(iterations > 999){
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    /* Always set the main position as 1 */
                    if(i == 0 && j == 0){
                        N_times_M[i][j] = 1;
                    }else{
                        N_times_M[i][j] = 0;
                    }
                }
            }
            x = 1, y = 1, iterations = 0, counter = 1;
            system("cls");
        }
        else if(counter < 24){
            system("cls");
        }
    }
}