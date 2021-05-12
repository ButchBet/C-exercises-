#include <stdio.h>
#include <stdlib.h>

/* 0 */
#define SIZEMAX 10

void  main(){
    /* 1 */
    FILE *fp;
    int count = 0, array1[SIZEMAX], array2[SIZEMAX];

    /* 1.1 */
    for(count; count < SIZEMAX; count++){
        array1[count] = 2*count;
    }

    /* 1.2 */
    if((fp = fopen("direct.txt", "wb")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* 1.3 */
    if(fwrite(array1, sizeof(int), SIZEMAX, fp) != SIZEMAX){
        fprintf(stderr, "Error writing to file.");
        exit(1);
    }

    /* 1.4 */
    fclose(fp);

    /* 2 */
    if((fp = fopen("direct.txt", "rb")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* 2.1 */
    if(fread(array2, sizeof(int), SIZEMAX, fp) != SIZEMAX){
        fprintf(stderr, "Error reading to file.");
        exit(1);
    }

    /* 2.2 */
    fclose(fp);

    /* 3 */
    for(count = 0; count < SIZEMAX; count++){
        printf("%d\t%d\n", array1[count], array2[count]);
    }
}