#include <stdio.h>
#include <math.h>

int main(void){
  float square=0, cube=0, root_square=0;

  printf("Number \t Square   Cube \t Root square \n");

  for(int i=1; i<10; i++){
    square = pow(i, 2);
    cube= pow(i, 3);
    root_square = sqrt(i);

    printf("%i \t   %.0f \t   %.0f \t   %.2f \n",i, square, cube, root_square);
  }
}
