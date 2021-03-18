#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i=1, j=0;
  char note[100];
  FILE* file;
  file = fopen("myText.txt", "txt");

  while(!feof(file)){
    fgets(file, "%s", &note[0]);
    printf("Line %i contains: %s.\n ", i, note);
    i++;
  }
  fclose(file);
  return 0;
}
