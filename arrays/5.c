#include <stdio.h>

void main(void){
    char characters[6] = {"ABCDE"};
    int times[6][2] = {{0}, {0}, {0}, {0}, {0}};
    char input[20] ={"cbcabcdeeabbdcaccbda"};

    /* count the quantity of a, b, c and d characters */
    for(int i = 0; i < 20; i++){
        if(input[i] == 'a'){
            times[0][0]++;
        }else if(input[i] == 'b'){
            times[1][0]++;
        }else if(input[i] == 'c'){
            times[2][0]++;
        }else if(input[i] == 'd'){
            times[3][0]++;
        }else if(input[i] == 'e'){
            times[4][0]++;
        }else{}
    }

    /* show it */
    for(int i = 0; i < 5; i++){
        printf("\n");
        printf("%c is %d: ", characters[i], times[i][0]);
        for(int j = 0; j < times[i][0]; j++){
            printf("*");
        }
    }
}