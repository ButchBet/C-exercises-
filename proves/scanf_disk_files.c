#include <stdio.h>
#include <stdlib.h>

void main(){
    /* 1 */
    FILE *file;
    FILE *character;
    float f1, f2, f3, f4;
    char c1[12];
    int c2;

    /* 1.1 */
    if((file = fopen("texto.txt", "r")) == NULL || (character = fopen("myText.txt", "r")) == NULL){
        fprintf(stderr, "Error opening the file.");
        exit(1);
    }

    /* 1.2 */
    fscanf(file, "%f %f %f %f", &f1, &f2, &f3, &f4);
    fgets(c1, 12, character);
    printf("The values are: %f, %f, %f and %f.\n", f1, f2, f3, f4);
    printf("\nThe string is %s\n", c1);
    fputs(c1, stdout);

    /* 1.3 */
    while(1){
        c2 = fgetc(character);
        if(feof(character)){
            break;
        }
        printf("%c", c2);
    }

    /* 1.4 */
    fclose(file);
    fclose(character);
}