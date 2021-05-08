#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
  int j=0, i=0;
  for(; i<20; i++){
    printf("\033[%dm",  30 + (rand() & 0x07));
    printf("*** ");
    //printf("\e[1;1H\e[2J");
  }printf("\n");
}
