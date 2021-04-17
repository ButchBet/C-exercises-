#include <stdio.h>

void main(void){
    char input[46];
    puts("Enter the string");
    gets(input);
    int count = 0;
    
    /* count the n times that has a white space */
    for(int i = 0; i < 46; i++){
        if(input[i] == ' '){
            count++;
        }
    }

    printf("The times that appears is: %d", count);
}