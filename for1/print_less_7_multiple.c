#include <stdio.h>
#define MAX_MUL_7  100
#define MULTIPLE 7

int main(void){
  for(int i=1; i <= MAX_MUL_7; i++){
    if(i%MULTIPLE != 0){
      printf("%i. \n", i);
    }
  }
}
