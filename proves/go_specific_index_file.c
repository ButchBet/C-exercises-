#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main(){
    FILE *file;
    int number[MAX], data = 0, offset = 0;

    /* Fill the array */
    for(int i = 0; i < MAX; i++){
        number[i] = 10*i;
    }

    /* Open file to write inside it */
    if((file = fopen("new.txt", "wb")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* Formated wiriting 
    int i = 0;
    while(i < MAX){
        if(i%10 == 0 && i != 0){
            fprintf(file, "%u\n", number[i]);
        }else{
            fprintf(file, "%u ", number[i]);
        }  
        i++;
    }*/

    /* Direct writing */
   if((fwrite(number, sizeof(int), MAX, file)) != MAX){
       fprintf(stderr, "\nError writing data to the file.");
       exit(1);
   }

    fclose(file);

    /* Open file to read from it */
    if((file = fopen("new.txt", "rb")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* Ask the user which element want to read */
    while(1){
        printf("\nEnter the element to read, 0-%d, -1 to quit: ", MAX-1);
        scanf("%d", &offset);

        /* Checkout posible offset values */
        if(offset < 0){
            break;
        }
        else if(offset > MAX-1){
            continue;
        }

        /* Move the position indicator to the element specified */
        if((fseek(file, (offset*sizeof(int)), SEEK_SET)) != 0){
            fprintf(stderr, "\nError using fseek function.");
            exit(1);
        }

        /* Read one only integer */
        fread(&data, sizeof(int), 1, file);
        printf("\nThe element in the position %d is %d.\n", offset, data);
    }
    fclose(file); 
    return 0;
}