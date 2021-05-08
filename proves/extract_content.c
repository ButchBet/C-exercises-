#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i=1, j=0;
  char note[100];
  FILE* file;
  file = fopen("myText.txt", "r");

  while(!feof(file)){
    fgets(note, 100, file);
    fputs(note, stdout);
  }
  fclose(file);
  return 0;
}
