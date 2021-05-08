#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
    char entered[7]; /* could be more efficient using pointers */
    char option = 'd';

    /* Require array data */
    printf("Enter the array: ");
    gets(entered);

    /* Require option a or b or c */
    while(option != 'a' && option != 'b' && option != 'c'){
        printf("\na. Delete the last white space\nb. Delete all white spaces\nc. Delete n characters from p position\n--> ");
        scanf("%c", &option);
    }

    /* Identify the option and show the corresponding return */
    if(option == 'a'){
        for(int i = 6; i >= 0; i--){
            if(entered[i] == (char)32){
                for(int j = i; j < 7; j++){
                    entered[j] = entered[j+1];
                }
                break;
            }else{continue;}
        }
        puts(entered);
    }else if(option == 'b'){
        for(int i = 6; i >= 0; i--){
            int cont = 7;
            if(entered[i] == (char)32){
                for(int j = i; cont ; j++){
                    entered[j] = entered[j+1];
                }
                cont--;
            }else{continue;}
        }
        puts(entered);
    }else if(option == 'c'){
        /* Require the p position */
        int p = 0;
        printf("Enter the p position: "); 
        scanf("%d", &p);

        entered[p] = (char)0;
        int cont = 7;
        for(int i = p+1; i >= cont+1; i++){
            entered[i] = ' ';
        }
        puts(entered);
    }
}