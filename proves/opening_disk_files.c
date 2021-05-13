#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define clear system("cls")

/* 0 */
void output(int n, char name_file[], char mode[]);

void main(){
    clear;
    /* 1 */
    FILE *file;

    /* 1.1 */
    char name_file[40], mode[4];

    /* 1.2 */
    fflush(stdin);
    printf("Enter the file name that wanna open --> ");
    gets(name_file);
    clear;
    printf("Enter the mode --> ");
    gets(mode);
    clear;

    /* 1.3 */
    if((file = fopen(name_file, mode)) == NULL){
        output(1, name_file, mode);
    }else{
        output(2, name_file, mode);
    }
}

void output(int n, char name_file[], char mode[]){
    /* 2 */
    if(n == 1){
        printf("\nUnsucessfull %s with mode %s opening.", name_file, mode);
    }else{
        printf("\nSucessfull %s with mode %s opening.", name_file, mode);
    }

    /* 2.1 */
    int option;

    /* 2.2 */
    OPTION:;
    printf("\nWould you like to continue or stop this program?\n1. Continue\n2. Stop\n--> ");
    scanf("%i", &option);
    clear;

    /* 2.3 */
    while(option != 1 && option != 2){
        goto OPTION;
    }

    /* 2.4 */
    if(option == 1){
        main();
        return;
    }
}
/* 1 : creating a *file structure
   1.1 : creation of the array to save the file name and the mode of opening of it (r, w, a, r+, w+, a+)
   1.2 : fflush to clear the buffer and reading of the data
   1.3 : evaluation of a correct opening (if not then call output with 1, it indicates that hasn't been correctlly opened, other wise then send 2 or other number)
   2 : conditional to evaluate the sucessfull or unsucessfull opening
   2.1 : creation of the option variable
   2.2 : a goto reference called OPTION and the ask for a posible continue working or stoping
   2.3 : loop to evaluate the correct choose
   2.4 : evaluation of the option to make the correct call
*/