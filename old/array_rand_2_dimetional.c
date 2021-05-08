#include <stdio.h>
#include <stdlib.h>

short tow_dimetional[5][4];

int main(){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 4; j++){
      tow_dimetional[i][j] = rand();
      printf("tow_dimetional[%d][%d] = ", i, j);
      printf("%d\n", tow_dimetional[i][j]);
    }  
  }
}
