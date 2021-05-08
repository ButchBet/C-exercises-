#include <stdio.h>

int main(void){
    FILE *file;
    file = fopen("h_w.txt", "r");
    char h_w[13];
    fgets(h_w, 12, file);

    /* Show the content */
    puts(h_w);
    printf("This is the third method --> %s", h_w);
    fclose(file);
    return 0;
}