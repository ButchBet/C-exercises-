#include <stdio.h>
#include <stdlib.h>

/* 0 */ 
#define BUFFSIZE 100
#define clear() system("cls");
int request(void);

int main(){
    /* 1 */
    FILE *fp;
    char buffer[BUFFSIZE];
    char file_name[20];
    int option = 0;

    /* 1.1 */
    READING:;
    clear();
    fflush(stdin);
    printf("Enter the file name: "); scanf("%s", &file_name); 


    /* 1.2 */
    if((fp = fopen(file_name, "r+")) == NULL){
        fprintf(stderr, "Error opening the file.\n");

        /* 1.2.1 */
        option = request();

        if(option == 1){
            goto READING;
        }else{
            clear();
            exit(1);
        }
    }

    /* 1.3 */
    while(!feof(fp)){
        fgets(buffer, BUFFSIZE, fp);
        printf("%s", buffer);
        scanf("%c", &buffer);
    }

    /* 1.4 */
    fclose(fp);
    return 0;
}

int request(void){
    /* 2 */
    int option = 0;

    /* 2.1 */
    do
    {
       printf("1. continue.\n2.Stop.\n");
       scanf("%i", &option);
    } while (option != 1 && option != 2);
}

/* TITLE: Program to read and write a file form the cmd 
   0 : Definition of the constant BUFFSIZE to set the size for the buffer array, also clear() that refer
   the built in function system("cls") to clear windows and finally a prototype function to require the continue
   or stop of the program.

   1 : Not necessary the explaination.
   1.1 : A goto statement to got when the user whants to continue, ffulsh with stdin flow to clear the buffer and
   the requiring of the file name to read or write.
   1.2 : Condition to know if we get any error opening the file.
    1.2.1 : Variable to that call request to know if the user wants to continue or stop.
   1.3 : Loop that identify if tis the end of the file, in that case stop iterating, other wise continue reading a and saving lines
   of a BUFFSIZE size inside buffer, then show buffer.
   1.4 : Close of the structure.

   2 : Not necessary to explain.
   2.1 : Do while loop to get the option of the user. */