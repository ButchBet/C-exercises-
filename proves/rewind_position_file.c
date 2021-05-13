#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int main(){
    FILE *fp;
    char msg[] = "abcdifghijklmnñopqrstuvwxyz";

    /* Opening the file in writing mode */
    if((fp = fopen("new.txt", "w")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* Writing inside the file */
    if(fputs(msg, fp) == EOF){
        fprintf(stderr, "Error writing the file.");
        exit(1);
    }    

    fclose(fp);

    /* Opening the file in reading mode */
    if((fp = fopen("new.txt", "r")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    printf("\nInmediately after opening, position = %ld", ftell(fp));

    /* Read five characters */
    fgets(msg, MAX, fp);
    printf("\nAfter reading in %s, position = %ld", msg, ftell(fp));

    /* Read the next five characters */
    fgets(msg, MAX, fp);
    printf("\nAfter reading in %s, position = %ld", msg, ftell(fp));

    /* Retunr to the flow begining */
    rewind(fp);
    printf("\nAfter rewinding, the position is back at %ld", ftell(fp));

    /* Read five characters */
    fgets(msg, MAX, fp);
    printf("\nAfter reading in %s, position = %ld", msg, ftell(fp));

    fclose(fp);

    return 0;
}