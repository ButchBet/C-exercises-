#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void){
    struct time{
        int s;
        int min;
        int h;
    }time_ins;

    /* Generate a clock */
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 60; j++){            
            for(int k = 0; k < 60; k++){
            printf("The time is: %d:%d:%d.",i,j,k);
            system("cls");
            for(int m = 0; m < 400; m++){
            }
            }
        }
    }
}