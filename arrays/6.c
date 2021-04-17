#include <stdio.h>

void main(void){
    char input[29] = {"Hello My Name Is Kevin With K"};
    int count = 0, save = 0;
    //puts("Enter the character");
    //gets(input);

    /* Count the number of uppercase letters */
    do{
        for(int i = 65; i <= 90; i++){/* 65 yo 90 */
            if((int)input[count] == i){
                save++;
                break;
            }else{continue;}
        }
        count++;
    }while(count < 29);

    /* Show the quantity of uppercase letters into the array */
    printf("The number of uppercase letters is: %d.\n", save);
}