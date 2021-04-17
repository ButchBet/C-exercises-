#include <stdio.h>
#include <stdlib.h>

int main(){
    char entered[100]; /* could be more efficient using pointers */
    char option = 'd';

    /* Require array data */
    printf("Enter the array: ");
    gets(entered);

    /* Require option a or b or c */
    while(option != 'a' && option != 'b' && option != 'c'){
        printf("\na. Delete the last white digit\nb. Delete all white spaces\nc. Dele n characters from p position\n--> ");
        scanf("%c", &option);
    }

    /* Identify the option and show the corresponding return */
    if(option == 'a'){
        for(int i = 99; i >= 0; i--){
            if(entered[i] == (char)32){
                for(int j = i; j < 99; j++){
                    entered[j] = entered[j+1];
                }
                break;
            }else{continue;}
        }
        puts(entered);
    }else if(option == 'b'){
        for(int i = 0; i < 100; i++){
            /* Use a new variable j as a index to a new loop */
            int j = i;
            /*  Put the actual j index element as j++ element */
            while(entered[j] == (char)32 || entered[j] != (char)0){
                entered[j] = entered[j++];
                /* Check if the j index element is NULL */
                if(entered[j] == (char)0){
                    break; /* Break case the array has finished */
                }else{j++;}
            }

            /* Check if the actual i element continue as a white space */
            if(entered[i] == (char)32){
                i--; /* To can continue using the actual index value in the next iteration */
            }else{}
        }
        puts(entered);
    }else if(option == 'c'){
        printf("c");
    }


    return 0;
}